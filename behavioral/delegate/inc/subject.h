#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include "event_impl.h"
#include "event_void.h"

#include <memory>
#include <string>

class subject
{
public:
	// Событие a
	std::unique_ptr<event<void>> event_a_;

	// Событие b
	std::unique_ptr<event<std::string>> event_b_;

public:
	subject();
	~subject();

	/**
	 * @brief Установка имени объекта наблюдения
	 */
	void set_name(std::string str);

	subject(const subject& value) = delete;
	subject& operator=(const subject& copy) = delete;

private:
	// Имя объекта наблюдения
	std::string name_;
};

#endif //_SUBJECT_H_
