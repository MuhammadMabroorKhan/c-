#include <iostream>
using namespace std;
struct food
{
	char name;
	int id, qty, tb, price, bill, count;
};

void mainmenu();

void gomain();

void submenu();

void choose();

void display();

void search();

void checkyd();

int main()
{
	int n;
	int n3;
	int tb;
	char chr;

repe:
	system("cls");
	mainmenu();
	cin >> n;
	switch (n)
	{
	case 1:
	{
		choose();
		cout << "\n\tWould you want to delete your order\n\t Press D/d to delete your Order " << endl;
		cin >> chr;
		if (chr == 'D' || chr == 'd')
		{
			system("cls");
			cout << "\n\n\t\tYour Order IS Deleted " << endl;
			cout << "\n\n\t\tYOur Bill IS Deleted \n\n\t\tBill : " << (tb = 0);
			gomain();
			cin >> n3;
			if (n3 == 2)
			{
				goto repe;
			}
			else
			{
				break;
			}
		}
		else
		{
			system("cls");
			cout << "\n\n\t\tThanks For Ordering \n\t\t Your Order IS Ready In 15 Minutes " << endl;
			gomain();
			cin >> n3;
			if (n3 == 2)
			{
				goto repe;
			}
			else
			{
				break;
			}
		}
	}

	case 2:
	{
		search();
		gomain();
		cin >> n3;
		if (n3 == 2)
		{
			goto repe;
		}
		else
		{
			system("pause");
		}
	}

	case 3:
	{
		display();
		gomain();
		cin >> n3;
		if (n3 == 2)
		{
			goto repe;
		}
		else
		{
			system("pause");
		}
	}

	case 4:
	{
		break;
	}

	default:
	{
		system("cls");
		cout << "  \n\t\t Invalid Input \n\t\tPlease Enter Valid Value\n ";
		gomain();
		cin >> n3;
		if (n3 == 2)
		{
			goto repe;
		}
		else
		{
			break;
		}
	}
	}
	system("pause");
	return 0;
}

void mainmenu()
{
	cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout << "::  \n::\tPress Any One Of them                    ::\n::" << endl;
	cout << "::  \tEnter 1 to Order                         ::\n::" << endl;
	cout << "::  \tEnter 2 To Search Product                ::\n::" << endl;
	cout << "::  \tEnter 3 to Display All Details and Price ::\n::" << endl;
	cout << "::  \tEnter 4 To Exit                          ::\n:: " << endl;
	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::";
}

void gomain()
{
	cout << "\n\n\tPress 2 To go  to Main Menu and any Key to End Program  ";
};

void submenu()
{
	food arr[7];
	arr[0].id = 1;
	arr[1].id = 2;
	arr[2].id = 3;
	arr[3].id = 4;
	arr[4].id = 5;
	arr[5].id = 6;
	arr[6].id = 7;
	cout << "\n\n\tChoose Your Order \n\n\tExample: Press A/a to Order Fries\n\n ";
	cout << "\t\t_____________________________________" << endl
		 << endl;
	cout << "\t\t|  Name   |   Foods         |  Code  |         " << endl;
	cout << "\t\t|_________|_________________|________|" << endl
		 << endl;
	cout << "\t\t|  A / a  | Fries           |   " << arr[0].id << "    |    " << endl;
	cout << "\t\t|  B / b  | Sandwitch       |   " << arr[1].id << "    |    " << endl;
	cout << "\t\t|  C / c  | Chicken Pizza   |   " << arr[2].id << "    |    " << endl;
	cout << "\t\t|  D / d  | Chicken burger  |   " << arr[3].id << "    |    " << endl;
	cout << "\t\t|  E / e  | Zinger burger   |   " << arr[4].id << "    |    " << endl;
	cout << "\t\t|  F / f  | Lemon Malt      |   " << arr[5].id << "    |    " << endl;
	cout << "\t\t|  G / g  | coca-cola       |   " << arr[6].id << "    |    " << endl;
	cout << "\t\t|____________________________________" << endl
		 << endl
		 << "\t\t";
};

