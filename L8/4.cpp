#include <iostream>
using namespace std;
#include <cstring> // for strlen(), strcpy()
struct stringy {
	char * str; // points to a string
	int ct; // length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here

void set(stringy& beany, char* testing) {

	beany.ct = (strlen(testing) + 1);
	beany.str = new char[(strlen(testing) + 1)];
	strcpy(beany.str, testing);

}

void show(const stringy& s, const int count = 1) {
	for (int i = 0; i < count; ++i)
		std::cout << s.str << std::endl;
}

void show(const char* s, const int count = 1) {
	for (int i = 0; i < count; ++i)
		std::cout << s << std::endl;
}

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); // first argument is a reference,
						 // allocates space to hold copy of testing,
						 // sets str member of beany to point to the
						 // new block, copies testing to new block,
						 // and sets ct member of beany
	show(beany); // prints member string once
	show(beany, 2); // prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // prints testing string once
	show(testing, 3); // prints testing string thrice
	show("Done!");

	getchar();
	return 0;
}