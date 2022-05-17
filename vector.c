#include<stdio.h>
int a[10][10],n=0;
int min(int a,int b)
{
  return a<b?a:b;
}
void fun()
{
  int i,j,k;
  for(k=0;k<n;k++)
   {
     for(i=0;i<n;i++)
      {
       for(j=0;j<n;j++)
       {
        a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
       }
      }
   }
}
void main()
{
int i,j,k;
printf("Enter the number of nodes:");
scanf("%d",&n);
printf("Enter matrix elements:\n");
{
   for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
      {
	scanf("%d",&a[i][j]);
	if(a[i][j]==0)
	a[i][j]=999;
	{
	   if(a[i]==a[j])
	    a[i][j]=0;
        }
      }
    }
}        
fun();
printf("The distance matrix is:\n");
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
     printf("%d ",a[i][j]);
  }
printf("\n");
}
}
