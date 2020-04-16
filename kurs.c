#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<strings.h>
#include<stdbool.h>

const int InitialCount=100;
int Count, Num, Player;
bool Correct;
int main()
{
srand(time(0));
Player=1;
Count=InitialCount;
do{
if (Player==1){
do{
printf("Ты ходишь. Осталось %d спичек.\n", Count);
printf("Сколько спичек возьмешь?\n");
scanf("%d", &Num);
if((Num>=1) && (Num<=10) && (Num<=Count)){
Correct=true;
}
else
{
printf("Я всё вижу! Играй по правилам!\n");
Correct=false;
}
}while (!Correct);
}
else
{
do{
Num=rand()%10+1;
if (Num>Count){
Num=Count;}
printf("Я хожу. Возьму %d спичек.\n", Num);
}while (!Correct);
}
Count-=Num;
if (Player==1)
{
Player=2;
}
else{
Player=1;
}
}
while (Count>0);
if (Player==1){
printf("На этот раз твоя взяла, до встречи.\n");
}
else
{
printf("Иииииу, попробуй в следующий раз, неудачник!\n");
}
return 0;
}