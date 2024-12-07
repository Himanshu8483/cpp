// M.C.Q OF SERVICE BASED COMPANY:

#include<iostream>
using namespace std;

// Q.1 In C++, 0 (or NULL) is treated as false in conditional expressions.
int main()
{
	if(NULL)
		cout<<"NULL";
	else
		cout<<"FALSE";
	return 0;
}
// Q.2
 int main(){
	int i = 0, j = 0;
		if(--i== j++)
			cout<< i--<<","<< j--;
		else
			cout<<i<<j;
		return 0;
}
// Q.3
int main(){
	int i = 0, j = 1, k = 0;
		if(++k, i, j++)
			cout<<i<<j<<k;

	return 0;
}
// Q.4
int main(){
	int i;
		if(true)
			cout<<"This will work";
		else
			cout<<"This will not work";
	return 0;
}
// Q.5 
int main()
{
	char str[9] = "if block";
	if(str == "if block")
		cout<<"if block executed";
	else
		cout<<"else block executed";
	return 0;
}
// Q.6 
int main()
{
	char str[] = "\0";
	if("welcome")
		cout<<"inside if block";
	else
		cout<<"inside else block";
	return 0;
}
// Q.7
int main()
{
	if("0")
		cout<<"inside if block";
	else
		cout<<"inside else block";
	return 0;
}
// Q.8
 int main()
{
	if(0 ==NULL)
		cout<<"inside if block";
	else
		cout<<"inside else block";
	return 0;
}
// Q.9
int main()
{
int i = 5, j = 4;
	if(!(""))
		cout<<i<<j;
	else
		cout<<i++<< ++j;
	return 0;
}
// Q.10

 int main()
{
	int i = 1, j = 0 ;
	if(i-- == j)
		cout<< --i;
	else
		cout<< ++j;
	return 0;
}
// Q.11

int main()
{
	int i = 5, j = 5;
	if(i == j)
		cout<<"Equal";
	else 
		cout<<"Not Equal";
	return 0;
}
// Q.12
int main(){
	float me = 5.25;
	double you = 5.25;
	if(me == you) // exception data type
		cout<<"matched";
	else
	return 0;
}
// Q.13
int main()
{
	int  i = 25;
	if(i == 25);
		i = 50;
	if(i == 25)
		i = i + 1;
	else
		i = i + 1;
	cout<<i;
	return 0;
}
// Q.14
 int main(){
	if("May I Get in")
		cout<<"yes, Get in";
	else
		cout<<"No";
}
// Q.15
 int main()
{
	int i = 5, j = 6, k = 0;
	if(i > j == k)
		cout<< i++<<++j<< --k;
	else
		cout<< i<< j<< k;
}
// Q.16
int main()
{
	int i = 2;
	if(i == (1, 2))
		cout<<"Hi";
	else
		cout<<"bye";
	return 0;
}
// Q.17
 int main(){
	int i = 5;
    if(i == 3, 4)
     	cout<<"Hi";
    else
		cout<<"Bye";
}
// Q.18
 int main()
{
int i = 5;
  if(i = i - 5 > 4)
	  cout<<"inside if block";
  else
	  cout<<"inside else block";
}
// Q.19
 int main()
{
	if(sizeof(0))
		cout<<"Hi";
	else
		cout<<"Bye";
}
// Q.20
 int main()
{
	if(sizeof('\0'))
		cout<<"inside if block";
	else
		cout<<"inside else block";
	return 0;
}