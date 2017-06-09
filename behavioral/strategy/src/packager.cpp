#include "package.h"
#include "packager.h"

packager::packager(package * p) : p_(p)
{

}

packager::~packager()
{
	delete p_;
}

void packager::wrap() const
{
	p_->pack();
}
