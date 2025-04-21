#include <iostream>
#include <sstream>

// class p{
// 	public:
// 		virtual void ping(){
// 			std::cout << "from pa\n";
// 		}
// };

// class c1 : virtual public p{
// 	public:
// 		void ping(){
// 			std::cout << "from c1\n";
// 		}
// };

// class c2 : virtual public p{
// 	public:
// 		void ping(){
// 			std::cout << "from c2\n";
// 		}
// };

int main(){
	int x = 5;
	switch(x)
	{
		case 1:
			std::cout << "1";
		case 2:
			std::cout << "2";
			break;
		case 5:
			std::cout << "5";
			break;
		default:
			std::cout << "non";
			break;
		break;
	}
}
