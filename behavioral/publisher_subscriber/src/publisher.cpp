#include "publisher.h"

publisher::publisher() : event_a_(std::make_unique<event<void>>()), event_b_(std::make_unique<event<std::string>>())
{

}

publisher::~publisher() = default;

void publisher::set_name(std::string str)
{
	name_ = str;
	event_a_->emit();
	event_b_->emit(name_);
}
