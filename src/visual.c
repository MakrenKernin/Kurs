int main(int argc, char **argv)
{




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

//Declarations
window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
sum = gtk_label_new ("100");
grid = gtk_grid_new ();


subButton = gtk_button_new_with_label ("1 СПИЧКА");

//Set Properties
gtk_container_set_border_width (GTK_CONTAINER(window), 20);
gtk_widget_set_size_request (GTK_WIDGET(window), 150, 100);
gtk_label_set_selectable (GTK_LABEL(sum), TRUE);
gtk_grid_set_row_spacing (GTK_GRID(grid), 4);
gtk_grid_set_column_spacing (GTK_GRID(grid), 4);
gtk_container_add (GTK_CONTAINER(window), grid);

//Fill the grid with shit (x, y, h, v)

gtk_grid_attach (GTK_GRID(grid), subButton, 1, 0, 1, 1);
gtk_grid_attach (GTK_GRID(grid), sum, 0, 2, 2, 1);

gtk_widget_show_all (window);

g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

g_signal_connect(G_OBJECT(subButton), "clicked", G_CALLBACK(buttonSub), sum);
g_signal_connect(G_OBJECT(subButton), "clicked", G_CALLBACK(but), sum);


gtk_main();

return 0;
}




