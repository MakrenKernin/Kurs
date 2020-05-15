#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>

void updateLabel(GtkLabel *sum, int num)
{
gchar *display;
display = g_strdup_printf("%d", num); //перевод в str
gtk_label_set_text (GTK_LABEL(sum), display); //ьуека для отображения
g_free(display); //освобождаем дисплей
}

void button1 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 1 спичку\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму  спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}

void button2 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 2 спички\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}

void button3 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 3 спички\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}

void button4 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 4 спички\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу \n Возьму спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}

void button5 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 5 спичек\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}

void button6 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 6 спичек\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}

void button7 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 7 спичек\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}

void button8 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 8 спичек\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}

void button9 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 9 спичек\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}

void button10 (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 10 спичек\n Осталось %i спичек\n Твой ход\n",num);
bool Correct;
srand(time(0));
int count;
count = 100;

num-=rand()&9+1;
if((num>=2) && (num<=9) && (num<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму спичек\n Осталось %i спичек\n", num);
updateLabel(GTK_LABEL(sum),num);
}


