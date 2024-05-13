#include <iostream>
#include <ctime> //rand() function
#include <string>
using namespace std;
void lottery()
{
    cout<<"*******************LOTTERY TIME*****************"<<endl;
    cout<<"You purchased above $100,so lets play lottery!!"<<endl;
    srand(time(NULL));
    int random=(rand()%5)+1;
    switch(random)
    {
        case 1:
        {
        cout<<"You won flight tickets to GOA!!"<<endl;
        cout<<"CONGRATS"<<endl;
        break;
        }

        case 2:
        {
        cout<<"You won concert tickets!!"<<endl;
        cout<<"CONGRATS"<<endl;
        break;
        }

        case 3:
        {
        cout<<"You won h&m shopping voucher!!"<<endl;
        cout<<"CONGRATS"<<endl;
        break;
        }

        case 4:
        {
        cout<<"You won tshirt"<<endl;
        cout<<"CONGRATS"<<endl;
        break;
        }

        case 5:
        {
        cout<<"You got tissues"<<endl;
        cout<<"Better luck next time :)"<<endl;
        break;
        }

        default:
        cout<<"just something random!!"<<endl;
    }
}
float veggies()
{
    cout<<"**********************************************"<<endl;
    cout<<"***********VEGGIES**********"<<endl;
    cout<<"**********************************************"<<endl;
    int choice =0;
    float total =0.0;
    do{
    cout<<"Choose your veggies:"<<endl;
    cout<<"1.Capsicum-$2.13/kg"<<endl;
    cout<<"2.Potato-$1.12/kg"<<endl;
    cout<<"3.Onion-$2.01/kg"<<endl;
    cout<<"4.Tomato-$1.32/kg"<<endl;
    cout<<"5.Corriander-$1.89/kg"<<endl;
    cout<<"6.Lettuce-$2.02/kg"<<endl;
    cout<<"7.Cucumber-$1.19/kg"<<endl;
    cout<<"8.Cabbage-$1.02/kg"<<endl;
    cout<<"9.Yam-$2.45/kg"<<endl;
    cout<<"10.Carrot-$3.12/kg"<<endl;
    cout<<"11.Exit"<<endl;
    cin>>choice;
    cin.clear();
    fflush(stdin);

    switch(choice)
    {
        case 1:
        {
            int qty1;
            float price1=2.13;
            cout<<"Capsicum"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty1;
            float cost1=qty1*price1;
            total+=cost1;
            cout<<qty1<<" capsicum cost $"<<cost1<<endl;
            break;
        }

        case 2:
        {
            int qty2;
            float price2=1.12;
            cout<<"Potato"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty2;
            float cost2=qty2*price2;
            cout<<qty2<<" potato cost $"<<cost2<<endl;
            total+=cost2;
            break;
        }

        case 3:
        {
            int qty3;
            float price3=2.01;
            cout<<"Onion"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty3;
            float cost3=qty3*price3;
            cout<<qty3<<" onion cost $"<<cost3<<endl;
            total+=cost3;
            break;
        }
        case 4:
        {
            int qty4;
            float price4=1.32;
            cout<<"Tomato"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty4;
            float cost4=qty4*price4;
            cout<<qty4<<" tomato cost $"<<cost4<<endl;
            total+=cost4;
            break;       
        }

        case 5:
        {
            int qty5;
            float price5=1.89;
            cout<<"Corriander"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty5;
            float cost5=qty5*price5;
            cout<<qty5<<" corriander costs $"<<cost5<<endl;
            total+=cost5;
            break;
        }
        
        case 6:
        {
            int qty6;
            float price6=2.02;
            cout<<"Lettuce"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty6;
            float cost6=qty6*price6;
            cout<<qty6<<" lettuce costs $"<<cost6<<endl;
            total+=cost6;
            break;
        }
        case 7:
        {
            int qty7;
            float price7=1.19;
            cout<<"Cucumber"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty7;
            float cost7=qty7*price7;
            cout<<qty7<<" cucumber costs "<<cost7<<endl;
            total+=cost7;
            break;
        }
        case 8:
        {
            int qty8;
            float price8=1.02;
            cout<<"Cabbage"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty8;
            float cost8=qty8*price8;
            cout<<qty8<<" cabbage costs "<<cost8<<endl;
            total+=cost8;
            break;
        }
        case 9:
        {
            int qty9;
            float price9=2.45;
            cout<<"Yam"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty9;
            float cost9=qty9*price9;
            cout<<qty9<<" yam costs "<<cost9<<endl;
            total+=cost9;
            break;
        }
        case 10:
        {
            int qty10;
            float price10=3.12;
            cout<<"Carrot"<<endl;
            cout<<"Enter the quantity:";
            cin>>qty10;
            float cost10=qty10*price10;
            cout<<qty10<<" carrot costs "<<cost10<<endl;
            total+=cost10;
            break;
        }
        case 11:
        {
            break;
        }
        default:
        {
            cout<<"You have entered a wrong input!!"<<endl;
        }
    }
    }while(choice!=11);
    return total;
}

