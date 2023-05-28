#include <iostream>
#include<iomanip>
#include <string.h>
#include<cstring>
#include <windows.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

void pressToCont();
void homePage();
void login();
void registeration();
void bookSystem();
void tarikh();
void mainMenu();
void place();
void seat();
void payment();
float total();
void print();

char idRegist[50], passRegist[50];
int pilih, hari, bulan, departure, arrive, time, adult, kid, i;
int chair[10]={};
double tt, u, d;

int main()
{
	pressToCont();
	homePage();
	
	return 0;
}

void pressToCont()
{
	cout << endl;
	system("pause");
	cout << endl;
	system("cls");
}

void homePage()
{
	int select;
	
	system("color A");
	cout << "                                       ==============================" << endl;
	cout << "                                       ||||||||  |||  ||||||||||  |||" << endl;
	cout << "                                       ||||||||  |||  ||||||||||  |||" << endl;
	cout << "                                       |||       |||      |||     |||" << endl;
	cout << "                                       |||       |||      |||     |||" << endl;
	cout << "                                       ||||||||  |||      |||     |||" << endl;
	cout << "                                       ||||||||  |||      |||     |||" << endl;
	cout << "                                            |||  |||      |||     |||" << endl;
	cout << "                                       ||||||||  |||      |||     |||" << endl;
	cout << "                                       ||||||||  |||      |||     |||" << endl;
	cout << "                                       ==============================" << endl;
	cout << endl;
	cout << "               ============================================================================" << endl;
	cout << "               ||||||||  |||      |||  ||||||     ||||||       ||||||||  ||||||||  ||||||||" << endl;
	cout << "               ||||||||   |||    |||   |||||||    |||||||      ||||||||  ||||||||  ||||||||" << endl;
	cout << "               |||         |||  |||    |||  |||   |||  |||     |||       |||       |||     " << endl;
	cout << "               |||          ||||||     |||   |||  |||   |||    |||       |||       |||     " << endl;
	cout << "               ||||||||      ||||      |||   |||  |||   |||    ||||||||  ||||||||  ||||||||" << endl;
	cout << "               ||||||||     |||||      |||  |||   |||  |||     ||||||||  ||||||||  ||||||||" << endl;
	cout << "               |||         ||| |||     ||| |||    ||| ||||     |||            |||       |||" << endl;
	cout << "               |||        |||   |||    ||||||     ||||| |||    |||            |||       |||" << endl;
	cout << "               ||||||||  |||     |||   |||        |||    |||   ||||||||  ||||||||  ||||||||" << endl;
	cout << "               |||||||| |||       |||  |||        |||     |||  ||||||||  ||||||||  ||||||||" << endl;
	cout << "               ============================================================================" << endl;
	cout << endl;
	cout << "----------------------------------------------------      ----------------------------------------------------" << endl;
	cout << "|       DESTINATION       |          TIME          |      |       DESTINATION       |          TIME          |" << endl;
	cout << "----------------------------------------------------      ----------------------------------------------------" << endl;
	cout << "|                         |        1O.00 A.M       |      |                         |        1O.00 A.M       |" << endl;
	cout << "|                         |        02.00 P.M       |      |                         |        02.00 P.M       |" << endl;
	cout << "|        KOTA BHARU       |        04.30 P.M       |      |       PASIR PUTEH       |        04.30 P.M       |" << endl;
	cout << "|                         |        09.00 P.M       |      |                         |        09.00 P.M       |" << endl;
	cout << "|                         |        12.00 A.M       |      |                         |        12.00 A.M       |" << endl;
	cout << "----------------------------------------------------      ----------------------------------------------------" << endl;
	cout << "|                         |        10.30 A.M       |      |                         |        10.30 A.M       |" << endl;
	cout << "|                         |        02.30 P.M       |      |                         |        02.30 P.M       |" << endl;
	cout << "|        PASIR MAS        |        04.00 P.M       |      |        GUA MUSANG       |        04.00 P.M       |" << endl;
	cout << "|                         |        09.30 P.M       |      |                         |        09.30 P.M       |" << endl;
	cout << "|                         |        11.30 P.M       |      |                         |        11.30 P.M       |" << endl;
	cout << "----------------------------------------------------      ----------------------------------------------------" << endl;
	cout << "|                         |        10.40 A.M       |      |                         |        10.40 A.M       |" << endl;
	cout << "|                         |        01.45 P.M       |      |                         |        01.45 P.M       |" << endl;
	cout << "|     PENGKALAN CHEPA     |        04.40 P.M       |      |      RANTAU PANJANG     |        04.40 P.M       |" << endl;
	cout << "|                         |        10.00 P.M       |      |                         |        10.00 P.M       |" << endl;
	cout << "|                         |        10.45 P.M       |      |                         |        10.45 P.M       |" << endl;
	cout << "----------------------------------------------------      ----------------------------------------------------" << endl;
	cout << "|                         |        11.00 A.M       |      |                         |        11.00 A.M       |" << endl;
	cout << "|                         |        03.00 P.M       |      |                         |        03.00 P.M       |" << endl;
	cout << "|           JELI          |        03.50 P.M       |      |        TOK BALI         |        03.50 P.M       |" << endl;
	cout << "|                         |        08.45 P.M       |      |                         |        08.45 P.M       |" << endl;
	cout << "|                         |        11.00 P.M       |      |                         |        11.00 P.M       |" << endl;
	cout << "----------------------------------------------------      ----------------------------------------------------" << endl;
	cout << "|                         |        11.45 A.M       |      |                         |        11.45 A.M       |" << endl;
	cout << "|                         |        01.50 P.M       |      |                         |        01.50 P.M       |" << endl;
	cout << "|       KUBANG KERIAN     |        02.50 P.M       |      |         MACHANG         |        02.50 P.M       |" << endl;
	cout << "|                         |        08.30 P.M       |      |                         |        08.30 P.M       |" << endl;
	cout << "|                         |        12.05 A.M       |      |                         |        12.05 A.M       |" << endl;
	cout << "----------------------------------------------------      ----------------------------------------------------" << endl;
	cout << endl;
	cout << "[1] Log In" << endl;
	cout << "[2] Exit Application" << endl;
	cout << endl;
	cout << "Please select : ";
	cin >> select;
	switch (select)
	{
		case 1: system("cls");
				cout << "LOADING";
				Sleep(240);
				cout << "*";
				Sleep(240);
				cout << "*";
				login();
				break;
		case 2: exit (0);
		default: cout << endl << "Invalid! Please re-enter";
				 Beep(350,950);
				 system("cls");
				 homePage();
	}
}

