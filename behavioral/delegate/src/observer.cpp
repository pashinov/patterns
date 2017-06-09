#include "observer.h"

#include <iostream>

void observer::set_name(std::string str)
{
	name_ = str;
}

void observer::print_name_observer()
{
	std::cout << name_ << std::endl;
}

void observer::print_name_subject(const std::string& str)
{
	std::cout << str << std::endl;
}
