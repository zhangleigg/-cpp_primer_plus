#include<iostream>
#include<climits>

int main(int argc,const char* argv[]){
	using namespace std;

int n_int=INT_MAX;
short n_short=SHRT_MAX;
long n_long=LONG_MAX;
long long n_llong=LLONG_MAX;

cout<<"int is "<<sizeof(int)<<" byte"<<endl;
cout<<"short is "<<sizeof(short)<<" byte"<<endl;
cout<<"long is "<<sizeof(long)<<" byte"<<endl;
cout<<"long long is "<<sizeof(long long)<<" byte"<<endl<<endl;

cout<<"Maximum value:"<<endl;
cout<<"int: "<<n_int<<endl;
cout<<"short: "<<n_short<<endl;
cout<<"long"<<n_long<<endl;
cout<<"long long"<<n_llong<<endl<<endl;

cout<<"Minimum int value="<<INT_MIN<<endl;
cout<<"Bits per byte="<<CHAR_BIT<<endl<<endl;

	return 0;
}
