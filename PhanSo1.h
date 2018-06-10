#include <iostream>
using namespace std;

class PhanSo1
{
private:
	int iTuSo;
	int iMauSo;
public:
	int UCLN(int a, int b);
	/*PhanSo1 RutGonPhanSo();*/

	/*ostream& operator << (ostream &os, PhanSo1 a);
	istream& operator >> (istream &is, PhanSo1 &a);*/

	friend ostream& operator << (ostream &os, PhanSo1 a);
	friend istream& operator >> (istream &is, PhanSo1 &a);
	int getTuSo();
	int getMauSo();
	int setTuSo(int a);
	int setMauSo(int a);
	friend PhanSo1 operator + (PhanSo1 a, PhanSo1 b);
	friend PhanSo1 operator - (PhanSo1 a, PhanSo1 b);
	friend PhanSo1 operator * (PhanSo1 a, PhanSo1 b);
	friend PhanSo1 operator / (PhanSo1 a, PhanSo1 b);

	/*PhanSo1 operator + (PhanSo1 a, PhanSo1 b);
	PhanSo1 operator - (PhanSo1 a, PhanSo1 b);
	PhanSo1 operator * (PhanSo1 a, PhanSo1 b);
	PhanSo1 operator / (PhanSo1 a, PhanSo1 b);*/

	PhanSo1();
	PhanSo1(int a, int b);
	~PhanSo1();
};
