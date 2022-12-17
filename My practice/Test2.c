#include<stdio.h>
int main()
{

  int a,b,sum,sub;
  double n,m,fsum,fsub;

  scanf("%d %d",&a,&b);
  scanf("%lf %lf",&n,&m);

  sum = a+b;
  sub = a-b;

  fsum = n+m;
  fsub = n-m;

  printf("%d %d\n",sum,sub);
  printf("%.1lf %.1lf\n",fsum,fsub);


  return 0;

}
