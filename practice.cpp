#include <iostream>
#include <string>

using namespace std;

class phone {
protected:
    string battry;
    string camera;
    string audio;
public:
    phone() {
        battry = "N/A";
        camera = "N/A";
        audio = "N/A";
        cout << "defualt 000" << endl;
    }
};

class a1 : virtual public phone {
public:
    a1() {
        battry = "a1";
        camera = "a1";
        audio = "a1";
        cout << "defualt A1" << endl;
    }
};

class a2 : virtual public phone {
public:
    a2() {
        battry = "a2";
        camera = "a2";
        audio = "a2";
        cout << "defualt A2" << endl;
    }
};

class X : public a1, public a2 {
public:
    X() {
        // Ensure battry is taken from a1 (not overwritten by a2)
        battry = a1::battry;  
        camera = a2::camera;
        audio = a1::audio;
        cout << "defualt XXX" << endl;
    }

    void dis() {
        cout << battry << endl;       // Prints "a1"
        cout << phone::battry << endl; // Prints "N/A"
    }
};

// int main() {
//     X x;
//     x.dis();
// }

class a{
	public:
	void f(int i){
        cout << "defualt XXX" << endl;
	 }
	 void f(){
        cout << "defualt YYY" << endl;
	 }
};

int main()
{
	a a;

	a.f();
	a.f();

	a.f(18);
	a.f();

}