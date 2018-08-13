#include<iostream> 

using namespace std;

int main()
{

int x, conte=0;

cout << " Entre com valores inteiros ( Ctrl + d p / encerrar ): " << endl ;
while ( cin >> x ) {
// Realizaç~
//[0, 25), [25, 50), [50, 75) e [75, 100]
if(x >= 0 && x < 25)
conte++;

if(x >= 25 && x < 50)
conte++;

if(x >= 50 && x < 75)
conte++;

if(x >= 75 && x <= 100)
conte++;

}
// Exibir contagem para os intervalos solicitados .
cout << "A quantidade de numeros contidos em intervalos e: " << conte << endl;
//exit() do <stdlib.h>
}
