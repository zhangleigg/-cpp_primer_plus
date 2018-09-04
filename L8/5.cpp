#include<iostream>

#define Len 5

template<typename T>
double max5(T* list) {
	double max = 0;
	int i = 0;
	while (i < Len) {
		max = max > list[i] ? max : list[i];
		i++;
	}
	return max;
}

int main(int argc, const char** argv) {
	using namespace std;
	int list1[5]{ 1,3,5,7,9 };
	double list2[5]{ 0.2,4.5,64.2,45.1,10.5 };
	cout << "Max of list1 is: " << max5(list1) << endl;
	cout << "Max of list2 is: " << max5(list2) << endl;

	getchar();
	return 0;
}