#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <windows.h>
using namespace std;

class bank
{
private:
    float balance;
    string id, pin, pass, name, fname, address, phone;

public:
    void menu();
    void bank_management();
    void atm_management();
    void new_user();
    void already_user();
    void deposit();
    void withdraw();
    void transfer();
    void payment();
    void search();
    void edit();
    void del();
    void show_records();
    void show_payment();
    void user_balance();
    void withdraw_atm();
    void check_detail();
};
void introduction()
{
    cout << "\n\n\n\n\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    cout << "\n\t ";
    for (int i = 1; i <= 58; i++)
        cout << "*";
    cout << "\n\t  ";
    for (int i = 1; i <= 56; i++)
        cout << "*";
    cout << "\n\n\t\t\t Bank & ATM Management System \n\n\t\t\t\t Project In C++ \n\n\t  ";
    for (int i = 1; i <= 56; i++)
        cout << "*";
    cout << "\n\t ";
    for (int i = 1; i <= 58; i++)
        cout << "*";
    cout << "\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    getch();
    system("cls");
    cout << "\n\n\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout << "*";
    cout << "\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout << "*";
    cout << "\n\n\t\t\t       My Name Is : ";
    cout << "\n\n\t\t\t     Dipendra Dhakad ";
    cout << "\n\n\t\t\t     B.tech (CSIT) ";
    cout << "\n\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout << "*";
    cout << "\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout << "*";
    getch();
    system("cls");
    cout << "\n\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    cout << "\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    cout << "\n\n\t\t\t Software Developer Introduction";
    cout << "\n\n\t Name : \t\t Dipendra Dhakad";
    cout << "\n\t Degree: \t\t B.Tech (CSIT)";
    cout << "\n\t Institude: \t\t IES IPS Academy,Indore";
    cout << "\n\t E-mail: \t\t dhakaddipendradhakad@gmail.com";
    cout << "\n\t Contact No \t\t 7566378530";
    cout << "\n\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    cout << "\n\t";
    for (int i = 1; i <= 60; i++)
        cout << "*";
    getch();
}
void bank::menu() // define the function
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
        cout << "\n\n\t\t\tLogin Account         Login Details email == dip@123 && pin == 1111 && pass == 11111 ";
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
        if (email == "dip@123" && pin == "11111" && pass == "11111")
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
void bank::bank_management() // define bank management function
{
p:
    system("cls");
    int choice;
    cout << "\n\n\t\t\tBank Management System ";
    cout << "\n 1. New User ";
    cout << "\n 2. Already user ";
    cout << "\n 3. Deposit Options ";
    cout << "\n 4. Withdraw Options ";
    cout << "\n 5. Trasfer Options ";
    cout << "\n 6. Payment Options ";
    cout << "\n 7. Search User Record ";
    cout << "\n 8. Edit User Record ";
    cout << "\n 9. Delete User Record ";
    cout << "\n 10. Show All Record ";
    cout << "\n 11. Payment All Record ";
    cout << "\n 12. Go Back ";
    cout << "\n\n Enter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        new_user();
        break;
    case 2:
        already_user();
        break;
    case 3:
        deposit();
        break;
    case 4:
        withdraw();
        break;
    case 5:
        transfer();
        break;
    case 6:
        payment();
        break;
    case 7:
        search();
        break;
    case 8:
        edit();
        break;
    case 9:
        del();
        break;
    case 10:
        show_records();
        break;
    case 11:
        show_payment();
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
        user_balance();
        break;
    case 2:
        withdraw_atm();
        break;
    case 3:
        check_detail();
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
    string n, f, pa, a, ph, i;

    cout << "\n\n\t\t\tAdd New User";
    cout << "\n\n User ID : ";
    cin >> id;
    cout << "\n\n\t\t Name : ";
    cin >> name;
    cout << "\n\n Father Name : ";
    cin >> fname;
    cout << "\n\n Address : ";
    cin >> address;
    cout << "\n\n Pin Code (5 digit) : ";
    cin >> pin;
    cout << "\n\n\t\t Password : ";
    cin >> pass;
    cout << "\n\n Phone NO. : ";
    cin >> phone;
    cout << "\n\n\t\t Current Balance : ";
    cin >> balance;
    file.open("bank.txt", ios::in);
    if (!file)
    {
        file.open("bank.txt", ios::app | ios::out);
        file << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
        file.close();
    }
    else
    {
        file >> i >> n >> f >> p >> pa >> a >> ph >> b;
        while (!file.eof())
        {
            if (i == id)
            {
                cout << "\n\nUser ID Already Exits... ";
                getch();
                goto p;
            }
            file >> i >> n >> f >> p >> pa >> a >> ph >> b;
            break;
        }
        file.close();
        file.open("bank.txt", ios::app | ios::out);
        file << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
        file.close();
    }
    cout << "\n\n\t\t\tNew User Acount Created Successfully...";
};

