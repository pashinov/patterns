#include "observer.h"
#include "subject.h"

#include <algorithm>

void subject::add_observer(observer * obsrv)
{
	observers_.push_back(obsrv);
}

void subject::remove_observer(observer * obsrv)
{
	observers_.erase(std::remove(observers_.begin(), observers_.end(), obsrv), observers_.end());
}

void subject::set_name(std::string s)
{
	name_ = s;
	notify();
}

void subject::notify()
{
	for (auto it = observers_.begin(); it != observers_.end(); it++)
	{
		(*it)->update(this);
	}
}

std::string subject::get_name() const
{
	return name_;
}
