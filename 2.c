#include<stdio.h>
int main()
{
   int i,j,k,p,a,m=0,t[48]={0},prime_t;
   scanf("%d",&j);
   for(i=0;i<j;i++)
   {
      scanf("%d %d",&p,&a);
      t[p-1] = t[p-1]+a;
   }
   for(i=0;i<48;i++)
   {
      if(m<t[i])
      {
      m = t[i];
      prime_t = i;
      }
   }
   printf("%d %d",prime_t+1,t[prime_t]);
return 0;
}

