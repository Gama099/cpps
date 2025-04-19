/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:36:04 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/18 20:44:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

// // class Checker
// // {
// // 	private:
// // 		std::string *iter;
// // 		std::string s1;
// // 		std::string s2;
// // 		std::string buffer;
// // 	public:
// // 		Checker(std::string buffer);
// // 		Checker(std::string s1, std::string s2);

// // 		void checkeReplace();
// // 		std::string getBuffer();
// // 		void 		setBuffer(std::string str);
// // 		void 		replace(std::string *Start){
// // 			for (int i = 0; s2[i]; i++){
// // 				*Start = s2[i];
// // 			}
// // 		}
// // };

// // Checker::Checker(std::string buffer) : buffer(buffer) {};
// // Checker::Checker(std::string s1, std::string s2) : iter(&buffer), s1(s1), s2(s2) {};
// // void Checker::checkeReplace(){
// // 	std::string iter = buffer;
// // 	for (int i = 0; iter[i]; i++){
// // 		if (iter[i] == s1[0]){
// // 			for (int j; s1[j]; j++){
// // 				if (iter[i + j] == s1[j] && s1[j]){
// // 				}
// // 			}
// // 		}
// // 	}
// // }
// // std::string Checker::getBuffer(){
// // 	return (buffer);
// // }

// // void Checker::setBuffer(std::string str){
// // 	buffer = str;
// // }

// // int main(int ac, char **av)
// // {


// // 	if (ac == 4){

// // 		std::string newFile;
// // 		Checker 	line(av[2], av[3]);
// // 		std::string buffer;

// // 		std::ifstream inputFile(av[1]);
// // 		if (!inputFile){
// // 			std::cout << "file didnt open" << std::endl;
// // 			return 1;
// // 		}

// // 		newFile.append(".replace");
// // 		std::ofstream outputFile(newFile);
// // 		if (!outputFile){
// // 			std::cout << "file didnt created" << std::endl;
// // 			return 1;
// // 		}

// // 		while(getline(inputFile, buffer)){
// // 			line.setBuffer(buffer);
// // 			line.checkeReplace();
// // 			outputFile << line.getBuffer();
// // 		}
// // 	}
// // }

// // bool is_match(std::string s1, std::string buffer){
// // 	std::string::iterator it = buffer.begin();
// // 	while (it != buffer.end()){
// // 		if (*it == s1[0])
// // 		it++;
// // 	}
// // }

// // std::string reach_and_replace(std::string s1, std::string s2, std::string buffer){
// // 	for (int i = 0; i < buffer.length(); i++){
// // 		if (buffer[i] == s1[0]){
// // 		}
// // 	}
// // }

// // bool check(std::string buffer, std::string s1){
// // 	size_t i = 0;
// // 	while (buffer[i] && s1[i] && s1[i] == buffer[i])
// // 		i++;

// // 	if (i == s1.length())
// // 		return true;

// // 	return false;
// // }

// // // bool isValidFile(const std::string &filename){
// // // 	std::ifstream file(filename);
// // // 	if (!file) return false;
// // // }

// // // bool canCreateFile(const std::string &filename){
// // // 	std::ofstream file(filename);
// // // 	return file.is_open();
// // // }



// // int main(int ac, char **av){
// // 	if (ac != 4) {
// //         std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
// //         return 1;
// //     }
// // 	//if (ac == 4){
// // 		//open the file and check if it's not empty
// // 		std::string fileName = av[1];
// // 		std::string s1 = av[2];
// // 		std::string s2 = av[3];
// // 		std::string newFile = fileName.append(".replace");
// // 		std::string buffer;

// // 		std::ifstream inputFile(av[1]);
// // 		if (!inputFile){
// // 			std::cout << "input file didnt open" << std::endl;
// // 			return 1;
// // 		}

