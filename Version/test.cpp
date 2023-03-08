#include "Version.h"

#include <iostream>

int main(void)
{
	std::string version1 = "1.2.5";
	std::string version2 = "1,2,4,1";

	if (MOONG::Version::compare(version1, version2) < 0)
	{
		std::cout << "version1이 version2보다 작은 경우." << std::endl;
	}
	else if (MOONG::Version::compare(version1, version2) == 0)
	{
		std::cout << "version1이 version2와 같은 경우." << std::endl;
	}
	else if (MOONG::Version::compare(version1, version2) > 0)
	{
		std::cout << "version1이 version2보다 큰 경우." << std::endl;
	}

	std::cout << std::endl;

	std::cout << "file version[" << MOONG::Version::get_file_version().c_str() << "]" << std::endl;

	return 0;
}