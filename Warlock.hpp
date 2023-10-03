#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

class Warlock
{
private:
	string	name;
	string	title;

public:
	string	getName() const {return name;}
	string	getTitle() const {return title;}

	void	setTitle(string to_set) {title = to_set;}

private:
	Warlock(): name(), title() {cout << name << ": This looks like another boring day." << endl;}
	Warlock(const Warlock &to_copy): name(to_copy.name), title(to_copy.title) {;}
	Warlock	&operator=(const Warlock &to_assing) {name = to_assing.name; title = to_assing.title; return (*this);}

public:
	Warlock(string name, string title): name(name), title(title) {cout << name << ": This looks like another boring day." << endl;;}
	~Warlock() {cout << name << ": My job here is done!" << endl;}

	void introduce() const {cout << name << ": I am " << name << ", " << title << "!" << endl;}
};
