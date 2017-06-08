#ifndef _CREATOR_B_H_
#define _CREATOR_B_H_

#include "abstract_creator.h"

class abstract_product;

class creator_b : public abstract_creator
{
public:
	creator_b() = default;
	~creator_b() = default;

	abstract_product * factory_method() override;
};

#endif //_CREATOR_A_H_