float fruits()
{
    cout<<"************************************************"<<endl;
    cout<<"FRUITS"<<endl;
    cout<<"************************************************"<<endl;
    int choice=0;
    float total=0.0;
    do
    {
    cout<<"Choose your fruits:"<<endl;
    cout<<"1.Apple-$3.11/kg"<<endl;
    cout<<"2.Banana-$1.55/kg"<<endl;
    cout<<"3.Avacado-$2.12/kg"<<endl;
    cout<<"4.Dargon Fruit-$5.00/kg"<<endl;
    cout<<"5.Kiwi-$3.14/kg"<<endl;
    cout<<"6.Exit"<<endl;
    cin>>choice;
    cin.clear();
    fflush(stdin);

    switch(choice)
    {
    case 1:
    {
        cout<<"APPLE"<<endl;
        int qty1;
        cout<<"Enter the quanitity:";
        cin>>qty1;
        float price1=3.11;
        float cost1=price1*qty1;
        cout<<qty1<<" apples costs "<<cost1<<endl;
        total+=cost1;
        break;
    }

    case 2:
    {
        cout<<"BANANA"<<endl;
        int qty2;
        cout<<"Enter the quantity:";
        cin>>qty2;
        float price2=1.55;
        float cost2=price2*qty2;
        cout<<qty2<<" bananas costs "<<cost2<<endl;
        total+=cost2;
        break;
    }

    case 3:
    {
        cout<<"AVACADO"<<endl;
        int qty3;
        cout<<"Enter the quantity:";
        cin>>qty3;
        float price3=2.12;
        float cost3=price3*qty3;
        cout<<qty3<<" avacados costs "<<cost3<<endl;
        total+=cost3;
        break;
    }

    case 4:
    {
        cout<<"DRAGON FRUIT"<<endl;
        int qty4;
        cout<<"Enter the quantity:";
        cin>>qty4;
        float price4=5.00;
        float cost4=price4*qty4;
        cout<<qty4<<" dragon fruits costs "<<cost4<<endl;
        total+=cost4;
        break;
    }

    case 5:
    {
        cout<<"KIWI"<<endl;
        int qty5;
        cout<<"Enter the quantity:";
        cin>>qty5;
        float price5=3.14;
        float cost5=price5*qty5;
        cout<<qty5<<" kiwis costs "<<cost5<<endl;
        total+=cost5;
        break;
    }
    case 6:
    {
        cout<<"Total cost of fruits:"<<total<<endl;
        break;
    }
    default:
    {
        cout<<"Invalid input!!"<<endl;
    }
    }
    }while(choice!=6);
    return total;
}

float snack()
{
    cout<<"***************************************************"<<endl;
    cout<<"SNACKS"<<endl;
    cout<<"***************************************************"<<endl;
    int choice=0;
    float total=0.0;
    do{
    cout<<"Choose your snacks:"<<endl;
    cout<<"1.Diary Milk-$1.0"<<endl;
    cout<<"2.Lays-$0.80"<<endl;
    cout<<"3.Lollipop-$0.70"<<endl;
    cout<<"4.Crispers-$1.11"<<endl;
    cout<<"5.Exit"<<endl;
    cin>>choice;
    cin.clear();
    fflush(stdin);

    switch (choice)
    {
    case 1:
    {
        cout<<"DIARY MILK"<<endl;
        int qty1;
        cout<<"Enter the quantity:";
        cin>>qty1;
        float price1=1.0;
        float cost1=price1*qty1;
        cout<<qty1<<" diary milk costs "<<cost1<<endl;
        total+=cost1;
        break;
    }
    case 2:
    {
        cout<<"LAYS"<<endl;
        int qty2;
        cout<<"Enter the quantity:";
        cin>>qty2;
        float price2=0.80;
        float cost2=price2*qty2;
        cout<<qty2<<" lays costs "<<cost2<<endl;
        total+=cost2;
        break;
    }
    case 3:
    {
        cout<<"LOLLIPOP"<<endl;
        int qty3;
        cout<<"Enter the quantity:";
        cin>>qty3;
        float price3=0.70;
        float cost3=price3*qty3;
        cout<<qty3<<" lollipops costs "<<cost3<<endl;
        total+=cost3;
        break;
    }
    case 4:
    {
        cout<<"CRISPERS"<<endl;
        int qty4;
        cout<<"Enter the quantity:";
        cin>>qty4;
        float price4=1.11;
        float cost4=price4*qty4;
        cout<<qty4<<" crispers costs "<<cost4<<endl;
        total=cost4;
        break;
    }
    case 5:
    {
        break;
    }
    default:
    {
        cout<<"Invalid input!!"<<endl;
    }
    }
    }while(choice!=5);
return total;
}

