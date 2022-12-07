#include <string>

class Account {
public:

	Account(std::string accountName, int initialBalance)
		: name{ accountName } {


		if (initialBalance > 0) { // ������ ��ȿ�ϸ�
			balance = initialBalance; // ���꿡 ����
		}
	}

	void deposit(int depositAmount) { // �ӱ� �Լ�
		if (depositAmount > 0) {
			balance = balance + depositAmount;
		}
	}

	void withdraw(int withdrawAmount) { // ��� �Լ�
		if (0 < balance - withdrawAmount) {
			if (withdrawAmount > 0) {
				balance = balance - withdrawAmount;
			}
		}
		else {
			std::cout << "\n\nWithdrawal amount exceeded account balance.";
		}
	}

	int getBalance() const { // ���� ǥ�� �Լ�
		return balance;
	}

	void setName(std::string accountName) { // ���� �̸� ���� �Լ�
		name = accountName;
	}

	std::string getName() const { // ���� �̸� ǥ�� �Լ�
		return name;
	}
private:
	std::string name; // ���� �̸� ������ ���
	int balance{ 0 }; // ������ ��� �ʱ�ȭ
};