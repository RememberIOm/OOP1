#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

unsigned long long get_factorial(int num) // ���丮���� ���ϴ� �Լ�
{
	unsigned long long result = 1; // ���丮���� ū ���̹Ƿ� long long �ڷ����� ����Ͽ���, ����̹Ƿ� unsigned�Ͽ���.

	for (int i = 0; i < num; i++) // å�� �־��� ����
	{
		result = result * (i + 1); // result�� ��� ���� �����Ѵ�.
	}

	return result; // result�� ��ȯ�Ѵ�.
}

long double get_e(int num, int x) // e^x�� ���ϴ� �Լ�
{
	long double result = 0; // e�� �Ҽ����� ��Ȯ���� �߿��ϹǷ� ���� ū �ε��Ҽ��� �ڷ����� long double�� ����Ͽ���.

	for (int i = 0; i < num; i++) // å�� �־��� ����
	{
		if (get_factorial(i) != 0) // 0 ������ ������ ����ó�� �Ͽ���.
		{
			long double pw = pow(x, i); // pow �Լ��� ��ȯ�ϴ� ���� "9.76563e+06" �̷��� �����̹Ƿ�, ������ ���ֱ� ���� long long �ڷ����� �����Ͽ���.
			result = result + pw * 1.0 / get_factorial(i); // result�� ���� �����ϰ�, long double�� �����ϱ� ���� 1.0�� �����־���.
		}
	}

	return result; // result ���� ��ȯ�Ѵ�.
}

int main()
{
	cout << fixed << setprecision(16); // �Ҽ��� �Ʒ� 16�ڸ����� ǥ���Ѵ�.

	cout << "4.35�� a�� ����\n\n" << "���丮���� ���� ����: ";
	int N; // ����ڰ� �Է��ϴ� ���� �޴� ������ ����
	cin >> N;
	cout << get_factorial(N); // ���丮���� ���ϴ� �Լ��� ����Ѵ�.

	cout << "\n\n\n4.35�� b�� ����\n\n" << "���Ŀ��� ���� ���� ��: ";
	cin >> N;
	cout << get_e(N, 1); // e^x�� ���ϴ� �Լ��� ����Ѵ�. ���⼭ ���ϴ� e�� ������ �����Ƿ� 1�� �����Ѵ�.

	cout << "\n\n\n4.35�� c�� ����\n\n" << "e^x ������ x�� ��: ";
	int x; // ����ڰ� �Է��� ������ �޴� ������ ����
	cin >> x;
	cout << "\n���� ���� ũ�� x�� ������ �ڷ����� �Ѱ踦 �Ѿ� ������ �� �� ����.\n\n���Ŀ��� ���� ���� ��: ";
	cin >> N;
	cout << get_e(N, x); // e^x�� ���ϴ� �Լ��� ����Ѵ�.

	return 0;
}