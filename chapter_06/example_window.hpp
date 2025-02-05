#pragma once
#include <gtkmm/window.h>
#include <gtkmm/checkbutton.h>

class ExampleWindow : public Gtk::Window
{
public:
    ExampleWindow();
    virtual ~ExampleWindow() = default;

protected:
    void on_button_toggled();
    Gtk::CheckButton m_button;
};