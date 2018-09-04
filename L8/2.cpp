#include<iostream>
#include<cstring>

struct Candybar
{
	char name[32];
	double weight;
	int calories;
};

void Cadybay_Add(Candybar* data, const char* name = "Millennium Munch", const double& weight = 2.85, const int& calories = 350) {
	strcpy(data->name, name);
	data->weight = weight;
	data->calories = calories;
}

void Get_Data(Candybar* data, const int& position, char* name, double& weight, int& calories) {
	std::cout << "Input name" << std::endl;
	std::cin.getline(name, 30);
	std::cout << "Input weight and " << std::endl;
	std::cin >> weight >> calories;
	Cadybay_Add((data + position), name, weight, calories);
}

int main(int argc, const char** argv) {
	using namespace std;
	Candybar* data=new Candybar;
	Cadybay_Add(data);
	char name[30]="";
	double weight;
	int calories;
	int position=1;
	Get_Data(data, position, name, weight, calories);

	int i = 0;
	while (i <= position) {
		cout << "result " << i << " :" << endl;
		cout << (data + i)->name << endl;
		cout << (data + i)->weight << endl;
		cout << (data + i)->calories << endl;
		i++;
	}
	getchar();
	return 0;
}