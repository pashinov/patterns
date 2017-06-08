#ifndef _ABSTRACT_CREATOR_H_
#define _ABSTRACT_CREATOR_H_

#include <memory>

class abstract_product;

class abstract_creator
{
public:
	abstract_creator() = default;
	virtual ~abstract_creator() = default;

	virtual abstract_product * factory_method() = 0;

	abstract_creator(const abstract_creator& value) = delete;
	abstract_creator& operator=(const abstract_creator& copy) = delete;
};

#endif //ABSTRACT_CREATOR_H_
