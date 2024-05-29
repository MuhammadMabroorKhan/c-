#include <iostream>
using namespace std;
struct food
{
	int price;
	int id;
	int qty;
};
void checkyd()
{
	cout << "You Order " << endl;
	for (int i = 0; i < 1; i++)
	{
		cout << "Name     ";
		cout << "ID     ";
		cout << "Price   ";
		cout << "Quantity    " << endl;
	}
};

int main()
{
	int bill = 0;
	char choice, yn;
	food arr[4];
	arr[0].id = 10;
	arr[0].price = 100;
	arr[0].qty = 0;
	arr[1].id = 11;
	arr[1].price = 200;
	arr[1].qty = 0;
	arr[2].id = 12;
	arr[2].price = 300;
	arr[2].qty = 0;
	arr[3].id = 13;
	arr[3].price = 400;
	arr[3].qty = 0;
	arr[4].id = 14;
	arr[4].price = 100;
	arr[4].qty = 0;

	do
	{
		system("cls");
		cout << "A/a   Sprite " << endl;
		cout << "B/b   Sandwitch" << endl;
		cout << "C/c   Burger" << endl;
		cout << "D/d   Pizza " << endl;
		cout << "E/e   Tea " << endl;
		cout << "F/f   Check Order" << endl;
		cout << "Enter Choice" << endl;
		cin >> choice;
		if (choice == 'A' || choice == 'a')
		{
			cout << "Enter Sprite Quantity " << endl;
			cin >> arr[0].qty;
			bill += arr[0].qty * arr[0].price;
		}
		else if (choice == 'B' || choice == 'b')
		{
			cout << "Enter Sandwitch Quantity " << endl;
			cin >> arr[1].qty;
			bill += arr[1].qty * arr[1].price;
		}
		else if (choice == 'C' || choice == 'c')
		{
			cout << "Enter Burger Quantity " << endl;
			cin >> arr[2].qty;
			bill += arr[2].qty * arr[2].price;
		}
		else if (choice == 'D' || choice == 'd')
		{
			cout << "Enter Pizza Quantity " << endl;
			cin >> arr[3].qty;
			bill += arr[3].qty * arr[3].price;
		}
		else if (choice == 'E' || choice == 'e')
		{
			cout << "Enter Tea  Quantity " << endl;
			cin >> arr[4].qty;
			bill += arr[4].qty * arr[4].price;
		}
		else if (choice == 'F' || choice == 'f')
		{
			system("cls");
			checkyd();
			for (int i = 0; i < 1; i++)
			{
				if (arr[0].qty != 0)
					cout << "Sprite    " << arr[0].id << "   " << arr[0].price << "      " << arr[0].qty << "  " << endl;
				if (arr[1].qty != 0)
					cout << "Sandwitch" << arr[1].id << "   " << arr[1].price << "      " << arr[1].qty << "  " << endl;
				if (arr[2].qty != 0)
					cout << "Burger  " << arr[2].id << "    " << arr[2].price << "      " << arr[2].qty << "  " << endl;
				if (arr[3].qty != 0)
					cout << "Pizza   " << arr[3].id << "    " << arr[3].price << "      " << arr[3].qty << "  " << endl;
				if (arr[4].qty != 0 && arr[4].qty < 100 && arr[4].qty > 0)
					cout << "Tea      " << arr[4].id << "   " << arr[4].price << "      " << arr[4].qty << "  " << endl;
				else
				{
					cout << "Order Something" << endl;
				}
			}
		}
		else
		{
			cout << "Invalid Input ";
		}
		cout << endl;
		cout << "Bill is => " << bill << endl;
		cout << "Press Y/y for buy more => " << endl;
		cin >> yn;
	} while (yn == 'Y' || yn == 'y');

	system("pause");
	return 0;
}