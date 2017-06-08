#ifndef _PRODUCT_B_H_
#define _PRODUCT_B_H_

#include "abstract_product.h"

class product_b : public abstract_product
{
public:
	product_b() = default;
	~product_b();

	void print_product_name() override;
};

#endif //_PRODUCT_B_H_
