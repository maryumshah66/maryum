#include<iostream>
using namespace std;
int main()
{
  int marks; 	

cout<<"Enter student's mark: ";
cin>>marks;

if(marks>=90 && marks<=100) 
cout<<"Your Grade is A"<<endl<<"excellent";
else if(marks>=80 && marks<90) 
cout<<"Your Grade is A"<<endl<<"very good";
else if(marks>=70 && marks<80) 
cout<<"Your Grade is B"<<endl<<"good";
else if(marks>=60 && marks<70) 
cout<<"Your Grade is C"<<endl<<"satisfy";
else if(marks>=50 && marks<60) 
cout<<"Your Grade is D"<<endl<<"poor";
else if(marks>=0 && marks<50) 
cout<<"Your Grade is F"<<endl<<"fail";
else cout<<"Invalid Marks.";
return 0;
  }


