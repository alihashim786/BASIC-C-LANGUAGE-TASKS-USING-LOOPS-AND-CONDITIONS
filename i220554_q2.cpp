#include<iostream>
using namespace std;
main(){

          //The comments I have put is just for the original pattern when user will enter one like e=1 and when user will enter number of rows equal to 39




	menu:
	int x,w,v,space;
	cout<<"Enter the number of rows greater than or equal to 8\n";
	cin>>x;
	if (x>=8){
	
	cout<<"Enter 1 for original pattern \nEnter 1.5 for 50% larger and wider pattern \nEnter 2 for double the pattern size\n\n";
	float e;
	cin>>e;
	int r=15;
	int y=17;
	int d=18;
	if(e==1){
			v=x/2;                                                                             // v=39/2 = 19
			w=x-8;                                                                            // w=39-8 = 31
	}
	else if(e==1.5){
		v=x/2;
		x=x+v;
		w=x-8;
		r=15*e;
	 	y=17*e;
	 	d=d*e;
		
	}
	else if(e==2){
		x=x*2;
		v=x/2;
		w=x-8;
		r=15*e;
		y=17*e;
		d=d*e;
	}
	else{
		cout<<"Invalid entry. enter 1 for original pattern,   1.5 for 50% larger and wider pattern,   enter 2 for double the pattern size\n\n";
		goto menu;
		
	}
	for(int i=0;i<=x;i++)                                                                                 //firstly the very last else statement will execute and after that i will become 1
	{
		if(i==1)
		{
			for(int j=0;j<=r+3;j++)                                                            //r=15 so j<=18 so this loop will be executed 19 times
			{
				if(j<=1)                                                                 //only 2 times this statement will become true
				{
					cout<<" ";
				}
				else if((j==2)||(j==3)||(j==4)||(j==r+1)||(j==r+2)||(j==r+3)){        //from j=2 to j=4 then from j=16 to j=18 this statement will execute
					cout<<"-";
				}
				else{                                                              //from j=5 to j=15 this statement will execute
				cout<<"*";
				}
			
			}
		cout<<"\n";
		}
		else if((i>=v)&&(i<=w ))                                                                   //when i=19 this statement will execute
		{
			for(int j=0;j<=r;j++)                                                             //r=15 so j<=15 so 15 times this loop
			{
				
				
				if(j<5)                                                                 //upto j=4 this statement will run and 5 spaces will be printed
				{
					cout<<" ";
				}
				else if((j==7)||(j==r-2))                                            //only for j=7 and j=13
				{
					cout<<"|";
				}
				else                                                              //this statement will execute  for j=5 and j=6 then for j=8 to j=12 then for j=14 and j=15 
				{
				cout<<"*";
				}
			
		}
		cout<<"\n";
		}
		else if((i>=w+1)&&(i<=w+4))                                                                    // when i=32 program will enter here because w=31 so from i=32 to i=35 this will execute
		{
			for(int j=0;j<=r+2;j++)                                                              //r=15 so j<=17 it means this loop will run 17 times
			{
				if(j<=2)                                                                   //this statement will run for j=0,1 and 2
				{
					cout<<" ";
				}
				else if ((j==3)||(j==4)||(j==7)||(j==r+2)||(j==r+1)||(j==r-2))           //this statemet will run for j=3,4,7,13,16 and 17
				{
					cout<<"|";
				}
				else                                                                   //this statement will run for j=5,6 then from 8 to 12 then 14,15
				{
				cout<<"*";
				}
			
		}
		cout<<"\n";
		}
		else if(i==w+5)                                                                     //when i=36 this statement will run
		{
			for(int j=0;j<5;j++)                                                      //here 5 spaces will be given
		{
			cout<<" ";
		}
		for(int f=0;f<=r-5;f++){                                                         //as r=15 so f<=10 means 11 hyphens will be printed
			
				cout<<"-";
		
			
			
		}
		cout<<"\n";
	        }
	else if((i>=w+6)&&(i<=w+9))                                                                //this statement is for i=37 to i=40
	{
			for(int j=0;j<5;j++)                                                      //here 5 spaces will be given
		{
			cout<<" ";
		}
		for(int f=0;f<=r-5;f++){                                                          //as r=15 so f<=10 means 11 ^ will be printed
			
				cout<<"^";
		
			
			
		}
		
		cout<<"\n";
	}
	
		
		else
		{
			for(int j=0;j<5;j++)                                                    //5 spaces will be given
		{
			cout<<" ";
		}
		for(int f=0;f<=r-5;f++)                                                          //r=15 so f<=10 so 11 stars will be printed
		{     
			
				cout<<"*";	
		}
		cout<<"\n";
	        }
	}
}
else {
cout<<"Invalid number of rows\n\n";
goto menu;
}
return 0;
}
