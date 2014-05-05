#include <gtkmm.h>
#include <iostream>

#include "Window.h"

int main (int argc, char *argv[])
{
    Glib::RefPtr<Gtk::Application> app =
        Gtk::Application::create(argc, argv,
        "fr.iridia.dosman");

    //Gtk::Window window;
    ns::Window window;
    //window.set_default_size(200, 200);

    return app->run(window);
}

