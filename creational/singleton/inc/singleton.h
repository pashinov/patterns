/**
 * Файл: singleton.h
 *
 * Описание:
 */

#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <string>

#include "destroyer_singleton.h"

class singleton
{
public:
	/**
	 * @brief инстансирование единосвенного экземпляра класса singleton
	 *
	 * @return указатель на единственный экземпляр класса singleton
	 */
	static singleton * get_instance() noexcept;

	/**
	 * @brief удаление единосвенного экземпляра класса singleton
	 */
	void delete_instance() noexcept;

	/**
	 * @brief открытый метод класс
	 *
	 * @param
	 */
	void print(const std::string& str) noexcept;

	singleton(const singleton& copy) = delete;
	singleton& operator=(const singleton& copy) = delete;

private:
	singleton() = default;
	~singleton() = default;

private:
	static singleton * instance_;
	static destroyer_singleton<singleton> destroyer_;
};

#endif //_SINGLETON_H_
