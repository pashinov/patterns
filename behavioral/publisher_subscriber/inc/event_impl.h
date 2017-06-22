#ifndef _EVENT_IMPL_H_
#define _EVENT_IMPL_H_

#include "event.h"

#include <cassert>

template <class... Args>
event<Args...>::event() : current_id_(0) {}

template <class... Args>
event<Args...>::~event() = default;

template <class... Args>
event<Args...>::event(const event& other) = default;

template <class... Args>
event<Args...>& event<Args...>::operator=(const event<Args...>& other) = default;

template <class... Args>
event<Args...>& event<Args...>::operator=(event<Args...>&& other) = default;

template <class... Args>
event_id event<Args...>::connect(function const& delegate) const noexcept
{
	table_.insert(std::make_pair(++current_id_, delegate));
	return current_id_;
}

template <class... Args>
void event<Args...>::disconnect(event_id event) const noexcept
{
	table_.erase(event);
}

template <class... Args>
void event<Args...>::emit(Args... args) noexcept
{
	for(const auto& it : table_)
	{
		it.second(args...);
	}
}

#endif //_EVENT_IMPL_H_
