#pragma once
#include <crtdbg.h>
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <filesystem>
#include <string>
using namespace std;
using namespace std::filesystem;

class TimeHandling
{
public:
	static string convertTime(const directory_entry& item);
	static const tm convert(const filesystem::file_time_type& timestamp);
};