// // 		if (inputFile.peek() == EOF){
// // 			std::cout << "llalalal" << std::endl;
// // 		}
// // 		std::ofstream outputFile(newFile.c_str());
// // 		if(!outputFile){
// // 			std::cout << "output file didnt open" << std::endl;
// // 			return 1;
// // 		}
// // 		//read it line by line and check
// // 		while (getline(inputFile, buffer)){
// // 			//check and replace s1 at the buffer to s2 then replace it to output
// // 			for (size_t i = 0; i < buffer.length(); i++){
// // 				if (i == 0 && !buffer[0]){
// // 					std::cout << "empty file" << std::endl; return 1;
// // 				}
// // 				if (buffer[i] == s1[0] && check(&buffer[i], s1)){
// // 					outputFile << s2;
// // 					i += s2.length();
// // 				}
// // 				else{
// // 					outputFile << buffer[i];
// // 				}
// // 			}
// // 			outputFile << std::endl;
// // 		}
// // 		inputFile.close();
// // 		outputFile.close();
// // 		return 0;
// // 	/*}
// // 	else
// // 		std::cout << "Invaldi number of inputs!!" << std::endl;
// // 	return 0;*/
// // }

// bool isCanOpen(const std::string &filename){
// 	std::ifstream file(filename);
// 	if ((!file) || (file.peek() == EOF)) return false;
// 	return file.is_open();
// }

// bool isCanCreate(const std::string &filename){
// 	std::ofstream file(filename);
// 	if (!file) return false;
// 	return file.is_open();
// }

// std::string findAndReplace(const std::string &line, const std::string &s1, const std::string &s2){
// 	size_t position = 0;
// 	size_t lastPostion = 0;
// 	std::string result;

// 	while((position = line.find(s1, lastPostion)) != std::string::npos){
// 		result.append(line, lastPostion, position - lastPostion);
// 		result.append(s2);
// 		lastPostion = position + s1.length();
// 	}
// }

// int main(int ac, char **av){
// 	if (ac != 4){
// 		std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
// 		return 1;
// 	}
// 	std::string filename = av[1];
// 	std::string s1 = av[2];
// 	std::string s2 = av[3];
// 	std::string newfilename = filename + ".replace";
// 	std::string line;

// 	// check if the file can open and also not empyt
// 	if (!isCanOpen(filename.c_str())){
// 		std::cout << "ERROR: " << av[1] << "can't be opend!!" << std::endl;
// 		return 1;
// 	}

// 	if (!isCanCreate(newfilename.c_str())){
// 		std::cout << "ERROR: " << newfilename << "can't be created!!" << std::endl;
// 		return 1;
// 	}

// 	std::ifstream inputFile(filename.c_str());
// 	std::ofstream outputFile(newfilename.c_str());

// 	while (getline(std::cin, line)){
// 		outputFile << findAndReplace(line, s1, s2);
// 	}
// 	return 0;
// }


std::string replaceString(const std::string& input, const std::string& s1, const std::string& s2) {
    if (s1.empty()) return input;

    std::string result;
    size_t pos = 0;
    size_t lastPos = 0;

    while ((pos = input.find(s1, lastPos)) != std::string::npos) {
        result.append(input, lastPos, pos - lastPos);
        result.append(s2);
        lastPos = pos + s1.length();
    }
    result.append(input, lastPos);
    return result;
}
bool isValidFile(const std::string& filename) {
    std::ifstream file(filename.c_str());
    if (!file) return false;

    // Check if file is empty
    file.seekg(0, std::ios::end);
    if (file.tellg() == 0) return false;
    file.seekg(0, std::ios::beg);

    return true;
}

bool canCreateFile(const std::string& filename) {
    std::ofstream file(filename.c_str());
    return file.is_open();
}

int main(int ac, char **av) {
    if (ac != 4) {
        std::cout << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (!isValidFile(filename)) {
        std::cout << "Error: Invalid input file" << std::endl;
        return 1;
    }

    std::string outputFile = filename + ".replace";
    if (!canCreateFile(outputFile)) {
        std::cout << "Error: Cannot create output file" << std::endl;
        return 1;
    }

    std::ifstream input(filename.c_str());
    std::ofstream output(outputFile.c_str());
    std::string line;

    while (std::getline(input, line)) {
        output << replaceString(line, s1, s2) << std::endl;
    }

    return 0;
}