#include "Window.h"

#include <gtkmm/enums.h>

ns::Window::Window() :
    m_box(Gtk::ORIENTATION_HORIZONTAL)
{
    set_title("HeaderBar test");
    set_border_width(10);
    set_default_size(400, 200);

    m_header_bar.set_show_close_button(true);
    m_header_bar.set_title("HeaderBar test");

    set_titlebar(m_header_bar);
   
    show_all_children(true);
}

ns::Window::~Window() {}

