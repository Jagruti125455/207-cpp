// factorial number
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,fact=1,no;
	clrscr();
	cout<<"enter the number";
	cin>>no;
    if(no==0)
	{
	 cout<<fact;
	}
    else
	{
      for(i=1;i<=no;i++)
	{
	 fact=fact*i;
	 cout<<no<<"*"<<i<<"="<<fact<<endl;
	}
       }
getch();
}