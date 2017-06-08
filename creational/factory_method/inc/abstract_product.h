#ifndef _ABSTRACT_PRODUCT_H_
#define _ABSTRACT_PRODUCT_H_

class abstract_product
{
public:
	abstract_product() = default;
	virtual ~abstract_product() = default;

	virtual void print_product_name() = 0;

	abstract_product(abstract_product& value) = delete;
	abstract_product& operator=(abstract_product& copy) = delete;
};

#endif //_ABSTRACT_PRODUCT_H_