void login()
{
	char idLogIn[15], passLogIn[15];
	int vari1, vari2, press;
	
	do
	{
		system("cls");
		system("color 4E");
		cout << "==============================================" << endl;
		cout << "|||      |||||||||  |||||||||  |||  |||||  |||" << endl;
		cout << "|||      |||   |||  |||             |||||| |||" << endl;
		cout << "|||      |||   |||  ||| |||||  |||  ||| ||||||" << endl;
		cout << "|||      |||   |||  |||   |||  |||  |||   ||||" << endl;
		cout << "|||||||  |||||||||  |||||||||  |||  |||    |||" << endl;
		cout << "==============================================" << endl;
		cin.ignore();
		cout << "Enter Username : ";
		cin >> idLogIn;
		cout << "Enter password : ";
		cin >> passLogIn;
		
		vari1 = strcmp(idLogIn,idRegist);
		
		if(vari1 == 0)
		{
			vari2 = strcmp(passLogIn,passRegist);
			
			if(vari2 == 0)
			{
				cout << endl << "Successfully login";
				bookSystem();
				return;
			}
			
			else
			{
				cout << endl << "Your password is incorrect, please enter again" << endl;
			}
		}
		
		else
		{
			cout << endl << "Your username is incorrect. Please re-enter again" << endl;
			cout << endl << "Do you want to try again or register?" << endl;
			cout << endl << "Press [1] TRY AGAIN | [2] REGISTER :";
			cin >> press;
			
			while(press < 1 || press > 2)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl;
				cout << endl << "Press [1] TRY AGAIN | [2] REGISTER :";
				cin >> press;
			}
			
			if(press==1)
			{
				login();
			}
			
			else
			{
				system("cls");
				registeration();
			}
		}
	}
	while(vari2 != 0);
}

