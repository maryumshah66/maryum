#include <iostream>

using namespace std;
int main()
{
float weight,cost;
int opt;
char repeat;
do{
	cout<<"enter the weight of parcel="<<endl;
	cin>>weight;
	do{
		cout<<"delivery within city press 1 o 2 anywhere in the country=";
		cin>>opt;
	}
	while (opt<1||opt>2);
	if (opt==1)
	cost=(weight*2)+20;
	else
	cost=(weight*2)+40;
	cout<<"total cost="<<cout<<endl;
	cout<<"enter 'y' or'Y' for other parcel=";
	cin>>repeat;
}
while(repeat=='y'||repeat=='Y');


return 0;
}

