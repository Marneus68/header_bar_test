#include "Window.h"

#include <gtkmm/enums.h>

ns::Window::Window() :
    m_box(Gtk::ORIENTATION_VERTICAL, 6),
    m_label_foo("foo"),
    m_label_bar("bar")
{
    set_title("stack_test");
    set_border_width(10);

    add(m_box);

    m_stack.set_transition_type(Gtk::STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT);
    m_stack.set_transition_duration(1000);

    m_stack.add(m_label_foo, "m_label_foo", "Foo");
    m_stack.add(m_label_bar, "m_label_bar", "Bar");

    m_stack_switcher.set_stack(m_stack);

    //m_box.pack_start(m_label_foo, Gtk::PACK_SHRINK);

    m_box.pack_start(m_stack_switcher, true, true, 0);
    m_box.pack_start(m_stack, true, true, 0);
   
    show_all_children(true);
}

ns::Window::~Window() {}