void registeration()
{
	char yesno, name[50], ic[13], home[100], email[50];
	int day, month, year;
	
	system("color 4E");
	cout << "=======================================================================================" << endl;
	cout << "|||||||||   |||||||||   |||||||||   |||   |||||||||   |||||||||   |||||||||   |||||||||" << endl;
	cout << "|||   |||   |||||||||   |||||||||         |||||||||   |||||||||   |||||||||   |||   |||" << endl;
	cout << "|||   |||   |||         |||         |||   |||            |||      |||         |||   |||" << endl;
	cout << "|||||||||   |||||||||   ||| |||||   |||   |||||||||      |||      |||||||||   |||||||||" << endl;
	cout << "||||||      |||||||||   ||| |||||   |||   |||||||||      |||      |||||||||   ||||||   " << endl;
	cout << "||| |||     |||         |||   |||   |||         |||      |||      |||         ||| |||  " << endl;
	cout << "|||  |||    |||||||||   |||   |||   |||   |||||||||      |||      |||||||||   |||  ||| " << endl;
	cout << "|||   |||   |||||||||   |||||||||   |||   |||||||||      |||      |||||||||   |||   |||" << endl;
	cout << "=======================================================================================" << endl;
	
	cin.ignore();
	cout << "FULL NAME : ";
	cin.getline(name,50,'\n');
	
	cout << endl << "DAY OF BIRTH : ";
	cin >> day;
	while(day <= 0 || day >= 32)
	{
		cout << endl << "Invalid Input. Please re-enter again";
		cout << endl << "DAY OF BIRTH : ";
		cin >> day;
	}
	
	cout << "MONTH OF BIRTH : ";
	cin >> month;
	while(month <= 0 || month >= 13)
	{
		cout << endl << "Invalid Input. Please re-enter again";
		cout << endl << "MONTH OF BIRTH : ";
		cin >> month;
	}
	
	cout << "YEAR OF BIRTH : ";
	cin >> year;
	while(year <= 0 || year >= 2022)
	{
		cout << endl << "Invalid Input. Please re-enter again";
		cout << endl << "YEAR OF BIRTH : ";
		cin >> year;
	}
	
	cin.ignore();
	cout << "IC NUMBER : ";
	cin.getline(ic,13,'\n');
	
	cout << "E-MAIL : ";
	cin.getline(email,50,'\n');
	
	cout << "ADDRESS : ";
	cin.getline(home,100,'\n');
	
	do
	{
		cout << endl << "ENTER USERNAME : ";
		cin >> idRegist;
		
		cout << endl << "ENTER PASSWORD : ";
		cin >> passRegist;
		
		cout << endl << "Your Username is " << idRegist << endl;
		cout << endl << "Your password is " << passRegist << endl;
		
		cin.ignore();
		cout << endl << "are you confirm? Yes [Y] | No [N]";
		cin >> yesno;
		while(yesno != 'Y' && yesno != 'y' && yesno != 'N' && yesno != 'n')
		{
			cout << endl << "Invalid Input, Please re-enter again"<<endl;
			cin.ignore();
			cout << endl << "are you confirm? Yes [Y] | No [N]";
			cin>>yesno;
		}
		
		if(yesno == 'Y' || yesno == 'y')
		{
			cout << endl << "You Will be redirected to the Login Page";
			login();
		}
	}
	while(yesno == 'N' || yesno == 'n');
}

