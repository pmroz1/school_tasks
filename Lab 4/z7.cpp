#include <iostream>

using namespace std;
class czas
{
public:
	int a,b,c;
	czas()
	{
		a=0;
		b=0;
		c=0;
	}
	 czas(int d,int e, int f)
	 {
	 a=d;
	 b=e;
	 c=f;
	 }

	void wyswietl()
	{
		cout<<a<<":"<<b<<":"<<c<<endl;
	}
	void operator= (const czas &);

};
void czas::operator= (const czas& xd)
{
	a = xd.a;
	b=xd.b;
	c = xd.c;
}

int main()
{
	czas jeden;
	czas dwa(11,25,36);
	dwa.wyswietl();
	jeden=dwa;
	jeden.wyswietl();
	dwa.wyswietl();
	return 0;
	
}