void bank ::already_user()
{
    system("cls");
    fstream file;
    string t_id;
    int found = 0;
    cout << "\n\n\t\t\tAlready User Account ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Opening Error...";
    }
    else
    {
        cout << "\n\n User ID : ";
        cin >> t_id;
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                system("cls");
                cout << "\n\n\t\t\tAlready User Account ";
                cout << "\n\n User ID: " << id << "   Pin Code: " << pin << "   Password: " << pass;
                found++;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        if (found == 0)
            cout << "\n\n User ID Can't Found...";
    };
}
void bank ::deposit()
{
    fstream file, file1;
    string t_id;
    int found = 0;
    float dep;
    system("cls");
    cout << "\n\n\t\t\tDeposit Amount Options  ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Opening Error...";
    }
    else
    {
        cout << "\n\n User ID : ";
        cin >> t_id;
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                cout << "\n\n Amount For Deposit : ";
                cin >> dep;
                balance += dep;
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                found++;
                cout << "\n\n\t\t\tYour Amounr " << dep << " Successfully Deposit...";
                cout << "\n\nYour Current Balance Is : " << balance;
            }
            else
            {
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)
            cout << "\n\n User ID Can't Found...";
    }
}
void bank::withdraw()
{
    fstream file, file1;
    string t_id;
    int found = 0;
    float with;
    system("cls");
    cout << "\n\n\t\t\tWithdraw Amount Options  ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Opening Error...";
    }
    else
    {
        cout << "\n\n User ID : ";
        cin >> t_id;
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                cout << "\n\n Enter Amount For Withdrraw : ";
                cin >> with;
                if (with <= balance)
                {
                    balance -= with;
                    file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                    found++;
                    cout << "\n\n\t\t\tYour Amount " << with << " Successfully Withdraw...";
                    cout << "\n\nYour Current Balance Is : " << balance;
                }
                else
                {
                    found++;
                    file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                    found++;
                    cout << "\n\n\t\t\tInsufficient Balance...";
                    cout << "\n\n\t\t\t Your Current Balance " << balance << "Is Less...";
                }
                found++;
            }
            else
            {
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)
            cout << "\n\n User ID Can't Found...";
    };
}
void bank ::transfer()
{
    fstream file, file1;
    system("cls");
    string s_id, r_id;
    float amount;
    int found = 0;
    cout << "\n\n\t\t\tPayment Trasfer Option...";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Opening Error...";
    }
    else
    {
        cout << "\n\n Sender User ID For Transction : ";
        cin >> s_id;
        cout << "\n\n Receiver User ID For Transction : ";
        cin >> r_id;
        cout << "\n\n Enter Transction Amount : ";
        cin >> amount;
        // file1.open("bank1.txt", ios::app | ios ::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (s_id == id && amount <= balance)
            {
                found++;
            }
            else if (r_id == id)
                found++;
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        if (found == 2)
        {
            file.open("bank.txt", ios::in);
            file1.open("bank1.txt", ios::app | ios ::out);
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
            while (!file.eof())
            {
                if (s_id == id)
                {
                    balance -= amount;
                    file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                }
                else if (r_id == id)
                {
                    balance += amount;
                    file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                }
                else
                {
                    file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                }
                file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt", "bank.txt");
            cout << "\n\n\t\t\tPayment Transfer Successfully...";
        }
        else
        {
            cout << "\n\n\t\t\tBoth Tranction ID's & Balance Invalid..";
        }
    }
}

