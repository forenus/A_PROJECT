using namespace std;
#include<iostream>
int main()
{
    int quant;
    int choice;
    // QUANTITY 
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    // FOOD ITEM SOLID
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    // TOTAL PRACE OF ITEMS
    int Total_rooms=0, Total_pasta=0, Totalburger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;


    cout<<"\n\tQuantity of items we have ";
    cout<<"\n ROOMS AVALIBLE  ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger";
    cin>>Qburger;
    cout<<"\n Quantity of noodles";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll";
    cin>>Qchicken;


    cout<<"\n\t\t PLESE SELECT FROM THE MENU OPTION";
    cout<<"\n\n1) ROOMS";
    cout<<"\n\n2) PASTA";
    cout<<"\n\n3) BURGER";
    cout<<"\n\n4) NOODLES";
    cout<<"\n\n5) SHAKE";
    cout<<"\n\n6) CHICKEN-ROOL";
    cout<<"\n\n7) INFORMATION REGARDING SALES AND COLLECTION";
    cout<<"\n\n8) EXIT";

    cout<<"\n\n PLESE ENTER YOUR CHOICE";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n\n Enter the number of rooms you want: ";

        cin>>quant;
        if (Qrooms-Srooms >=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant<<"rooms/rooms have beenalloated to you";
        }
        else
        {
            cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
        }
         break;
    case 2:
        cout<<"\n\n Enter the number of rooms you want: ";

        cin>>quant;
        if (Qrooms-Srooms >=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant<<"rooms/rooms have beenalloated to you";
        }
        else
        {
            cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
        }
         break;
    
    
    default:
        break;
    }


}