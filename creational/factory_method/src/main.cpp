#include "abstract_creator.h"
#include "abstract_product.h"
#include "creator_a.h"
#include "creator_b.h"

#include <vector>

int main(int argc, char* argv[])
{
	std::unique_ptr<abstract_creator> creator_product_a = std::make_unique<creator_a>();
	std::unique_ptr<abstract_creator> creator_product_b = std::make_unique<creator_b>();

	std::vector<abstract_product*> v;

	v.push_back(creator_product_a->factory_method());
	v.push_back(creator_product_b->factory_method());

	for (std::vector<abstract_product*>::iterator it = v.begin(); it != v.end(); it++)
	{
		(*it)->print_product_name();
	}

	for (std::vector<abstract_product*>::iterator it = v.begin(); it != v.end(); it++)
	{
		delete *it;
	}

	return 0;
}
