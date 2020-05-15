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
	num -= 2;
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
	num -= 3;
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
	num -= 4;
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
	num -= 5;
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
	num -= 6;
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
	num -= 7;
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
	num -= 8;
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
	num -= 9;
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
	num -= 10;
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


int main(int argc, char **argv)
{



	//виджеты
	GtkWidget *window;
	GtkWidget *one;
	GtkWidget *two;
	GtkWidget *three;
	GtkWidget *four;
	GtkWidget *five;
	GtkWidget *six;
	GtkWidget *seven;
	GtkWidget *eight;
	GtkWidget *nine;
	GtkWidget *ten;
	GtkWidget *grid;
	GtkWidget *sum;


	gtk_init (&argc,&argv);

	//декларация
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
        gtk_window_set_title(GTK_WINDOW(window), "100 MATCHES");

        sum = gtk_label_new ("100");
	grid = gtk_grid_new ();


	one = gtk_button_new_with_label ("1 СПИЧКА");
	two = gtk_button_new_with_label ("2 СПИЧКИ");
	three = gtk_button_new_with_label ("3 СПИЧКИ");
	four = gtk_button_new_with_label ("4 СПИЧКИ");
	five = gtk_button_new_with_label ("5 СПИЧЕК");
	six = gtk_button_new_with_label ("6 СПИЧЕК");
	seven = gtk_button_new_with_label ("7 СПИЧЕК");
	eight = gtk_button_new_with_label ("8 СПИЧЕК");
	nine = gtk_button_new_with_label ("9 СПИЧЕК");
	ten = gtk_button_new_with_label ("10 СПИЧЕК");


	//размеры
	gtk_container_set_border_width (GTK_CONTAINER(window), 20);
	gtk_widget_set_size_request (GTK_WIDGET(window), 150, 100);

	gtk_label_set_selectable (GTK_LABEL(sum), TRUE);
	gtk_grid_set_row_spacing (GTK_GRID(grid), 4);
	gtk_grid_set_column_spacing (GTK_GRID(grid), 4);
	gtk_container_add (GTK_CONTAINER(window), grid);

	//координаты расположения

	gtk_grid_attach (GTK_GRID(grid), one, 1, 0, 1, 1);
	gtk_grid_attach (GTK_GRID(grid), two, 2, 0, 1, 1);
	gtk_grid_attach (GTK_GRID(grid), three, 3, 0, 1, 1);
	gtk_grid_attach (GTK_GRID(grid), four, 4, 0, 1, 1);
	gtk_grid_attach (GTK_GRID(grid), five, 5, 0, 1, 1);
	gtk_grid_attach (GTK_GRID(grid), six, 6, 0, 1, 1);
	gtk_grid_attach (GTK_GRID(grid), seven, 7, 0, 1, 1);
	gtk_grid_attach (GTK_GRID(grid), eight, 8, 0, 1, 1);
	gtk_grid_attach (GTK_GRID(grid), nine, 9, 0, 1, 1);
	gtk_grid_attach (GTK_GRID(grid), ten, 10, 0, 1, 1);

	gtk_grid_attach (GTK_GRID(grid), sum, 0, 2, 2, 1);

	gtk_widget_show_all (window);

	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

	g_signal_connect(G_OBJECT(one), "clicked", G_CALLBACK(button1), sum);
	g_signal_connect(G_OBJECT(two), "clicked", G_CALLBACK(button2), sum);
	g_signal_connect(G_OBJECT(three), "clicked", G_CALLBACK(button3), sum);
	g_signal_connect(G_OBJECT(four), "clicked", G_CALLBACK(button4), sum);
        g_signal_connect(G_OBJECT(five), "clicked", G_CALLBACK(button5), sum);
	g_signal_connect(G_OBJECT(six), "clicked", G_CALLBACK(button6), sum);
	g_signal_connect(G_OBJECT(seven), "clicked", G_CALLBACK(button7), sum);
	g_signal_connect(G_OBJECT(eight), "clicked", G_CALLBACK(button8), sum);
	g_signal_connect(G_OBJECT(nine), "clicked", G_CALLBACK(button9), sum);
	g_signal_connect(G_OBJECT(ten), "clicked", G_CALLBACK(button10), sum);

	gtk_main();

	return 0;
}

