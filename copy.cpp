#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

// using namespace std;

// class Myclass{
// 	private:
// 		std::string name;
// 	public:
// 		Myclass(string name) : name(name) {}
// 		Myclass operator+(){
// 			Myclass re();
// 			re.name()
// 		};
// };

// int main()
// {
// 	Myclass obj1(10);
// 	obj1.get();
// 	Myclass obj2(obj1);
// 	obj2.get();
// }


using namespace std;

int main(){
	// std::pair <int, int> myPair(42, 15);
	// std::cout << myPair.first <<std::endl;
	// std::cout << myPair.second << std::endl;

	// std::vector<int> list;
	// list.push_back(150);
	// list.push_back(15);
	// list.push_back(10);
	// list.push_back(10);
	// list.push_back(10);
	// list.push_back(10);

	// typedef vector<int> intra;
	// intra::iterator b = list.begin();
	// intra::iterator e = list.end();

	// for_each(b, e, [](int num){
	// 	cout << num * 2 << endl;
	// });


	// for (std::vector<int> *it = list.begin(); *it != list.end(); it++){
	// }

	// cout << list.size() << endl;
	// cout << list.capacity() << endl;

	// typedef int myint; // Now `myInt` is an alias for `int`.

	// myint x;
	// x = 15;

	// typedef string chars;
	// chars str;

	// str = "hello";
	// cout << str;
	// typedef std::vector<int> int_t;

	// myint list[] = {5, 15, 20};
	// vector<string> name;
	// int_t list(list);

	// int_t::iterator begins = list.begin();
	// int_t::iterator ends = list.end();

	// std::pair<std::string, std::string> comp;
	// comp.first = "          ";
	// 	comp.second = "hihih";
	// 	for (size_t i = 0; i < comp.first.length() && comp.second[i]; i++)
	// 	{
	// 		comp.first[i] = comp.second[i];
	// 		if (i == comp.first.length() - 1)
	// 			comp.first[i] = '.';
	// 	}

	// string tur = "          ";
	// string name = "hhi444444444444444";

	// for (size_t i = 0; i < 10 && name[i]; i++)
	// {
	// 	tur[i] = name[i];
	// 	if (i == 9)
	// 	{
	// 		tur[i] = '.';
	// 	}
	// }

	// for (size_t i = 0; i < 4; i++)
	// {
	// 	cout << tur << "|";
	// }

	int a = 10;
	stringstream ss;
	ss << a;
	string str = ss.str();
	cout << str;
}
