#include "include.h"
// output the powers of two up to 66536 and do the logs of these 

void log_table(int x)
{
	cout << "Number" << "\t" << "\t" << "Squared" << "\t" << "\t" << "Logged" << "\n";
	while (x <= 16.0)
	{
		int y = pow(2, x);
		cout << x << "\t" << "\t" << y << "\t" << "\t" << log(y) << "\n";
		x = x + 1;
	}
}

int main()
{
	log_table(1);
}