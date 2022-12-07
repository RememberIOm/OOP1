class Date
{
private:
	int m_Month = 0;
	int m_Day = 0;
	int m_Year = 0; // 변수 설정

public:
	Date(int month, int day, int year)
	{
		if (month >= 1 and month <= 12) // 월 입력
		{
			m_Month = month;
		}
		else
		{
			m_Month = 1;
		}
		m_Day = day; // 일 입력
		m_Year = year; // 년 입력
	}

	int getMonth() const // 월 출력
	{
		return m_Month;
	}
	void setMonth(int month) // 월 입력
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

	int getDay() const // 일 출력
	{
		return m_Day;
	}
	void setDay(int day) // 일 입력
	{
		m_Day = day;
	}

	int getYear() const // 년 출력
	{
		return m_Year;
	}
	void setYear(int year) // 년 입력
	{
		m_Year = year;
	}

	void displayDate() // 통합 출력
	{
		std::cout << getYear() << "/" << getMonth() << "/" << getDay() << "\n";
	}
};