#ifndef __WINDOW_H__
#define __WINDOW_H__

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/headerbar.h>

namespace ns {
    class Window : public Gtk::Window {
        private:
            Gtk::Box        m_box;
            Gtk::Button     m_button_prev,
                            m_button_next;

            Gtk::HeaderBar  m_header_bar;
    
        public:
            Window ();
            virtual ~Window ();
    };
} /* ns */

#endif /* __WINDOW_H__ */

