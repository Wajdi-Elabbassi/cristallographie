#pragma once
#include <wx/wxprec.h>
#include "frame2.h"
#include "frame3.h"
#include "QCM.h"

class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
    


    void OnCours1(wxCommandEvent& event);
    void OnCours2(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnExercice1(wxCommandEvent& event);
    void OnExercice2(wxCommandEvent& event);
    void OnExercice3(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnClose(wxCloseEvent& event);
    
    

    wxDECLARE_EVENT_TABLE();
};

