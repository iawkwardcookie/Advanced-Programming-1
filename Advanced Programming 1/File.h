#pragma once
#include "FakeFile.h"
using namespace std;

class File : public FakeFile 
{
public:
	File(const string& name, size_t size, string time);
	void display() const override;	// day / time / size / name
	size_t getSize() const;
	string getTime() const;
private:
	size_t size;
	string time;
};