void choose()
{
	char choice;
	int tb = 0;
	char chr;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0;
	food arr[7];
	arr[0].id = 1;
	arr[0].name = 'A';
	arr[0].price = 100;
	arr[0].qty = 0;
	arr[0].bill = 0;
	arr[1].id = 2;
	arr[1].name = 'B';
	arr[1].price = 150;
	arr[1].qty = 0;
	arr[1].bill = 0;
	arr[2].id = 3;
	arr[2].name = 'C';
	arr[2].price = 1000;
	arr[2].qty = 0;
	arr[2].bill = 0;
	arr[3].id = 4;
	arr[3].name = 'D';
	arr[3].price = 200;
	arr[3].qty = 0;
	arr[3].bill = 0;
	arr[4].id = 5;
	arr[4].name = 'E';
	arr[4].price = 400;
	arr[4].qty = 0;
	arr[4].bill = 0;
	arr[5].id = 6;
	arr[5].name = 'F';
	arr[5].price = 100;
	arr[5].qty = 0;
	arr[5].bill = 0;
	arr[6].id = 7;
	arr[6].name = 'G';
	arr[6].price = 100;
	arr[6].qty = 0;
	arr[6].bill = 0;
	do
	{
		system("cls");
	back:
		submenu();
		cin >> choice;
		if (choice == 'A' || choice == 'a')
		{
			cout << "   Enter Fries Quantity";
			cin >> arr[0].qty;
			arr[0].bill = (arr[0].qty) * (arr[0].price);
			tb += arr[0].bill;
			c1++;
		}
		else if (choice == 'B' || choice == 'b')
		{
			cout << "   Enter Sandwitch Quantity";
			cin >> arr[1].qty;
			arr[1].bill = (arr[1].qty) * (arr[1].price);
			tb += arr[1].bill;
			c2++;
		}
		else if (choice == 'C' || choice == 'c')
		{
			cout << "   Enter Chicken Pizza Quantity";
			cin >> arr[2].qty;
			arr[2].bill = (arr[2].qty) * (arr[2].price);
			tb += arr[2].bill;
			c3++;
		}
		else if (choice == 'D' || choice == 'd')
		{
			cout << "   Enter Chicken Burger Quantity";
			cin >> arr[3].qty;
			arr[3].bill = (arr[3].qty) * (arr[3].price);
			tb += arr[3].bill;
			c4++;
		}
		else if (choice == 'E' || choice == 'e')
		{
			cout << "   Enter Zinger Burger Quantity";
			cin >> arr[4].qty;
			arr[4].bill = (arr[4].qty) * (arr[4].price);
			tb += arr[4].bill;
			c5++;
		}
		else if (choice == 'F' || choice == 'f')
		{
			cout << "   Enter Lemon Malt Quantity";
			cin >> arr[5].qty;
			arr[5].bill = (arr[5].qty) * (arr[5].price);
			tb += arr[5].bill;
			c6++;
		}
		else if (choice == 'G' || choice == 'g')
		{
			cout << "   Enter Coca Cola Quantity";
			cin >> arr[6].qty;
			arr[6].bill = (arr[6].qty) * (arr[6].price);
			tb += arr[6].bill;
			c7++;
		}

		else
		{
			cout << "   \n\tInvalid Input \n\t Please Input Valid Input " << endl;
			goto back;
		}
		cout << "  \tWould you buy more press Y for yes : ";
		cin >> chr;
	} while (chr == 'Y' || chr == 'y');
	void checkyd();
	{
		int qy;
		cout << "\n\twould You want to check What You Order\n\tPress 1 to check  ";
		cin >> qy;
		if (qy == 1)
		{
			system("cls");
			cout << "\n\n\tYou Order these Foods " << endl;

			if (c1 != 0)
			{
				cout << "\n\tFries    quantity    " << arr[0].qty << "    Price    " << (arr[0].price) << endl;
			}
			if (c2 != 0)
			{
				cout << "\n\tSandwitch    Quantity    " << arr[1].qty << "    Price    " << (arr[1].price) << endl;
			}
			if (c3 != 0)
			{
				cout << "\n\tChicken Pizza    Quantity    " << arr[2].qty << "    Price    " << (arr[2].price) << endl;
			}
			if (c4 != 0)
			{
				cout << "\n\tChicken Burger    Quantity    " << arr[3].qty << "    Price    " << (arr[3].price) << endl;
			}
			if (c5 != 0)
			{
				cout << "\n\tZinger Burger    Quantity    " << arr[4].qty << "    Price    " << (arr[4].price) << endl;
			}
			if (c6 != 0)
			{
				cout << "\n\tLemon Malt    Quantity    " << arr[5].qty << "    Price    " << (arr[5].price) << endl;
			}
			if (c7 != 0)
			{
				cout << "\n\tCoca Cola       Quantity    " << arr[6].qty << "    Price    " << arr[6].price << endl;
			}
		}
		cout << "\nYour Bill => " << tb << endl;
	};
};

void display()
{
	food arr[7];
	arr[0].id = 1;
	arr[0].price = 100;
	arr[1].id = 2;
	arr[1].price = 150;
	arr[2].id = 3;
	arr[2].price = 1000;
	arr[3].id = 4;
	arr[3].price = 200;
	arr[4].id = 5;
	arr[4].price = 400;
	arr[5].id = 6;
	arr[5].price = 100;
	arr[6].id = 7;
	arr[6].price = 100;
	system("cls");
	cout << "\t\t________________________________________________" << endl
		 << endl;
	cout << "\t\t|  Name   |   Foods         |  Code  |    Price |       " << endl;
	cout << "\t\t|_________|_________________|________|__________|" << endl
		 << endl;
	cout << "\t\t|  A / a  | Fries           |   " << arr[0].id << "    | " << arr[0].price << "      |  " << endl;
	cout << "\t\t|  B / b  | Sandwitch       |   " << arr[1].id << "    | " << arr[1].price << "      |  " << endl;
	cout << "\t\t|  C / c  | Chicken Pizza   |   " << arr[2].id << "    | " << arr[2].price << "     |  " << endl;
	cout << "\t\t|  D / d  | Chicken burger  |   " << arr[3].id << "    | " << arr[3].price << "      |  " << endl;
	cout << "\t\t|  E / e  | Zinger burger   |   " << arr[4].id << "    | " << arr[4].price << "      |  " << endl;
	cout << "\t\t|  F / f  | Lemon Malt      |   " << arr[5].id << "    | " << arr[5].price << "      |  " << endl;
	cout << "\t\t|  G / g  | coca-cola       |   " << arr[6].id << "    | " << arr[6].price << "      |  " << endl;
	cout << "\t\t|_______________________________________________|" << endl
		 << endl;
};

