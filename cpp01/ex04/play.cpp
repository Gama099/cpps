#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av){
	std::string buffer;
	std::ifstream inputFile(av[1]);
	if (!inputFile)
		std::cout << "not opend" << std::endl;
	std::ofstream outputFile("output.txt");
	if (!inputFile)
		std::cout << "not opend" << std::endl;
	while (getline(inputFile, buffer)){
		outputFile << buffer << std::endl;

		std::string::iterator it = buffer.begin();
		// while (it != buffer.end()){
		// 	std::cout << *it << std::endl;
		// 	it++;
		// }
		for (int i = 0; i < buffer.length(); i++){
			std::cout << buffer[i] << std::endl;
			i++;
		}
	}
}
