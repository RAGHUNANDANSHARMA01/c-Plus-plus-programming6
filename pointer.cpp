#include<iostream>
#include <stdio.h>
using namespace std;
void update(int *a,int *b) 
{
  int c=*a+*b;
  int d=*a-*b;
  *a=c;
  if(d<0)
  d=-d;//abs(d)
  *b=d;    
}
int main() {
    int a,b;
    int *pa = &a,*pb = &b;
    scanf("%d %d",&a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}

