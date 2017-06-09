#include "observer.h"
#include "subject.h"

#include <memory>

int main(int argc, char* argv[])
{
	std::unique_ptr<subject> subj = std::make_unique<subject>();
	std::unique_ptr<observer> obsr_a = std::make_unique<observer>();
	std::unique_ptr<observer> obsr_b = std::make_unique<observer>();

	subj->event_a_->connect(std::bind(&observer::print_name_observer, std::ref(obsr_a)));
	subj->event_b_->connect(std::bind(&observer::print_name_subject, std::ref(obsr_b), std::placeholders::_1));

	obsr_a->set_name("Artyom");
	obsr_b->set_name("Roman");
	subj->set_name("Aleksei");

	return 0;
}
