#include "Version.h"

#include "../../FileInfo/FileInfo/FileInfo.h"

#include "../../ConvertDataType/ConvertDataType/ConvertDataType.h"

#include "../../StringTool/StringTool/StringTool.h"

#include <vector>

int MOONG::Version::Compare(std::string param_version1, std::string param_version2, std::string delimiters/* = ".,"*/)
{
	std::vector<std::string> version_temp;

	version_temp = MOONG::StringTool::split(param_version1, delimiters);

	size_t i = 0;

	std::vector<int> version1;
	for (i = 0; i < version_temp.size(); i++)
	{
		version1.push_back(MOONG::ConvertDataType::string_to_integer(version_temp.at(i)));
	}

	version_temp = MOONG::StringTool::split(param_version2, delimiters);

	std::vector<int> version2;
	for (i = 0; i < version_temp.size(); i++)
	{
		version2.push_back(MOONG::ConvertDataType::string_to_integer(version_temp.at(i)));
	}

	i = 0;
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

const std::string MOONG::Version::GetFileVersion(const std::string file_path/* = ""*/)
{
	return MOONG::FileInfo::GetFileVersion(file_path);
}
