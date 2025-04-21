#include <cmath>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;
class f{
	public:
	int x = 10;
};

std::ostream &operator<<(std::ostream &output, f &obj){
	output << obj.x;
	return output;
}

f& operator+(const f& obj){
	if (this != &obj){
		
	}
}

int main(){
	f obj;
	std::cout << obj << std::endl;
}
