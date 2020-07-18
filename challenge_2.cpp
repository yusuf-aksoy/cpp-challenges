//password generator program.//sifre olusturucu program
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	srand(time(0));
	string figures="0123456789";
	string small_letters="qwertyuopasdfghjklzxcvbnm";
	string capital_letters="QWERTYUOPASDFGHJKLZXCVBNM";
	string symbols="~'!@#$%^&*()-_+={}[]|\\:;\"<>,./?";
	int character_number;
	string password="";
char choice;
	cout<< "Do you want the password to can contain a symbol? (y/n)"; //sifreniz sembol icerebilsin mi?
	cin>>choice;
	if(choice=='y')
	password.append(symbols);
	cout<< "Do you want the password to can contain a small letter? (y/n)"; //sifreniz kucuk harf icerebilsin mi?
	cin>>choice;
	if(choice=='y')
	password.append(small_letters);
	cout<< "Do you want the password to can contain a capital letter? (y/n)"; //sifreniz buyuk harf icerebilsin mi?
	cin>>choice;
	if(choice=='y')
	password.append(capital_letters);
	cout<< "Do you want the password to can contain a figure? (y/n)"; //sifreniz rakam icerebilsin mi?
	cin>>choice;
	if(choice=='y')
	password.append(figures);
	cout<<"Enter the character number of your password:";//sifrenizin karakter sayisini giriniz.
	cin>>character_number;
	cout<<"Password has been creating: ";//sifre olusturuluyor 
	for(int i=0;i<character_number;i++){
	cout<<password[rand()%(password.length()-0+1)+0]; //sifre yaziliyor//typing password.
	}
	return 0;
}
