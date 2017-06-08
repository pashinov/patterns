#ifndef _PRODUCT_A_H_
#define _PRODUCT_A_H_

#include "abstract_product.h"

class product_a : public abstract_product
{
public:
	product_a() = default;
	~product_a();

	void print_product_name() override;
};

#endif //_PRODUCT_A_H_
