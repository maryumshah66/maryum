#include <iostream>
using namespace std;
int main ()
{int n;
 float S, P,T_Score, T_Points, Per;
 char repeat;
 do{
 T_Score=0, T_Points=0;
 cout<< " How many exercises to input? ";
 cin >> n;
 for(int I = 1 ; I <= n ; I++)
 {
 cout<< " Score received for exercise "<<I<<" = ";
 cin>>S;
 
 T_Score+=S ;
 cout<< "Total points  possible for exercise"<<I<<"= ";
 cin>>P;
T_Points+=P ; }
 Per = T_Score/T_Points*100.0;
 cout<<" total is "<<S<<" out of "<<P<<", or "<<Per<<"%."<<endl; 
 cout<<" Enter 'y' or 'Y' to repeat  ";
 cin>>repeat; } 
 while (repeat == 'Y' || repeat == 'y');
 return 0; 
}
