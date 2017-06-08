#include "creator_a.h"
#include "product_a.h"

abstract_product * creator_a::factory_method()
{
	return new product_a();
}
