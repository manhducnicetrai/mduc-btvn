#include<iostream.h>
class lp_gv {
	private: 
	char hoten[30];
	int tuoi;
	char bc[15];
	char chuyennganh[20];
	float luongcoban;
	float bluong;
	public :
	void nhap()
	{
	cout << "\nNhap ho ten giao vien: ";
	cin.getline(hoten, 30);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	cin.ignore();
	cout << "\nNhap bang cap: ";
	cin.getline (bc, 15);
	cout << "\nNhap chuyen nganh: ";
	cin.getline(chuyennganh, 20);
	cout << "\nNhap bac luong: ";
	cin >> bluong;
	}					
	void Tinhtien()
	{
	luongcoban = bluong*610;
	}
	void xuat()
	{
	cout << "Giao vien: "  << hoten<<endl;
         << "Tuoi:  "      << tuoi<<endl;
         << "Bang cap: "    << bc<<endl;
         << "Chuyen nganh: "<< chuyennganh<<endl;
         << "Tien luong: "  << luongcoban <<endl;
		}
		void luongnho()
		{	
			if(luongcoban < 2000)
			{
				xuat();
			}
		}
};
int main()
{
int n;
cout << "\nNhap so luong giao vien: ";
cin >> n;
lp_gv a[n];
cout << "\nNhap thong tin giao vien: "<< endl;
for(int i =0; i < n; i++)
{
cout << "\nGiao vien thu: "<< i+1 << endl;
a[i].nhap();
}
cout << "\nDanh sach giao vien: " << endl;
for(int i =0; i<n;i++){	
cout << "\nGiao vien thu: " <<i+1<< endl;		
cout << "\nSo giao vien tien luong nho hon 2000:"<<endl;
for(int i =0; i<n;i++)
{
a[i].luongnho();
}
return 0;
	
}