#include "Version.h"

#include <vector>

int MOONG::VERSION::Version::Compare(std::string param_version1, std::string param_version2, std::string delimiters/* = ".,"*/)
{
	std::vector<int> version1;
	std::vector<int> version2;

	char* token = NULL;
#if _MSC_VER > 1200
	char* next_token = NULL;

	token = strtok_s((char*)(param_version1.c_str()), delimiters.c_str(), &next_token);

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

	while (token != NULL)
	{
		// Get next token:
		if (token != NULL)
		{
			version2.push_back(atoi(token));

			token = strtok_s(NULL, delimiters.c_str(), &next_token);
		}
	}
#else
	token = strtok((char*)(param_version1.c_str()), delimiters.c_str());

	while (token != NULL)
	{
		version1.push_back(atoi(token));

		// Get next token:
		token = strtok(NULL, delimiters.c_str()); // C4996
	}

	token = strtok((char*)(param_version2.c_str()), delimiters.c_str());

	while (token != NULL)
	{
		version2.push_back(atoi(token));

		// Get next token:
		token = strtok(NULL, delimiters.c_str()); // C4996
	}
#endif

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