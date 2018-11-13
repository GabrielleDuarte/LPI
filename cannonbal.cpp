#include <iostream>
#include <cmath>

using namespace std;


int cannoballs (int cheight)
{
	if(cheight==1)
	{
	return 1;
	}
	else
	{
		return pow(cheight,2) +cannoballs(cheight-1) ;
	}
}

int main()
{
	int cheight;

	cout <<"Insira a altura da piramide considerando a bala de canhão de 0,30 cm" << endl;
	cin >> cheight;

	if (cheight <= 1)
	{
		cout << "Tamanho inválido, insira outro tamanho" << endl;
		cin >> cheight;
	}
	else
	{
	cout << "A piramide tem: " << cannoballs (cheight)<< "bolas"<< endl;
	}
}