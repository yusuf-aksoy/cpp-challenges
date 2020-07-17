/*
dinamik bellek kullanýmýyla n tane  sayýnýn faktoriyelini ekranda gösteren program yazýnýz.
write a program that shows  factorial of n  pieces numbers using dynamic memory usage.

Örnek çýktý
Example output

How many numbers will be entered? //kaç tane sayý girilecek
3
number 1: 3 //1. sayý
number 2: 4 //2. sayý
number 3: 5 //3. sayý
Calculating...
number 1: 3, factorial: 6             //sayý 1: 3, faktoriyel: 6
number 2: 4, factorial: 24            //sayý 2: 4, faktoriyel: 24
number 3: 5, factorial: 120           //sayý 3: 5, faktoriyel: 120

*/
#include <iostream>
using namespace std;
int main(){
	int *FactorialofNumber,temp=0;
	int AmountofNumber;
	cout<<"How many numbers will be entered?\n";   //kaç tane sayý girilecek
	cin>>AmountofNumber;
 FactorialofNumber=new int[AmountofNumber];
 if(FactorialofNumber==0)
 {
 	cout<<"Allocation error"<<endl; //yer tahsisi hatasý
 	return 0;
 	
 }
 for(int i=0;i<AmountofNumber;i++){
 	cout<<"number "<<i+1<<": ";
 	cin>>*(FactorialofNumber+i);
 }
 cout<< "Calculating...\n";        //hesaplanýyor
  for(int i=0;i<AmountofNumber;i++){
  	temp=FactorialofNumber[i];
  	for(int j=1;j<temp;j++)
			FactorialofNumber[i]*=j;
			cout<<"Number "<<i+1<<": "<<temp<<", factorial:";
			cout<<FactorialofNumber[i]<<endl;
  }
  delete[] FactorialofNumber;
  return 0;
 
}


