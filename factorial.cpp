#include <iostream>
using namespace std;

int main()
{
    int number,factorial=1;
    cout << "Enter Number To Find Its Factorial: "; cin>>number;

    for(int i=1;i<=number;i++)
    {
    factorial=factorial*i;
    }

    cout<<"Factorial of Given Number is: " << factorial << endl;
    
    return 0;
}

