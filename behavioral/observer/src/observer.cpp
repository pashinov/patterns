#include "observer.h"
#include "subject.h"

#include <iostream>

void name_observer::update(subject * s) noexcept
{
	std::cout << "Subject's name is changed as '" << s->get_name() << "'" << std::endl;
}

void count_observer::update(subject * s) noexcept
{
	count_++;
	std::cout << count_ << " times updated" << std::endl;
}
