#include "subscriber.h"

#include <iostream>

void subscriber::set_name(std::string str)
{
	name_ = str;
}

void subscriber::print_name_subscriber()
{
	std::cout << name_ << std::endl;
}

void subscriber::print_name_publisher(const std::string& str)
{
	std::cout << str << std::endl;
}
