#ifndef VCZH_TINYMOESTL
#define VCZH_TINYMOESTL

#include <vector>
#include <set>
#include <map>
#include <memory>
#include <string>
#include <sstream>
#include <algorithm>
#include <tuple>
#include <functional>
#include <fstream>
#include <iostream>

using namespace std;

namespace tinymoe
{
	struct AssertFailedException{};
}

#define ASSERT(CONDITION) do{if(!(CONDITION)) throw AssertFailedException();}while(0)

#ifdef UNICODE_TINYMOE
	#define _UNICODE_TINYMOE
#endif

namespace tinymoe
{
#ifdef _UNICODE_TINYMOE
	typedef wchar_t char_t;
	typedef std::wstring string_t;
	typedef std::wifstream ifstream_t;
	typedef std::wofstream ofstream_t;
	typedef std::wistream istream_t;
	typedef std::wostream ostream_t;
	typedef std::wstringstream stringstream_t;
	
	#define T(X) L ## X
	#define strtol_t wcstol
	#define strtod_t wcstod
#else
	typedef char char_t;
	typedef std::wstring string_t;
	typedef std::wifstream ifstream_t;
	typedef std::wofstream ofstream_t;
	typedef std::wistream istream_t;
	typedef std::wostream ostream_t;
	typedef std::wstringstream stringstream_t;

	#define T(X) X
	#define strtol_t wcstol
	#define strtod_t wcstod
#endif
}

#endif