//write a program  that user inputs a n integer and program calculates result of  formula  in given picture.
#include <cmath>
#include <iostream>
using namespace std;
int main(){
int i;
double n,sum;
cout<<"enter n number:";
cin>>n;
sum=0;
i=0;
while(i<n){
sum+=(pow(-1,i)*((1)/((2*i)+1)));
i++;
}
cout<<"result:"<<sum<<endl;
return 0;
}
