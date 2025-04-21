/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 22:36:04 by sel-hadd          #+#    #+#             */
/*   Updated: 2025/04/21 20:27:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>
#include <string>

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

    return file.peek() != EOF;
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