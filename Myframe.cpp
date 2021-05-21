#include "Myframe.h"
#include "QCM.h"
#include "QCM2.h"


enum
{
    ID_Cours1 = 1
};
enum
{
    ID_Cours2 = 2
};
enum
{
    ID_Exercice1 = 3
};
enum
{
    ID_Exercice2 = 4
};
enum
{
    ID_Exercice3 = 5
};


wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)

EVT_MENU(ID_Cours1, MyFrame::OnCours1)
EVT_MENU(ID_Cours2, MyFrame::OnCours2)
EVT_MENU(ID_Exercice1, MyFrame::OnExercice1)
EVT_MENU(ID_Exercice2, MyFrame::OnExercice2)
EVT_MENU(ID_Exercice3, MyFrame::OnExercice3)
EVT_MENU(wxID_EXIT, MyFrame::OnExit)
EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
EVT_CLOSE(MyFrame::OnClose)
wxEND_EVENT_TABLE()

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)

{
    
    wxMenu* menuCours = new wxMenu;
    menuCours->Append(ID_Cours1, "&Partie 1\tCtrl-1",
        "Help string shown in status bar for this menu item");
    menuCours->Append(ID_Cours2, "&Partie 2\tCtrl-2",
        "Help string shown in status bar for this menu item");

    menuCours->AppendSeparator();
    menuCours->Append(wxID_EXIT);
    wxMenu* menuExercice = new wxMenu;
    menuExercice->Append(ID_Exercice1, "&QCM\tCtrl-4",
        "Help string shown in status bar for this menu item");
    menuExercice->Append(ID_Exercice2, "&QCM2\tCtrl-5",
        "Help string shown in status bar for this menu item");
    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuCours, "&Cours");
    menuBar->Append(menuExercice, "&Exercice");
    menuBar->Append(menuHelp, "&Realisation");
    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Welcome to our project!");

    
    Maximize();

    wxInitAllImageHandlers();
    wxBitmap TempBitmap;
    TempBitmap.LoadFile(wxT("bg.png"), wxBITMAP_TYPE_PNG);
    background* NotebookBackground = new background(TempBitmap);
    this->PushEventHandler(NotebookBackground);
    
   
}
void MyFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}
void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("Projet réalisé par Rayen Iskander et Wajdi!",
        "A propos du projet", wxOK | wxICON_INFORMATION);
}
void MyFrame::OnCours1(wxCommandEvent& event)
{
    this->Close();
    frame2* framee = new frame2("Première Partie", wxPoint(100, 100), wxSize(1400, 750));
    framee->Show(true);
    

}
void MyFrame::OnCours2(wxCommandEvent& event)
{
    this->Close();
    frame3* frameee = new frame3("Deuxième Partie", wxPoint(100, 100), wxSize(1400, 750));
    frameee->Show(true);


}
void MyFrame::OnExercice1(wxCommandEvent& event)
{
    this->Close();
    QCM* qcm = new QCM("Premier exercice", wxPoint(100, 100), wxSize(1400, 750));
    qcm->Show(true);
   
}
void MyFrame::OnExercice2(wxCommandEvent& event)
{
    this->Close();
    QCM2* qcm2 = new QCM2("Deuxieme exercice", wxPoint(100, 100), wxSize(1400, 750));
    qcm2->Show(true);

}
void MyFrame::OnExercice3(wxCommandEvent& event)
{
  
}
void MyFrame::OnClose(wxCloseEvent& evt) {
    Destroy();
    this->PopEventHandler(true);
}