#include "publisher.h"
#include "subscriber.h"

#include <memory>

int main(int argc, char* argv[])
{
	std::unique_ptr<publisher> publ = std::make_unique<publisher>();
	std::unique_ptr<subscriber> subs_a = std::make_unique<subscriber>();
	std::unique_ptr<subscriber> subs_b = std::make_unique<subscriber>();

	publ->event_a_->connect(std::bind(&subscriber::print_name_subscriber, std::ref(subs_a)));
	publ->event_b_->connect(std::bind(&subscriber::print_name_publisher, std::ref(subs_b), std::placeholders::_1));

	subs_a->set_name("Artyom");
	subs_b->set_name("Roman");
	publ->set_name("Aleksei");

	return 0;
}
