#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
#include "Myframe.h"
#include "frame2.h"
#include "frame3.h"
#include "QCM.h"
#include "Background.h"
class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};



wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MyFrame* frame = new MyFrame("Cristallographie", wxPoint(100, 100), wxSize(1400, 750));
    frame->Show(true);
    return true;
}