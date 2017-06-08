#include "creator_b.h"
#include "product_b.h"

abstract_product * creator_b::factory_method()
{
	return new product_b();
}
