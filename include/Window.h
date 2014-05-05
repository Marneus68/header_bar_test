#ifndef __WINDOW_H__
#define __WINDOW_H__

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/headerbar.h>

namespace ns {
    class Window : public Gtk::Window {
        private:
            Gtk::Box        m_box;

            Gtk::HeaderBar  m_header_bar;
    
        public:
            Window ();
            virtual ~Window ();
    };
} /* ns */

#endif /* __WINDOW_H__ */

