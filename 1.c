#include<stdio.h>
int main ()
{
   int i,j,x[10][10],sum[100]={},p,max=0;

   for(i=0;i<5;i++)
   {
      for(j=0;j<4;j++)
   {
   scanf("%d",&x[i][j]);
   sum[i]= sum[i]+x[i][j];
   if(sum[i]>max)
   {
      max =sum[i];
      p=i;
   }}}
   printf("%d %d",p+1,max);
   return 0;
}