void search()
{
	food arr[7];
	arr[0].id = 1;
	arr[0].price = 100;
	arr[1].id = 2;
	arr[1].price = 150;
	arr[2].id = 3;
	arr[2].price = 1000;
	arr[3].id = 4;
	arr[3].price = 200;
	arr[4].id = 5;
	arr[4].price = 400;
	arr[5].id = 6;
	arr[5].price = 100;
	arr[6].id = 7;
	arr[6].price = 100;
repc:
	char n;
	char smn, smc;
	cout << "\n\t\tSearch Product By Alphabetical Name OR By Code \n"
		 << endl;
	cout << "\t\tEnter N/n For search By character and C/c for Search By code " << endl;
	cin >> n;
	if (n == 'N' || n == 'n')
	{
		do
		{
		rep:
			system("cls");
			cout << "\t\n\n"
				 << endl;
			cout << "\t\tNAme Start from A to G " << endl;
			cout << "\n\t\tEnter A to G any Character to get details \nExample : Press A/a to Get Fries Details ::\n";
			char z;
			cin >> z;
			cout << "  Name   |   Foods         |  Code  |    Price     " << endl;
			if (z == 'A' || z == 'a')
				cout << "  A / a  | Fries           |   " << arr[0].id << "    |    " << arr[0].price << endl;
			else if (z == 'B' || z == 'b')
				cout << "  B / b  | Sandwitch       |   " << arr[1].id << "    |    " << arr[1].price << endl;
			else if (z == 'C' || z == 'c')
				cout << "  C / c  | Chicken Pizza   |   " << arr[2].id << "    |    " << arr[2].price << endl;
			else if (z == 'D' || z == 'd')
				cout << "  D / d  | Chicken burger  |   " << arr[3].id << "    |    " << arr[3].price << endl;
			else if (z == 'E' || z == 'e')
				cout << "  E / e  | Zinger burger   |   " << arr[4].id << "    |    " << arr[4].price << endl;
			else if (z == 'F' || z == 'f')
				cout << "  F / f  | Lemon Malt      |   " << arr[5].id << "    |    " << arr[5].price << endl;
			else if (z == 'G' || z == 'g')
				cout << "  G / g  | coca-cola       |   " << arr[6].id << "    |    " << arr[6].price << endl;
			else
			{
				cout << "\n\t Invalid Input " << endl;
				cout << "\n\tPlease Enter VAlid Input " << endl;
				goto rep;
			}
			cout << "\n\n\tWould you want to search More Press Y for yes";
			cin >> smn;
		} while (smn == 'Y' || smn == 'y');
	}
	else if (n == 'C' || n == 'c')
	{
		do
		{
		rept:
			system("cls");
			cout << "\t\n Code Start from 1 to 7 ";
			cout << "\t\n Enter 1 to 7 any number to Check details\nExample: Press 1 To Get Fries Details " << endl;
			int z;
			cin >> z;
			cout << "  Name   |   Foods         |  Code  |    Price     " << endl;
			if (z == 1)
				cout << "  A / a  | Fries           |   " << arr[0].id << "    |    " << arr[0].price << endl;
			else if (z == 2)
				cout << "  B / b  | Sandwitch       |   " << arr[1].id << "    |    " << arr[1].price << endl;
			else if (z == 3)
				cout << "  C / c  | Chicken Pizza   |   " << arr[2].id << "    |    " << arr[2].price << endl;
			else if (z == 4)
				cout << "  D / d  | Chicken burger  |   " << arr[3].id << "    |    " << arr[3].price << endl;
			else if (z == 5)
				cout << "  E / e  | Zinger burger   |   " << arr[4].id << "    |    " << arr[4].price << endl;
			else if (z == 6)
				cout << "  F / f  | Lemon Malt      |   " << arr[5].id << "    |    " << arr[5].price << endl;
			else if (z == 7)
				cout << "  G / g  | coca-cola       |   " << arr[6].id << "    |    " << arr[6].price << endl;
			else
			{
				cout << "\n\t Invalid Input " << endl;
				cout << "\n\tPlease Enter VAlid Input " << endl;
				goto rept;
			}
			cout << "\t\t\nWould you want to search More Press Y for yes ";
			cin >> smc;
		} while (smc == 'Y' || smc == 'y');
	}
	else
	{
		cout << " Invalid Input " << endl;
		cout << "Please Enter VAlid Input " << endl;
		goto repc;
	}
};
