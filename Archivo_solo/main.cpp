//Roberto Juan Cayro Cuadros
#include <iostream>
#include<vector>
using namespace std;

int main()
{

    cout << " \\\       Calculadora del Algoritmo de Euclides y  Algoritmo de Euclides Extendido       ///" << endl;
    int a,b;
    cout << "Ingrese a : ";
    cin >> a;
    cout << "Ingrese b : ";
    cin >> b;

    vector <int> arr;

    ///////////////////////////////         Euclides normal

    int gcd;
    int a1 = a,b1 = b,q, r, n=0;

    q = a1 / b1;
    r = a1 - (q * b1);
  

    a1 = b1;
    b1 = r;
    arr.push_back(q);

    

    while (r > 0) {
        q = a1 / b1;
        r = a1 - (q * b1);
        arr.push_back(q);
        a1= b1;
        b1 = r;
        n++;
    }


    ///////////////////////////////         Euclides EXT
    gcd = a1;

    int o = n;

    int x1 = 0, y1 = 1, d, aux;

    for (int i = 0; i < o; i++) {
        d = arr[n - 1];
        aux = x1 - (d * y1);

        x1 = y1;
        y1 = aux;
        n--;

    }

    cout << "GCD=" << gcd<< endl << "x'=" << x1 << endl << "y'=" << y1;



    
   

   



}

