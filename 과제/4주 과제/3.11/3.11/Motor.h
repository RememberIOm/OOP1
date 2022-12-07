#include <string>
using namespace std;

class Motorvehicle
{
private:
	string m_Make; // 상표
	string m_FuelType; // 기름 종류
	int m_YearOfManufacture = 0; // 제조년월
	string m_Color; // 도색
	int m_EngineCapacity = 0; // 엔진 용량

public:
	Motorvehicle(string Make, string FuelType, int Manufacture, string Color, int Capacity)
	{ // 생성자
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

	int getYearOfManufacture() const // 제조년월 표시
	{
		return m_YearOfManufacture;
	}
	void setYearOfManufacture(int Manufacture) // 제조년월 입력
	{
		m_YearOfManufacture = Manufacture;
	}

	int getEngineCapacity() const // 엔진용량 표시
	{
		return m_EngineCapacity;
	}
	void setEngineCapacity(int Capacity) // 엔진용량 입력
	{
		m_EngineCapacity = Capacity;
	}

	string getMake() const // 상표 표시
	{
		return m_Make;
	}
	void setMake(string Make) // 상표 입력
	{
		m_Make = Make;
	}

	string getFuelType() const // 기름 종류 표시
	{
		return m_FuelType;
	}
	void setFuelType(string FuelType) // 기름 종류 입력
	{
		m_FuelType = FuelType;
	}

	string getColor() const // 도색 표시
	{
		return m_Color;
	}
	void setColor(string Color) // 도색 입력
	{
		m_Color = Color;
	}
};