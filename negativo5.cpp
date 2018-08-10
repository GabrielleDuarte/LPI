// Example program
#include <iostream>
#include <string>
#define TAM 100

using namespace std;

int main()
{
int n[TAM] , conte = 0;

for(int i = 0; i < 5; i++)
{
 cout << "Insira o " << i+1 << "° numero"<< endl;
 cin >> n[i];

if (n[i] < 0)
 ++conte;
}

                                                 
 cout<< "A quantidade de numeros negativos e " << conte << endl;
  }

                                                  
