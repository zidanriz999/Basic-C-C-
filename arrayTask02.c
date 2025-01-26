#include<stdio.h>
int main (){
int a [100];
int i;
for (i=36;i>1;i--)
{
  a[i]=i-1;
  printf("the value at index[%d]-->value %d\n",i,a[i]);
}
 
  return 0;

}