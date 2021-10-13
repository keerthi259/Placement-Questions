/*

Sample Input:

4

Sample Output:

*******
 ***** 
  ***
   *
  ***
 *****
*******

*/

#include<stdio.h>
int main()
{
	int r,star,sp,n;
	scanf("%d",&n);
	for(r=n;r>=2;r--)
	{
		for(sp=1;sp<=n-r;sp++)
			printf(" ");
		for(star=1;star<=2*r-1;star++)
			printf("*");
		printf("\n");
	}
	for(r=1;r<=n;r++)
	{
		for(sp=1;sp<=n-r;sp++)
			printf(" ");
		for(star=1;star<=2*r-1;star++)
			printf("*"); 
		printf("\n");
	}
}