#include <string>
using namespace std;

class Motorvehicle
{
private:
	string m_Make; // ��ǥ
	string m_FuelType; // �⸧ ����
	int m_YearOfManufacture = 0; // �������
	string m_Color; // ����
	int m_EngineCapacity = 0; // ���� �뷮

public:
	Motorvehicle(string Make, string FuelType, int Manufacture, string Color, int Capacity)
	{ // ������
		m_Make = Make;
		m_FuelType = FuelType;
		m_YearOfManufacture = Manufacture;
		m_Color = Color;
		m_EngineCapacity = Capacity;
	}

	void displayCarDetails()
	{
		cout << "Make: " << getMake() << "\n";
		cout << "Fuel Type: " << getFuelType() << "\n";
		cout << "Year of Manufacture: " << getYearOfManufacture() << "\n";
		cout << "Color: " << getColor() << "\n";
		cout << "Engine Capacity: " << getEngineCapacity() << "\n";
	}

	int getYearOfManufacture() const // ������� ǥ��
	{
		return m_YearOfManufacture;
	}
	void setYearOfManufacture(int Manufacture) // ������� �Է�
	{
		m_YearOfManufacture = Manufacture;
	}

	int getEngineCapacity() const // �����뷮 ǥ��
	{
		return m_EngineCapacity;
	}
	void setEngineCapacity(int Capacity) // �����뷮 �Է�
	{
		m_EngineCapacity = Capacity;
	}

	string getMake() const // ��ǥ ǥ��
	{
		return m_Make;
	}
	void setMake(string Make) // ��ǥ �Է�
	{
		m_Make = Make;
	}

	string getFuelType() const // �⸧ ���� ǥ��
	{
		return m_FuelType;
	}
	void setFuelType(string FuelType) // �⸧ ���� �Է�
	{
		m_FuelType = FuelType;
	}

	string getColor() const // ���� ǥ��
	{
		return m_Color;
	}
	void setColor(string Color) // ���� �Է�
	{
		m_Color = Color;
	}
};