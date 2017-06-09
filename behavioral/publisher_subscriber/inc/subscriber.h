#ifndef _SUBSCRIBER_H_
#define _SUBSCRIBER_H_

#include <string>

class subscriber
{
public:
	subscriber() = default;
	~subscriber() = default;

	/**
	 * @brief Установка имени подписчика
	 */
	void set_name(std::string str);

	/**
	 * @brief Вывод имени подписчика
	 */
	void print_name_subscriber();

	/**
	 * @brief Вывод имени издателя
	 */
	void print_name_publisher(const std::string& str);

	subscriber(const subscriber& value) = delete;
	subscriber& operator=(const subscriber& copy) = delete;

private:
	// Имя подписчика
	std::string name_;
};

#endif //_SUBSCRIBER_H_
