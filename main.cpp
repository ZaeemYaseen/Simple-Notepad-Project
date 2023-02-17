#include"SOURCE.h"
int main()
{
	maker();
	Sleep(1000);
	NOTEPAD p;
	string find, copy, n;
	bool found;
	int userwill=0, x=0, y=0;
	p.filling();
	do
	{
		Sleep(1000);
		system("cls");
		cout << "NOTEPAD.\n";
		p.display();
		p.filled();
		cout << "\n______________________________________________________________________\n";
		cout << "\n\t\tWhat action do u want to perform & press '0' to EXIT:\n";
		cout << "\t\t1)	ADD TEXT.\t";
		cout << "2)	DELETE TEXT.\n";
		cout << "\t\t3)	SEARCH TEXT.\t";
		cout << "4)	COPY TEXT.\n";
		cout << "\t\t5)	PASTE TEXT.\t";
		cout << "6)	FIND & REPLACE TEXT.\n";
		cout << "\t\t7)	UNDO TEXT.\t";
		cout << "8)	COUNT TOTAL TEXT.\n";
		cin >> userwill;

		switch (userwill)
		{
		case 0:
			break;
		case 1:
			p.push();
			cout << "Enter the (x,y) cordinates [minimum (0,0), maximum(49,19)] where you want to put the text;\n";
			cout << "x: ";
			cin >> x;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "ERROR! ENTER AGAIN.\n" << endl;
				cin >> x;
			}
			while (x < 0 || x > 49)
			{
				cout << "ERROR! ENTER AGAIN.\n" << endl;
				cin >> x;
			}
			cout << "y: ";
			cin >> y;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "ERROR! ENTER AGAIN.\n" << endl;
				cin >> y;
			}
			while (y < 0 || y > 19)
			{
				cout << "ERROR! ENTER AGAIN.\n" << endl;
				cin >> y;
			}
			p.insert(x, y);
			break;
		case 2:
			cout << "Enter the string you want to delete " << endl;
			cin >> n;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "ERROR! ENTER AGAIN.\n" << endl;
				cin >> n;
			}
			p.delet(n);
			break;
		case 3:
			p.search();
			break;
		case 4:
			cout << "Enter the (x,y) cordinates whose text you want to copy;\n";
			cout << "x: ";
			cin >> x;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "ERROR! ENTER AGAIN.\n" << endl;
				cin >> x;
			}
			while (x < 0 || x > 49)
			{
				cout << "OUT OF BOUND. ENTER AGAIN.";
				cin >> x;
			}
			cout << "y: ";
			cin >> y;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "ERROR! ENTER AGAIN.\n" << endl;
				cin >> y;
			}
			while (y < 0 || y > 19)
			{
				cout << "OUT OF BOUND. ENTER AGAIN.";
				cin >> y;
			}
			copy = p.copy(x, y);
			break;
		case 5:
			p.push();
			if (copy != "")
			{
				cout << "Enter the (x,y) cordinates where you want to paste the copied text;\n";
				cout << "x: ";
				cin >> x;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "ERROR! ENTER AGAIN.\n" << endl;
					cin >> x;
				}
				while (x < 0 || x > 49)
				{
					cout << "OUT OF BOUND. ENTER AGAIN.";
					cin >> x;
				}
				cout << "y: ";
				cin >> y;
				while (cin.fail())
				{
					cin.clear();
					cin.ignore();
					cout << "ERROR! ENTER AGAIN.\n" << endl;
					cin >> y;
				}
				while (y < 0 || y > 19)
				{
					cout << "OUT OF BOUND. ENTER AGAIN.";
					cin >> y;
				}
				p.paste(x,y,copy);
			}
			else
				cout << "\nERROR! NOTHING COPIED YET.\n";
			break;
		case 6:
			p.push();
			cout << "\nEnter the text which you want to find: ";
			cin >> find;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cout << "ERROR! ENTER AGAIN.\n" << endl;
				cin >> find;
			}
			p.find(find);
			break;
		case 7:
			p.undo();
			break;
		case 8:
			cout << "TOTAL NUMBER OF WORDS ARE: " << p.count();
			break;
		default:
			cout << "------------------------------ERROR: WRONG INPUT.------------------------------\n";
			break;
		}
	} while (userwill != 0);
	system("pause");
	return 0;
}
