#include <iostream>
#include <bits/stdc++.h>
#include<utility>
#include<vector>

using namespace std;


vector<pair<string,string>>Data;



void display()
{
	system("Color 0B");
	cout<<"------------------------------------REGESTRATION / LOGIN-----------------------------------------------"<<endl;
	cout<<"-------------------------------------------SYSTEM------------------------------------------------------"<<endl;
	cout<<"_______________________________________________________________________________________________________"<<endl;
	cout<<"------------------------------------Created by Shovon117-----------------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
}


void success()
{
    system("cls");
    display();
    cout<<endl;
    cout<<endl;
    cout<<"<<<<<<<<<<<<  WELDONE YOU HAVE SUCCESSFULLY LOGGED IN >>>>>>>>>>>>>>"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
}

void Login();

void validate(string name, string pass)
{
    system("cls");
    display();
    cout<<endl;
    cout<<endl;

    bool flag = true;

    int len = Data.size();

    for(int i=0;i<len;i++)
    {
        if(Data[i].first==name && Data[i].second==pass)
        {
            success();
            flag = false;
            break;

        }
    }
    if(flag)
    {
        system("cls");
        display();
        cout<<endl;
        cout<<endl;
        cout<<"...Login Failed.......Invalid Username/Password..."<<endl;
        cout<<endl;
        cout<<"Want to try again ?(y/n) : ";
        char c;
        cin>>c;
        if(c=='y')
        {
            Login();
        }
        else if(c=='n')
        {
            return;
        }

    }
}



void Login()
{
	system("cls");
    display();

    string name,pass;

    cout<<endl;
    cout<<endl;
    cout<<"Enter user name : ";
    cin.ignore();
    getline(cin,name);
    cout<<endl;
    cout<<"Enter password  : ";
    cin>>pass;

    validate(name,pass);



}



void Reg()
{
	system("cls");
	display();
	cout<<endl;
	cout<<endl;

	string name,pass,passx;

	cout<<"Enter full name : ";
	cin.ignore();
	getline(cin,name);
	cout<<endl;
	cout<<"Create new password : ";
	cin>>pass;
	cout<<endl;
	cout<<"Confirm new password : ";
	cin>>passx;

	if(pass != passx)
	{
	    cout<<endl;
	    cout<<endl;
		cout<<"Password did not match . Want to register again ?(y/n) : ";
		char c;
		cin>>c;

		if(c=='y')
		{
			Reg();
		}
		else if(c=='n')
        {
            return ;
        }

	}
	else
	{
		Data.push_back(make_pair(name,pass));

		system("cls");
		display();
		cout<<endl;
		cout<<"................Account is successfully created....................."<<endl;
		cout<<"Go to Login page (y/n) : ";
		char m;
		cin>>m;
		if(m=='y')
		{
			Login();
		}

	}





}




void Welcome()
{
	display();
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ WELCOME ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<endl;
	cout<<"Do you already have a account ? (y/n) : ";
	char c;
	cin>>c;
	if(c=='y')
	{
		Login();
	}
	else if(c=='n')
	{
		Reg();
	}
}



int main()
{
	Welcome();
}
