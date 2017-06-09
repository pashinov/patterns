#include "package.h"
#include "packager.h"

#include <memory>

int main(int argc, char* argv[])
{
	std::unique_ptr<packager> p = std::make_unique<packager>(new plastic_package);

	p->wrap();

	return 0;
}
