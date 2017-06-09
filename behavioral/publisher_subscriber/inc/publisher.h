#ifndef _PUBLISHER_H_
#define _PUBLISHER_H_

#include "event_impl.h"
#include "event_void.h"

#include <memory>
#include <string>

class publisher
{
public:
	// Событие a
	std::unique_ptr<event<void>> event_a_;

	// Событие b
	std::unique_ptr<event<std::string>> event_b_;

public:
	publisher();
	~publisher();

	/**
	 * @brief Установка имени издателя
	 */
	void set_name(std::string str);

	publisher(const publisher& value) = delete;
	publisher& operator=(const publisher& copy) = delete;

private:
	// Имя издателя
	std::string name_;
};

#endif //_PUBLISHER_H_
