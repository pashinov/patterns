#include "observer.h"
#include "subject.h"

#include <memory>

int main(int argc, char* argv[])
{
	std::unique_ptr<subject> subj = std::make_unique<subject>();
	observer * obsrv_name = new name_observer();
	observer * obsrv_count = new count_observer();

	subj->add_observer(obsrv_name);
	subj->add_observer(obsrv_count);

	subj->set_name("Aleksei");
	subj->set_name("Artyom");
	subj->set_name("Roman");

	subj->remove_observer(obsrv_name);
	subj->remove_observer(obsrv_count);

	delete obsrv_name;
	delete obsrv_count;

	return 0;
}
