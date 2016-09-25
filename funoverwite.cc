#include<stdio.h>
#include<iostream>
using namespace std;

class Parent{
	public:
		Parent( int a )
		{
			this->a = a;
//			cout<<"Parent a:"<<a<<endl;
		}
		virtual void print()
		{
			cout<<"Parent print():"<<a<<endl;
		}
	private:
		int a;
};
class Child:public Parent{
	public:
		Child( int b ):Parent(10)
		{
			this->b = b;
//			cout<<"Child b:"<<b<<endl;
		}
		void print()
		{
			cout<<"Child print():"<<b<<endl;
		}
	private:
		int b;
};
void howtopirnt( Parent *base )
{
	base->print();
}
int main()
{
	Parent *base = NULL;
	Parent p1(20);
	Child  c1(30);

	base = &p1;
	base->print();

//	howtopirnt( &p1 );
	
	base = &c1;
	base->print();
	/*reference
	Parent &base1 = p1;
	base1.print();

	Parent &base2 = c1;
	base2.print();
*/
	return 0;
}
