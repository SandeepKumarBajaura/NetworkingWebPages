/*WAC++ program that will accept any two number and write its fraction form*/
#include<iostream>
using namespace std;
class Fraction
{
	private:
		int num;
		int dnum;
	public:
		Fraction(int num=0, int dnum=1)
		{
			this->num=num;
			if(dnum!=0)
			this->dnum=dnum;
			else this->dnum=1;
			if(this->dnum<0)
			{
				this->num*=-1;
				this->dnum*=-1;
			}
		}
		void set(int num, int dnum)
		{
			this->num=num;
			if(dnum!=0)
			{
				this->dnum=dnum;
			}
			else
			this->dnum=1;
			if(this->dnum<0)
			{
				this->num*=-1;
				this->dnum*=-1;
			}
		}
		void setNum(int num)
		{
			this->num=num;
		}
		void setDnum(int dnum)
		{
			if(dnum!=0)
			{
				this->dnum=dnum;
			}
			else
			this->dnum=1;
			if(this->dnum<0)
			{
				this->num*=-1;
				this->dnum*=-1;
			}
		}
		int getNum()
		{
			return this->num;
		}
		int getDnum()
		{
			return this->dnum;
		}
		void display()
		{
			cout<<endl<<this->num<<"/"<<this->dnum;
		}
};
int main()
{
	Fraction f1,f2(5,7),f3(1,0),f4(12,-2),f5,f6,f7;
	f1.display();
	f2.display();
	f3.display();
	f4.display();
	f5.setNum(12);
	f5.setDnum(95);
	f5.display();
	f6.setDnum(f2.getNum());
	f6.setNum(f5.getDnum());
	f2.setNum(45);
	f2.display();
	f6.display();
}