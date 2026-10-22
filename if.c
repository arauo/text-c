#include <stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
if(a>=b){
    printf("%d",a);
}else{
    printf("%d",b);
}

return 0;
}
/*上面是一个简单的if-else循环，若结果与if后的小括号相符，程序走到if的大括号内，然后return 0.同样，如果不符合，程序进入else后的大括号。
if-else也可以不加大括号，但只能识别紧接着的第一句任务。
实际上，只有if也是一种判断，如果将代码改为
    if(a>=b){
     printf("%d",a);
    }  
     printf("%d",b);
     
后一句输出在if括号外面，那如果进入if后不仅会输出a值，出if后还会输出b值，如果不满足if条件，就直接输出b值     */

/*如果此时有三个数a、b、c要比大小，一个判断不够，if-else也可以嵌套使用

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b){
     if(a>=c){
      printf("%d",a);
            }
      else{
         printf("%d",c);
          }
    }else{
    if(b>=c){
      printf("%d",b);
            }
      else{
         printf("%d",c);
          }
    }
          return0;
这种就是嵌套语句*/



/*if-else if级联语句：
int x;
scanf("%d"，&x);
 if(x<0){
  printf("%d",x);
}else if(x<2){
  printf("%d",2x)
}else{
  printf("0");
}  
这是一段分段函数，else-if相当于在上一个if的范围外进行进一步筛选，实际上，也可以写成

if(x<0){
  printf("%d",x);
}else{
   if(x<2){
   printf("%d",2x)
   }else{
     printf("0");
   }
}
   用这种嵌套也能表达，但是，如果分段函数有非常多段，嵌套的会越来越多，代码对齐后会向右边偏移，而且嵌套太多也不宜读懂，因此，可以使用if-else if级联语句。
   使用else-if级联语句，最特殊，最小的范围要先筛选，否则会漏掉。
*/
