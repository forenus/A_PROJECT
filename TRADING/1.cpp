#include<iostream>
#include<time.h>
using namespace std;
int main() 
{
     char start;
     float shop(void);
     char choice;

     startL:
         cout<<"\n Please press H to start Shoping for Home Appliances ";
         start:
             cin>>start;

             if (start=='h'|| start=='H')
             {
                float total=shop();
                time_t t=time(NULL);
                tm* tPtr=localtime(&t);

                cout<<"Bill date";
                cout<<tPtr->tm_mday<<endl;
                cout<<1+tPtr->tm_mday<<endl;
                cout<<1900+ tPtr->tm_year<<endl;
                cout<<"Billing  time"<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
                cout<<"Total Bill amount"<<total<<endl;
                if (total>50000&&100000)
                {
                    total=total-(0.05*total);
                    cout<<"Total discount will 5%"<<endl;
                }
                else if (total>100000&&125000)
                {
                    total=total-(0.1*total);
                    cout<<"Total discount will 10%"<<endl;
                }
                else if (total>100000&&150000)
                {
                    total=total-(0.25*total);
                    cout<<"Total discount will 25%"<<endl;
                }
                else if (total>150000)
                {
                    total=total-(0.5*total);
                    cout<<"Total discount will 50%"<<endl;
                }
                cout<<"\n Total bill amount is :"<<total<<endl;
                Again:
                   cout<<"\n Do You Want to shoping anain Y or N";
                   cin>>choice;
                   if (choice=='y'||choice=='Y')
                   {
                       goto startL;
                   }
                   else if (choice=='n'||choice=='N')
                   {
                       cout<<"\n Thanks for shoping";
                   }
                   else
                   { cout<<"\n You Have an enter a wrong option plese plese press H";
                    goto Again;
                   }
                   
                   

                
             }
             else{
                cout<<"\n You have enter a wrong option plese press H for start again ";
                goto start;
             }
 }         
         float shop()
           {
             shop:
                char choice;
                char product;
                int quantity;
                float bill=0;
                itemLevel:
                      cout<<"*********************WELCOME*******************"<<endl;
                      cout<<"**********PLESE FOLLOW THE INSTRUCTION *********"<<endl;
                      cout<<"| 1) PLESE ENTER TO R FOR REFIGITER ORDER"<<endl;
                      cout<<"| 2) PLESE ENTER TO W FOR WASSINGMACHINE ORDER"<<endl;
                      cout<<"| 3) PLESE ENTER TO T FOR TELIVISON ORDER"<<endl;
                      cout<<"| 4) PLESE ENTER TO M FOR MICROWAVE ORDER"<<endl;
                      cout<<"| 5) PLESE ENTER TO A FOR AIR CONDINCER  ORDER"<<endl;
                      cin>>choice;
                      if (choice=='r'||choice=='R'||choice=='w'||choice=='W'||choice=='t'||choice=='T'||choice=='m'||choice=='M'||choice=='a'||choice=='A')
                      {
                         if (choice=='r'||choice=='R')
                         {
                            cout<<"***********Refrigerator Details************"<<endl;
                            cout<<"| 1) Whirpool => 40000"<<endl;
                            cout<<"| 2) Samsaung => 25000"<<endl;
                            cout<<"| 3) Haier    => 20000"<<endl;
                            cout<<"| 4) Voltas   => 150000"<<endl;
                            cout<<"| 5) Godrej   => 10000"<<endl;
                            cout<<"| 6) Panasonic   => 5000"<<endl;

                            cout<<"Plese Enter Your Choice"<<endl;
                            cin>>product;
                            if (product=='1')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*40000;
                            }
                            else if (product=='2')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*25000;
                            }
                            else if (product=='3')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*20000;
                            }
                            else if (product=='4')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*15000;
                            }
                            else if (product=='5')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*10000;
                            }
                            else if (product=='6')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*5000;
                            }
                            else
                            {
                                cout<<"\nInvalid Input";
                                goto itemLevel;
                            }
                            
                          }
                          if (choice=='w'||choice=='W')
                          {
                            cout<<"***********TELIVISON Details************"<<endl;
                            cout<<"| 1) BOSCH => 40000"<<endl;
                            cout<<"| 2) LG => 25000"<<endl;
                            cout<<"| 3) IFB    => 20000"<<endl;
                            cout<<"| 4) HAIER   => 150000"<<endl;
                            cout<<"| 5) MAYTAG   => 10000"<<endl;
                            cout<<"| 6) SAMSAUNG   => 5000"<<endl;

                            cout<<"Plese Enter Your Choice"<<endl;
                            cin>>product;
                            if (product=='1')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*40000;
                            }
                            else if (product=='2')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*25000;
                            }
                            else if (product=='3')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*20000;
                            }
                            else if (product=='4')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*15000;
                            }
                            else if (product=='5')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*10000;
                            }
                            else if (product=='6')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*5000;
                            }
                            else
                            {
                                cout<<"\n\tInvalid Input";
                                goto itemLevel;
                            }
                          }
                          if (choice=='m'||choice=='M')
                          {
                            cout<<"***********MICROWAVE Details************"<<endl;
                            cout<<"| 1) LG 28 L  => 40000"<<endl;
                            cout<<"| 2) IFB 30 L => 25000"<<endl;
                            cout<<"| 3) Samsung  => 20000"<<endl;
                            cout<<"| 4) Godrej    => 150000"<<endl;
                            cout<<"| 5) Panasonic => 10000"<<endl;
                            cout<<"| 6) BAJAJ    => 5000"<<endl;

                            cout<<"Plese Enter Your Choice"<<endl;
                            cin>>product;
                            if (product=='1')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*40000;
                            }
                            else if (product=='2')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*25000;
                            }
                            else if (product=='3')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*20000;
                            }
                            else if (product=='4')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*15000;
                            }
                            else if (product=='5')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*10000;
                            }
                            else if (product=='6')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*5000;
                            }
                            else
                            {
                                cout<<"\n\tInvalid Input";
                                goto itemLevel;
                            }
                         }
                         if (choice=='a'||choice=='A')
                         {
                            cout<<"***********MICROWAVE Details************"<<endl;
                            cout<<"| 1) Samsung  => 40000"<<endl;
                            cout<<"| 2) Godrej => 25000"<<endl;
                            cout<<"| 3) Daikin  => 20000"<<endl;
                            cout<<"| 4) Carrier    => 150000"<<endl;
                            cout<<"| 5) Hitachi  => 10000"<<endl;
                            cout<<"| 6) Panasonic    => 5000"<<endl;

                            cout<<"Plese Enter Your Choice"<<endl;
                            cin>>product;
                            if (product=='1')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*40000;
                            }
                            else if (product=='2')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*25000;
                            }
                            else if (product=='3')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*20000;
                            }
                            else if (product=='4')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*15000;
                            }
                            else if (product=='5')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*10000;
                            }
                            else if (product=='6')
                            {
                                cout<<"Plese Enter the quantity of product "<<endl;
                                cin>>quantity;
                                bill=bill+quantity*5000;
                            }
                            else
                            {
                                cout<<"\n\tInvalid Input";
                                goto itemLevel;
                            }
                        }
                      }
                      else{
                        cout<<"You have enter the wrong option plese try again";
                        goto shop;
                      }
                      return bill;
            }            
