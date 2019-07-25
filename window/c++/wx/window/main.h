#include <wx/wx.h>

#define TITLE "Empty Window"
#define WIDTH 320
#define HEIGHT 200

class App : public wxApp
{
    public:
        virtual bool OnInit();
};
