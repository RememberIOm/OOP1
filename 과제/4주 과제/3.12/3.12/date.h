class Date
{
private:
	int m_Month = 0;
	int m_Day = 0;
	int m_Year = 0; // ���� ����

public:
	Date(int month, int day, int year)
	{
		if (month >= 1 and month <= 12) // �� �Է�
		{
			m_Month = month;
		}
		else
		{
			m_Month = 1;
		}
		m_Day = day; // �� �Է�
		m_Year = year; // �� �Է�
	}

	int getMonth() const // �� ���
	{
		return m_Month;
	}
	void setMonth(int month) // �� �Է�
	{
		if (month >= 1 and month <= 12)
		{
			m_Month = month;
		}
		else
		{
			m_Month = 1;
		}
	}

	int getDay() const // �� ���
	{
		return m_Day;
	}
	void setDay(int day) // �� �Է�
	{
		m_Day = day;
	}

	int getYear() const // �� ���
	{
		return m_Year;
	}
	void setYear(int year) // �� �Է�
	{
		m_Year = year;
	}

	void displayDate() // ���� ���
	{
		std::cout << getYear() << "/" << getMonth() << "/" << getDay() << "\n";
	}
};