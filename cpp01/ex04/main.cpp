/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:36:04 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/17 23:41:15 by sel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

// class Checker
// {
// 	private:
// 		std::string *iter;
// 		std::string s1;
// 		std::string s2;
// 		std::string buffer;
// 	public:
// 		Checker(std::string buffer);
// 		Checker(std::string s1, std::string s2);

// 		void checkeReplace();
// 		std::string getBuffer();
// 		void 		setBuffer(std::string str);
// 		void 		replace(std::string *Start){
// 			for (int i = 0; s2[i]; i++){
// 				*Start = s2[i];
// 			}
// 		}
// };

// Checker::Checker(std::string buffer) : buffer(buffer) {};
// Checker::Checker(std::string s1, std::string s2) : iter(&buffer), s1(s1), s2(s2) {};
// void Checker::checkeReplace(){
// 	std::string iter = buffer;
// 	for (int i = 0; iter[i]; i++){
// 		if (iter[i] == s1[0]){
// 			for (int j; s1[j]; j++){
// 				if (iter[i + j] == s1[j] && s1[j]){
// 				}
// 			}
// 		}
// 	}
// }
// std::string Checker::getBuffer(){
// 	return (buffer);
// }

// void Checker::setBuffer(std::string str){
// 	buffer = str;
// }

// int main(int ac, char **av)
// {


// 	if (ac == 4){

// 		std::string newFile;
// 		Checker 	line(av[2], av[3]);
// 		std::string buffer;

// 		std::ifstream inputFile(av[1]);
// 		if (!inputFile){
// 			std::cout << "file didnt open" << std::endl;
// 			return 1;
// 		}

// 		newFile.append(".replace");
// 		std::ofstream outputFile(newFile);
// 		if (!outputFile){
// 			std::cout << "file didnt created" << std::endl;
// 			return 1;
// 		}

// 		while(getline(inputFile, buffer)){
// 			line.setBuffer(buffer);
// 			line.checkeReplace();
// 			outputFile << line.getBuffer();
// 		}
// 	}
// }

// bool is_match(std::string s1, std::string buffer){
// 	std::string::iterator it = buffer.begin();
// 	while (it != buffer.end()){
// 		if (*it == s1[0])
// 		it++;
// 	}
// }

// std::string reach_and_replace(std::string s1, std::string s2, std::string buffer){
// 	for (int i = 0; i < buffer.length(); i++){
// 		if (buffer[i] == s1[0]){
// 		}
// 	}
// }

bool check(std::string buffer, std::string s1){
	size_t i = 0;
	while (buffer[i] && s1[i] && s1[i] == buffer[i])
		i++;

	if (i == s1.length())
		return true;

	return false;
}

int main(int ac, char **av){
	if (ac == 4){
		//open the file and check if it's not empty
		std::string fileName = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string newFile = fileName.append(".replace");
		std::string buffer;

		std::ifstream inputFile(av[1]);
		if (!inputFile){
			std::cout << "input file didnt open" << std::endl;
			return 1;
		}

		std::ofstream outputFile(newFile.c_str());
		if(!outputFile){
			std::cout << "output file didnt open" << std::endl;
			return 1;
		}
		//read it line by line and check
		while (getline(inputFile, buffer)){
			//check and replace s1 at the buffer to s2 then replace it to output
			for (size_t i = 0; i < buffer.length(); i++){
				// std::cout << buffer[i] << s1[0] << std::endl;
				if (i == 0 && !buffer[0]){
					std::cout << "empty file" << std::endl; return 1;
				}
				if (buffer[i] == s1[0] && check(&buffer[i], s1)){
					outputFile << s2;
					i += s2.length();
				}
				else{
					outputFile << buffer[i];
				}
			}
			outputFile << std::endl;
		}
		inputFile.close();
		outputFile.close();
		return 0;
	}
	else
		std::cout << "Invaldi number of inputs!!" << std::endl;
	return 0;
}
