#include <iostream>
using namespace std;

int main()
{
	unsigned long long seed1 = 0; // �õ� 1�� 0
	unsigned long long seed2 = 1; // �õ� 2�� 1
	unsigned long long temp1 = seed1 + seed2; // temp1�� �õ� 1�� �õ� 2�� ����
	unsigned long long temp2 = seed2; // temp2�� �� ��° ���� ����
	unsigned long long temp3; // temp3 ����

	cout << seed1; // ù ��° �� ���
	cout << " " << seed2; // �� ��° �� ���

	while (true)
	{
		cout << " "; // ����
		cout << temp1; // ù ��° ���� �� ��° �� ���� ���� ���

		temp3 = temp1; // �ٷ� ������ ���� �� temp1�� temp3�� ����
		temp1 = temp1 + temp2; // temp1�� ��µǱ� ���� ������ ���� ���� ������ ���� ����
		temp2 = temp3; // temp3�� �����ߴ� ������ �� temp1�� temp2�� ����
	}

	return 0;
}
// ���ѷ����� �Ǹ� �Ǻ���ġ ������ ��� �����Ѵ�.
// ������ ���� unsigned long long Ÿ���� �뷮 �Ѱ��� 8����Ʈ(0 ~ 18,446,744,073,709,551,615)�� �Ѿ�� �����÷ο찡 �߻��Ѵ�.