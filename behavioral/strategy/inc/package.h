#ifndef _PACKAGE_H_
#define _PACKAGE_H_

class package
{
public:
	package() = default;
	virtual ~package() = default;

	/**
	 * @brief Упаковка
	 */
	virtual void pack() const = 0;

	package(const package& value) = delete;
	package& operator=(const package& copy) = delete;
};

class plastic_package : public package
{
public:
	plastic_package() = default;
	~plastic_package() = default;

	/**
	 * @brief Упаковка
	 */
	void pack() const override;

	plastic_package(const plastic_package& value) = delete;
	plastic_package& operator=(const plastic_package& copy) = delete;
};

class iron_package : public package
{
public:
	iron_package() = default;
	~iron_package() = default;

	/**
	 * @brief Упаковка
	 */
	void pack() const override;

	iron_package(const iron_package& value) = delete;
	iron_package& operator=(const iron_package& copy) = delete;
};


#endif //_PACKAGE_H_
