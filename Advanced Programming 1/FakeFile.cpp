#include "FakeFile.h"

FakeFile::FakeFile(const string& name) : name(name) {}

const string& FakeFile::getName() const
{
	return name;
}

