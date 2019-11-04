#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>

#include <string>
#include <iostream>
#include <map>
#include <vector>

//////////////////////////////////////////////////////////////////////
// E X T E R N A L   L I B R A R I E S ///////////////////////////////
//////////////////////////////////////////////////////////////////////


#pragma comment(lib, "fltk.lib")
#pragma comment(lib, "comctl32.lib")


//////////////////////////////////////////////////////////////////////
// S T R U C T S /////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////


struct Model
{
	std::string input;
};


struct View {
	Fl_Input* input = nullptr;
	Fl_Output* output = nullptr;
};


//////////////////////////////////////////////////////////////////////
// G L O B A L   V A R I A B L E S ///////////////////////////////////
//////////////////////////////////////////////////////////////////////


Model model;
View view;


//////////////////////////////////////////////////////////////////////
// P R O T O T Y P E S ///////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////


void TransformData(const std::string& input, std::string& output);
void OnInputChanged(Fl_Widget* w, void* userdata);
void OnProcessClicked(Fl_Widget* w, void* userdata);
void OnQuitClicked(Fl_Widget* w, void* userdata);
Fl_Window* CreateWindow();


//////////////////////////////////////////////////////////////////////
// C A L L B A C K S /////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////


void OnInputChanged(Fl_Widget* w, void* userdata) {
	// check for NULL pointer
	if (!view.input) return;

	// The value() method of Fl_Input will return a C-style
	// string which we can use with a std::string
	model.input = view.input->value();
}


void OnProcessClicked(Fl_Widget* w, void* userdata) {
	if (!view.output) return;

	// This is where we can process the input in some way
	std::string transformed;
	TransformData(model.input, transformed);

	// Note 1: We call c_str() method from std::string to get
	// a C style Null terminated string
	// Note 2: the value(string) method of Fl_Output is used
	// to set the current value
	view.output->value(transformed.c_str());
}


void OnQuitClicked(Fl_Widget* w, void* userdata) {
	// We expect userdata to be the Window
	if (!userdata) return;

	// Cast the void* pointer back to a Fl_Window* pointer
	Fl_Window* window = (Fl_Window*)userdata;

	// The hide() method will close the window
	window->hide();
}


//////////////////////////////////////////////////////////////////////
// F U N C T I O N S /////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////


// TransformData(input, output) simply adds " transformed" to the input
// string
void generate(std::vector<int>& hidden)
{
	std::vector<int>hidden;
	for (auto i = 0; i < 4; i++) //Creating hidden vector
	{
		hidden.push_back(rand() % 10);

	}
}

void TransformData(const std::string& input, std::string& output, const std::vector<int>& hidden) {
	
	int x = 0;
	int bulls = 0;
	int cows = 0;

	for (auto i = 0; i < 4; i++)
	{
		switch (input[i]) //first number
		{
		case '0':
			x = 0;
			break;
		case '1':
			x = 1;
			break;
		case '2':
			x = 2;
			break;
		case '3':
			x = 3;
			break;
		case '4':
			x = 4;
			break;
		case '5':
			x = 5;
			break;
		case '6':
			x = 6;
			break;
		case '7':
			x = 7;
			break;
		case '8':
			x = 8;
			break;
		case '9':
			x = 9;
			break;
		}

		for (auto j = 0; j < 4; j++)
		{
			if (x == hidden[j])
			{
				if (i == j)
				{
					bulls++;
				}
				else
				{
					cows++;
				}
			}
		}
	}

	if (bulls == 4)
	{
		output = "You win!";
	}
	else
	{
		output = "Bulls:" + std::to_string(bulls) + " Cows:" + std::to_string(cows);
	}

	
}


Fl_Window* CreateWindow() {
	Fl_Window* window = new Fl_Window(640, 480);
	Fl_Box* box = new Fl_Box(20, 40, 600, 100, "Input/Output Example");
	box->box(FL_UP_BOX);
	box->labelfont(FL_BOLD + FL_ITALIC);
	box->labelsize(36);
	box->labeltype(FL_SHADOW_LABEL);

	// We use these to ensure adequate spacing of widgets
	const int x = 100;
	int y = 160;
	const int w = 100;
	const int h = 25;
	const int Spacing = 10;

	view.input = new Fl_Input(x, y, 2 * w, h, "Guess a 4 digit number : ");
	y += h + Spacing;
	view.output = new Fl_Output(x, y, 2 * w, h, "Output");
	y += h + Spacing;

	Fl_Button* processBtn = new Fl_Button(x, y, w, h, "Process");
	y += h + Spacing;
	Fl_Button* quitBtn = new Fl_Button(x, y, w, h, "Quit");

	// Register callbacks
	view.input->callback(OnInputChanged, nullptr);
	processBtn->callback(OnProcessClicked, nullptr);
	quitBtn->callback(OnQuitClicked, (void*)window);

	window->end();
	return window;
}


int main(int argc, char** argv) {
	std::vector<int>hidden;
	generate(hidden);
	Fl_Window* window = CreateWindow();
	window->show(argc, argv);
	return Fl::run();
}