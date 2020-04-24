#include<iostream>
using namespace std;
main()
{
	double Weight_on_Moon, Weight_on_Earth;
	double Mass;
	char Choice;
	cout<<"Enter the Mass of a Car=";
	cin>>Mass;
	
	cout<<"PRESS E for Mass on Earth and M for Moon."<<endl;
	cin>>Choice;
	
	if (Choice=='E')
	{
		Weight_on_Earth= Mass*(9.8/2);
		cout<<"The Weight of Car on Earth =";
		cout<<Weight_on_Earth;
	}
	else 
	{
     	Weight_on_Moon=Mass*(9.8/2)/6;
	    cout<<"The Weight of Car on Moon=";
     	cout<<Weight_on_Moon;
	}
	return 0;
}
