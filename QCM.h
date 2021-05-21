#pragma once
#include "Myframe.h"
#include <wx/bitmap.h>
#include "Background.h"
#include <wx/textctrl.h>
#include "frame2.h"
#include <wx/checklst.h>
#include <wx/listbox.h>
class QCM : public wxFrame
{
public:

    QCM(const wxString& title, const wxPoint& pos, const wxSize& size);
    
    wxListBox* question1 = nullptr;
    wxListBox* question2 = nullptr;
    wxListBox* question3 = nullptr;
    wxListBox* question4 = nullptr;
    wxListBox* question5 = nullptr;
    wxListBox* question6 = nullptr;
    wxListBox* question7 = nullptr;
    wxListBox* question8 = nullptr;
    wxButton* btnn = nullptr;
    void OnMain(wxCommandEvent& event);
    void OnClose(wxCloseEvent& event);
    void OnListboxRDown1(wxMouseEvent& event);
    void OnListboxRDown2(wxMouseEvent& event);
    void OnListboxRDown3(wxMouseEvent& event);
    void OnListboxRDown4(wxMouseEvent& event);
    void OnListboxRDown5(wxMouseEvent& event);
    void OnListboxRDown6(wxMouseEvent& event);
    void OnListboxRDown7(wxMouseEvent& event);
    void OnListboxRDown8(wxMouseEvent& event);
    void OnButtonn(wxCommandEvent& event);


    wxDECLARE_EVENT_TABLE();

};

