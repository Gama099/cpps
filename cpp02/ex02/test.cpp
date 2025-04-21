#include <cmath>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

/***
 * Write a class called Box that holds an int volume, and overload:

		+ → to combine volumes of two boxes

		== → to check if two boxes have the same volume

		<< → so we can do std::cout << box;
*/

class Box{
	private:
		int volume;
	public:
	Box(int volume) : volume(volume){};
	Box operator+(const Box& other) const {
		return Box(this->volume + other.volume);
	}
	bool operator==(const Box& other) const {
		return (this->volume == other.volume);
	}


	int get(){
		return this->volume;
	}
};

class Number {
	private:
		int value;
	public:
		Number(int v) : value(v) {}

		// OVERLOADED +
		Number operator+(const Number& other) const {
			return Number(this->value + other.value);
		}

		int get() const { return value; }

		// Number operator+(const Number &other)const {
		// 	return Number(this->value + other.value);
		// }
		bool operator==(const Number& other) const {
			return (this->value == other.value);
		}

		Number operator-(){
			return Number(-this->value);
		}
		bool operator>( Number &y) const {
			return this->value > y.value;
		}

		// void get_value(){
		// 	cout << value;
		// }
};

class Vector2D {
	private:
		float x, y;
	public:
		Vector2D(float x = 0, float y = 0) : x(x), y(y) {}

		// Add: v1 + v2
		Vector2D operator+(const Vector2D& other) const{
			return Vector2D(this->x + other.x, this->y + other.y);
		}

		// Subtract: v1 - v2
		Vector2D operator-(const Vector2D& other) const{
			return Vector2D(this->x - other.x, this->y - this->y);
		}

		// Compare equality
		bool operator==(const Vector2D& other) const{
			return (this->x == other.x && this->y == this->y);
		}

		// Print like: (3.0, 4.0)
		friend std::ostream& operator<<(std::ostream& out, const Vector2D& v){
			return out << v.x << ", " << v.y;
		}
	};

	class Counter {
		private:
			int value;
		public:
			Counter(int start = 0) : value(start){}

			Counter& operator++(){
				this->value++;
				return *this;
			}
			    // Prefix ++
			Counter operator++(int){
				this->value++;
			} // Postfix ++
			Counter& operator--();    // Prefix --
			Counter operator--(int);  // Postfix --

			friend std::ostream& operator<<(std::ostream& out, const Counter& c){
				return out << c.value;
			}
};

class Fraction {
	private:
		int num;
		int den;
		void simplify(); // Reduce the fraction
	public:
		Fraction(int num, int den) : num(num), den(den){}
		Fraction operator+(const Fraction& other) const{
			return Fraction(this->num + other.num, this->den + other.num );
		}
		Fraction operator-(const Fraction& other) const{
			return Fraction(this->num - other.num, this->den - other.num );
		}
		Fraction operator*(const Fraction& other) const{
			return Fraction(this->num * other.num, this->den * other.num );
		}
		Fraction operator/(const Fraction& other) const{
			return Fraction(this->num / other.num, this->den / other.num );
		}
		bool operator==(const Fraction& other) const{
			return (this->num / this->den) == (other.num / other.den );
		}
		bool operator<(const Fraction& other) const
		{
			return (this->num / this->den < other.num / other.den );
		}
		friend std::ostream& operator<<(std::ostream& out, const Fraction& f){
			return out << f.num << "/" << f.den;
		}
};

class fixed{
	private:
		int value;
		int bits;
	public:
		fixed(fixed& other){
			if (this != &other){
				other.value = this->value;
				other.bits = this->bits;
			}
		}
};
int main(){
	float f;
	int fix_point_number;

}
