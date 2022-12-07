class Leave
{
private:
	double work = 0;
	double leave = 0;

public:
	void fn_set_work(double number)
	{
		work = number;
	}
	double fn_get_work() const
	{
		return work;
	}

	void fn_set_leave()
	{
		leave = 2.0 + work / 10;
	}
	double fn_get_leave() const
	{
		return leave;
	}
};