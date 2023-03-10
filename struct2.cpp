#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include <cstdlib>
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
	system("cls");
	cout << "		MENU		\n";
	cout << "-------------------------------------------------\n";
	cout << "	1. Tao danh sach sinh vien\n";
	cout << "	2. Hien thi danh sach sinh vien\n";
	cout << "	3. Scan tuoi\n";
	cout << "	4. Scan que quan\n";
	cout << "	5. Scan so thich\n";
	cout << "	0. Thoat chuong trinh\n";
	cout << "-------------------------------------------------\n";
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
	cout << setw(5) << left << i+1 << setw(20) << left << arr[i].ten << setw(20) << left << arr[i].queQuan << setw(20) << left << arr[i].tuoi << setw(15) << left << arr[i].soThich << endl;
}
void scantuoi(SinhVien arr[], int n)
{
	fflush(stdin);
	int tuoi;
	int i = 0, count = 0;
	cout << "Nhap tuoi can loc: ";
	cin >> tuoi;
	for (i = 0; i < n; i++)
	{
		if (arr[i].tuoi == tuoi)
		{
			count++;
			scaninfor(arr, i);
		}	
	}
	if (count == 0)
	{
		cout << "Khong co sinh vien " << tuoi << " tuoi\n";
	}
}
void scanque(SinhVien arr[], int n)
{
	fflush(stdin);
	string que;
	int i = 0, count = 0;
	cout << "Nhap que quan can loc: ";
	getline(std::cin, que);
	for (i = 0; i < n; i++)
	{
		if (arr[i].queQuan == que)
		{
			count++;
			scaninfor(arr, i);
		}
	}
	if (count == 0)
	{
		cout << "Khong co sinh vien o " << que << endl;
	}
}
void scansothich(SinhVien arr[], int n)
{
	fflush(stdin);
	string soThich;
	int i = 0, count = 0;
	cout << "Nhap so thich can loc: ";
	getline(std::cin, soThich);
	for (i = 0; i < n; i++)
	{
		if (arr[i].soThich == soThich)
		{
			count++;
			scaninfor(arr, i);
		}		
	}
	if (count == 0)
	{
		cout << "Khong co sinh vien " << soThich << endl;
	}
}
int main()
{
	SinhVien sinhvien[10];
	int n;
	string ten[10] = {"Duong Quang Hai", "Hoang Van Thu", "Lac Huyen Thanh", "Le Van Luyen", "Lac Nhuoc Hi", "Dien Vi", "Hoang Phi Hong", "Ly Tieu Long", "Ngoc Ngao Xuan", "Giang Mac Vien"};
	string queQuan[5] = {"Ha Noi", "Bac Giang", "Thai Nguyen", "Phu Tho", "Thai Binh"};
	int tuoi[5] = {19, 20, 22, 18, 21};
	string soThich[5] = {"Guitar", "Boi", "Hat", "Choi game", "Ngu nuong"};
	srand(time(NULL));
	while (true)
	{
		Menu();
		cout << "Nhap lua chon cua ban: ";
		int selection;
		cin >> selection;
		switch (selection)
		{
			case 0:
				exit(false);
				break;
			case 1:
				cout << "Nhap so sinh vien: ";
				cin >> n;
				for (int i = 0; i < n; i++)
				{
					sinhvien[i].ten = ten[rand() % 10];
					sinhvien[i].queQuan = queQuan[rand() % 5];
					sinhvien[i].tuoi = tuoi[rand() % 5];
					sinhvien[i].soThich = soThich[rand() % 5];
				}
				cout << "Done!\n";
				cout << "Nhan phim bat ki de tiep tuc!";
				getch();
				break;
			case 2:
				output(sinhvien, n);
				cout << "Nhan phim bat ki de tiep tuc!";
				getch();
				break;
			case 3:
				scantuoi(sinhvien, n);
				cout << "Nhan phim bat ki de tiep tuc!";
				getch();
				break;
			case 4:
				scanque(sinhvien, n);
				cout << "Nhan phim bat ki de tiep tuc!";
				getch();
				break;
			case 5:
				scansothich(sinhvien, n);
				cout << "Nhan phim bat ki de tiep tuc!";
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
