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
g_signal_connect(G_OBJECT(one), "clicked", G_CALLBACK(but1), sum);
g_signal_connect(G_OBJECT(two), "clicked", G_CALLBACK(button2), sum);
g_signal_connect(G_OBJECT(two), "clicked", G_CALLBACK(but2), sum);
g_signal_connect(G_OBJECT(three), "clicked", G_CALLBACK(button3), sum);
g_signal_connect(G_OBJECT(three), "clicked", G_CALLBACK(but3), sum);
g_signal_connect(G_OBJECT(four), "clicked", G_CALLBACK(button4), sum);
g_signal_connect(G_OBJECT(four), "clicked", G_CALLBACK(but4), sum);
g_signal_connect(G_OBJECT(five), "clicked", G_CALLBACK(button5), sum);
g_signal_connect(G_OBJECT(five), "clicked", G_CALLBACK(but5), sum);
g_signal_connect(G_OBJECT(six), "clicked", G_CALLBACK(button6), sum);
g_signal_connect(G_OBJECT(six), "clicked", G_CALLBACK(but6), sum);
g_signal_connect(G_OBJECT(seven), "clicked", G_CALLBACK(button7), sum);
g_signal_connect(G_OBJECT(seven), "clicked", G_CALLBACK(but7), sum);
g_signal_connect(G_OBJECT(eight), "clicked", G_CALLBACK(button8), sum);
g_signal_connect(G_OBJECT(eight), "clicked", G_CALLBACK(but8), sum);
g_signal_connect(G_OBJECT(nine), "clicked", G_CALLBACK(button9), sum);
g_signal_connect(G_OBJECT(nine), "clicked", G_CALLBACK(but9), sum);
g_signal_connect(G_OBJECT(ten), "clicked", G_CALLBACK(button10), sum);
g_signal_connect(G_OBJECT(ten), "clicked", G_CALLBACK(but10), sum);

gtk_main();

return 0;
}




