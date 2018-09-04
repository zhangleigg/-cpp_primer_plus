#include<iostream>
#include<cstring>


void string_upper(std::string& text_input,const int len) {
	int i = 0;
	while (i < len) {
		if (text_input[i] >= 'a'&&text_input[i] <= 'z') {
			text_input[i] += ('A' - 'a');
		}
		i++;
	}
}


int main(int argc, const char** argv) {
	using namespace std;
	string text_input;

	while (1) {
		cout << "Enter a string (q to quit):" << endl;
		getline(cin, text_input);
		if (!text_input.compare("q")){
			cout << "Bye!" << endl;
			return 0;
		}
		else {
			string_upper(text_input, text_input.size());
			cout << text_input << endl;
		}
	}

	getchar();
	return 0;
}