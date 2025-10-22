#include<stdio.h>
class mudi{
	int length;
	int breadth;
	public:
	void getdata()
{
	length=45;
	breadth=11;
}
void showdata()
{
	printf("\t %d %d",length,breadth);
}
};

int main()
{
	class mudi r1;
	r1.getdata();
	r1.showdata();	
}
