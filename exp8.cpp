#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		complex operator+(complex c4)
		{
			complex c5;
			c5.real=real+c4.real;
			c5.img=img+c4.img;
			return c5;
		}
		void show()
		{
			cout<<"\n Sum= "<<real<<"+"<<img<<"i";
		}
};
int main()
{
	complex c1(3,4);
	complex c2(5,6);
	complex c3=c1+c2;
	c3.show();
	return 0;
}
