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

class engine{
	public:
		engine(){
			cout<<"3annn"<<endl;
		}
};

class car : public engine {
	public:
		car(){
			cout <<"dimarii"<<endl;
		}
};

int main()
{
	car *g63 = new car;
	delete g63;
	car bmw;
}
