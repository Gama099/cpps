#include <iostream>
#include <string>

using namespace std;


class ClassName{
	private:
		string str;
	public:
		void get(){
			std::cout <<"|"<< str << "|"<<std::endl;
		}
		ClassName(const ClassName &copy)
		{
			this->str = copy.str;
		}
		ClassName(string str):str(str){}

		ClassName& operator=(const ClassName &other){
			if (this != &other){
				//we not on this
				str = other.str;
			}
			return *this;
		}
};

class ps{
	private:
	public:
	int x;
	int y;
		ps(int x, int y) : x(x), y(y) {}
		ps add(const ps &n1, const ps &n2){
			ps r(n1.x + n2.x, n1.y + n2.y);
			return r;
		}

		ps operator + (const ps &n1){
			cout << this->x <<endl;
			ps r(this->x - n1.x, this->y - n1.y);
			return r;
		}

};

int main()
{
	ps n1(15, 5);
	ps n2(10, 5);
	ps r = n2 + n1;
	cout << r.x << "|" << r.y ;
}
