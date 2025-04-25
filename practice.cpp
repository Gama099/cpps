#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;

// class phone {
// protected:
//     string battry;
//     string camera;
//     string audio;
// public:
//     phone() {
//         battry = "N/A";
//         camera = "N/A";
//         audio = "N/A";
//         cout << "defualt 000" << endl;
//     }
// };

// class a1 : virtual public phone {
// public:
//     a1() {
//         battry = "a1";
//         camera = "a1";
//         audio = "a1";
//         cout << "defualt A1" << endl;
//     }
// };

// class a2 : virtual public phone {
// public:
//     a2() {
//         battry = "a2";
//         camera = "a2";
//         audio = "a2";
//         cout << "defualt A2" << endl;
//     }
// };

// class X : public a1, public a2 {
// public:
//     X() {
//         // Ensure battry is taken from a1 (not overwritten by a2)
//         battry = a1::battry;
//         camera = a2::camera;
//         audio = a1::audio;
//         cout << "defualt XXX" << endl;
//     }

//     void dis() {
//         cout << battry << endl;       // Prints "a1"
//         cout << phone::battry << endl; // Prints "N/A"
//     }
// };

// int main() {
//     X x;
//     x.dis();
// }

// class a{
// 	public:
// 	int x;
// 	 void f(int n){
//         x = n ;
// 	 }
// 	 a() : x(0){}
// 	 a(int b) : x(b){}
// 	 a(const a &obj){
// 		x = obj.x;
// 	 }
// };

string tobi(int nub){
	std::string bit = "00000000000000000000000000000000";
	int one = 1;
	for(int i = 0; i < bit.length() ; i++){
		one = (one << 1);
		cout << one << endl;
	}
	return bit;
}

class Myclass{
	public:
	int x;
	Myclass(int y) : x(y) {}
	Myclass& operator=(const Myclass & other){
		this->x = other.x;
		return *this;
	}
	Myclass(const Myclass &other){
		*this = other;
	}

	Myclass operator+(Myclass const & other){
		Myclass result(15);
		result.x = this->x + other.x;
		return result;
	}
};

std::ostream& operator<<(std::ostream &out, const Myclass &other){
	return out << other.x;
}

int to_fix(int nbr){
	int value;

	value = nbr;
	return (value << 8);
}

int to_fixx(float nbr){
	int value;

	value = roundf(nbr * 256);
	// cout  << "vale " << value << endl;
	return (value << 8);
}

class animal{
	private:
		string soul;
	public:
		void eat(){
			cout << "animal eating .." << endl;
		}
};

class cat : public animal{
	public:
	void eat(){
		cout << "cat eating .." << endl;
	}
};

int main()
{
	cat m;
	m.eat();
	// a obj;
	// a nm(99);

	// cout << obj.x <<endl;
	// void (a::*ptr)(int) = &a::f;
	// (obj.*ptr)(150);
	// cout << obj.x <<endl;
	// a nobj(obj);
	// cout << nobj.x <<endl;
	// nobj = nm;
	// cout << nobj.x <<endl;
	// std::string line("hello");
	// int x = to_fixx(5.25);
	// cout << x << endl;
	// cout << (x / 256) << endl;

	// Myclass a(1000;
	// Myclass b(99);
	// cout << a << endl;
	// cout <<b << endl;
	// b = a;
	// Myclass y(b);
	// cout << b << endl;
	// cout <<b << endl;
	// Myclass x = a + b;
	// int y = -15;
	// y = y << 8;
	// cout << "y = " << y;
	// cout << x;
	// tobi(15);

}
