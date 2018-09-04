#include<iostream>

struct debts{
	char name[50];
	double amout;
};

template<typename T>
void showarray(T arr[],int n){
	double max=0;
	while(n>0){
	max+=arr[n-1];
	n--;
	}
	std::cout<<"total: "<<max<<std::endl;
}

template<typename T>
void showarray(T* arr[],int n){
	double max=0;
	while(n>0){
	max+=*arr[n-1];
	n--;
}
	std::cout<<"total: "<<max<<std::endl;
}

int main(int argc,const char** argv){
	using namespace std;
	int thing[6]={13,31,103,301,310,330};
	struct debts mr_E[3]={
		{"qwe",2400.0},
		{"rty",1300.0},
		{"asd",1800.0}	
	};
	double* pd[3];

	for(int i=0;i<3;i++){
		pd[i]=&mr_E[i].amout;
	}

	showarray(thing,6);
	showarray(pd,3);

	return 0;
}
