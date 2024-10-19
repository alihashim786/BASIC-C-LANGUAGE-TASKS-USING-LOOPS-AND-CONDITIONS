#include<iostream>
#include<string.h>
using namespace std;
int main()
{

cout<<"\n\n                    SMAHR Restaurant\n           (The Quality you need)\n\n";
    
    char ans;
    int srno,i,items,moreitems,quantity,bill=0,billT;
    int fin,gri,wra,mar,lbur,cbur,zbur,bbur,fri,vrice,pul,bir,brice,rsalad,csalad,ojuice,lem,naan,kheer,chaye;
    string name,phone;

    
    cout<<"                   Menu\n\n";
    cout<<"Sr.No.         "<<"ITEMS                      "<<"Price\n\n";
    cout<<"1.             "<<"Finger Chicken             "<<"$12\n\n";
    cout<<"2.             "<<"Chicken Grilled            "<<"$14\n\n";
    cout<<"3.             "<<"Chicken Wrap               "<<"$15\n\n";
    cout<<"4.             "<<"Chicken Marsala            "<<"$13\n\n";
    cout<<"5.             "<<"Luger Burger               "<<"$9\n\n";
    cout<<"6.             "<<"Chicken Burger             "<<"$13\n\n";
    cout<<"7.             "<<"Zinger Burger              "<<"$16\n\n";
    cout<<"8.             "<<"Beef Burger                "<<"$12\n\n";    
    cout<<"9.             "<<"Fries                      "<<"$4\n\n";    
    cout<<"10.            "<<"Vegetable Rice             "<<"$10\n\n"; 
    cout<<"11.            "<<"Pulao                      "<<"$14\n\n";    
    cout<<"12.            "<<"Biryani                    "<<"$15\n\n";    
    cout<<"13.            "<<"Buffer Chicken Rice        "<<"$17\n\n";    
    cout<<"14.            "<<"Russian Salad              "<<"$4\n\n";    
    cout<<"15.            "<<"Chicken Salad              "<<"$5\n\n";    
    cout<<"16.            "<<"Orange Juice               "<<"$7\n\n";    
    cout<<"17.            "<<"Lemonade                   "<<"$7\n\n";    
    cout<<"18.            "<<"Naan                       "<<"$1\n\n";    
    cout<<"19.            "<<"Kheer                      "<<"$5\n\n";    
    cout<<"20.            "<<"Chaye                      "<<"$7\n\n";  

    cout<<"What's your name?\n";
    getline(cin,name);
    cout<<"Enter your phone number.\n";
    cin>>phone;  
    
    cout<<"How many items do you want to purchase? \"Maximum order is of 6 items\"\n";
    cin>>items;
    cout<<"\n";
     while(items>6)
     {
     	cout<<"You cannot order more than 6 items. Enter number of the items again\n";
     	cin>>items;
     }
    
    cout<<"PLease enter the serial number of the selected "<<items<<" items\n";
   
    for (int i=1; i<=items; i++)
    {
        cin>>srno;
        cout<<"\n";
        switch(srno){
            case 1:
                  {
                  cout<<"Finger Chicken\n";
                  cout<<"How many plates?\n";
                  cin>>fin;
                  cout<<"\n";
                  bill=bill+(fin*12);
                  break;
                  }
                  
            case 2:
                  {
                  cout<<"Chicken Grilled\n";
                  cout<<"How many plates?\n";
                  cin>>gri;
                  cout<<"\n";
                  bill=bill+(gri*14);
                  break;
                  }
            case 3:
                  {
                  cout<<"Chicken Wrap\n";
                  cout<<"Enter the quantity\n";
                  cin>>wra;
                  cout<<"\n";
                  bill=bill+(wra*15);
                  break;
                  }
            case 4:
            	  {
                  cout<<"Chicken Marsala\n";
                  cout<<"How many plates?\n";
                  cin>>mar;
                  cout<<"\n";
                  bill=bill+(mar*13);
                  break;
                  }
            case 5:
            	  {
                  cout<<"Luger Burger\n";
                  cout<<"Enter the quantity\n";
                  cin>>lbur;
                  cout<<"\n";
                  bill=bill+(lbur*9);
                  break;
                  }
            case 6:
            	  {
                  cout<<"Chicken Burger\n";
                  cout<<"Enter the quantity\n";
                  cin>>cbur;
                  cout<<"\n";
                  bill=bill+(cbur*13);
                  break;
                  }
            case 7:
            	  {	
                  cout<<"Zinger Burger\n";
                  cout<<"Enter the quantity\n";
                  cin>>zbur;
                  cout<<"\n";
                  bill=bill+(zbur*16);
                  break;
                  }
            case 8:
            	  {
                  cout<<"Beef Burger\n";
                  cout<<"Enter the quantity\n";
                  cin>>bbur;
                  cout<<"\n";
                  bill=bill+(bbur*12);
                  break;
                  }
            case 9:
             	  {
                  cout<<"Fries\n";
                  cout<<"Enter the quantity\n";
                  cin>>fri;
                  cout<<"\n";
                  bill=bill+(fri*4);
                  break;
                  }
            case 10:
            	  {
                  cout<<"Vegetable Rice\n";
                  cout<<"How many plates?\n";
                  cin>>vrice;
                  bill=bill+(vrice*10);
                  break;
                  }
            case 11:
            	  {
                  cout<<"Pulao\n";
                  cout<<"How many plates\n";
                  cin>>pul;
                  bill=bill+(pul*14);
                  break;
                  }
            case 12:
            	  {
                  cout<<"Biryani\n";
                  cout<<"How many plates\n";
                  cin>>bir;
                  cout<<"\n";
                  bill=bill+(bir*15);
                  break;
                  }
            case 13:
            	  {
                  cout<<"Buffer Chicken Rice\n";
                  cout<<"How many plates\n";
                  cin>>brice;
                  cout<<"\n";
                  bill=bill+(brice*17);
                  break;
                  }
            case 14:
            	  {
                  cout<<"Russian Salad\n";
                  cout<<"Enter the quantity\n";
                  cin>>rsalad;
                  cout<<"\n";
                  bill=bill+(rsalad*4);
                  break;
                  }
            case 15:
            	  {
                  cout<<"Chicken Salad\n";
                  cout<<"Enter the quantity\n";
                  cin>>csalad;
                  cout<<"\n";
                  bill=bill+(csalad*5);
                  break;
                  }
            case 16:
            	  {
                  cout<<"Orange Juice\n";
                  cout<<"How many glasses?\n";
                  cin>>ojuice;
                  cout<<"\n";
                  bill=bill+(ojuice*7);
                  break;
                  }
            case 17:
            	  {
                  cout<<"Lemonade\n";
                  cout<<"How many glasses?\n";
                  cin>>lem;
                  cout<<"\n";
                  bill=bill+(lem*7);
                  break;
                  }
            case 18:
            	  {
                  cout<<"Naan\n";
                  cout<<"Enter the quantity\n";
                  cin>>naan;
                  cout<<"\n";
                  bill=bill+(naan*1);
                  break;
                  }
            case 19:
            	  {
                  cout<<"Kheer\n";
                  cout<<"How many plates?\n";
                  cin>>kheer;
                  cout<<"\n";
                  bill=bill+(kheer*4);
                  break;
                  }
            case 20:
            	  {
                  cout<<"Chaye\n";
                  cout<<"How many cups?\n";
                  cin>>chaye;
                  cout<<"\n";
                  bill=bill+(chaye*5);
                  break;
                  }
        }
              }
               
               if(items<6){
                cout<<"Do you order anything more?(y/n)\n";
                cin>>ans;
		            if((ans=='Y')||(ans=='y')){
		                cout<<"How many more items you want?"<<endl;
		                menu:
		                cin>>moreitems;
                         
				        if(moreitems+items<=6){
				    cout<<"PLease enter the serial number of the selected items\n"<<endl;
                    
                    for(int j=items;j<(moreitems+items) ;j++){
                    cin>>srno;
                    cout<<"\n";

              switch(srno){
            case 1:
                  {
                  cout<<"Finger Chicken\n";
                  cout<<"How many plates?\n";
                  cin>>fin;
                  cout<<"\n";
                  bill=bill+(fin*12);
                  break;
                  }
                  
            case 2:
                  {
                  cout<<"Chicken Grilled\n";
                  cout<<"How many plates?\n";
                  cin>>gri;
                  cout<<"\n";
                  bill=bill+(gri*14);
                  break;
                  }
            case 3:
                  {
                  cout<<"Chicken Wrap\n";
                  cout<<"Enter the quantity\n";
                  cin>>wra;
                  cout<<"\n";
                  bill=bill+(wra*15);
                  break;
                  }
            case 4:
            	  {
                  cout<<"Chicken Marsala\n";
                  cout<<"How many plates?\n";
                  cin>>mar;
                  cout<<"\n";
                  bill=bill+(mar*13);
                  break;
                  }
            case 5:
            	  {
                  cout<<"Luger Burger\n";
                  cout<<"Enter the quantity\n";
                  cin>>lbur;
                  cout<<"\n";
                  bill=bill+(lbur*9);
                  break;
                  }
            case 6:
            	  {
                  cout<<"Chicken Burger\n";
                  cout<<"Enter the quantity\n";
                  cin>>cbur;
                  cout<<"\n";
                  bill=bill+(cbur*13);
                  break;
                  }
            case 7:
            	  {	
                  cout<<"Zinger Burger\n";
                  cout<<"Enter the quantity\n";
                  cin>>zbur;
                  cout<<"\n";
                  bill=bill+(zbur*16);
                  break;
                  }
            case 8:
            	  {
                  cout<<"Beef Burger\n";
                  cout<<"Enter the quantitu\n";
                  cin>>bbur;
                  cout<<"\n";
                  bill=bill+(bbur*12);
                  break;
                  }
            case 9:
             	  {
                  cout<<"Fries\n";
                  cout<<"Enter the quantity\n";
                  cin>>fri;
                  cout<<"\n";
                  bill=bill+(fri*4);
                  break;
                  }
            case 10:
            	  {
                  cout<<"Vegetable Rice\n";
                  cout<<"How many plates?\n";
                  cin>>vrice;
                  bill=bill+(vrice*10);
                  break;
                  }
            case 11:
            	  {
                  cout<<"Pulao\n";
                  cout<<"How many plates\n";
                  cin>>pul;
                  bill=bill+(pul*14);
                  break;
                  }
            case 12:
            	  {
                  cout<<"Biryani\n";
                  cout<<"How many plates\n";
                  cin>>bir;
                  cout<<"\n";
                  bill=bill+(bir*15);
                  break;
                  }
            case 13:
            	  {
                  cout<<"Buffer Chicken Rice\n";
                  cout<<"How many plates\n";
                  cin>>brice;
                  cout<<"\n";
                  bill=bill+(brice*17);
                  break;
                  }
            case 14:
            	  {
                  cout<<"Russian Salad\n";
                  cout<<"Enter the quantity\n";
                  cin>>rsalad;
                  cout<<"\n";
                  bill=bill+(rsalad*4);
                  break;
                  }
            case 15:
            	  {
                  cout<<"Chicken Salad\n";
                  cout<<"Enter the quantity\n";
                  cin>>csalad;
                  cout<<"\n";
                  bill=bill+(csalad*5);
                  break;
                  }
            case 16:
            	  {
                  cout<<"Orange Juice\n";
                  cout<<"How many glasses?\n";
                  cin>>ojuice;
                  cout<<"\n";
                  bill=bill+(ojuice*7);
                  break;
                  }
            case 17:
            	  {
                  cout<<"Lemonade\n";
                  cout<<"How many glasses?\n";
                  cin>>lem;
                  cout<<"\n";
                  bill=bill+(lem*7);
                  break;
                  }
            case 18:
            	  {
                  cout<<"Naan\n";
                  cout<<"Enter the quantity\n";
                  cin>>naan;
                  cout<<"\n";
                  bill=bill+(naan*1);
                  break;
                  }
            case 19:
            	  {
                  cout<<"Kheer\n";
                  cout<<"How many plates?\n";
                  cin>>kheer;
                  cout<<"\n";
                  bill=bill+(kheer*4);
                  break;
                  }
            case 20:
            	  {
                  cout<<"Chaye\n";
                  cout<<"How many cups?\n";
                  cin>>chaye;
                  cout<<"\n";
                  bill=bill+(chaye*5);
                  break;
                  }
        }
               cout<<"\n";
                    }
                    }
          else {
          cout<<"Your number of orders are more than 6. Please enter no of items again\n";    //else of line 230
                   goto menu; }  
                    }   
                         else if((ans=='N')||(ans=='n')) {        //else if of line 226
                          }
                    }      
                        
          else if(i>=6){                         
               cout<<"Items limit exceeded\n";
               }
               
				
               cout<<"Total Amountt : $"<<bill<<"\n";
               cout<<"GST :           $"<<(bill*0.12)<<"\n";
               billT=bill+(bill*0.12);
               cout<<"Total :         $"<<billT<<"\n\n";
               cout<<"THANKYOU See you soon!\n\n";
               
               
 return 0;
 }
