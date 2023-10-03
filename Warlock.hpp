#include <string>
using std::string;

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
	Warlock(): name(), title() {;}
	Warlock(const Warlock &to_copy): name(to_copy.name), title(to_copy.title) {;}
	Warlock	&operator=(const Warlock &to_assing) {name = to_assing.name; title = to_assing.title;}
	~Warlock() {;}
};
