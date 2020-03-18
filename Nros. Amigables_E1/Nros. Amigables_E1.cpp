#include <iostream>

using namespace std;

int main()
{
    unsigned long int a,b,s1=0,s2=0;

    cout << "Valor de comienzo del rango:";
    cin >> a;

    cout << "Valor de fin del rango:";
    cin >> b;

    while (a<b)
    {
        for (unsigned long int i = 1; i < a; i++)    //Primer Bucle para determinar los divisores del primer numero
        {
            if (a % i == 0) {           //se utiliza para determinar si los dos numeros son divisibles a traves del resto que da una division entre A % I
                s1 += i;                //se acumula el nro que es divisible con A
                //cout << endl << i << endl;
            }
        }

        for (unsigned long int j = 1; j < s1; j++)    //Segundo Bucle que funciona a partir del primero
        {
            if (s1 % j == 0) {          //se comprueba si la suma de los divisores del primer numero  S1, es divisible con el contador J
                s2 += j;                //se acumula en nro que es divisible con S2
                //cout << endl << j << endl;
            }
        }

        if (a == s2)  //Es verdadero si el primer numero coincide con la suma de divisores del segundo numero
        {
            cout << endl << "La suma de los divisores de " << a << " = " << s1 << " son iguales, por lo tanto son numeros amigos" << endl;
        }
        s1 = s2 = 0;
        a++;
    }
    
    system("pause");
}

