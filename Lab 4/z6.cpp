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
};

int main()
{
	czas jeden;
	czas dwa(11,25,36);
	jeden.wyswietl();
	dwa.wyswietl();
	jeden=dwa;
	jeden.wyswietl();
	dwa.wyswietl();
	return 0;
	
}