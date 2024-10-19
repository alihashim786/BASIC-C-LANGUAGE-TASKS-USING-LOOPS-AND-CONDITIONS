#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
main(){
	cout<<"Enter your required sentence or word\n";
	string h;
	getline(cin,h);
	int n_char=h.length();
	cout<<"No of Characters are :  "<<n_char<<"\n";
	int start = 0;
	string deli=" ";
    int end = h.find(deli);
    string j;
    int count1=0;
    int count2=0;
    int i=0;
    string arr[100];
    while (end!=-1) {
    	count2=count2+1;
        j=h.substr(start,end-start);
        start = end+deli.size();
        end = h.find(deli,start);
        i=i+1;
        arr[i]=j;
        
    }
   for(int i=0;i<n_char;i++){
   		 if(((h[i]>='a')&&(h[i]<='z'))||((h[i]>='A')&&(h[i]<='Z')))
    {
      continue;
    }
    else if((h[i]>='0')&&(h[i]<='9'))
    {
       continue;
    }
    else 
    {
        count1=count1+1;
       
    }

}
 cout<<"No of Special Characters are : "<<count1<<"\n";
 cout<<"No of Words are : "<<count2+1<<"\n";
return 0;
}

