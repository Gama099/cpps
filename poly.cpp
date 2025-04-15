#include <iostream>
#include <sstream>

class p{
	public:
		virtual void ping(){
			std::cout << "from pa\n";
		}
};

class c1 : virtual public p{
	public:
		void ping(){
			std::cout << "from c1\n";
		}
};

class c2 : virtual public p{
	public:
		void ping(){
			std::cout << "from c2\n";
		}
};

int main(){
	std::stringstream ss;
	int x;

	ss << 5;
	std::cout << ss.str();
	ss.str("");
	std::cout << ss.str();

}
