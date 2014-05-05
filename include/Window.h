#ifndef __WINDOW_H__
#define __WINDOW_H__

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/stack.h>
#include <gtkmm/stackswitcher.h>

namespace ns {
    class Window : public Gtk::Window {
        private:
            Gtk::Box            m_box;
            Gtk::Label          m_label_foo;
            Gtk::Label          m_label_bar;

            Gtk::StackSwitcher  m_stack_switcher;
            Gtk::Stack          m_stack;
    
        public:
            Window ();
            virtual ~Window ();
    };
} /* ns */

#endif /* __WINDOW_H__ */