void bank::payment()
{
    system("cls");
    fstream file, file1;
    string t_id, b_name;
    float amount;
    int found = 0;
    SYSTEMTIME x;
    cout << "\n\n\t\t\t Payment Option : ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Opening Error...";
    }
    else
    {
        cout << "\n\nEnter User ID : ";
        cin >> t_id;
        cout << "\n\nBill Name :";
        cin >> b_name;
        cout << "\n\nBill Amount :";
        cin >> amount;
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id && amount <= balance)
            {
                balance -= amount;
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                found++;
            }
            else
            {
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 1)
        {
            GetSystemTime(&x);
            file.open("bill.txt", ios::app | ios::out);
            file << t_id << " " << b_name << " " << amount << " " << x.wDay << "/" << x.wMonth << "/" << x.wYear << "\n";
            file.close();
            cout << "\n\n\t\t\t" << b_name << " Bill Pay Successfully... ";
            cout << "\n\n Your Current Balance Remaning After Bill Pay : " << balance;
        }
        else
        {
            if (t_id != id)
                cout << "\n\nUser ID or Amount Invalid... ";
        }
    }
}

void bank ::search()
{
    system("cls");
    fstream file;
    string t_id;
    int found = 0;
    cout << "\n\n\t\t\tSearch User Record";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\nFile Opening Error...";
    }
    else
    {
        cout << "\n\n\t\t\t User ID : ";
        cin >> t_id;
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                system("cls");
                cout << "\n\n\t\t\t Search User ID ";
                cout << "\n\n\n User ID :" << id << " Name: " << name;
                cout << "\n\n Father Name: " << fname << " Address : " << address;
                cout << "\n\n Pin : " << pin << " Password : " << pass;
                cout << "\n\nPhone No.: " << phone << " Current Balance : " << balance;
                found++;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        if (found == 0)
        {
            cout << "\n\n User ID Coun't Found...";
        }
    }
}
void bank::edit()
{
    system("cls");
    fstream file, file1;
    string t_id;
    string n, f, p, a, ph;
    int found = 0;
    int pi;
    float b;
    cout << "\n\n\n\t\t\t Edit User Record ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File opening error...";
    }
    else
    {
        cout << "\n\n User ID : ";
        cin >> t_id;
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                cout << "\n\n\t\t Name : ";
                cin >> n;
                cout << "\n\n Father Name : ";
                cin >> f;
                cout << "\n\n Address : ";
                cin >> a;
                cout << "\n\n Pin Code (5 digit) : ";
                cin >> pi;
                cout << "\n\n\t\t Password : ";
                cin >> p;
                cout << "\n\n Phone NO. : ";
                cin >> ph;
                file1 << " " << id << " " << n << " " << f << " " << a << " " << pi << " " << p << " " << ph << " " << balance << "\n";
                cout << "\n\n\t\t\t Record Edit Successfully...";
                found++;
            }
            else
            {
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)
        {
            cout << "\n\n User ID Can't Found...";
        }
    }
}

void bank ::del()
{
    system("cls");
    fstream file, file1;
    string t_id;
    int found = 0;
    cout << "\n\n\n\t\t\t Delete User Record ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File opening error...";
    }
    else
    {
        cout << "\n\n User ID : ";
        cin >> t_id;
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id)
            {
                cout << "\n\n\t\t\t Record Delete Successfully...";
                found++;
            }
            else
            {
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)
            cout << "\n\n User ID Can't Found...";
    }
}

