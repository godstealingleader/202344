#include <iostream>


double transform(double light_years)
{
	return light_years * 63240;
}
int main()
{
	using namespace std;
	cout << "Eenter the number of light years:";
	double light_years = 0;
	cin >> light_years;
	cout << light_years << " light years = " << transform(light_years) << " astronomical units" << endl;
}