void bookSystem()
{
	do
	{
		system("cls");
		system("color 0B");
		cout << "================================================================================" << endl;
		cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
		cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
		cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
		cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
		cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
		cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
		cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
		cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
		cout << "================================================================================" << endl << endl;
		
		cout << "[1]  Monday" << endl << endl;
		cout << "[2]  Tuesday" << endl << endl;
		cout << "[3]  Wednesday" << endl << endl;
		cout << "[4]  Thursday" << endl << endl;
		cout << "[5]  Friday" << endl << endl;
		cout << "[6]  Saturday" << endl << endl;
		cout << "[7]  Sunday"<< endl << endl;
		
		cout << "DAY : ";
		cin >> pilih;
		if(pilih < 1 || pilih > 7)
		{
			cout << endl << "Invalid Input, Please re-enter" << endl << endl;
			system("cls");
		}
	}
	while(pilih < 1 || pilih > 7);
	tarikh();
}

void tarikh()
{
	system("cls");
	cin.ignore();
	
	do
	{
		system("cls");
		system("color 0B");
		cout << "================================================================================" << endl;
		cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
		cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
		cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
		cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
		cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
		cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
		cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
		cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
		cout << "================================================================================" << endl << endl;
		
		cout << endl << "ENTER DATE : ";
		cin >> hari;
		cout << endl << "ENTER MONTH : ";
		cin >> bulan;
		
		if(hari <= 0 || hari >= 32 || bulan <=0 || bulan >= 13)
		{
			cout << endl << "Invalid Input, Please re-enter again";
			system("cls");
		}
	}
	while(hari <= 0 || bulan <=0 || hari >= 32 || bulan >= 13);
	cin.ignore();
	mainMenu();
}

void mainMenu()
{
	system("cls");
	do
	{
		system("cls");
		system("color 0B");
		cout << "================================================================================" << endl;
		cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
		cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
		cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
		cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
		cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
		cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
		cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
		cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
		cout << "================================================================================" << endl << endl;
		
		cout << "[1]  Kemaman" << endl << endl;
		cout << "[2]  Dungun" << endl << endl;
		cout << "[3]  Kuala Terengganu"<< endl << endl;
		cout << "[4]  Kuala Berang" << endl << endl;
		cout << "[5]  Permaisuri" << endl << endl;
		cout << "[6]  Jerteh" << endl << endl;
		cout << "[7]  Kuala Abang" << endl << endl;
		cout << "[8]  Kuala Besut" << endl << endl;
		cout << "[9]  Marang" << endl << endl;
		cout << "[10] Batu Rakit" << endl << endl;
		cout << "[11] Paka" << endl << endl;
		cout << "[12] Kerteh" << endl << endl;
		cout << "[13] Kijal" << endl << endl;
		cout << "[14] Chukai" << endl << endl << endl;
		
		cout << "Please select Place for departure : ";
		cin >> departure;
		if(departure < 1 || departure > 14)
		{
			cout << endl << "Invalid Input, Please re-enter again" << endl << endl;
			system("cls");
		}
	}
	while(departure < 1 || departure > 14);
	place();
}

