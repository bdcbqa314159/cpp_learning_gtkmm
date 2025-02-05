#pragma once
#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/separator.h>

class RadioButtons : public Gtk::Window
{
public:
    RadioButtons();
    virtual ~RadioButtons() = default;

protected:
    void on_button_clicked();
    Gtk::Box m_box_top, m_box1, m_box2;
    Gtk::CheckButton m_radioButton1, m_radioButton2, m_radioButton3;
    Gtk::Separator m_separator;
    Gtk::Button m_button_close;
};
