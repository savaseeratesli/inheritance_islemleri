#include <iostream>

using namespace std;

class baseClass
{
//private miras verilmez
protected://Sadece miras alansýnýftan eriþim var
	int x;

public:
	void setX(int mainX)
	{
		x = mainX;
	}
	int getX()const
	{
		return x;
	}
	void print()
	{
		cout << "X: " << x << endl;
	}

	//Const
	baseClass(int mainX = 0)
	{
		x = mainX;
		cout << "baseClass const calisti" << endl;
	}

	~baseClass()
	{
		cout << "baseClass deconst calisti" << endl;
	}

	baseClass(const baseClass& oth)
	{
		x = oth.x;
		cout << "baseClass copyconst calisti" << endl;
	}

};

//Miras alma
class derivedClass:public baseClass
{
public:
	int y;
	void setY(int mainY)
	{
		y = mainY;
	}
	int getY()const
	{
		return y;
	}
	void print()
	{
		baseClass::print();
		cout << "Y: " << y << endl;
	}

	derivedClass(int mainX = 0, int mainY = 0):baseClass(mainX)
	{
		//x = mainX;//X zaten yukarýda var
		y = mainY;
		cout << "derivedClass const calisti" << endl;
	}

	~derivedClass()
	{
		cout << "derivedClass deconst calisti" << endl;
	}

	derivedClass(const derivedClass& oth)
	{
		x = oth.x;
		y = oth.y;
		cout << "derivedClass copyconst calisti" << endl;
	}
};

class AClass
{
public:
	int a;
	AClass()
	{
		cout << "AClass const calisti." << endl;
	}
	~AClass()
	{
		cout<<"AClass deconst calisti." << endl; 
	}

};

class BClass
{
public:
	int b;
	BClass()
	{
		cout << "BClass const calisti." << endl;
	}
	~BClass()
	{
		cout << "BClass deconst calisti." << endl;
	}

};

//Miras alma
class CClass :public AClass, public BClass
{
public:
	CClass()
	{
		cout << "CClass const calisti." << endl;
	}
	~CClass()
	{
		cout << "CClass deconst calisti." << endl;
	}

};






