#pragma once
#include <wx/wxprec.h>
#include "Myframe.h"
#include "frame3.h"
#include <wx/bitmap.h>
#include "Background.h"
#include <wx/textctrl.h>
class frame2 : public wxFrame
{
public:
    
    frame2(const wxString& title, const wxPoint& pos, const wxSize& size);

    wxButton* btn1 = nullptr;
    
    void OnMain(wxCommandEvent& event);
    void OnClose(wxCloseEvent& event);
    void OnButton1(wxCommandEvent& event);
   
    

    wxDECLARE_EVENT_TABLE();

};

