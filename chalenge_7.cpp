/*
prediction game among 1-10 numbers
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int prediction=11,_trueNumber,counter=0;
	_trueNumber=rand()%(10-1+1)+1;
	do{
	cout<<"predict a number among 1-10"<<endl;
	cout<<"Enter your prediction:";
	cin>>prediction;
	if(prediction>_trueNumber){
		cout<<"less. "<<endl;
		counter++;

	}
	else if(prediction<_trueNumber){
		cout<<"bigger"<<endl;
		counter++;
	}
	else{
		counter++;
		cout<<"Congratulation! Your prediction is true.";
		cout<<"you found in "<<counter<<" attempts."<<endl;
		
	}
}while(_trueNumber!=prediction);
return 0;
}