void place()
{
	system("cls");
	do
	{
		system("color 0B");
		cout << "================================================================================" << endl;
		cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
		cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
		cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
		cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
		cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
		cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
		cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
		cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
		cout << "================================================================================" << endl << endl;
		
		cout << "[1]  Kota Bharu" << endl << endl;
		cout << "[2]  Pasir Mas" << endl << endl;
		cout << "[3]  Pengkalan Chepa" << endl << endl;
		cout << "[4]  Jeli" << endl << endl;
		cout << "[5]  Kubang Kerian" << endl << endl;
		cout << "[6]  Pasir Puteh" << endl << endl;
		cout << "[7]  Gua Musang" << endl << endl;
		cout << "[8]  Rantau Panjang" << endl << endl;
		cout << "[9]  Tok Bali" << endl << endl;
		cout << "[10] Machang" << endl << endl;
		
		cout << "Please select place to go : ";
		cin >> arrive;
		if(arrive < 1 || arrive > 10)
		{
			cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
			system("cls");
		}
	}
	while(arrive < 1 || arrive > 10);
	
	if(arrive == 1)
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;
	
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}
		}
		while(time < 1 || time > 5);
		seat();	
	}
	else if(arrive == 2)
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;	
			
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}	
		}
		while(time < 1 || time > 5);
		seat();	
	}
	else if (arrive == 3)
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;	
			
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}	
		}
		while(time < 1 || time > 5);
		seat();
	}
	else if(arrive == 4)
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;	
			
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}	
		}
		while(time < 1 || time > 5);
		seat();
	}
	else if(arrive == 5)
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;	
			
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}	
		}
		while(time < 1 || time > 5);
		seat();
	}
	else if(arrive == 6)
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;	
			
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}	
		}
		while(time < 1 || time > 5);
		seat();
	}
	else if(arrive == 7)
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;	
			
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}	
		}
		while(time < 1 || time > 5);
		seat();
	}
	else if(arrive == 8)
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;	
			
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}	
		}
		while(time < 1 || time > 5);
		seat();
	}
	else if(arrive == 9)
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;	
			
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}	
		}
		while(time < 1 || time > 5);
		seat();
	}
	{
		system("cls");
		do
		{
			cout << "================================================================================" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
			cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
			cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
			cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
			cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
			cout << "================================================================================" << endl << endl;
			
			cout << "[1]  10.00AM" << endl << endl;
			cout << "[2]  02.00PM" << endl << endl;
			cout << "[3]  04.30PM" << endl << endl;
			cout << "[4]  09.00PM" << endl << endl;
			cout << "[5]  12.00AM" << endl << endl;	
			
			cout << "Please Select Time : ";
			cin >> time;
			if(time < 1 || time > 5)
			{
				cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
				system("cls");
			}	
		}
		while(time < 1 || time > 5);
		seat();
	}
}

void seat()
{
	int j;
    system("cls");
	system("color 0B");
	cout << "================================================================================" << endl;
	cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   ||||||    |||   |||||||||" << endl;
	cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||||||   |||   |||      " << endl;
	cout << "|||   |||  |||   |||   |||   |||   ||| |||             ||| ||||  |||   |||      " << endl;
	cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||   ||| |||   ||| |||||" << endl;
	cout << "|||||||||  |||   |||   |||   |||   ||||||      |||||   |||    ||||||   |||   |||" << endl;
	cout << "|||   |||  |||   |||   |||   |||   ||| |||     |||||   |||     |||||   |||   |||" << endl;
	cout << "|||   |||  |||||||||   |||||||||   |||  |||    |||||   |||      ||||   |||   |||" << endl;
	cout << "|||||||||  |||||||||   |||||||||   |||   |||   |||||   |||       |||   |||||||||" << endl;
	cout << "================================================================================" << endl << endl;
			
	cout<<endl<<endl<<endl;
	cout << "\t          ===============================================================" << endl;
	cout << "\t          | |_01_| |_02_|   |_03_| |_04_| |_05_| |_06_|   |_07_| |_08_| |" << endl;
	cout << "\t          | |_09_| |_10_|   |_11_| |_12_| |_13_| |_14_|   |_15_| |_16_| |" << endl;
	cout << "\t          |                                                             |" << endl;
	cout << "\t          | |_17_| |_18_|   |_19_| |_20_| |_21_| |_22_|   |_23_| |_24_| |" << endl;
	cout << "\t          | |_25_| |_26_|   |_27_| |_28_| |_29_| |_30_|   |_31_| |_32_| |" << endl;
	cout << "\t          ===============================================================" << endl;
	cout <<endl<<endl;
	
	cout << endl << "How Many Adults? : ";
	cin >> adult;
	while(adult < 0)
	{
		cout << endl << "INVALID INPUT!! PLEASE RE-ENTER" << endl << endl;
		cout << endl << "How Many Adults? : ";
		cin >> adult;
	}
	
	cout << endl << "How Many Kids? : ";
	cin >> kid;
	while(kid < 0)
	{
		cout << endl << "INVALID INPUT!! PLEASE RE-ENTER" << endl << endl;
		cout << endl << "How Many Kids? : ";
		cin >> kid;
	}
	
	i = adult + kid;
	cout << endl << "The Total Person is " << i << endl;
	while (i <= 0 || i > 32)
	{
		cout << endl << "INVALID INPUT!!!!" << endl;
		cout << endl << "The Bus Only Fits 32 Person. Please Re-enter"<<endl;
		cout << endl << "How Many Adults? : ";
		cin >> adult;
		cout << endl << "How Many Kids? : ";
		cin >> kid;
		i = adult + kid;
		cout << endl << "The Total Person is " << i << endl;
	}
	for(j=1 ; j <= i ; j++)
	{
		do
		{
			cout << endl << "Please Select your Seat for Customer [" << j << "] (PLEASE DO NOT ENTER THE SAME SEAT!!!):";
			cin >> chair[j];
			
			if(chair[j] < 1 || chair[j] > 32 || chair[j] == chair[j-1])
			{
				cout << endl << "You Have Enter Invalid Input. Please re-enter!!!!" << endl << endl;
			}
		}
		while(chair[j] < 1 || chair[j] > 32 || chair[j] == chair[j-1]);
		cout << endl;
	}
	pressToCont();
	payment();
}

