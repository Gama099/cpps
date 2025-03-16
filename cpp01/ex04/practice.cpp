#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFile("file.txt");
	ofstream outputFile("new.txt");
	if (!inputFile || !outputFile){
		return 1;
	}

	string line;
	while (getline(inputFile, line))
	{
		cout << line;
		outputFile << line;
	}

}

