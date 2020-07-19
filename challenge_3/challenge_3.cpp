/* challenge_3.cpp
There are 18 football teams at super league. In program there is a name of each team. Win is 3 points and draw is 1 point.
According to this write a program and make a flow chart.  */
#include <iostream>
using namespace std;
int main(){
int teamcounter=0,match,point,score1,score2;
string team;
while(teamcounter<18){
cout<<"Team "<<teamcounter+1<<"'s name:\n"; 
cin>>team;
match=1;
point=0;
do{
cout<<"Score of "; 
cout<<match<<". match:\n";
cin>>score1;
cin>>score2;
if(score1>score2) point=point+3;
else if (score1==score2) point=point+1;
match=match+1;
}while(match<6);
cout<<team;
cout<<" Point of team:\n";
cout<<point<<endl;
teamcounter=teamcounter+1;
}
return 0;
}


