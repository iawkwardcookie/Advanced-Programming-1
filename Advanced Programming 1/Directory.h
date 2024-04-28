#pragma once
#include "FakeFile.h"
#include "File.h"
#include <vector>
#include <filesystem>

class Directory : public FakeFile
{
public:
	Directory(const string& name, const string& path, string time);
	~Directory();

	void display() const override;
	//const vector<FakeFile*>& getItems() const;

	void additem(FakeFile* item);
	void delitem(const string& name);

	void sortSize();
	void sortName();
	void sortTime();
private:
	vector<FakeFile*> items;
	string time;
};

