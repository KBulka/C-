#include <iostream> 
#include <string.h>
using namespace std;
#define N  100 
char napis[N + 1];
int i;

unsigned dlugosc;


void wpi()
{

	for (i = dlugosc - 1; i >= 0; i--) cout << napis[i];
	
	dlugosc = strlen(napis);

}

int main()
{
	cout << "wpisz wyraz" << endl;
	cin >> napis;
	wpi();
	cout << dlugosc;
	system("pause");

}
