#include "singleton.h"

int main(int argc, char* argv[])
{
	std::string str = "Hello, Singleton!!!";

	singleton::get_instance()->print(str);

	return 0;
}
