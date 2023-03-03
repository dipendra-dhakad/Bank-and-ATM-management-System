#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <windows.h>
using namespace std;

class bank
{
private:
     int pin;
     float balance;
     string id,pass,name,fname,address,phone;    
public:
    void menu();
    void bank_management();
    void atm_management();
    void new_user();
};
void bank::menu()
{
p:
    system("cls");
    int Choice;
    char ch;
    string pin, pass, email;
    cout << "\n\n\t\t\tControl Panel";
    cout << "\n\n 1.Bank Management";
    cout << "\n 2.ATM Management";
    cout << "\n 3.Exit";
    cout << "\n\n Enter Your Choice : ";
    cin >> Choice;
    switch (Choice)
    {
    case 1:
        system("cls");
        cout << "\n\n\t\t\tLogin Account";
        cout << "\n\n E-mail : ";
        cin >> email;
        cout << "\n\n\t\t Pin Code : ";
        for (int i = 0; i < 5; i++)
        {
            ch = getch();
            pin += ch;
            cout << "*";
        }
        cout << "\n\n Password : ";
        for (int i = 0; i < 5; i++)
        {
            ch = getch();
            pass += ch;
            cout << "*";
        }
        if (email == "dip@gmail.com" && pin == "11111" && pass == "11111")
        {
            bank_management();
        }
        else
        {
            cout << "\n\nYOur E-mail, Pin & Password is Wrong...";
        }
        break;
    case 2:
        atm_management();
        break;
    case 3:
        exit(0);
    default:
        cout << "\n\nInvalid Value...Please Try Again...";
    }
    getch();
    goto p;
}
void bank::bank_management()
{
p:
    system("cls");
    int choice;
    cout << "\n\n\t\t\tBank Management System ";
    cout << "\n\n1. New User ";
    cout << "\n  2. Already user ";
    cout << "\n  3. Deposit Options ";
    cout << "\n  4. Withdraw Options ";
    cout << "\n  5. Trasfer Options ";
    cout << "\n  6. Payment Options ";
    cout << "\n  7. Search User Record ";
    cout << "\n  8. Edit User Record ";
    cout << "\n  9. Delete User Record ";
    cout << "\n  10.Show All Record ";
    cout << "\n  11.Payment All Record ";
    cout << "\n  12.Go Back ";
    cout << "\n\n Enter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        new_user();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break; 
    case 9:
        break;
    case 10:
        break;
    case 11:
        break;  
    case 12:     
        menu();
    default:
        cout << "\n\nInvalid Value...Please Try Again...";
    }
    getch();
    goto p;
}
void bank::atm_management()
{
p:
    system("cls");
    int choice;
    cout << "\n\n\t\t\tATM Management System ";
    cout << "\n\n 1.User Login & Check Balance ";
    cout << "\n 2. Withdraw Option ";
    cout << "\n 3. Account Details ";
    cout << "\n 4. Go Back ";
    cout << "\n\n Enter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        menu();
    default:
        cout << "\n\nInvalid Value...Please Try Again...";
    }
    getch();
    goto p;
}
void bank ::new_user()
{
    p: 
    system("cls");
    fstream file;
    int p;
    float b;
    string n,f,pa,a,ph,i;

    cout<<"\n\n\t\t\tAdd New User";
    cout<<"\n\n User ID : ";
    cin>>id;
    cout<<"\n\n\t Name : ";
    cin>>name;
    cout<<"\n\n Father Name : ";
    cin>>fname;
    cout<<"\n\n Address : ";
    cin>>address;
    cout<<"\n\n Pin Code (5 digit) : ";
    cin>>pin;
    cout<<"\n\n\t\t Password : ";
    cin>>pass;
    cout<<"\n\n Phone NO. : ";
    cin>>phone;
    cout<<"\n\n\t\t Current Balance : ";
    cin>>balance;
    file.open("bank.txt",ios::in);
    if(!file)
    {
        file.open("bank.txt",ios::app|ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
        file.close();
    }
    else
    {
        file>>i>>n>>f>>p>>pa>>a>>ph>>b;
        while(!file.eof())
        {
            if(i == id)
            {
               cout<<"\n\nUser Already Exits... ";
               getch();
               goto p ;
            }
             file>>i>>n>>f>>p>>pa>>a>>ph>>b;
        }
        file.close();
         file.open("bank.txt",ios::app|ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
        file.close();
    }
    cout<<"\n\n New User Acount Created Successfully...";
}
int main()
{

    bank obj;
    obj.menu();
}