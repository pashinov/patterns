#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>

class observer
{
public:
	observer() = default;
	~observer() = default;

	/**
	 * @brief Установка имени наблюдателя
	 */
	void set_name(std::string str);

	/**
	 * @brief Вывод имени наблюдателя
	 */
	void print_name_observer();

	/**
	 * @brief Вывод имени объекта наблюдения
	 */
	void print_name_subject(const std::string& str);

	observer(const observer& value) = delete;
	observer& operator=(const observer& copy) = delete;

private:
	// Имя наблюдателя
	std::string name_;
};

#endif //_OBSERVER_H_
