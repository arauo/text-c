#include <stdio.h>
int main(){
/*long long sum=1;//小心整数溢出。
for(int i=1;i<=10;++i){
    sum*=i;
}
printf("sum=%d",sum);*/
int y=2000;
for(;y<=2100;++y){
   int isPrime=1;//注意，标志变量一定要在循环内定义，否则跑一轮后循环的值不会回到初始值。
    if(y%400!=0){
        if(y%4==0){
            if(y%100==0){//也可以用if级联写，但要先判断y%400，y%100，再到y%4，因为先判断大范围会覆盖小范围，要先筛选最特殊的。
                isPrime=0;
            }
        }else{
            isPrime=0;
        }
    }
if(isPrime==1){
    printf("yes\n");
}else{
    printf("no\n");
}
}

  

























return 0;
}














