/*
* Gabe Pier
* cs 201
* Lab 33
* 210423
*/
#include <iostream>
#include <string>
using std::string;

class Penguin {
public:
	void setname(string name) {
		_name = name;
	}
	string getname() const {
		return _name;
	}
	void setage(int age) {
		_age = age;
	}
	int getage() const {
		return _age;
	}
	string toString() {
		return " { " + getname() + ", " + std::to_string(getage()) + " } ";
	}
private:
	string _name;
	int _age{};
};

int main() {
	Penguin mypenguin;

	std::cout << "Input a name for your penguin!" << std::endl;
	string s;
	std::getline(std::cin, s);
	mypenguin.setname(s);
	std::cout << "Input an age for your penguin!" << std::endl;
	int a;
	std::cin >> a;
	mypenguin.setage(a);
	string get = mypenguin.toString();
	std::cout << get;
}