void bank::show_records()
{
    system("cls");
    fstream file;
    int found = 0;
    cout << "\n\n\n\t\tShow's All User's Records";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Opening Error...";
    }
    else
    {
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            cout << "\n\n\n User ID : " << id;
            cout << "\n Name : " << name;
            cout << "\n Father Name : " << fname;
            cout << "\n Address : " << address;
            cout << "\n Pin : " << pin;
            cout << "\n Password : " << pass;
            cout << "\n Phone : " << phone;
            cout << "\n Current Balance : " << balance;
            cout << "\n\n=====================================";
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
            found++;
        }
        file.close();
        if (found == 0)
            cout << "\n\n Data Base Is Empty...";
    }
}
void bank::show_payment()
{
    system("cls");
    fstream file;
    int found = 0;
    float amount;
    string c_date;
    cout << "\n\n\n\t\tShow's All Bill Records";
    file.open("bill.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Opening Error...";
    }
    else
    {
        file >> id >> name >> amount >> c_date;
        while (!file.eof())
        {
            cout << "\n\n\n User ID : " << id;
            cout << "\n Bill Name : " << name;
            cout << "\n Bill Amount : " << amount;
            cout << "\n Date : " << c_date;
            cout << "\n\n=====================================";
            file >> id >> name >> amount >> c_date;
            found++;
        }
        file.close();
        if (found == 0)
            cout << "\n\n Data Base Is Empty...";
    }
}
void bank::user_balance()
{
    system("cls");
    fstream file;
    string t_id, t_pin, t_pass;
    char ch;
    int found = 0;
    cout << "\n\n\t\t\t User Login && Balance Check ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\nFile Opening Error...";
    }
    else
    {
        cout << "\n\n User ID : ";
        cin >> t_id;
        cout << "\n\n\t\t\t Pin Code : ";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pin += ch;
            cout << "*";
        }
        cout << "\n\n Password : ";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pass += ch;
            cout << "*";
        }
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id && t_pin == pin && t_pass == pass)
            {
                cout << "\n\n\t\t\t Your Current Balance Is : " << balance;
                found++;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        if (found == 0)
            cout << "\n\n\t\t\t User,Pin & Password Is Invalid...";
    }
}

void bank ::withdraw_atm()
{
    fstream file, file1;
    string t_id, t_pin, t_pass;
    int found = 0;
    char ch;
    float with;
    system("cls");
    cout << "\n\n\t\t\tWithdraw Amount Options  ";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Opening Error...";
    }
    else
    {
        cout << "\n\n User ID : ";
        cin >> t_id;
        cout << "\n\n\t\t\t Pin Code : ";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pin += ch;
            cout << "*";
        }
        cout << "\n\n Password : ";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pass += ch;
            cout << "*";
        }
        file1.open("bank1.txt", ios::app | ios::out);
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id && t_pin == pin && t_pass == pass)
            {
                cout << "\n\n Enter Amount For Withdrraw : ";
                cin >> with;
                if (with <= balance)
                {
                    balance -= with;
                    file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                    found++;
                    cout << "\n\n\t\t\tYour Amount " << with << " Successfully Withdraw...";
                    cout << "\n\nYour Current Balance Is : " << balance;
                }
                else
                {
                    found++;
                    file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
                    found++;
                    cout << "\n\n\t\t\tInsufficient Balance...";
                    cout << "\n\n\t\t\t Your Current Balance " << balance << "Is Less...";
                }
                found++;
            }
            else
            {
                file1 << " " << id << " " << name << " " << fname << " " << address << " " << pin << " " << pass << " " << phone << " " << balance << "\n";
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        if (found == 0)
            cout << "\n\n User ID Can't Found...";
    }
}
void bank ::check_detail()
{
    fstream file;
    string t_id, t_pin, t_pass;
    int found = 0;
    char ch;
    float with;
    system("cls");
    cout << "\n\n\t\t\tChech Account Details";
    file.open("bank.txt", ios::in);
    if (!file)
    {
        cout << "\n\n File Opening Error...";
    }
    else
    {
        cout << "\n\n User ID : ";
        cin >> t_id;
        cout << "\n\n\t\t\t Pin Code : ";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pin += ch;
            cout << "*";
        }
        cout << "\n\n Password : ";
        for (int i = 1; i <= 5; i++)
        {
            ch = getch();
            t_pass += ch;
            cout << "*";
        }
        file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
        while (!file.eof())
        {
            if (t_id == id && t_pin == pin && t_pass == pass)
            {
                cout << "\n\n\t\t\tChech Account Details";
                cout << "\n\n\n User ID : " << id;
                cout << "\n Name : " << name;
                cout << "\n Father Name : " << fname;
                cout << "\n Address : " << address;
                cout << "\n Pin : " << pin;
                cout << "\n Password : " << pass;
                cout << "\n Phone : " << phone;
                cout << "\n Current Balance : " << balance;
                found++;
            }
            file >> id >> name >> fname >> address >> pin >> pass >> phone >> balance;
            file.close();
            if (found == 0)
              cout << "\n\n User ID Can't Found...";
        }
    }
}
int main()
{

    bank obj;
    introduction();
    obj.menu();
}