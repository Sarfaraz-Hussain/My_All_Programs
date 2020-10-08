#include <iostream.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<dos.h>
#include<stdlib.h>
#include<iomanip.h>
#include<graphics.h>

typedef char option[15];
const int ROW = 10, COL = 10;
int sacn;      // To hold the special characters
int ascii;

//To display the main menu
option a[] = {
	"New Account",
	"ListofAccounts",
	"IndAccount",
	"DailyTrans",
	"MonthlyReport",
	"EditAccount",
	"Exit"
};

//Display the modify menu option
option b[] = {
	"modify Account",
	"Closeaccount",
	"Quit"
};

//function used to do screening

class main_menu
{
	int i, done;
public:
	void normalvideo(int x, int y, char *str);
	void reversevideo(int x, int y, char *str);
	void box(int x1, int y1, int x2, int y2);
	char menu();
	void control_menu();
	char e_menu();
	void edit_menu();
	void help(void);
};

/*class member functions for drawing boxes*/

class shape
{
public:
	void line_hor(int, int, int, char);
	void line_ver(int, int, int, char);
	void box(int, int, int, char);
};

//class contain the initial deposit of customers

class initial
{
public:
	void add_to_file(int , char t_name[30], char t_address[30], float);
	// For initial deposits in customers account
	void display_list(void);  // Displaying customer account list
	void delete_account(int);   // Deleting customer account
	void update_balance(int, char t_name[30], char t_address[30], float); //for updating the customer accout
	void modify(void);  // To modify the customer account information
	int last_accno(void);  // To know the last account number
	int found_account(int);  // To found the account is in "INITIAL.dat" or not
	char *return_name(int);  // function for validation entry of customer name
	char *return_address(int);  // function for validation entry for customer address
	float give_balance(int);  //To print the balance amount of a particular customer
	int recordno(int);
	void display(int);  // To display the customer account

private:
	void modify_account(int , char t_name[30], char t_address[30]); // Function to modify the customer account
	intt accno;
	char name[30], address[30];
	float balance;
};

//class contains the customer daily transaction entry

class account
{
public:
	void new_account(void);  // Function to create a new account
	void close_account(void);  // Function to close an account
	void display_account(void);  // Function to display the acconts
	void transaction(void);  //to display the transaction process
	void clear(int, int); // function to perform a clear screen funtion
	void month_report(void);  // Function to list mont wise transaction report
private:
	void add_to_file(int, int, int, int, char, char t_type[10], float, float, float); //function to add transaction eport
	void delete_account(int); //function to delete a transaction record
	int no_of_days(int, int, int, int, int, int); // function to find the total days
	float calculate_interest(int, float); // function to calculate interest of account
	void display(int); // function to display the transaction amount
	void box_for_display(int); // function for dispoalyng the box;
	int accno;
	char type[10]; //Acount type as cheque or cash
	int dd, mm, yy;
	char tran;
	float interest, amount, balance;

};

//function to display all the menu prompt mesages from the pointer array of options a[]
void main_menu::normalvideo(int x, int y, char *str)
{
	gotoxy(x, y);
	cprintf("%s", str);

}

// function to move the cursor on the menu prompt with a reverse video color
void main_menu:: reversevideo(int x, int y, char *str)
{
	textcolor(5 + 143);
	textbackground(WHITE);
	gotoxy(x, y);
	cprintf("%s", str);
	textcolor(GREEN);
	textbackground(BLACK);
}

void main_menu:: box(int x1, int y1, int x2, int y2)
{
	for (int col = x; col < x2; col++)
	{
		gotoxy(col, y);
		cprintf("%c", 196);
		gotoxy(col, y2);
		cprintf("%c", 196);
	}
	for (int row = y1; row < y2; row++)
	{
		gotoxy(x1, row);
		cprintf("%c", 179);
		gotoxy(x2, row);
		cprintf("%c", 179);
	}
	gotoxy(x1, y1);
	cprintf("%c", 218);
	gotoxy(x1, y2);
	cprintf("%c", 192);
	gotoxy(x2, y1);
	cprintf("%c", 191);
	gotoxy(x2, y2);
	cprintf("%c", 217);
}

