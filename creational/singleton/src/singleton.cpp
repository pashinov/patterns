#include "destroyer_singleton.h"
#include "singleton.h"

#include <iostream>

singleton * singleton::instance_ = nullptr;

destroyer_singleton<singleton> singleton::destroyer_;

singleton * singleton::get_instance() noexcept
{
	if(instance_ == nullptr)
	{
		instance_ = new singleton();
		destroyer_.initialize(instance_);
	}
	return instance_;
}

void singleton::delete_instance() noexcept
{
	delete instance_;
}

void singleton::print(const std::string& str) noexcept
{
	std::cout << str << std::endl;
}
