#include <iostream>
#include<math.h>

using namespace std;


int digitSum(int n)
{
	if (n < 10)
	{
		return n;// retorn pro else na chamada da função
	}

	else
	{
		int r = n%10;
		return r+digitSum(n/10);
	}
}



int main(int argc, char const *argv[])
{
	int n;

	cout <<"Insira o número" << endl;
	cin >> n;

	cout << digitSum(n) << endl;

	return 0;
}