char main_menu:: menu()
{
	clrscr();
	textcolor(22);
	box(20, 6, 65, 20);
	box(18, 4, 67, 22);
	textcolor(5 + 143);
	gotoxy(36, 5);
	textbackground(BLUE);
	cprintf("B A N K I N G");
	textbackground(BLACK);
	textcolor(22);
	for (i = 1; i < 7; i++)
		normalvideo(32, i + 10, a[i]);
	reversevideo(32, 10, a[0]);
	i = done = 0;
	_setcursortype(_NOCURSOR);
	do
	{
		int key = getch();
		switch (key);
		{
		case 00:
			key = getch();
			switch (key)
			{
			case 72:
				normalvideo(32, i + 10, a[i]);
				i--;
				if (i == -1)
					i = 6;
				reversevideo(32, i + 10, a[i]);
				break;
			case 80:
				normalvideo(32, i + 10, a[i]);
				i++;
				if (i == 7)
					i = 0;
				reversevideo(32, i + 10, a[i]);
				break;

			}
			break;
		case 13:
			done = 1;
		}
	}
	while (!done)
		_setcursortype(_NOCURSOR);
	return (i + 49);
}

//To function main_menu() is used to display the main_menu of banking system

void main_menu::control_menu()
{
	char choice;
	account a;
	do
	{
		choice = menu();
		clrscr();
		switch (choice)
		{
		case '1':
			_setcursortype(_NORMALCURSOR);
			box(3, 1, 75, 24);
			box(5, 2, 73, 23);
			a.new_account();  // New account member function
		case '2':
			box(3, 1, 75, 24);
			box(5, 2, 73, 23);
			initial ini;
			ini.display_list();  // global list of account function
			break;
		case '3':
			box(3, 1, 75, 24);
			box(5, 2, 73, 23);
			_setcursortype(_NORMALCURSOR);
			a.display_account();  // Displaying individual account
			break;
		case '4':
			box(3, 1, 75, 24);
			box(5, 2, 73, 23);
			account a;
			_setcursortype(_NORMALCURSOR);
			a.transaction();  //Daily transaction
			break;
		case '5':
			box(3, 1, 75, 24);
			box(5, 2, 73, 23);
			_setcursortype(_NORMALCURSOR);
			a.month_report();
			break;
		case '6':
			box(3, 1, 75, 24);
			box(5, 2, 73, 23);
			gotoxy(10, 10);
			edit_menu();  //sub menu for modifying any
			break;
		case '7':
			exit(0);
		}

	} while (choice != 6);
}

// Function for edit menu with account modification
void main_menu:: edit_menu()
{
	char choice;
	account a;
	do
	{
		choice = e_menu();
		clrscr();
		switch (choice)
		{
		case '1':
			box(3, 1, 75, 24);
			box(5, 2, 73, 23);
			initial ini;
			_setcursortype(_NORMALCURSOR);
			ini.modify();
			break;
		case '2':
			box(3, 1, 75, 24);
			box(5, 2, 73, 23);
			account a;
			_setcursortype(_NORMALCURSOR);
			a.close_account();
			break;
		case '3':
			return;
		}
	} while (choice != 6);
}

//function to draw horizontal line
void shape::line_hor(int column1, int column2, int row, char c)
{
	for (column1; column1 <= column2; column1++)
	{
		gotoxy(column1, row);
		cout << c;
	}
}

//function to draw vertical line

void shape:: line_ver(int row1, int row2, int column, char c)
{
	for (row1; row1 <= row2; row1++)
	{
		gotoxy(column, row1);
		cout << c;
	}
}

//function for drawing box

void shape::box(int column1, int row1, int column2, int row2, char c)
{
	char ch = 218;
	char c1, c2, c3, c4;
	char l1 = 196, l2 = 179;
	if (c == ch)
	{
		c1 = 218;
		c2 = 191;
		c3 = 217;
		c4 = 217;
		l1 = 196;
		l2 = 179;
	}
	else
	{
		c1 = c;
		c2 = c;
		c3 = c;
		c4 = c;
		l1 = c;
		c2 = c;
	}
	gotoxy(column1, row1);
	cout << c1;
	gotoxy(column2, row1);
	cout << c2;
	gotoxy(column1, row2);
	cout << c3;
	gotoxy(column2, row2);
	cout << c4;
	column1++;
	column2--;
	line_hor(column1, column2, row1, l1);
	line_hor(column1, column2, row2, l1);
	column1--;
	column2++;
	row1++;
	row2--;
	line_ver(row1, row2, column1, l2);
	line_ver(row1, row2, column2, l2);
}

