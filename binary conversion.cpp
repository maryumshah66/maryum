#include<iostream>
using namespace std; 
int main ()
{
    int num, bn;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The binary equivalent of " << num << " is ";
    while (num > 0)
    {
    bn = num % 2;
    cout << bn;
    num /= 2;
    }
    return 0;
}
