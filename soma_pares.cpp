#include<iostream>

using namespace std;

int main()
{

int m, n, somapares=0;


 cout << "Entre com pares inteiros positivos ( Ctrl + d p/ encerrar ): " << endl ;

	while(cin >> m >> n)
	{
	        for (int i=0; i<n; i++) 
		{		{
		somapares = somapares+m; 
		m++;
		cout<< somapares << endl;
		}
	}
cout << "A soma é " << somapares << endl;
}
