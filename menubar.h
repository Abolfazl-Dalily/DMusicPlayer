#ifndef MENUBAR_H_INCLUDED
#define MENUBAR_H_INCLUDED

#include <gtk-2.0/gtk/gtk.h>
#include <gdk/gdkkeysyms.h>

extern GtkAccelGroup *accel_group ;

extern GtkWidget *menu_bar ;

extern GtkWidget *audio_mi ;
extern GtkWidget *audio_menu ;
extern GtkWidget *file_mi;
extern GtkWidget *multi_files_mi;
extern GtkWidget *directory_mi;
extern GtkWidget *sep ;
extern GtkWidget *quit_mi;

extern GtkWidget *help_mi;
extern GtkWidget *help_menu ;
extern GtkWidget *guide_mi;
extern GtkWidget *about_mi;

void create_menu_bar();


#endif // MENUBAR_H_INCLUDED
