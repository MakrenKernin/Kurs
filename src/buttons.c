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

void  (GtkButton *button, GtkLabel *sum)
{
int num = atoi(gtk_label_get_text(sum));
num -= 1;
g_print("Я взял 1 спичку\n Осталось %i спичек\n Твой ход\n",num);
updateLabel(GTK_LABEL(sum),num);
}



void up(GtkLabel *sum, int n)
{
gchar *display;
display = g_strdup_printf("%d", n);
gtk_label_set_text (GTK_LABEL(sum), display);
g_free(display);
}

void but (GtkButton *button, GtkLabel *sum)
{
bool Correct;
srand(time(0));
int count;
count = 100;
int n = atoi(gtk_label_get_text(sum));
n-=rand()&9+1;
if((n>=2) && (n<=9) && (n<=count))
{
Correct=true;
}
g_print("Хожу\n Возьму  спичек\n Осталось %i спичек\n", n);
updateLabel(GTK_LABEL(sum),n);
}

