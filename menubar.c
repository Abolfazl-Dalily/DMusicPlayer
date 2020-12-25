#include "menubar.h"

GtkAccelGroup *accel_group = NULL ;

GtkWidget *menu_bar ;

GtkWidget *audio_mi ;
GtkWidget *audio_menu ;
GtkWidget *file_mi;
GtkWidget *multi_files_mi;
GtkWidget *directory_mi;
GtkWidget *sep ;
GtkWidget *quit_mi;

GtkWidget *help_mi;
GtkWidget *help_menu ;
GtkWidget *guide_mi;
GtkWidget *about_mi;

void create_menu_bar()
{

    accel_group = gtk_accel_group_new();
    menu_bar = gtk_menu_bar_new();
    audio_menu = gtk_menu_new();
    help_menu = gtk_menu_new();


    audio_mi = gtk_menu_item_new_with_label("Media");

    file_mi = gtk_image_menu_item_new_from_stock(GTK_STOCK_FILE,NULL);
    gtk_menu_item_set_label(file_mi,"Open File...");

    multi_files_mi = gtk_image_menu_item_new_from_stock(GTK_STOCK_DND_MULTIPLE,NULL);
    gtk_menu_item_set_label(multi_files_mi,"Open Multiple Files...");

    directory_mi = gtk_image_menu_item_new_from_stock(GTK_STOCK_DIRECTORY,NULL);
    gtk_menu_item_set_label(directory_mi,"Open Directory...");
    sep = gtk_separator_menu_item_new();
    quit_mi = gtk_image_menu_item_new_from_stock(GTK_STOCK_QUIT,accel_group);

    gtk_menu_item_set_label(quit_mi,"Quit");



    gtk_menu_shell_append(GTK_MENU_SHELL(audio_menu),file_mi);
    gtk_image_menu_item_set_always_show_image(file_mi,TRUE);

    gtk_menu_shell_append(GTK_MENU_SHELL(audio_menu),multi_files_mi);
    gtk_image_menu_item_set_always_show_image(multi_files_mi,TRUE);

    gtk_menu_shell_append(GTK_MENU_SHELL(audio_menu),directory_mi);
    gtk_image_menu_item_set_always_show_image(directory_mi,TRUE);

    gtk_menu_shell_append(GTK_MENU_SHELL(audio_menu),sep);

    gtk_menu_shell_append(GTK_MENU_SHELL(audio_menu),quit_mi);
    gtk_image_menu_item_set_always_show_image(quit_mi,TRUE);



    help_mi = gtk_menu_item_new_with_label("Help");
    guide_mi = gtk_image_menu_item_new_from_stock(GTK_STOCK_HELP,NULL);
    gtk_menu_item_set_label(guide_mi,"Guide");
    about_mi = gtk_image_menu_item_new_from_stock(GTK_STOCK_ABOUT,NULL);
    gtk_menu_item_set_label(about_mi,"About");

    gtk_menu_shell_append(GTK_MENU_SHELL(help_menu),guide_mi);
    gtk_image_menu_item_set_always_show_image(guide_mi,TRUE);

    gtk_menu_shell_append(GTK_MENU_SHELL(help_menu),about_mi);
    gtk_image_menu_item_set_always_show_image(about_mi,TRUE);



    gtk_menu_item_set_submenu(GTK_MENU_ITEM(audio_mi),audio_menu);
    gtk_menu_item_set_submenu(GTK_MENU_ITEM(help_mi),help_menu);

    gtk_menu_shell_append(GTK_MENU_SHELL(menu_bar),audio_mi);
    gtk_menu_shell_append(GTK_MENU_SHELL(menu_bar),help_mi);
}

