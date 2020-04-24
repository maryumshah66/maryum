#include <iostream>
using namespace std;
 
int main()
{
	double y,R;
	double Fb;
	cout<<"Enter the weight of fluid (in pounds)=";
	cin>>y;
	cout<<"Enter the radius of a sphere (in feet)=";
	cin>>R;
	Fb =62.4*((4 *3.14 * R * R * R )/3);
	
	if (Fb>=y)
	
	cout<<"It will float in water"<<endl;
    else 
    
	cout<<"it will sink in water"<<endl;
	
	return 0;
}
	
