#pragma once
#include <gtkmm/button.h>
#include <gtkmm/window.h>

class Buttons : public Gtk::Window
{
public:
    Buttons();
    virtual ~Buttons() = default;

protected:
    void on_button_clicked();
    Gtk::Button m_button;
};