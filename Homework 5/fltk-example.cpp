#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <Fl_Int_Input.H>
#include "truncstruct.hpp"

#pragma comment(lib, "fltk.lib")
#pragma comment(lib, "comctl32.lib")

void OnCloseCallback(Fl_Widget* w, void* data) {
	Fl_Window* window = (Fl_Window*)data;
	if (window) window->hide();
}

int main(int argc, char** argv) {
	Fl_Window* window = new Fl_Window(200, 140);

	Fl_Int_Input* input = new Fl_Int_Input(125, 20, 50, 25, "Enter A Value");

	Fl_Button* trunc = new Fl_Button(50, 60, 100, 25, "Truncate");
	trunc->callback(trunc8, (void*)window);

	Fl_Button* closeBtn = new Fl_Button(50, 100, 100, 25, "Close Window");
	closeBtn->callback(OnCloseCallback, (void*)window);

	window->end();
	window->show(argc, argv);
	return Fl::run();
}