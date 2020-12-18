#include<iostream>
using namespace std;
int main()
{
	int age;

	cout<<"Enter your age: ";
	cin>>age;
	if(age<18)
	{
		cout<<"Applicant has not attained the eligibilty to vote"<<endl;
	}
	else if(age>=18)
	{
		cout<<"Applicant is eligible to vote"<<endl;
	}
	return 0;
}

