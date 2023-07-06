#include<iostream.h>
#include<conio.h>
int main()
{
int number,i=1;
cout<<"\n Enter A number for the Multiplication:";
cin>>number;

cout<<"\n TABLE OF "<<number<<":"<<endl;
for(i=1;i<=10;i++){
    cout<<number<<"*"<<i<<"="<<(number*i)<<endl;
    }
    getch();
    return 0;
}