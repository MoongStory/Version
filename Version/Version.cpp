#include "Version.h"

#include <vector>

int MOONG::VERSION::Version::Compare(std::string param_version1, std::string param_version2, std::string delimiters/* = ".,"*/)
{
	char* token = NULL;
	char* next_token = NULL;

	token = strtok_s((char*)(param_version1.c_str()), delimiters.c_str(), &next_token);

	std::vector<int> version1;
	while (token != NULL)
	{
		// Get next token:
		if (token != NULL)
		{
			version1.push_back(atoi(token));

			token = strtok_s(NULL, delimiters.c_str(), &next_token);
		}
	}

	token = strtok_s((char*)(param_version2.c_str()), delimiters.c_str(), &next_token);

	std::vector<int> version2;
	while (token != NULL)
	{
		// Get next token:
		if (token != NULL)
		{
			version2.push_back(atoi(token));

			token = strtok_s(NULL, delimiters.c_str(), &next_token);
		}
	}

	size_t i = 0;
	while (true)
	{
		if (version1.size() > i && version2.size() > i)
		{
			if (version1[i] < version2[i])
			{
				return -1;
			}
			else if (version1[i] > version2[i])
			{
				return 1;
			}
		}
		else
		{
			if (version1.size() < version2.size())
			{
				return -1;
			}
			else if (version1.size() == version2.size())
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}

		i++;
	}

	return 0;
}