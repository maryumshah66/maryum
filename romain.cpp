#include <iostream>

using namespace std;
int main()
{
	int year;
	char opt;
	string M[]={"","M","MM","MMM"};
	string C[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	string X[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	string I[]={"","I","II","III","IV","IIV","V","VI","VII","IX"};
	do{
	cout<<"Enter the year btw the range of 1000 to 3000 needed to convert in Romain";
	cin>>year;	}
	while(year<1000||year>3000);
	 
	 string thousands=M[year/1000];
	 string hundreds=C[(year%1000)/100];
	 string tens=X[(year%100)/10];
	 string ones=I[year%10];
	 
	 string ans=thousands+hundreds+tens+ones;
	 cout<<ans<<endl;
	 
	 cout<<"want to continue for other conversions=";
	 cin>>opt;
while (opt=='y'||opt=='Y');
return 0;
}

