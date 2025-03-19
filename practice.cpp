#include <iostream>

using namespace std;


class hi{
	public:
	string *name;
	hi(string *name){
		this->name = new string;
	}
};

int main()
{
	string *ptr;
	hi *obj = new hi(ptr);
	cout << ptr << endl;
	delete obj;
}
