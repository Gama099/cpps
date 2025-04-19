#include <cmath>
#include <sstream>
#include <iostream>


class f{
	public:
	int x = 10;
};
std::ostream& operator<<(std::ostream& out, const f &obj){
	out << obj.x;
	return out;
}

int main(){
	f obj;
	std::cout << obj << std::endl;
}