#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int suma=0,contador=0;
    cout<<"Este programa esta diseñado realizar la suma de 10 cantidades"<<endl;
    for(int i=1; i<=10; i++){
        cout<<"cantidad "<<"#"<<i<<" para sumar: ";
        cin>>suma;
        suma=contador+suma;
        contador=suma;

    }
    cout<<"sumatoria: "<<suma;
    getch();
    return 0;
}
