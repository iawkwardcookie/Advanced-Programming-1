#include "File.h"

File::File(const string& name, size_t size, string time) : FakeFile(name), size(size), time(time) {}

void File::display() const
{
	cout << getTime() << "\t\t" << size << "\t\t" << getName() << "\n";
}

size_t File::getSize() const
{
	return size;
}

string File::getTime() const
{
	return time;
}