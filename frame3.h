#pragma once
#include "Myframe.h"
#include <wx/bitmap.h>
#include "Background.h"
#include <wx/textctrl.h>
#include "frame2.h"
class frame3 : public wxFrame
{
public:

    frame3(const wxString& title, const wxPoint& pos, const wxSize& size);

    wxButton* btn2 = nullptr;

    
    void OnMain(wxCommandEvent& event);
    void OnClose(wxCloseEvent& event);
    void OnButton2(wxCommandEvent& event);



    wxDECLARE_EVENT_TABLE();

};

