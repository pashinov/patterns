/**
 *  Файл: destroyer_singleton.h
 *
 *  Описание: Файл для объявления класса destroyer_singleton, реализующий идиому RAII для класса singletone
 */

#ifndef _DESTROYER_SINGLETON_H_
#define _DESTROYER_SINGLETON_H_

#include <cassert>

template <typename T>
class destroyer_singleton
{
public:
	destroyer_singleton() = default;
	~destroyer_singleton();

	void initialize(T * ptr);

private:
	T * pdestroy_;
};

template <typename T>
destroyer_singleton<T>::~destroyer_singleton()
{
	pdestroy_->delete_instance();
}

template <typename T>
void destroyer_singleton<T>::initialize(T * ptr)
{
	assert(ptr != nullptr);

	pdestroy_ = ptr;
}

#endif //_DESTROYER_SINGLETON_H_
