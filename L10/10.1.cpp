#include<iostream>
#include<ctime>
#include<cstring>

class BankAccount
{
public:
	BankAccount() {
		_DepositorName = "";
		_Balance = 0;
	}

	BankAccount(std::string name) {
		time_t timep;
		_DepositorName = name;
		_Balance = 0;
		strftime(_AccountNumber, 20, "%Y%m%d%H%M%S", localtime(&timep));
		std::cout << "Enter "<<name<<"'s Passeard\n";
		std::cin >> _Passward;
		std::cout << "Creat Successful!\n";
	}

	~BankAccount() {}

	void Show(char* InputPassward) {
		if (!strcasecmp(InputPassward, _Passward)) {
			std::cout << "Account Name is:" << _DepositorName << "\n";
			std::cout << "Account Number is:" << _AccountNumber << "\n";
			std::cout << "Account Balance is:" << _Balance << "\n";
		}
		else {
			std::cout << "Passward Incorrect!\n";
		}
	}

	void  Depositing(int price) {
		_Balance += price;
		std::cout << "Depositing Successful!\n";
	}

	void  Withdrawing(int price,char* InputPassward) {
		if (!strcasecmp(InputPassward, _Passward)) {
			if (_Balance >= price) {
				_Balance -= price;
				std::cout << "Withdrawing Successful!\n";
			}
			else {
				std::cout << "Insufficient balance,Failure to operation!";
			}
		}
		else {
			std::cout << "Passward Incorrect!\n";
		}
	}

private:
	char _AccountNumber[32];
	std::string _DepositorName;
	char _Passward[32];
	int _Balance;
};


int main(int argc, const char** argv) {
	using namespace std;

	BankAccount zhanglei("zhanglei");
	zhanglei.Depositing(5000);
	zhanglei.Withdrawing(2000, "zlobject");
	zhanglei.Show("zlobject");

	return 0;
}