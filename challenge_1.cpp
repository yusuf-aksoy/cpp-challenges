/*
dinamik bellek kullan�m�yla n tane  say�n�n faktoriyelini ekranda g�steren program yaz�n�z.
write a program that shows  factorial of n  pieces numbers using dynamic memory usage.

�rnek ��kt�
Example output

How many numbers will be entered? //ka� tane say� girilecek
3
number 1: 3 //1. say�
number 2: 4 //2. say�
number 3: 5 //3. say�
Calculating...
number 1: 3, factorial: 6             //say� 1: 3, faktoriyel: 6
number 2: 4, factorial: 24            //say� 2: 4, faktoriyel: 24
number 3: 5, factorial: 120           //say� 3: 5, faktoriyel: 120

*/
#include <iostream>
using namespace std;
int main(){
	int *FactorialofNumber,temp=0;
	int AmountofNumber;
	cout<<"How many numbers will be entered?\n";   //ka� tane say� girilecek
	cin>>AmountofNumber;
 FactorialofNumber=new int[AmountofNumber];
 if(FactorialofNumber==0)
 {
 	cout<<"Allocation error"<<endl; //yer tahsisi hatas�
 	return 0;
 	
 }
 for(int i=0;i<AmountofNumber;i++){
 	cout<<"number "<<i+1<<": ";
 	cin>>*(FactorialofNumber+i);
 }
 cout<< "Calculating...\n";        //hesaplan�yor
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


