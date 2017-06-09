#ifndef _PACKAGER_H_
#define _PACKAGER_H_

class package;

class packager
{
public:
	packager(package * p);
	~packager();

	/**
	 * @brief Упаковка
	 */
	void wrap() const;

	packager(const packager& value) = delete;
	packager& operator=(const packager& copy) = delete;

private:
	package * p_;
};

#endif //_PACKAGER_H_
