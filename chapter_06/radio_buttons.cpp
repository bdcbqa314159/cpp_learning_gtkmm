#include "radio_buttons.hpp"

RadioButtons::RadioButtons() : m_box_top(Gtk::Orientation::VERTICAL), m_box1(Gtk::Orientation::VERTICAL, 10), m_box2(Gtk::Orientation::VERTICAL, 10), m_radioButton1("button1"), m_radioButton2("button2"), m_radioButton3("button3"), m_button_close("close")
{

    m_radioButton2.set_group(m_radioButton1);
    m_radioButton3.set_group(m_radioButton1);

    set_child(m_box_top);

    m_box_top.append(m_box1);
    m_box_top.append(m_separator);
    m_box_top.append(m_box2);
    m_separator.set_expand();

    m_box1.set_margin(10);
    m_box2.set_margin(10);

    m_box1.append(m_radioButton1);
    m_box1.append(m_radioButton2);
    m_box1.append(m_radioButton3);
    m_radioButton1.set_expand();
    m_radioButton2.set_expand();
    m_radioButton3.set_expand();

    m_radioButton2.set_active(true);

    m_box2.append(m_button_close);
    m_button_close.set_expand();

    set_default_widget(m_button_close);

    m_button_close.signal_clicked().connect(sigc::mem_fun(*this,
                                                          &RadioButtons::on_button_clicked));
}

void RadioButtons::on_button_clicked()
{
    set_visible(false);
}