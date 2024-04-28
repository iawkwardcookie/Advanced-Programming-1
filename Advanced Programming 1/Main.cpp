#include <iostream>
#include <string>
using namespace std;

int main() {
#ifdef _DEBUG
	_onexit(_CrtDumpMemoryLeaks);
#endif

	// ask for root dir path //
	cout << "Enter root directory path: ";
	//getline(cin, initialDirectoryPath);
	
	// const rootDir

	return 0;
}