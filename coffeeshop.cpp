#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
using namespace std;
class Customer
{
	public:
		string name;
		string gender;
	public:
		int order()
		{
			int selection;
			srand(time(NULL));
			selection = rand() % (5 - 1 + 1) + 1;
			return selection;
		}
};
class Waitress
{
	public:
		string name;
		int age;
	public:
		void welcome(Customer cus)
		{
			if (cus.gender == "Nu")
			{
				cout << "Xin chao "<< cus.name << " tieu thu" << endl;
				cout << "Moi tieu thu chon ban!" << endl;
				cout << "----------------------------------\n";
			}		
			else if (cus.gender == "Nam")
			{
				cout << "Xin chao "<< cus.name << " thieu gia" << endl;
				cout << "Moi thieu gia chon ban!" << endl;
			cout << "----------------------------------\n";
			}	
		}
		void showMenu(Customer cus)
		{
			cout << "Moi quy khach xem thuc don\n";
			cout << "----------------------------------\n";
			cout << "	1. Cafe\n";
			cout << "	2. Nuoc ep trai cay\n";
			cout << "	3. Tra sua\n";
			cout << "	4. Sinh to bo\n";
			cout << "	5. Rong do\n";
			cout << "----------------------------------\n";
		}
		void writeMenu(Customer cus)
		{
			switch(cus.order())
			{
				case 1:
					cout << "1 cafe!" << endl;
					break;
				case 2:
					cout << "1 nuoc ep trai cay!" << endl;
					break;
				case 3:
					cout << "1 tra sua!" << endl;
					break;
				case 4:
					cout << "1 sinh to bo!" << endl;
					break;
				case 5:
					cout << "1 rong do!" << endl;
					break;
			}
		}
};
class Bartender
{
	public:
		string name;
		int age;
	public:
		void takeOrder(Waitress wai)
		{
			Customer cus;
			wai.writeMenu(cus);
		}
		void notify(Customer cus)
		{
			cout << "Cua " << cus.name << " da xong!";
		}	
}; 
int main()
{
	Customer cus;
	Waitress wai;
	Bartender bar;
	srand(time(NULL));
	string gender[2] = {"Nam", "Nu"};
	string name[5] = {"Nam", "Hoa", "Hung", "Kieu", "Nhi"};
	cus.name = name[rand() % 5];
	cus.gender = gender[rand() % 2];
	wai.welcome(cus);
	wai.showMenu(cus);
	wai.writeMenu(cus);
	bar.notify(cus);
	return 0;
}
