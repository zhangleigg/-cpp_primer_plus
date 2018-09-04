#include <iostream>
#include <cstring>
#include <cstdlib>
#include<array>

//#include "test.h"

const int season=4;
const std::array<std::string,season>snames={"spring","summer","fall","winter"};
void fill(std::array<double,season>*pa);
void show(std::array<double,season>da);

int main(int argc, const char *argv[]){

std::array<double,season>expenses;
fill(&expenses);
show(expenses);

    return 0;
}

void fill(std::array<double,season>*pa){
    using namespace std;
    for(int i=0;i<season;i++){
        cout<<"enter "<<snames[i]<<" enpenses:";
        cin>>(*pa)[i];
    }
}

void show(std::array<double,season>da){

    using namespace std;
    double total=0.0;
    cout<<"\nEXPENSE\n";
    for(int i=0;i<season;i++){
        cout<<snames[i]<<":$"<<da[i]<<endl;
        total+=da[i];
    }
    cout<<"Total Expenses:$"<<total<<endl;

}

                      