#include "Window.h"

#include <gtkmm/enums.h>
#include <gtkmm/arrow.h>

ns::Window::Window() :
    m_box(Gtk::ORIENTATION_HORIZONTAL)
{
    set_title("HeaderBar test");
    set_border_width(10);
    set_default_size(400, 200);

    m_header_bar.set_show_close_button(true);
    m_header_bar.set_title("HeaderBar test");

    set_titlebar(m_header_bar);

    m_box.get_style_context()->add_class("linked");

    Gtk::Arrow* prev_arrow = Gtk::manage(new Gtk::Arrow(Gtk::ARROW_LEFT, Gtk::SHADOW_NONE));

    m_button_prev.add(*prev_arrow);
    m_box.add(m_button_prev);

    Gtk::Arrow* next_arrow = Gtk::manage(new Gtk::Arrow(Gtk::ARROW_RIGHT, Gtk::SHADOW_NONE));

    m_button_next.add(*next_arrow);
    m_box.add(m_button_next);

    m_header_bar.pack_start(m_box);

    show_all_children(true);
}

ns::Window::~Window() {}

