# include <iostream>
using namespace std;
int main ()
{
    int month, date;
    
    cout<<"Enter your  month: ";
	cin>>month;
    cout<<endl;
    
    cout<<"Enter your date: ";
    cin>>date; 
	cout<<endl;
	
	if(month>12 || date>31)
	cout<<"Invalid input"<<endl;
	
    else
    {
	if (month == 3 && date >= 21 || month == 4 && date <= 20)
    { cout<<"Your sign is Aries";
    if(date >= date-3)
	cout<<" you are a cusp baby and with Taurus sign \n";
    else if(date <= date +3)
	cout<<" you are a cusp baby and with  Pieces sign \n";
	cout<<endl;}
	
    if (month == 4 && date >= 21 || month == 5 && date <= 21)
    {cout<<"Your sign is Taurus"; 
    if(date >= date - 3)
	cout<<" you are a cusp baby and with Gemini sign \n";
    else if(date <= date + 3)
	cout<<" you are a cusp baby and with Aries sign \n";
    cout<<endl;}
    
    if (month == 5 && date >= 22 || month == 6 && date <= 22)
    {cout<<"Your sign is Gemini";
    if(date >= date - 3)
	cout<<"you are a cusp baby and with Cancer sign \n";
    else if(date <=date + 3)
	cout<<"you are a cusp baby and with Taurus sign \n";}
    
    if (month == 6 && date >= 23 || month == 7 && date <= 23)
    {cout<<"Your sign is Cancer";
    if(date >= date - 3)
	cout<<"you are a cusp baby and with sign Leo \n";
    else if(date <= date + 3)
    cout<<"you are a cusp baby and with  Gemini sign \n";}
     
    if (month == 7 && date >= 24 || month == 8 && date <= 23)
    {cout<<"Your sign is Leo";
    if(date >= date - 3)
	cout<<"you are a cusp baby and with  Virgo sign \n";
    else if(date <= date + 3)
	cout<<"you are a cusp baby and with Cancer sign \n";}
	
    if (month == 8 && date >= 24 || month == 9 && date <= 23)
    {cout<<"Your sign is Virgo";
    if(date >=date - 3)
	cout<<"you are a cusp baby and with Libra sign \n";
	else if(date <=date + 3)
	cout<<"you are a cusp baby and with  Leo sign \n";}
	
    if (month == 9 && date >= 24 || month == 10 && date <= 23)
    {cout<<"Your sign is Libra"; 
    if(date >= date - 3)
	cout<<"you are a cusp baby and with  Scorpio sign \n";
    else if(date <= date + 3)
    cout<<"you are a cusp baby and with  Virgo sign \n";}
    
    if (month == 10 && date >= 24 || month == 11 && date <= 22)
    {cout<<"Your sign is Scorpio";
    if(date >= date - 3)
	cout<<"you are a cusp baby and with  Sagitarius sign \n";
    else if(date <= date + 3)
	cout<<"you are a cusp baby and with Libra sign \n";}
    
    if (month == 11 && date >= 24 || month == 12 && date <= 21)
    {cout<<"Your sign is Saguittarius";
    if(date >= date - 3)
	cout<<"you are a cusp baby and with Sagitarius sign \n";
    else if(date <= date + 3)
	cout<<"you are a cusp baby and with Libra sign \n";}
	 
    if (month == 12 && date >= 22 || month == 1 && date <= 20)
    {
	cout<<"Your sign is Capricorn";
    if(date >=date - 3)
    cout<<"you are a cusp baby and with Aquarius sign \n";
    else if(date <= date +3)
	cout<<"you are a cusp baby and with Sagittarius sign \n";}
	 
    if (month == 1 && date >= 21 || month == 2 && date <= 19)
    {cout<<"Your sign is Aquarius";
    if(date>=date - 3)
	cout<<"you are a cusp baby and with Pisces sign\n";
    else if(date <=date + 3)
	cout<<"you are a cusp baby and with Capricorn sign \n";}
	    
    if (month == 2 && date >= 20 || month == 3 && date <= 20)
    {cout<<"Your sign is Pieces"; 
    if(date >= date - 3)
    cout<<"you are a cusp baby and with Aries sign \n";
    else if(date <= date + 3)
    cout<<"you are a cusp baby and with Aquarius sign \n";}
     
    cout<<endl;
    system ("pause");
}
return 0;
}
