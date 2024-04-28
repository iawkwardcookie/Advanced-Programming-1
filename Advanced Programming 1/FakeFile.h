#pragma once
#include <string>
#include <iostream>
using namespace std;

class FakeFile
{
public:
	FakeFile(const string& name);	// constructor w file/dir name + size/"<dir>"
	virtual ~FakeFile() {};			// deconstructor
	const string& getName() const;
	virtual void display() const = 0; // overridden by child classes

private:
	string name;
};


