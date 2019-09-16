/*
冒泡算法，往上冒---从小到大排序
*/
#include<stdio.h>

int main(){
  int buff[20] = {2,4,3,5,64,2,31,3};
  int i=0;
  int j;
  int len = sizeof(buff)/sizeof(int); //求数组长度
  for(;i<len-1;i++)
     for(j=i;j<len;j++){
        if(buff[j]>buff[j+1]){
            int temp = buff[j];
            buff[j]= buff[j+1];
            buff[j+1] = temp ;  
        }
     }
     printf("排序ok!");
 }
