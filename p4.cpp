#include<iostream>
using namespace std;
int main()
{
	int n,x=0,y=0,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s>60) 
		 {
		x++;}
		if(s>85) 
		{
		 y++;}
		
	}
	int a=0,b=0;
	a=(x*100.0)/(n*1.0)+0.5;
	b=(y*100.0)/(n*1.0)+0.5;
	printf("%d%\n%d%\n",a,b);
    return 0;

}
