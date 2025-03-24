#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    void eat() { cout << "Eating..."; }
};

class Bird {
public:
    void fly() { cout << "Flying..."; }
};

class bath :public Animal, public Bird{
	public:
		void hang(){cout << "Hanging...";}
};

class scrow : public bath{
	public:
		void scary(){cout << "sacaryy!!";}
};

int main(){
	scrow batman;

	batman.eat();
	batman.fly();
	batman.hang();

}