#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

const int SIZE = 1000;

void osemkowo() 
{
  	ifstream liczby("liczby1.txt");
  	int tab[SIZE];
  	for (int i=0; i<SIZE; i++) liczby>>tab[i];
  	liczby.close();
  	int min=9999999;
  	int max=0;
  	for (int i=0; i<SIZE; i++) 
  	{
    	if(tab[i]<min) min=tab[i];
    	if(tab[i]>max) max=tab[i];
  	}
  	cout << "Najmniejsza: "<<min<<endl;
  	cout << "Najwieksza: "<<max<<endl;
}
int main(int argc, char** argv) {
	osemkowo();
	return 0;
}
