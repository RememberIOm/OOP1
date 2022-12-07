#include <string>
#include <cmath>

class DollarAmount {
public:

	explicit DollarAmount(int64_t dollar_value, int64_t cent_value) : dollar_amount{ dollar_value }, cent_amount{ cent_value } { }

	void add(DollarAmount right) {

		dollar_amount += right.dollar_amount;
		cent_amount += right.cent_amount;

		if (cent_amount >= 100)
		{
			cent_amount = cent_amount - 100;
			dollar_amount++;
		}
	}

	void subtract(DollarAmount right) {

		dollar_amount -= right.dollar_amount / 100;
		cent_amount -= right.cent_amount % 100;

		if (cent_amount < 0)
		{
			cent_amount = cent_amount + 100;
			dollar_amount--;
		}
	}

	void addInterest(int rate, int divisor) {

		DollarAmount interest{
			(((dollar_amount * 100 + cent_amount) * rate + divisor / 2) / divisor) / 100, (((dollar_amount * 100 + cent_amount) * rate + divisor / 2) / divisor) % 100
		};

		add(interest);
	}

	std::string toString() const {
		std::string dollars{ std::to_string(dollar_amount) };
		std::string cents{ std::to_string(std::abs(cent_amount)) };
		return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
	}
private:
	int64_t dollar_amount{ 0 };
	int64_t cent_amount{ 0 };
};