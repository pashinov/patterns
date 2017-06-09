#ifndef _EVENT_H_
#define _EVENT_H_

#include "event_traits.h"

#include <functional>
#include <map>
#include <memory>
#include <cstdint>

template <typename... Args>
class event
{
public:
	using function = std::function<void(Args...)>;

	event();

	~event();

	event_id connect(function const&) const noexcept;

	void disconnect(event_id) const noexcept;

	void emit(Args... args) noexcept;

	event(const event&);

	event& operator=(const event&);

	event(event&&);

	event& operator=(event&&);
private:
	using event_table = std::map<event_id, function>;

	mutable event_id current_id_ { 0 };
	mutable event_table table_;
};

#endif //_EVENT_H