void payment()
{
	int typePay, p, q;
	char bankName[20], cvr[4], accNum[17];
	double t;
	const double tax = 0.06;
	
	do
	{
		system("color 02");
		cout << "========================================================================================" << endl;
		cout << "|||||||||  |||||||||   |||   |||   ||||     ||||   |||||||||   |||||     |||   |||||||||" << endl;
		cout << "|||   |||  |||||||||   |||   |||   |||||   |||||   |||||||||   ||| ||    |||      |||   " << endl;
		cout << "|||   |||  |||   |||   |||||||||   ||| ||||| |||   |||         |||  ||   |||      |||   " << endl;
		cout << "|||||||||  |||   |||   |||||||||   |||  |||  |||   ||||||      |||   ||  |||      |||   " << endl;
		cout << "|||||||||  |||||||||      |||      |||       |||   ||||||      |||    || |||      |||   " << endl;
		cout << "|||        |||||||||      |||      |||       |||   |||         |||     |||||      |||   " << endl;
		cout << "|||        |||   |||      |||      |||       |||   ||||||||||  |||      ||||      |||   " << endl;
		cout << "|||        |||   |||      |||      |||       |||   ||||||||||  |||       |||      |||   " << endl;
		cout << "========================================================================================" << endl << endl;
		
		t = total();
		
		cout << "\nPlease Enter your Option for Payment [1] or [2]" << endl << endl;
		cout << "[1] CREADIT CARD" << endl << endl;
		cout << "[2] DEBIT CARD" << endl << endl;
		cout << "Please Enter Type of Payment [1] or [2] : ";
		cin >> typePay;
		
		if(typePay < 1 || typePay > 2)
		{
			cout << endl << "Invalid Input. Please re-enter again" << endl << endl;
			system("cls");
		}
	}
	while(typePay < 1 || typePay > 2);
	
	cin.ignore();
	cout << endl << endl << "BANK NAME : ";
	cin.getline(bankName,20,'\n');
	cout << endl << "ACCOUNT NUMBER (16-DIGIT) : ";
	cin >> accNum;
	
	q = strlen(accNum);
	while(q != 16)
	{
		cin.ignore();
		if( q > 16)
		{
			cout << endl << "YOUR ACCOUNT NUMBER IS TOO LONG!!! PLEASE RE-ENTER AGAIN" << endl;
		}
		if(q < 16)
		{
			cout << endl << "YOUR ACCOUNT NUMBER IS TOO SHORT!!! PLEASE RE-ENTER AGAIN" << endl;
		}
		cout << endl << "ACCOUNT NUMBER (16 digit) : ";
		cin >> accNum;
		q = strlen(accNum);
	}
	
	cin.ignore();
	cout << endl << "CVR/CVVR2 (3 DIGITS) : ";
	cin >> cvr;
	
	p = strlen(cvr);
	while(p != 3)
	{
		cin.ignore();
		if(p > 3)
		{
			cout << endl << "YOUR CVR IS TOO LONG!!! PLEASE RE-ENTER AGAIN"<<endl;
		}
		if(p < 3)
		{
			cout << endl << "YOUR CVR IS TOO SHORT!!! PLEASE RE-ENTER AGAIN" << endl;
		}
		cout << endl << "CVR/CVVR2 (3 digit) : ";
		cin >> cvr;
		p = strlen(cvr);
	}
	
	cout << endl << "DESCRIPTION ON PAYMENT" << endl;
	cout << endl << "BANK                    : " << bankName;
	cout << endl << "ACCOUNT NUMBER          : " << accNum;
	cout << endl << "CVR/CVVR2               : " << cvr << endl;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "TICKET PRICE            : RM " << t << endl;
	tt = t;
	cout << "TAX                     : RM " << tax*t << endl;
	u = tax*t;
	t = (t*tax) + t;
	cout << "TOTAL                   : RM " << t <<endl;
	d = t;
	cout << endl << "This Total Has Been Deducted From Your Bank Account" << endl;
	pressToCont();
	system("cls");
	print();
	return;
}

