#include "Version.h"

#include <iostream>

int main(void)
{
	std::string version1 = "1.2.5";
	std::string version2 = "1,2,4,1";

	if (MOONG::Version::Compare(version1, version2) < 0)
	{
		std::cout << "version1�� version2���� ���� ���." << std::endl;
	}
	else if (MOONG::Version::Compare(version1, version2) == 0)
	{
		std::cout << "version1�� version2�� ���� ���." << std::endl;
	}
	else if (MOONG::Version::Compare(version1, version2) > 0)
	{
		std::cout << "version1�� version2���� ū ���." << std::endl;
	}

	std::cout << std::endl;

	std::cout << "file version[" << MOONG::Version::GetFileVersion().c_str() << "]" << std::endl;

	return 0;
}