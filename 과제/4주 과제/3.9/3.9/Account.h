#include <string>

class Account {
public:

	Account(std::string accountName, int initialBalance)
		: name{ accountName } {


		if (initialBalance > 0) { // 예산이 유효하면
			balance = initialBalance; // 예산에 대입
		}
	}

	void deposit(int depositAmount) { // 임금 함수
		if (depositAmount > 0) {
			balance = balance + depositAmount;
		}
	}

	void withdraw(int withdrawAmount) { // 출금 함수
		if (0 < balance - withdrawAmount) {
			if (withdrawAmount > 0) {
				balance = balance - withdrawAmount;
			}
		}
		else {
			std::cout << "\n\nWithdrawal amount exceeded account balance.";
		}
	}

	int getBalance() const { // 예산 표시 함수
		return balance;
	}

	void setName(std::string accountName) { // 계좌 이름 설정 함수
		name = accountName;
	}

	std::string getName() const { // 계좌 이름 표시 함수
		return name;
	}
private:
	std::string name; // 계좌 이름 데이터 멤버
	int balance{ 0 }; // 데이터 멤버 초기화
};