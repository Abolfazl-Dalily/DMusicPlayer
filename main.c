#include <stdio.h>
#include <gtk-2.0/gtk/gtk.h>



int main(int argc, int *argv[])
{
    printf("... Ya Heidar ... \n");

    GtkWidget *app ;

    GtkWidget *main_v_box ;

    GtkWidget *time_toolbar_h_box ;
    GtkWidget *timer_label ;
    GtkWidget *time_slider ;

    GtkWidget *controller_h_box ;

    GtkWidget *play_btn ;
    GtkWidget *play_btn_image ;

    GtkWidget *previous_btn ;
    GtkWidget *previous_btn_image ;

    GtkWidget *stop_btn ;
    GtkWidget *stop_btn_image ;

    GtkWidget *next_btn ;
    GtkWidget *next_btn_image ;

    GtkWidget *volume_btn ;


    int x ;
    int y ;



    gtk_init(&argc,&argv);
    app = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_position(GTK_WINDOW(app),GTK_WIN_POS_CENTER);
    gtk_widget_set_size_request(app,450,75);
    gtk_window_set_resizable(GTK_WINDOW (app),FALSE);


    main_v_box = gtk_vbox_new(TRUE,5);

    // ###########################################

    time_toolbar_h_box = gtk_hbox_new(FALSE,5);

    timer_label = gtk_label_new("00 : 00");
    gtk_widget_set_size_request(timer_label,50,10);
    gtk_widget_get_pointer(timer_label,&x,&y);
    gtk_widget_set_uposition(timer_label,5,y);

    time_slider = gtk_hscale_new_with_range(0,100,1);
    gtk_scale_set_draw_value(GTK_SCALE(time_slider),FALSE);
    gtk_widget_set_size_request(time_slider, 370, -1);

    gtk_box_pack_start(GTK_BOX(time_toolbar_h_box),timer_label,TRUE,FALSE,10);
    gtk_box_pack_start(GTK_BOX(time_toolbar_h_box),time_slider,TRUE,FALSE,10);

    // ##########################################

    controller_h_box = gtk_hbox_new(TRUE,10);


    play_btn = gtk_button_new();
    gtk_widget_set_size_request(play_btn,30,30);
    gtk_widget_get_pointer(play_btn,&x,&y);
    gtk_widget_set_uposition(play_btn,5,y);
    play_btn_image = gtk_image_new_from_stock(GTK_STOCK_MEDIA_PLAY,GTK_ICON_SIZE_BUTTON);
    gtk_button_set_image(play_btn,play_btn_image);

    previous_btn = gtk_button_new();
    gtk_widget_set_size_request(previous_btn,30,30);
    gtk_widget_get_pointer(previous_btn,&x,&y);
    gtk_widget_set_uposition(previous_btn,55,y);
    previous_btn_image = gtk_image_new_from_stock(GTK_STOCK_MEDIA_PREVIOUS,GTK_ICON_SIZE_BUTTON);
    gtk_button_set_image(previous_btn,previous_btn_image);

    stop_btn = gtk_button_new();
    gtk_widget_set_size_request(stop_btn,30,30);
    gtk_widget_get_pointer(stop_btn,&x,&y);
    gtk_widget_set_uposition(stop_btn,85,y);
    stop_btn_image = gtk_image_new_from_stock(GTK_STOCK_MEDIA_STOP,GTK_ICON_SIZE_BUTTON);
    gtk_button_set_image(stop_btn,stop_btn_image);

    next_btn = gtk_button_new();
    gtk_widget_set_size_request(next_btn,30,30);
    gtk_widget_get_pointer(next_btn,&x,&y);
    gtk_widget_set_uposition(next_btn,115,y);
    next_btn_image = gtk_image_new_from_stock(GTK_STOCK_MEDIA_NEXT,GTK_ICON_SIZE_BUTTON);
    gtk_button_set_image(next_btn,next_btn_image);

    volume_btn = gtk_volume_button_new();
    gtk_widget_set_size_request(volume_btn,35,30);
    gtk_widget_get_pointer(volume_btn,&x,&y);
    gtk_widget_set_uposition(volume_btn,410,y);


    gtk_box_pack_start(GTK_BOX(controller_h_box),play_btn,TRUE,FALSE,10);
    gtk_box_pack_start(GTK_BOX(controller_h_box),previous_btn,TRUE,FALSE,10);
    gtk_box_pack_start(GTK_BOX(controller_h_box),stop_btn,TRUE,FALSE,10);
    gtk_box_pack_start(GTK_BOX(controller_h_box),next_btn,TRUE,FALSE,10);
    gtk_box_pack_start(GTK_BOX(controller_h_box),volume_btn,TRUE,FALSE,10);
    // ###########################################

    gtk_box_pack_start(GTK_BOX(main_v_box),time_toolbar_h_box,TRUE,FALSE,10);
    gtk_box_pack_start(GTK_BOX(main_v_box),controller_h_box,TRUE,FALSE,10);

    gtk_container_add(GTK_CONTAINER(app),main_v_box);
    gtk_widget_show_all(app);

    gtk_main ();







    return 0 ;
}
