#include "Version.h"

#include <iostream>

int main(void)
{
	std::string version1 = "1.2.5";
	std::string version2 = "1,2,4,1";

	if (MOONG::VERSION::Version::Compare(version1, version2) < 0)
	{
		std::cout << "version1�� version2���� ���� ���." << std::endl;
	}
	else if (MOONG::VERSION::Version::Compare(version1, version2) == 0)
	{
		std::cout << "version1�� version2�� ���� ���." << std::endl;
	}
	else if (MOONG::VERSION::Version::Compare(version1, version2) > 0)
	{
		std::cout << "version1�� version2���� ū ���." << std::endl;
	}

	return 0;
}