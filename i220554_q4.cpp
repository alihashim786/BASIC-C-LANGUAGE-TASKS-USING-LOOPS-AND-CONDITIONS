#include<iostream>
#include <sstream>
using namespace std;
main(){
	cout<<"ENTER ANY DECIMAL NUMBER\n";
	int n, reversed_number = 0, rem;
	int decimal;
	int remainder;
	stringstream str1;
	string geek;
	cin>>decimal;
	int choice;
	menu:
	cout<<"Press 1 For Converting Decimal Into Binary\n";
	cout<<"Press 2 For Converting Decimal Into Octal\n";
	cout<<"Press 3 For Converting Decimal Into Hexadecimal\n";
	cin>>choice;
	if(choice==1){
	while(decimal>0)
	{
		
		remainder=decimal%2;
	  	str1<<remainder;
		decimal=decimal/2;
		geek = str1.str();
	}
	}
	else if(choice==2){
	while(decimal>0)
	{
		
		remainder=decimal%8;
		str1<<remainder;
		decimal=decimal/8;
		geek = str1.str();
	}
	}
	else if(choice==3){
	while(decimal>0)
	{
		
		remainder=decimal%16;
		str1<<remainder;
		decimal=decimal/16;
		geek = str1.str();
	}
	}
	else{
		cout<<"Your Choice Is Wrong\n";
		goto menu;
	}
  	int len = geek.length();
  	int y=len-1;
  	for(int i=0;i<(len/2);i++){

    char temp = geek[i];
    geek[i] = geek[y];
    geek[y] = temp;
    y = y-1;

  }
  cout<<"Your Result Is "<<geek<<endl;
}
