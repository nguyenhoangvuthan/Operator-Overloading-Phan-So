#include "PhanSo1.h"



PhanSo1::PhanSo1()
{
	iTuSo = 0;
	iMauSo = 1;
}

PhanSo1::PhanSo1(int a, int b)
{
	iTuSo = a;
	iMauSo = b;
}


PhanSo1::~PhanSo1()
{
}

int PhanSo1::UCLN(int a, int b)
{
	while (abs(a) != abs(b))
	{
		if (abs(a) < abs(b))
			b = abs(b) - abs(a);
		else
			a = abs(a) - abs(b);
	}
	return abs(a);
}

//PhanSo1 PhanSo1::RutGonPhanSo()
//{
//	PhanSo1 a;
//	a.iTuSo = iTuSo / UCLN(iTuSo, iMauSo);
//	a.iMauSo = iMauSo / UCLN(iTuSo, iMauSo);
//	return a;
//}

int PhanSo1::getTuSo()
{
	return iTuSo;
}

int PhanSo1::getMauSo()
{
	return iMauSo;
}

int PhanSo1::setTuSo(int a)
{
	iTuSo = a;
	return iTuSo;
}

int PhanSo1::setMauSo(int a)
{
	iMauSo = a;
	return iMauSo;
}

ostream & operator<<(ostream & os, PhanSo1 a)
{
	/*a.RutGonPhanSo();
	os << "Phan So Cuoi Cung La: " << a.iTuSo / UCLN(a.iTuSo, a.iMauSo) << "/" << a.iMauSo / UCLN(a.iTuSo, a.iMauSo)  << endl;*/

	os << "Phan So Cuoi Cung La: " << a.iTuSo/ a.UCLN(a.iTuSo, a.iMauSo) << "/" << a.iMauSo / a.UCLN(a.iTuSo, a.iMauSo) << endl;
	return os;
}

istream & operator>>(istream & is, PhanSo1 &a)
{
	cout << "Nhap Tu So: ";
	is >> a.iTuSo;

	cout << "Nhap Mau So:";
	is >> a.iMauSo;

	while (a.iMauSo == 0)
	{
		cout << "Nhap Sai. Vui Long Nhap Lai." << endl;
		cout << "Nhap Mau So:";
		is >> a.iMauSo;
	}
	return is;
}

PhanSo1 operator+(PhanSo1 a, PhanSo1 b)
{
	PhanSo1 c;

	c.iTuSo = b.iTuSo * a.iMauSo + a.iTuSo * b.iMauSo;
	c.iMauSo = b.iMauSo * a.iMauSo;

	return c;
}

PhanSo1 operator-(PhanSo1 a, PhanSo1 b)
{
	PhanSo1 c;

	c.iTuSo = a.iTuSo * b.iMauSo - b.iTuSo * a.iMauSo;
	c.iMauSo = b.iMauSo * a.iMauSo;

	return c;
}

PhanSo1 operator*(PhanSo1 a, PhanSo1 b)
{
	PhanSo1 c;

	c.iTuSo = b.iTuSo * a.iTuSo;
	c.iMauSo = b.iMauSo * a.iMauSo;

	return c;
}

PhanSo1 operator/(PhanSo1 a, PhanSo1 b)
{
	PhanSo1 c;

	c.iTuSo = a.iTuSo * b.iMauSo;
	c.iMauSo = a.iMauSo * b.iTuSo;

	return c;
}
