/*
carpim tablosunu ogrenmeye calisan cocuklara yonelik bir program yazmaniz isteniyor. kullanicidan carpimi yapilacak sayi istenir ve 1den 9a kadar
sayilarla carpim degeri kullaniciya sorulur. Kullanici yanlis cevap verirse dogru cevap gosterilerek bir sonraki soruya gecilir. Soz konusu
sayiya ait carpim tablosu bittiginde kullaniciya daha devam edip etmeyecegi sorulur.kullanici n karakterini girene kadar ayni sayi carpim tablosu
sorulari sorulmaya devam edilir. Kullanicinin girdigi sayi 0'dan kucuk sayilar icin "sayi sifirdan buyuk olmalidir" mesaji verilir
ve tekrar girme imkani verilir.

Ornek cikti:
Sayi giriniz: 4
4*1=4
4*2=8
4*3=12
4*4=15
Yanlis yanit...
dogru yanit: 4*4=16
4*5=20
devam etmek istiyor musunuz(y/n) n

You are asked to write a program for children trying to learn the multiplication table. the number is asked to be made from the user and 1 to 9
The number of carpram value is asked to the user. If the user answers incorrectly, the correct answer is shown and the next question is passed. Aforementioned
When the number of carpets table is finished, the user will be asked whether to continue the same number.
questions continue to be asked. "Number must be greater than zero" message is given for numbers smaller than 0 entered by the user
and the possibility to re-enter is given.

Example output:
Enter the number: 4
4 * 1 = 4
4 * 2 = 8
4 * 3 = 12
4 * 4 = 15
Wrong answer ...
The correct answer: 4 * 4 = 16
4 * 5 = 20
do you want to continue (y / n) n

*/

#include <iostream>
using namespace std;
int main(){
int _number,counter,user_answer,true_answer;
char choice;

do{
do{
cout<<"enter number:";
cin>>_number;
if(_number<=0) cout<<"number must be greater than zero\n";
}while(_number<=0);
counter=1;
do{
cout<<_number<<"*"<<counter<<"=";
cin>>user_answer;
true_answer=_number*counter;
if(true_answer!=user_answer){
	cout<<"wrong answer\ntrue answer is "<<_number<<"*"<<counter<<'='<<true_answer<<endl;
}
counter=counter+1;
}while(counter<10);
cout<<"Do you want to continue?(y/n)\n";
cin>>choice;
}while(((choice!='n')));
return 0;
}

