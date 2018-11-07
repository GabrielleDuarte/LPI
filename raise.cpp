#include <iostream>
#include<math.h>

using namespace std;

int raiseToPower(int n, int k)
{
 	if(k==0)
 	{
 		return 1;
 	}	
 	else
 	{
 		return n*raiseToPower(n,k-1);
 	}
}

int main()
{
	int k,n, aux;

	cout << "Insira 'k' e 'n'" << endl;
	cin >> k >> n;
	aux = raiseToPower(n,k);

	cout << "O resultado pra esse valor é: "<< aux << endl;

}