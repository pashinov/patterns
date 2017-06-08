#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <string>
#include <vector>

class observer;

class subject
{
public:
	subject() = default;
	~subject() = default;

	/**
	 * @brief Добавление наблюдателей
	 */
	void add_observer(observer * obsrv);

	/**
	 * @brief Удаление наблюдателей
	 */
	void remove_observer(observer * obsrv);

	/**
	 * @brief Уведомление наблюдателей
	 */
	void notify();

	/**
	 * @brief Установка имени субъекта
	 */
	void set_name(std::string);

	/**
	 * @brief Получение имени субъекта
	 */
	std::string get_name() const;

	subject(const subject& value) = delete;
	subject& operator=(const subject& copy) = delete;

private:
	// Имя субъекта
	std::string name_;

	// Наблюдатели
	std::vector<observer*> observers_;
};

#endif //_SUBJECT_H_
