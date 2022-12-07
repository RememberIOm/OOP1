class Credit
{
private:
	int account_number = 0;
	double balance_old = 0;
	double balance_new = 0;
	double charge = 0;
	double credit = 0;
	double credit_limit = 0;

public:
	double fn_get_account_number() const
	{
		return account_number;
	}
	void fn_set_account_number(double number)
	{
		account_number = number;
	}

	double fn_get_balance_old() const
	{
		return balance_old;
	}
	void fn_set_balance_old(double number)
	{
		balance_old = number;
	}

	double fn_get_balance_new() const
	{
		return balance_new;
	}
	void fn_set_balance_new()
	{
		balance_new = balance_old + charge - credit;
	}

	double fn_get_charge() const
	{
		return charge;
	}
	void fn_set_charge(double number)
	{
		charge = number;
	}

	double fn_get_credit() const
	{
		return credit;
	}
	void fn_set_credit(double number)
	{
		credit = number;
	}

	double fn_get_limit() const
	{
		return credit_limit;
	}
	bool fn_return_limit() const
	{
		if (credit_limit >= balance_new)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void fn_set_limit(double number)
	{
		credit_limit = number;
	}
};