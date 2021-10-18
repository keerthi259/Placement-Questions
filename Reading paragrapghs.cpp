#include<iostream>
using namespace std;
void readline(char a[],int max,char delim='\n')
{
	int i=0;
	char ch=cin.get();
	
	while(ch!='\n')
	{
		a[i]=ch;
		i++;
		if(i==max-1)
		{
		break;	
		}
	ch=cin.get();
		}
	a[i]='\0';
}
int main()
{
	char a[1000];
	readline(a,1000);
    cout<<a<<endl;
	cin.getline(a,1000);
	cout<<a;

	return 0;
}
