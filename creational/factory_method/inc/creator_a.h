#ifndef _CREATOR_A_H_
#define _CREATOR_A_H_

#include "abstract_creator.h"

class abstract_product;

class creator_a : public abstract_creator
{
public:
	creator_a() = default;
	~creator_a() = default;

	abstract_product * factory_method() override;
};

#endif //_CREATOR_A_H_
