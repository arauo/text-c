#include <stdio.h>              
int main(){                 
    int num;
    int i=0;
    scanf("%d",&num); 
    num/=10;
    i++;
    while(num>0){
      num/=10;
      i++;
    }
   printf("%d",i);


    return 0;
}
//这是while循环，小括号内是循环条件，大括号内的东西叫循环体。while可理解为当...时。循环内一定要有改变变量值的操作，不然循环会无限进行。while循环先进行判断，再开始循环。

/*如果有些任务要先执行一次再进入循环，可以用do-while循环。例如上面可以改写为：
  int i=0;
  scanf("%d",&num);
  do{
    num/=10;
    i++;
  }while(num>0);
这样，我们就省去了上面代码中while外面的一段一模一样的代码。*/

/*再考虑一个问题，输入n，求n！.这里显然要循环，用while写就是：
int x;
int i=1,ret=1;
scanf("%d",&x);
while(i<x){
  ret*=i;
  i++;
   }
  printf("%d",ret);
  也可以用另一种循环：for循环：
int x;
int i=1,ret=1;
scanf("%d",&x);
for(i=1;i<x;i++){
  ret*=i;
   }
  printf("%d",ret);
  有指定次数的循环一般使用for循环，for循环后小括号中被分号隔开的三个式子分别是循环初始值，循环条件和循环后的操作。for和while是等价的循环。
  另外，由于变量i只在for循环中用到，循环初始值的式子还可以写成int i=1。可以在小括号内直接定义该变量。*/

  //想跳出循环，可以使用break，想只跳出本次循环，可以用continue。他们都只能跳出自己所在的循环，无法跳出外部的循环。
