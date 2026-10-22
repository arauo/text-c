#include <stdio.h>
int main(){
int x;
printf("please type a number from 1 to 5");
scanf("%d",&x);
switch(x){
case 1:
printf("it's too early");
break;
case 2:
printf("good morning");
break;
case 3:
printf("good afternoon");
break;
case 4:
printf("good night");
break;
case 5:
printf("it's too late");
break;
}
return 0;
}
/*上面这种语句是switch-case语句，也是筛选的一种，不过比较特殊。如果把if-else if这样从头到尾一步步跑下来做筛选的比作串联，那switch-case更像并联。switch后的括号是控制的变量名，case后的数字是变量名的值。
switch-case能够直接拿着变量的值和所有case比对结果，如果值相同，就进入那个case的程序。
还要注意，case后面是冒号，不是顿号。因为顿号是一个命令代码结束的标志，而case并不是命令，更像是一个招牌。
当进入一个case后，程序往下走，直到遇见break才会离开switch语句程序。例如，去掉case 1、2之间的break，他会输出第一句和第二局，往下走到case2的break再出去。相当于比对完成后，他就开始一步步往下执行。
还要注意，switch控制的变量必须是int类型的，用double会报错。case后跟的是一个常量，比如1也可以用x=1替换，但一定是一个常量才行。*/