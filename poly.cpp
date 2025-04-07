#include <iostream>

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
	c1 c1;
	c2 c2;

	p* p1 = &c1;
	p* p2 = &c2;
	p1->ping();
	p2->ping();

}
