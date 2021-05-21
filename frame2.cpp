#include "frame2.h"
#include "wxBackgroundBitmap.h"


enum
{
    TEXT_Main = 3, // ID

};


wxBEGIN_EVENT_TABLE(frame2, wxFrame)

EVT_MENU(99, frame2::OnMain)
EVT_CLOSE(frame2::OnClose)
EVT_BUTTON(10001,OnButton1)
wxEND_EVENT_TABLE()

frame2::frame2(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)

    { 

    wxButton* btn1 = new wxButton(this, 10001, "Suivant", wxPoint(50, 685), wxSize(120, 50));
    
     wxInitAllImageHandlers();
     wxBitmap TempBitmap;
     TempBitmap.LoadFile(wxT("cours2.png"), wxBITMAP_TYPE_PNG);
     background* NotebookBackground = new background(TempBitmap);
     this->PushEventHandler(NotebookBackground);

    
    wxMenu* menuCours = new wxMenu;
    menuCours->Append(99, "&Retour\tCtrl-1",
        "Help string shown in status bar for this menu item");

    menuCours->AppendSeparator();
    menuCours->Append(wxID_EXIT);
    
    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuCours, "&Main Menu");
    
    SetMenuBar(menuBar);
    Maximize();


}
void frame2::OnMain(wxCommandEvent& event)
{
    this->Close();
    MyFrame* mainframe = new MyFrame("Cristallographie", wxPoint(100, 100), wxSize(1400, 750));
    mainframe->Show();
   
}
void frame2::OnButton1(wxCommandEvent& event)
{
    this->Close();
    frame3* frameee1 = new frame3("Deuxième Partie", wxPoint(100, 100), wxSize(1400, 750));
    frameee1->Show(true);
}


void frame2::OnClose(wxCloseEvent& evt) {
    Destroy();
    this->PopEventHandler(true);

}



