#include<iostream>

void _print(std::string& print_str,int print_time=1){
	if (print_time < 1) { print_time = 0; }
	while(print_time--){
		std::cout<<print_str<<std::endl;
	}
}

int main(int argc, const char** argv) {
	using namespace std;
	string print_str;
	int print_time;
	cout << "Input String" << endl;
	cin >> print_str;
	cout << "Input Times" << endl;
	cin >> print_time;
	_print(print_str, print_time);
	getchar();
}