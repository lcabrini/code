#include "main.h"

#define WIDTH 320
#define HEIGHT 200
#define TITLE "Empty Window"

IMPLEMENT_APP(App)

bool App::OnInit()
{
    wxFrame *window = new wxFrame(
            NULL,
            wxID_ANY, 
            TITLE, 
            wxDefaultPosition,
            wxSize(WIDTH, HEIGHT));
    window->Show(true);
    return true;
}

