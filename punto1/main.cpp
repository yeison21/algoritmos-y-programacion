#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int edad=0,num=0,contador=0,a=0,suma=0,fin=0;
    float promedio=0.0;

    while(true){
        cout <<"digite el numero de estudiantes: "<< endl;
        cin>>num;
        while (contador<num)
        {
            suma=suma+edad;
            cout<<"suma: "<<suma<<endl;
            contador=contador+1;
            cout<<"digite la edad de el estudiante "<<contador<<": "<<endl;
            cin>>edad;
            a=contador;
            if (edad>18)
            {
                a=contador-1;
                break;
            }

        }
        promedio =(suma)/(a);
        cout<<"promedio: "<<promedio<<endl;
        cout<<" "<<endl;
        cout<<"si desea cerrar el programa ingrese '0' de lo contrario ingrese 1: ";
        cin>>fin;

        if(fin==0){
            break;
        }
    }
    getch();
    return 0;
}