float total()
{
	float grandTotal;
	float priceadult = 30, pricekids = 15 , total;
	total = (adult*priceadult) + (kid*pricekids);
	grandTotal = (total*0.06) + total;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << endl << "Total = RM" << grandTotal << endl;
    return total;
}

void print()
{
	char tekan;
	int m=1, x;
	system("color 4E");
	cout << endl << endl;
	cout << "SITI : ";
	if(departure == 1)
		cout << "KEMAMAN" << endl;
	if(departure == 2)
		cout << "DUNGUN" << endl;
	if(departure == 3)
		cout << "KUALA TERENGGANU" << endl;
	if(departure == 4)
		cout << "KUALA BERANG" << endl;
	if(departure == 5)
		cout << "PERMAISURI" << endl;
	if(departure == 6)
		cout << "JERTEH" << endl;
	if(departure == 7)
		cout << "KUALA ABANG" << endl;
	if(departure == 8)
		cout << "KUALA BESUT" << endl;
	if(departure == 9)
		cout << "MARANG" << endl;
	if(departure == 10)
		cout << "BATU RAKIT" << endl;
	if(departure == 11)
		cout << "PAKA" << endl;
	if(departure == 12)
		cout << "KERTEH" << endl;
	if(departure == 13)
		cout << "KIJAL" << endl;
	if(departure == 14)
		cout << "CHUKAI" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl << endl << endl;
	cout << "                 SITI EXPRESS                 " << endl << endl;
	cout << endl << "DAY AND DATE : ";
	if(pilih == 1)
		cout << "MON";
	if(pilih == 2)
		cout << "TUE";
	if(pilih == 3)
		cout << "WED";
	if(pilih == 4)
		cout << "THU";
	if(pilih == 5)
		cout << "FRI";
	if(pilih == 6)
		cout << "SAT";
	if(pilih == 7)
		cout << "SUN";
	cout << "  ";
	
	cout << hari << "/" << bulan << endl;	
	
	cout << endl << "DESTINATION   : ";
	if(arrive == 1)
	{
		cout << "KOTA BHARU" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "1O.00 A.M" << endl;
		if(time == 2)
			cout << "02.00 P.M" << endl;
		if(time == 3)
			cout << "04.30 P.M" << endl;
		if(time == 4)
			cout << "09.00 P.M" << endl;
		if(time == 5)
			cout << "12.00 A.M" << endl;
	}
	if(arrive == 2)
	{
		cout << "PASIR MAS" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "10.30 A.M" << endl;
		if(time == 2)
			cout << "02.30 P.M" << endl;
		if(time == 3)
			cout << "04.00 P.M" << endl;
		if(time == 4)
			cout << "09.30 P.M" << endl;
		if(time == 5)
			cout << "11.30 P.M";
	}
	if(arrive == 3)
	{
		cout << "PENGKALAN CHEPA" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "10.40 A.M" << endl;
		if(time == 2)
			cout << "01.45 P.M" << endl;
		if(time == 3)
			cout << "04.40 P.M" << endl;
		if(time == 4)
			cout << "10.00 P.M" << endl;
		if(time == 5)
			cout << "10.45 P.M" << endl;
	}
	if(arrive == 4)
	{
		cout << "JELI" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "11.00 A.M" << endl;
		if(time == 2)
			cout << "03.00 P.M" << endl;
		if(time == 3)
			cout << "03.50 P.M" << endl;
		if(time == 4)
			cout << "08.45 P.M" << endl;
		if(time == 5)
			cout << "11.00 P.M" << endl;
	}
	if(arrive == 5)
	{
		cout << "KUBANG KERIAN" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "11.45 A.M" << endl;
		if(time == 2)
			cout << "01.50 P.M" << endl;
		if(time == 3)
			cout << "02.50 P.M" << endl;
		if(time == 4)
			cout << "08.30 P.M" << endl;
		if(time == 5)
			cout << "12.05 A.M" << endl;
	}
	if(arrive == 6)
	{
		cout << "PASIR PUTEH" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "1O.00 A.M" << endl;
		if(time == 2)
			cout << "02.00 P.M" << endl;
		if(time == 3)
			cout << "04.30 P.M" << endl;
		if(time == 4)
			cout << "09.00 P.M" << endl;
		if(time == 5)
			cout << "12.00 A.M" << endl;
	}
	if(arrive == 7)
	{
		cout << "GUA MUSANG" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "10.30 A.M" << endl;
		if(time == 2)
			cout << "02.30 P.M" << endl;
		if(time == 3)
			cout << "04.00 P.M" << endl;
		if(time == 4)
			cout << "09.30 P.M" << endl;
		if(time == 5)
			cout << "11.30 P.M" << endl;
	}
	if(arrive == 8)
	{
		cout << "RANTAU PANJANG" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "10.40 A.M" << endl;
		if(time == 2)
			cout << "01.45 P.M" << endl;
		if(time == 3)
			cout << "04.40 P.M" << endl;
		if(time == 4)
			cout << "10.00 P.M" << endl;
		if(time == 5)
			cout << "10.45 P.M" << endl;
	}
	if(arrive == 9)
	{
		cout << "TOK BALI" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "11.00 A.M" << endl;
		if(time == 2)
			cout << "03.00 P.M" << endl;
		if(time == 3)
			cout << "03.50 P.M" << endl;
		if(time == 4)
			cout << "08.45 P.M" << endl;
		if(time == 5)
			cout << "11.00 P.M" << endl;
	}
	if(arrive == 10)
	{
		cout << "MACHANG" << endl;
		cout << endl;
		cout << "TIME         : ";
		if(time == 1)
			cout << "11.45 A.M" << endl;
		if(time == 2)
			cout << "01.50 P.M" << endl;
		if(time == 3)
			cout << "02.50 P.M" << endl;
		if(time == 4)
			cout << "08.30 P.M" << endl;
		if(time == 5)
			cout << "12.05 A.M" << endl;
	}
	cout<<endl<<"BUS         : UITM2401"<<endl;
	for(x = 1; x <= i; x++)
	{
		cout << endl << "SEAT[" << x << "]      : " << chair[x] << endl;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << endl << "TICKET PRICE : RM " << tt << endl;
	cout << endl << "TAX          : RM " << u << endl;
	cout << endl << "TOTAL        : RM " << d << endl;
	cout << endl << "SITI EXPRESS SDN BHD" << endl;
	cout << endl << "#SitiExpressPastiLaju #SekKitoUsohPecoh" << endl;
	cout << endl << "PLEASE PRINT THIS TICKET" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl << endl << endl;
	cin.ignore();
	cout << endl << "Would to like to Back to Main Menu? YES [Y] | NO [N] ";
	cin >> tekan;
	
	while(tekan != 'Y' && tekan != 'y' && tekan != 'N' && tekan != 'n')
	{
		cout << endl << "Invalid Input. Please re-enter again!!!! " << endl;
		cin.ignore();
		cout << endl << "Would to like to Back to Main Menu? YES [Y] | NO [N] ";
		cin >> tekan;
	}
	
	if (tekan == 'Y' || tekan == 'y')
	{
		system("cls");
		homePage();
	}
	
	else 
	{
		cout<<endl<<"THANK YOU!!!"<<endl;
		return;
	}
}
