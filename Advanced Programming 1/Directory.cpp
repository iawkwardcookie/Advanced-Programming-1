#include "Directory.h"
#include "TimeHandling.h"
#include <algorithm>
#include <iostream>
#include <filesystem>

Directory::Directory(const string& name, const string& path, string time) : FakeFile(name), time(time)
{
	for (const directory_entry& item : directory_iterator(path))
	{
		if (item.is_directory())				// create sub directory
		{
			Directory* subDir = new Directory(
				item.path().filename().string(), 
				item.path().string(),
				TimeHandling::convertTime(item));
			additem(subDir);
		}
		else if (item.is_regular_file())		// or create file
		{
			File* file = new File(
				item.path().filename().string(), 
				item.file_size(),
				TimeHandling::convertTime(item));
			additem(file);
		}
	}

}

Directory::~Directory()
{
	for (FakeFile* item : items)
		delete item;
	items.clear(); // delete sub dir and file items
}

void Directory::display() const
{
	cout << "";
}


void Directory::additem(FakeFile* item)
{
}

void Directory::delitem(const string& name)
{
}

void Directory::sortSize()
{
}

void Directory::sortName()
{
}

void Directory::sortTime()
{
}
