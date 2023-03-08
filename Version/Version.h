/*******************************************************************************
MIT License

Copyright (c) 2023 Moong

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*******************************************************************************/

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
		//		1
		//			version1�� version2���� ū ���.
		//		0
		//			version1�� version2�� ���� ���.
		//		-1
		//			version2�� version1���� ū ���.
		static int compare(std::string param_version1, std::string param_version2, std::string delimiters = ".,");
		static const std::string get_file_version(const std::string file_path = "");
	protected:
	private:
	};
}

#endif _VERSION_H_