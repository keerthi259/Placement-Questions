#include <stdio.h>

int main()
{
	int n,m,i,j;
  	scanf("%d %d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++)
          	scanf("%d",&a[i][j]);
	}
	int max;
	for(i=0;i<n;i++) {
		max = 0;
		for(j=0;j<m;j++)
		{
			if(max<a[i][j])
				max = a[i][j];
		}
        printf("%d ",max);
	}
	return 0;
}