//function to display help about this project
void main_menu::help()
{
	clrscr();
	setbkcolor(7);
	settextstyle(7, HORIZ_DIR, 5);
	outtextxy(70, 20, "Welcome to banking project");
	settextstyle(2, HORIZ_DIR, 5);

	outtextxy(60, 100, "This project your can keep record of daily banking transaction");
	delay(2);
	outtextxy(60, 130, "This program is capable of holding any no. of account");
	delay(2);
	outtextxy(60, 160, "In first option you can open new account");
	delay(2);
	outtextxy(60, 190, "In second option you can see the list of all the accounts");
	delay(2);
	outtextxy(60, 220, "In third option you can see all the transaction of individual account");
	delay(2);
	outtextxy(60, 250, "Though fourth option you can do banking option");
	delay(2);
	outtextxy(60, 280, "Deposit/withdraw");
	delay(2);
	outtextxy(60, 310."In fifth option you can take montnwise account report");
	delay(2);
	outtextxy(60, 340, "In sixth option you can modify or delete any account");
	delay(2);
	outtextxy(60, 370, "Note:-opening amount should not less that 500/-");
	delay(2);
	outtextxy(60, 400, "And last option is Quit(exit to window)");
	dealy(2);
	settextstyle(7, HORIZ_DIR, 4);
	outtextxy(80, 240, "press any key to continue..");
	getch();
}

// Function for modifying the existing accounts
void initial::modify(void)
{
	clrscr();
	int j;
	char t_acc[10];
	int t, t_accno;
	gotoxy(17, 1);
	cout << "<0>=Exit";
	gotoxy(5, 5);
	cout << "Enter the account no;";
	gets(t_acc);
	t = atoi(t_acc);
	t_accno = t;
	if (t_accno == 0)
		return;
	clrscr();
	if (!found_account(t_accno))
	{
		gotoxy(5, 5);
		cout << "\7account not found";
		getch();
		return;
	}

	gotoxy(71, 1);
	cout << "<0>=Exit";
	textbackground(WHITE);
	gotoxy(3, 3);
	for (j = 1; j <= 76; j++)
		cprintf(" ");
	textbackground(BLACK);
	textbackground(BLACK + BLINK);
	textbackground(WHITE);
	gotoxy(30, 3);
	cprintf("modify Account screen");
	textcolor(LIGHTGRAY);
	textbackground(BLACK);
	int d1, m1, y1;
	struct date d;
	getdate(&d);
	d1 = d.da_day;
	m1 = d.da_mon;
	y1 = d.da_year;
	gotoxy(4, 2);
	cout << "Date:" << d1 << "/" << m1 << "/" << y1;
	char ch;
	display(t_accno);
	account a;
	do
	{
		a.clear(5, 13);
		gotoxy(5, 13);
		cout << "Modify this account <y/n>:";
		ch = getche();
		if (ch == '0')
			return;
		ch = toupper(ch);

	} while (ch != 'N' && ch != 'Y');
	if (ch == 'N')
		return;
	int modified = 0, valid;
	char t_name[30], t_address[30];
	gotoxy(5, 15);
	cout << "Name:";
	gotoxy(5, 16);
	cout << "Address:";
	do
	{
		a.clear(15, 15);
		a.clear(5, 23);
		gotoxy(5, 23);
		cout << "enter name or press enter for No change:";
		valid = 2;
		gotoxy(15, 15);
		gets(t_name);
		strupr(t_name);
		if (t_name[0] == '0')
			return;
		if (strlen(t_name) > 25)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Name should not greater than 25");
			getch();
		}
	} while (!valid);
	do
	{
		a.clear(15, 16);
		a.clear(5, 23);
		gotoxy(5, 23);
		cout << "Enter address or press enter for no change";
		valid = 1;
		gotoxy(15, 16);
		gets(t_address);
		strupr(t_address);
		if (t_address[0] == '0')
			return;
		if (strlen(t_address) > 25)
		{
			valid = 0;
			gotoxy(5, 23);
			cprintf("\7Address should not greater than 25");
			getch();
		}
	} while (!valid);

	if (strlen(t_address) > 0)
		modified = 1;
	if (!modified)
		return;
	//clears the screen at 23rd row and from 5th psotion
	a.clear(5, 23);

	do
	{
		a.clear(5, 23);
		gotoxy(5, 18);
		cout << "Do you want to save chages";
		ch = getche();
		if (ch == '0')
			return;
		ch = toupper(ch);
	} while (ch != 'N' && ch != 'Y');
	if (ch == 'N')
		return;
	// passes the parameter to add in data file
	modify_account(t_accno, t_name, t_address);
	gotoxy(5, 21);
	cout << "\7Record modified";
	gotoxy(5, 23);
	cout << "Press any key to continue;";
	getch();
}








