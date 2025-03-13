#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av){
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else{
        for (int i = 1; i < ac; i++){
            for (char *iter = &av[i][0]; *iter; iter++){
                std::cout << (char)toupper(*iter);
            }
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
