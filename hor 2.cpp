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
    { cout<<"Your sign is Aries \n.Leo and Sagittarius will be compatible for your birthday\n";
    if(date >= date-3)
	cout<<" you are a cusp baby and with Taurus sign \n";
    else if(date <= date +3)
	cout<<" you are a cusp baby and with  Pieces sign"; 
	cout<<endl;}
	cout<<"Leo and Sagittarius will be compatible for your birthday\n";
	
	
    if (month == 4 && date >= 21 || month == 5 && date <= 21)
    {cout<<"Your sign is Taurus"; 
    cout<<endl;
    if(date >= date - 3)
	cout<<" you are a cusp baby and with Gemini sign \n";
    else if(date <= date + 3)
	cout<<" you are a cusp baby and with Aries sign \n";
	cout<<" Virgo and Capricorn will be compatible for your birthday\n";
    cout<<endl;}
    
    if (month == 5 && date >= 22 || month == 6 && date <= 22)
    {cout<<"Your sign is Gemini";
    cout<<endl;
    if(date >= date - 3)
	cout<<"you are a cusp baby and with Cancer sign \n";
    else if(date <=date + 3)
	cout<<"you are a cusp baby and with Taurus sign \n";
	cout<<" Libra and Aquarius will be compatible for  your birthday\n";
	cout<<endl;	}
    
    if (month == 6 && date >= 23 || month == 7 && date <= 23)
    {cout<<"Your sign is Cancer";
    cout<<endl;
    if(date >= date - 3)
	cout<<"you are a cusp baby and with sign Leo \n";
    else if(date <= date + 3)
    cout<<"you are a cusp baby and with  Gemini sign \n";
	cout<<" Scorpio and Pisces will be compatible for your birthday\n";
	cout<<endl;}
     
    if (month == 7 && date >= 24 || month == 8 && date <= 23)
    {cout<<"Your sign is Leo";
    cout<<endl;
    if(date >= date - 3)
	cout<<"you are a cusp baby and with  Virgo sign \n";
    else if(date <= date + 3)
	cout<<"you are a cusp baby and with Cancer sign \n";
	cout<<" Aries and Sagittarius will be compatible for your birthday\n";
	cout<<endl;	}
	
    if (month == 8 && date >= 24 || month == 9 && date <= 23)
    {cout<<"Your sign is Virgo";
    cout<<endl;
    if(date >=date - 3)
	cout<<"you are a cusp baby and with Libra sign \n";
	else if(date <=date + 3)
	cout<<"you are a cusp baby and with  Leo sign \n";
	cout<<"Taurus and Capricorn will be compatible for your birthday \n";
	cout<<endl;	}
	
    if (month == 9 && date >= 24 || month == 10 && date <= 23)
    {cout<<"Your sign is Libra"; 
    cout<<endl;
    if(date >= date - 3)
	cout<<"you are a cusp baby and with  Scorpio sign \n";
    else if(date <= date + 3)
    cout<<"you are a cusp baby and with  Virgo sign \n";
	cout<<" Gemini and Aquarius will be compatible for your birthday\n";
	cout<<endl;
	}
    
    if (month == 10 && date >= 24 || month == 11 && date <= 22)
    {cout<<"Your sign is Scorpio";
    cout<<endl;
    if(date >= date - 3)
	cout<<"you are a cusp baby and with  Sagitarius sign \n";
    else if(date <= date + 3)
	cout<<"you are a cusp baby and with Libra sign \n";
	cout<<" Cancer and Pisces will be compatible for  your birthday\n";
	cout<<endl;
	}
    
    if (month == 11 && date >= 24 || month == 12 && date <= 21)
    {cout<<"Your sign is Saguittarius";
    cout<<endl;
    if(date >= date - 3)
	cout<<"you are a cusp baby and with Sagitarius sign \n";
    else if(date <= date + 3)
	cout<<"you are a cusp baby and with Libra sign \n";
	cout<<" Aries and Leo will be compatible for your birthday\n";
	cout<<endl;
	}
	 
    if (month == 12 && date >= 22 || month == 1 && date <= 20)
    {
	cout<<"Your sign is Capricorn";
	cout<<endl;
    if(date >=date - 3)
    cout<<"you are a cusp baby and with Aquarius sign \n";
    else if(date <= date +3)
	cout<<"you are a cusp baby and with Sagittarius sign \n";
	cout<<" Taurus and Virgo will be compatible for your birthday\n";
	cout<<endl;
	}
	 
    if (month == 1 && date >= 21 || month == 2 && date <= 19)
    {cout<<"Your sign is Aquarius";
    cout<<endl;
    if(date>=date - 3)
	cout<<"you are a cusp baby and with Pisces sign\n";
    else if(date <=date + 3)
	cout<<"you are a cusp baby and with Capricorn sign \n";
	cout<<" Gemini and Libra will be compatible for your birthday \n";
	cout<<endl;
	}
	    
    if (month == 2 && date >= 20 || month == 3 && date <= 20)
    {cout<<"Your sign is Pieces"; 
    cout<<endl;
    if(date >= date - 3)
    cout<<"you are a cusp baby and with Aries sign \n";
    else if(date <= date + 3)
    cout<<"you are a cusp baby and with Aquarius sign \n";
	cout<<" Cancer and Scorpio will be compatible  for your birthday\n";
	cout<<endl;
	}
     
    cout<<endl;
    system ("pause");
}
return 0;
}
