//Q9. Write a Program of Two 1D Matrix Addition using Operator Overloadinga

#include<iostream>
using namespace std;
class matrix
{
	int a[3];
	public:
		void accept();
		void dispay();
		void operator +(matrix x); 
};

void matrix::accept()
{
	cout<<"\n enter matrix element : \n";
	for(int i=0;i<3;i++)
	{
		cout<<" ";
		cin>>a[i];
	}
}

void matrix::dispay()
{
	for(int i=0;i<3;i++)
	{
		cout<<" ";
	}
}

void matrix::dispay()
{
	for(i=0;i<3;i++)
	{
		cout<<" ";
		cout<<a[i]<<"\t";
		cout<<"\n";
	}
}

void matrix::operator +(matrix x)
{
	int mat[3]
	for(int i=0;i<3;i++)
	
	{
		mat[i]=a[i]+x.a[i];
		
	}
	
	cout<<"\n addition of matrix :\n\n";
	for(int i=0;i<3;i++)
	{
		cout<<" ";
		
		cout<<mat[i]<<"\t";
	}
}

int main()
{
	matrix m,n;
	m.accept();  // accepting rows
	n.accept(); // accepting coluumns
	cout<<"\n frist matrix :\n\n";
	m.dispay(); //dispaying frist matrix
	cout<<"\n second matrix :\n\n";
	n.dispay(); //dispaying second matrix
	
	m+n; //addition of two matrix overloaded '+' operatar
	return 0;
}
