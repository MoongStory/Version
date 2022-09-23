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
		// 반환 값
		//		< 0
		//			version1이 version2보다 작은 경우.
		//		 0
		//			version1이 version2와 같은 경우.
		//		> 0
		//			version1이 version2보다 큰 경우.
		static int Compare(std::string param_version1, std::string param_version2, std::string delimiters = ".,");
		static const std::string GetFileVersion(const std::string file_path = "");
	protected:
	private:
	};
}

#endif _VERSION_H_