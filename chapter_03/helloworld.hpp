#pragma once
#include <gtkmm/button.h>
#include <gtkmm/window.h>

class HelloWorld : public Gtk::Window
{

public:
    HelloWorld();
    ~HelloWorld() override;

protected:
    void on_button_clicked();
    Gtk::Button m_button;
};