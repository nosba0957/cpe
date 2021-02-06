#include<stdio.h>

int main()
{
	int n,max,temp;
	max=0;
	while(scanf("%d",&n)!=EOF){
		int a[n][n];
		temp = a[1][1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%d",&a[j][i]);
			}
		}
		for(int row=0;row<n;row++){
			for(int line=0;line<n;line++){
				for(int i=row;i<n;i++){
					for(int j=line;j<n;j++){
						temp=0;
						for(int u=row;u<=i;u++){
							for(int k=line;k<=j;k++){
								temp+=a[u][k];
							}
						}
						if(temp>max)
							max=temp;
					}
				}
			}
		}
		printf("%d",max);
	}
		return 0;
}
