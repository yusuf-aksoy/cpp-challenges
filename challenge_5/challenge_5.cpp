/*
Draw a flow chart of an algorithm to print Floyd's Triangle.
Number of rows in Floyd's triangle will be given from keyboard.
Sample triangle for 4 rows is as shown below
1
01
101
0101
*/
#include <iostream>
using namespace std;
int main(){
	int row_number,row_counter,column;
	bool state;
	
	cout<<"enter row number:";
	cin>>row_number;
	row_counter=1;
	do{
	if(row_counter%2==0){
		state=false;
		column=0;
		do{
		cout<<state;
			if(state==false){
		state=true;
		column=column+1;
            }else{
            	state=false;
            	column=column+1;
			}
            }while(column<row_counter);
            cout<<endl;
            row_counter=row_counter+1;
	}
	else{
		state=true;
		column=0;
		do{
		cout<<state;
		if(state==true){
			state=false;
			column=column+1;
		}
		else{
			state=true;
			column=column+1;
		}
		}while(column<row_counter);
		cout<<endl;
		row_counter=row_counter+1;
	}
	}while(row_counter<=row_number);
 return 0;

	
}