int main()
{
    string user_name="";
    string pass_word="";
    string mail_id="";
    string name="";
    string re_pass_word="";
    cout<<"*****************GROCERY SHOPPING******************"<<endl;
    cout<<"-----------WELCOME TO GROCERY BUDDY-----------"<<endl;
    cout<<"SIGN IN/SIGN UP"<<endl;
    if(user_name.empty())
    {
        //sign up
        cout<<"****************************************"<<endl;
        cout<<"SIGN UP"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"MAIL ID:";
        getline(cin>>ws,mail_id);
        cout<<"NAME:";
        getline(cin>>ws,name);
        cout<<"PASSWORD:";
        getline(cin>>ws,pass_word);
        cout<<"RE-ENTER PASSWORD:";
        getline(cin>>ws,re_pass_word);
        
        if(pass_word==re_pass_word)
        {
            int pos=mail_id.find("@");
            user_name=mail_id.substr(0,pos);
            cout<<"Your user_name is:"<<user_name<<endl;
        }
        else
        {
            do{
            cout<<"Your password doesn't match!!"<<endl;
            cout<<"Enter your password again:";
            getline(cin>>ws,re_pass_word);
            }while(pass_word!=re_pass_word);
        }
    }
        //sign in
        string u_n="";
        string p_w="";
        cout<<"*******************************************"<<endl;
        cout<<"SIGN IN"<<endl;
        cout<<"*******************************************"<<endl;
        do{
        cout<<"USERNAME:";
        getline(cin>>ws,u_n);
        }while(user_name!=u_n);
        do{
        cout<<"PASSWORD:";
        getline(cin>>ws,p_w);
        }while(pass_word!=p_w);
    int choice=0;
    cout<<"Hello "<<name<<endl;
    
    float veggie_total=0.0;
    float fruit_total=0.0;
    float snack_total=0.0;
    do
    {
    cout<<"Choose the category:"<<endl;
    cout<<"1.VEGGIES"<<endl;
    cout<<"2.FRUITS"<<endl;
    cout<<"3.SNACKS"<<endl;
    cout<<"4.EXIT"<<endl;
    cin>>choice;
    cin.clear();
    fflush(stdin);//to get rid of whitespaces in buffer

    switch(choice)
    {
        case 1:
        {
            veggie_total=veggies();
            cout<<"***************************"<<endl;
            cout<<"The total cost of veggies:"<<veggie_total<<endl;
            cout<<"***************************"<<endl;
            break;
        }
        case 2:
        {
            fruit_total=fruits();
            cout<<"***************************"<<endl;
            cout<<"The total cost of fruits:"<<fruit_total<<endl;
            cout<<"***************************"<<endl;
            break;
        }
        case 3:
        {
            snack_total=snack();
            cout<<"***************************"<<endl;
            cout<<"The total cost of snacks:"<<snack_total<<endl;
            cout<<"***************************"<<endl;
            break;
        }
        case 4:
        {
            float tot=snack_total+fruit_total+veggie_total;
            int cash;
            cout<<"***********************************************"<<endl;
            cout<<"GROSS TOTAL-------------------------------->"<<tot<<endl;
            do
            {
            cout<<"Please give cash sir/mam"<<endl;
            cin>>cash;
            }while(cash<tot);
            cout<<"CASH GIVEN--------------------------------->"<<cash<<endl;
            float bal=cash-tot;
            cout<<"BALANCE------------------------------------>"<<bal<<endl;
            if(tot>=20)
            {
                lottery();
            }
            cout<<"***********************************************"<<endl;
            cout<<"                 Thank You                     "<<endl;
            cout<<"                Visit Again                    "<<endl;
            cout<<"***********************************************"<<endl;
            break;
        }
        default:
        {
            cout<<"This category is invalid!!";
            break;
        }


    }
    }while(choice!=4);
    return 0;
}