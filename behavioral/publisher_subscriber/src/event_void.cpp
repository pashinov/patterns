#include "event_void.h"

#include <map>

struct event<void>::impl
{
	using event_table = std::map<event_id, void_function>;

	event_id current_id_ { 0 };
	event_table table_ { };
};

event<void>::event() : pimpl_(std::make_unique<impl>())
{

}

event<void>::~event() = default;

event_id event<void>::connect(void_function const& delegate) const noexcept
{
	pimpl_->table_.insert(std::make_pair(++pimpl_->current_id_, delegate));
	return pimpl_->current_id_;
}

void event<void>::disconnect(event_id event) const noexcept
{
	pimpl_->table_.erase(event);
}

void event<void>::emit() noexcept
{
	for(const auto& it : pimpl_->table_)
	{
		it.second();
	}
}
