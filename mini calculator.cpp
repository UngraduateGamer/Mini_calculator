# include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char operators;
	cout<<"Enter Two Numbers: ";
	cin>>num1>>num2;
	cout<<"Enter Opertor perform between two operands: ";
	cin>>operators;
	switch (operators)
	{
		case'+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
			break;
		case'-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
			break;
		case'*':
			cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
			break;
		case'/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
			break;
		case'%':
			cout<<num1<<"%"<<num2<<"="<<num1%num2<<endl;
			break;
		default:
				cout<<"I am Still Learning More....";
		
	}
	return 0;
}
