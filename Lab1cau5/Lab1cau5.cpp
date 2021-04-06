#include <iostream>;
#include <string>;

using namespace std;

class HocSinh
{
private:
	string HoTen;
	float DToan;
	float DVan;
	float Dtb;
public:
	void Nhap();
	void Xuat();
	void XuLi();
};

void HocSinh::Nhap()
{
	cout << "Nhap ho va ten hoc sinh: ";
	getline(cin, HoTen);
	cout << "Nhap diem Toan: ";
	cin >> DToan;
	cout << "Nhap diem Van: ";
	cin >> DVan;
}

void HocSinh::Xuat()
{
	cout << "\nHo va Ten: " << HoTen;
	cout << "\nDiem Toan: " << DToan;
	cout << "\nDiem Van: " << DVan;
	cout << "\nDiem trung binh la: " << Dtb;
}

void HocSinh::XuLi()
{
	Dtb = (DToan + DVan) / 2;
}

int main()
{
	HocSinh hs;
	hs.Nhap();
	hs.XuLi();
	cout << "\nKet qua: ";
	hs.Xuat();
}