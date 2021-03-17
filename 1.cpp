#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//long long *b;

long long int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long long int *producingTheFactorialFractions()
{
    cout<<12<<endl;
    long long int b[10];
    cout<<13<<endl;
    for (int i = 9; i >= 0; i--)
    {
        b[i] += (int)pow(factorial(10), 2.0) / (i + 1);
    }
    cout<<14<<endl;
    return b;
}

void checkZeros(long long *a)
{
    cout<<15<<endl;
    for (int i = 9; i >= 0; i--)
    {
        cout<<16<<endl;
        if (a[i] == 0)
            cout << "Zero Found" << endl;
    }
    cout<<17<<endl;
}

int main()
{
    cout<<11<<endl;
    long long *a;
    a = producingTheFactorialFractions();
    cout<<"---------"<<endl;
    checkZeros(a);
    cout<<"+++++++++++++++++++++++++++"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    cout<<19<<endl;
    //delete a;

    cout<<"hello";
    cout<<"Bye";


}

