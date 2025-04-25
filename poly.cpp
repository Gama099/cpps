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

using namespace std;
class animal{
	public:
		void eat(){
			cout << "eating" << endl;
		}
};

class dog : public animal{
};

int main(){
	dog dog;
	dog.eat();
}