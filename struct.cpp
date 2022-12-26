#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
using namespace std;
struct SinhVien
{
	string ten;
	string queQuan;
	int tuoi;
	string soThich;
};
void Menu()
{
	cout << "MENU";
}
void input(SinhVien arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Sinh Vien " << i + 1 << endl;
		fflush(stdin);
		cout << "Ten: ";
		getline(std::cin, arr[i].ten);
		cout << "Que Quan:";
		getline(std::cin, arr[i].queQuan);
		fflush(stdin);
		cout << "Tuoi :";
		cin >> arr[i].tuoi;
		fflush(stdin);
		cout << "So Thich: ";
		getline(std::cin, arr[i].soThich);
		cout << endl;
	}
}
void output(SinhVien arr[], int n)
{
	cout << setw(5) << left << "STT" << setw(20) << left << "Ten" << setw(20) << left << "Que Quan" << setw(20) << left << "Tuoi" << setw(15) << left << "So Thich" << endl;
	
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << left << i+1 << setw(20) << left << arr[i].ten << setw(20) << left << arr[i].queQuan << setw(20) << left << arr[i].tuoi << setw(15) << left << arr[i].soThich << endl;
	}
}
void scaninfor(SinhVien arr[], int i)
{
	cout << i+1 << "\t" << arr[i].ten << setw(15) << arr[i].queQuan << setw(15) << arr[i].tuoi << setw(15) << arr[i].soThich << endl;
}
void scantuoi(SinhVien arr[], int n)
{
	fflush(stdin);
	int tuoi;
	int i = 0;
	cin >> tuoi;
	for (i = 0; i < n; i++)
	{
		if (arr[i].tuoi == tuoi)
		scaninfor(arr, i);
	}
}
void scanque(SinhVien arr[], int n)
{
	fflush(stdin);
	string que;
	int i = 0;
	getline(std::cin, que);
	for (i = 0; i < n; i++)
	{
		if (arr[i].queQuan == que)
		scaninfor(arr, i);
	}
}
void scansothich(SinhVien arr[], int n)
{
	fflush(stdin);
	string soThich;
	int i = 0;
	getline(std::cin, soThich);
	for (i = 0; i < n; i++)
	{
		if (arr[i].soThich == soThich)
		scaninfor(arr, i);
	}
}
int main()
{
	SinhVien sinhvien[10];
	int n;
	cout << "Nhap so sinh vien: ";
	cin >> n;
	input(sinhvien, n);
	output(sinhvien, n);
	while (true)
	{
		system("cls");
		cout << "	MENU	\n";
		cout << "1. Scan tuoi\n";
		cout << "2. Scan que quan\n";
		cout << "3. Scan so thich\n";
		cout << "Nhap lua chon cua ban: ";
		int selection;
		cin >> selection;
		switch (selection)
		{
			case 0:
				exit(false);
				break;
			case 1:
				scantuoi(sinhvien, n);
				getch();
				break;
			case 2:
				scanque(sinhvien, n);
				getch();
				break;
			case 3:
				scansothich(sinhvien, n);
				getch();
				break;
			default:
				cout << "Vui long chon chuc nang tu 1 - 3";
				getch();
				break;
		}
	}
	return 0;
}
