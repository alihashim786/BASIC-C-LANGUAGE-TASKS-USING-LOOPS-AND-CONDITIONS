#include<iostream>
#include <sstream>
using namespace std;
int main(){
	long long int number;
	//this variable is the starting point of storing my ascc values and it is also conrolling my while loop
	int ascc_start=0;
	//this variable is for ending point of ascc values 
	int ascc_end=2;
	//this variable is for starting point of my roll value
	int roll_start=2;
	//first of all my string is empty for appending roll number into it
	string a="";
	int l=0;
	char ascc_val[1000];
	cout<<"\nEnter the Encryption key to decrypt it\n";
	cin>>number;
	stringstream ss;
	ss<<number;
	string roll_val;
	//converting my number into string
	string str= ss.str();
	//for length of string 
	int length=str.length();
	while(ascc_start<length){
	//it is for separating my ascii characters
	string ascc = str.substr(ascc_start,ascc_end-ascc_start);
	//it is for separating my roll number
	string roll=str.substr(roll_start,1);
	roll_start=roll_start+3;
	ascc_start=ascc_end+1;
	ascc_end=ascc_end+3;	
	stringstream ss2;
	//ineteger and long datatypes are small for storing any big number
	long long int num;
   	ss2<<ascc;
   	ss2>>num;	
   	//converting my ascc11 number into character
   	char p=char(num);
  	ascc_val[l]=p;
  	l=l+1;
  	// appending my roll value of roll into roll_val variable one by one
  	roll_val=a.append(roll);
   }
   
   	cout<<"The Decrypted sentence or word form of given ASCII is :  "<<ascc_val<<"\n";
   	cout<<"After Decryption Roll no :  "<<roll_val;
   	cout<<"\n\n";
   	return 0;
  
}
