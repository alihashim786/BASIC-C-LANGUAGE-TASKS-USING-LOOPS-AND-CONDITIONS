#include<iostream>
using namespace std;
int main() {

int d,max;
cout<<"Enter the number of Diamonds you want\n";
cin>>d;
cout<<"Enter the largest number you want to be in the pattern\n";
cin>>max;

for (int i=1;i<=max;i++)
{ 
for(int h=1; h<=d; h++){                          
	for(int j=max-1; j>=i;j--)
	{
	cout<<" ";
	}
		for (int k=1;k<=i; k++)
		{
		cout<<i+1-k;
		}
			for (int f=1; f<=i; f++)
			{
			cout<<f;
			}
				for(int j=max-1; j>=i;j--)
				{
				cout<<" ";
				}
				}
cout<<"\n";
}


for(int i=1;i<=max;i++){
    for (int h=1; h<=d; h++) {
                for(int j=1;j<i;j++){
			cout<<" ";
		}
		
		for(int k=max+1-i;k>=1;k--){          
			cout<<k;
		}
		 for(int k=1;k<=max+1-i;k++){           
			cout<<k;
		}

                for(int j=1;j<i;j++){
			cout<<" ";
		}
	}	
		cout<<"\n";
}

return 0;
}

