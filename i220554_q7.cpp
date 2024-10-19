#include<iostream>
#include <string>
#include <typeinfo>
#include <sstream>
using namespace std;
int main(){
       
	string word,rollno;
	cout<<"Enter a word of maximum 6 alphabets\n";
	getline(cin,word);
	cout<<"Enter your roll number of maximum 6 digits\n";
	getline(cin,rollno);
        int len=word.length();
	int len2=rollno.length();
	int alpha[len];
	int digit[len];
	      if((len<=6)&&(len2<=6)){
/*
for (int i=0;i<len;i++){
	alpha[i]=word[i];
	digit[i]=rollno[i]-48;
}
for (int i=0;i<len;i++){
	cout<<alpha[i];
	cout<<digit[i];
}*/

	   /**/  //[] they are basically string indexes and the number in there defines the position of the alphabet of input word. It's function is to convert that alphabet of the input word  into it's ASCII value and i am storing that ASCII value in a specific variable and I decalre that variable to int because all ASCII values are integers
	      
			int firstalpha=word[0];       //0 means first position or alphabet of that word
			int secondalpha=word[1];
			int thirdalpha=word[2];
			int fourthalpha=word[3];
			int fifthalpha=word[4];
			int sixthalpha=word[5];
		
		
		//now i will separate each digit of my roll no and will store it to the specific variable by using string indexes
		 
		 //in this step the ASCII of first digit of roll no is stored in "firstdigit" variable 
		        int firstdigit=rollno[0];  
		//  in this step i have subtracted 48 from "firstdigit" variable so that i can store that specific number in "firstdigit" variable. For example first digit is 5 first of all i will store it's ASCII value (which is "53") in specific variable and then i will subtract 48 from it so i will get 5 again. I have used 48 because it's the ASCII value of 0                           
		        firstdigit=firstdigit-48;                     
			
			int seconddigit=rollno[1];
			seconddigit=seconddigit-48;
			
			int thirddigit=rollno[2];
			thirddigit=thirddigit-48;
			
			int fourthdigit=rollno[3];
			fourthdigit=fourthdigit-48;
			
			int fifthdigit=rollno[4];
			fifthdigit=fifthdigit-48;
			
			int sixthdigit=rollno[5];
			sixthdigit=sixthdigit-48;
			
			
			 cout<<"The ecryption is : "<<firstalpha<<" "<< firstdigit<<" "<<secondalpha<<" "<< seconddigit <<" "<< thirdalpha <<" "<< thirddigit<<" "<< fourthalpha<<" "<< fourthdigit<<" "<<fifthalpha<<" "<< fifthdigit <<" "<< sixthalpha <<" "<< sixthdigit<<"\n";
			
	}
	else {
	cout<<"INVALID input. PLease enter less than 6 characters\n";
	}
						
     
      return 0;
      }
