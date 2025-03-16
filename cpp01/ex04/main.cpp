#include <iostream>
#include <fstream>
#include <string>

class Checker
{
	private:
		std::string *iter;
		std::string s1;
		std::string s2;
		std::string buffer;
	public:
		Checker(std::string buffer);
		Checker(std::string s1, std::string s2);

		void checkeReplace();
		std::string getBuffer();
		void 		setBuffer(std::string str);
		void 		replace(std::string *Start){
			for (int i = 0; s2[i]; i++){
				*Start = s2[i];
			}
		}
};

Checker::Checker(std::string buffer) : buffer(buffer) {};
Checker::Checker(std::string s1, std::string s2) : iter(&buffer), s1(s1), s2(s2) {};
void Checker::checkeReplace(){
	std::string iter = buffer;
	for (int i = 0; iter[i]; i++){
		if (iter[i] == s1[0]){
			for (int j; s1[j]; j++){
				if (iter[i + j] == s1[j] && s1[j]){
				}
			}
		}
	}
}
std::string Checker::getBuffer(){
	return (buffer);
}

void Checker::setBuffer(std::string str){
	buffer = str;
}

int main(int ac, char **av)
{


	if (ac == 4){

		std::string newFile;
		Checker 	line(av[2], av[3]);
		std::string buffer;

		std::ifstream inputFile(av[1]);
		if (!inputFile){
			std::cout << "file didnt open" << std::endl;
			return 1;
		}

		newFile.append(".replace");
		std::ofstream outputFile(newFile);
		if (!outputFile){
			std::cout << "file didnt created" << std::endl;
			return 1;
		}

		while(getline(inputFile, buffer)){
			line.setBuffer(buffer);
			line.checkeReplace();
			outputFile << line.getBuffer();
		}
	}
}
