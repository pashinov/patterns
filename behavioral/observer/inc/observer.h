#ifndef _OBSERVER_H_
#define _OBSERVER_H_

class subject;

class observer
{
public:
	observer() = default;
	virtual ~observer() = default;

	/**
	 * @brief извещение наблюдателей
	 */
	virtual void update(subject * s) = 0;

	observer(const observer& value) = delete;
	observer& operator=(const observer& copy) = delete;
};

class name_observer : public observer
{
public:
	name_observer() = default;
	~name_observer() = default;

	/**
	 * @brief извещение наблюдателей
	 */
	void update(subject * s) noexcept override;

	name_observer(const name_observer& value) = delete;
	name_observer& operator=(const name_observer& copy) = delete;
};

class count_observer : public observer
{
public:
	count_observer() = default;
	~count_observer() = default;

	/**
	 * @brief извещение наблюдателей
	 */
	void update(subject * s) noexcept override;

	count_observer(const count_observer& value) = delete;
	count_observer& operator=(const count_observer& copy) = delete;

private:
	// Счетчик обновлений
	int count_;
};


#endif //_OBSERVER_H_
