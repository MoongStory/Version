// https://github.com/MoongStory/Version

#if _MSC_VER > 1000
	#pragma once
#endif

#ifndef _VERSION_H_
#define _VERSION_H_

#include <iostream>

namespace MOONG
{
	namespace VERSION
	{
	}

	class Version
	{
	public:
	protected:
	private:

	public:
		// ��ȯ ��
		//		< 0
		//			version1�� version2���� ���� ���.
		//		 0
		//			version1�� version2�� ���� ���.
		//		> 0
		//			version1�� version2���� ū ���.
		static int Compare(std::string param_version1, std::string param_version2, std::string delimiters = ".,");
		static const std::string GetFileVersion(const std::string file_path = "");
	protected:
	private:
	};
}

#endif _VERSION_H_