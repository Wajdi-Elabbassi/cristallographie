#include "frame3.h"
#include "wxBackgroundBitmap.h"




wxBEGIN_EVENT_TABLE(frame3, wxFrame)

EVT_MENU(991, frame3::OnMain)
EVT_CLOSE(frame3::OnClose)
EVT_BUTTON(10002,OnButton2)
wxEND_EVENT_TABLE()

frame3::frame3(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)

{
    wxButton* btn2 = new wxButton(this, 10002, "Précédent", wxPoint(50, 685), wxSize(120, 50));


    wxInitAllImageHandlers();
    wxBitmap TempBitmap;
    TempBitmap.LoadFile(wxT("cours1.png"), wxBITMAP_TYPE_PNG);
    background* NotebookBackground = new background(TempBitmap);
    this->PushEventHandler(NotebookBackground);

    wxMenu* menuCours = new wxMenu;
    menuCours->Append(991, "&Retour\tCtrl-1",
        "Help string shown in status bar for this menu item");

    menuCours->AppendSeparator();
    menuCours->Append(wxID_EXIT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuCours, "&Main Menu");

    SetMenuBar(menuBar);

 
    Maximize();


}
void frame3::OnMain(wxCommandEvent& event)
{
    this->Close();
    MyFrame* mainframe = new MyFrame("Cristallographie", wxPoint(100, 100), wxSize(1400, 750));
    mainframe->Show();

}

void frame3::OnButton2(wxCommandEvent& event)
{
    this->Close();
    frame2* frameee2 = new frame2("Deuxième Partie", wxPoint(100, 100), wxSize(1400, 750));
    frameee2->Show(true);
}


void frame3::OnClose(wxCloseEvent& evt) {
    Destroy();
    this->PopEventHandler(true);
}


