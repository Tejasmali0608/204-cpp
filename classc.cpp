#include<iostream.h>
#include<conio.h>
template <class T1, class T2>
class Test
{
public:
	Test(T1, T2) //constructor
	{
	}
void area(T1 x, T2 y)
{
	T1 t;
	t=0.5*x*y;
	cout<<"\n Area of Triangle :"<<t;
}

void area1(T1 x, T2 y)
{
	T1 t;
	t=x*y;
	cout<<"\n Area of Rectangle :"<<t;
}

void area2(T1 x)
{
	cout<<"\n Area of Circle :"<<3.14*x*x;
}

};

void main()
{
	clrscr();
	float l,b;
	
cout<<"\n Enter the Height & Base for Triangle :";
	cin>>l>>b;
	Test <float,float>test1(l,b);
	test1.area(l,b);

	int l1,b1,r;
cout<<"\n Enter the L & B:";
	cin>>l1>>b1;
	Test <int,int>test2(l1,b1);
	test2.area1(l1,b1);



int r;

	cout<<"\n Enter the radius :";
	cin>>r;
	Test<int,int>test3 (r,r);
	test3.area2(r);
	getch();
}
