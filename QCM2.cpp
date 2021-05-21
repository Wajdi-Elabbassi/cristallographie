#include "QCM2.h"
#include "wxBackgroundBitmap.h"
#include <string.h>
#include <stdio.h>
using namespace std;


int score=0;

wxBEGIN_EVENT_TABLE(QCM2, wxFrame)
EVT_MENU(991, frame3::OnMain)
EVT_CLOSE(frame3::OnClose)
EVT_LEFT_DCLICK(QCM2::OnListboxRDown1)
EVT_LEFT_DCLICK(QCM2::OnListboxRDown2)
EVT_LEFT_DCLICK(QCM2::OnListboxRDown3)
EVT_LEFT_DCLICK(QCM2::OnListboxRDown4)
EVT_LEFT_DCLICK(QCM2::OnListboxRDown5)
EVT_LEFT_DCLICK(QCM2::OnListboxRDown6)
EVT_LEFT_DCLICK(QCM2::OnListboxRDown7)
EVT_BUTTON(10001, OnButton1)
wxEND_EVENT_TABLE()

QCM2::QCM2(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)

{
    question1 = new wxListBox(this, 300, wxPoint(50, 260), wxSize(400, 40));
    question1->AppendString("La représentation de la figure C ci-dessus est celle d'une maille");


    wxArrayString strings1;
    strings1.Add(wxT("orthorhombique"));
    strings1.Add(wxT("cubique simple"));
    strings1.Add(wxT("cubique à faces centrées"));
    strings1.Add(wxT("cubique centrée"));
    wxCheckListBox* ListBox1 = new wxCheckListBox(this, 601, wxPoint(50, 310), wxSize(180, 80), strings1, wxLB_SINGLE);
    ListBox1->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM2::OnListboxRDown1), NULL, this);

    if (!(ListBox1->IsChecked(1)) && !(ListBox1->IsChecked(0)) && (ListBox1->IsChecked(2)) && !(ListBox1->IsChecked(3)))
    {
        score++;
        
    }



    question2 = new wxListBox(this, 300, wxPoint(50, 400), wxSize(400, 40));
    question2->AppendString("La représentation de la figure B ci-dessus est celle d'une maille");


    wxArrayString strings2;
    strings2.Add(wxT("orthorhombique"));
    strings2.Add(wxT("cubique simple"));
    strings2.Add(wxT("cubique à faces centrées"));
    strings2.Add(wxT("cubique centrée"));
    wxCheckListBox* ListBox2 = new wxCheckListBox(this, 602, wxPoint(50, 450), wxSize(180, 80), strings2, wxLB_SINGLE);
    ListBox2->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM2::OnListboxRDown2), NULL, this);

    if (!(ListBox2->IsChecked(1)) && !(ListBox2->IsChecked(0)) && !(ListBox2->IsChecked(2)) && (ListBox2->IsChecked(3)))
    {
        score++;
    }



    question3 = new wxListBox(this, 300, wxPoint(50, 540), wxSize(400, 40));
    question3->AppendString("Donnez la multiplicité Z du cube de la figure C");


    wxArrayString strings3;
    strings3.Add(wxT("1"));
    strings3.Add(wxT("4"));
    strings3.Add(wxT("2"));
    strings3.Add(wxT("8"));
    wxCheckListBox* ListBox3 = new wxCheckListBox(this, 603, wxPoint(50, 590), wxSize(180, 80), strings3, wxLB_SINGLE);
    ListBox3->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM2::OnListboxRDown3), NULL, this);
    if ((ListBox3->IsChecked(1)) && !(ListBox3->IsChecked(0)) && !(ListBox3->IsChecked(2)) && !(ListBox3->IsChecked(3)))
    {
        score++;
    }

    question4 = new wxListBox(this, 300, wxPoint(700, 260), wxSize(400, 40));
    question4->AppendString("Laquelle des structures prends le carbone cristal");


    wxArrayString strings4;
    strings4.Add(wxT("A"));
    strings4.Add(wxT("B"));
    strings4.Add(wxT("C"));
    strings4.Add(wxT("Aucune"));
    wxCheckListBox* ListBox4 = new wxCheckListBox(this, 604, wxPoint(700, 310), wxSize(180, 80), strings4, wxLB_SINGLE);
    ListBox1->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM2::OnListboxRDown1), NULL, this);

    if (!(ListBox4->IsChecked(1)) && !(ListBox4->IsChecked(0)) && (ListBox4->IsChecked(2)) && !(ListBox4->IsChecked(3)))
    {
        score++;
    }



    question5 = new wxListBox(this, 300, wxPoint(700, 400), wxSize(400, 40));
    question5->AppendString("Quelle est la figure dont la maille est plus compacte");


    wxArrayString strings5;
    strings5.Add(wxT("A"));
    strings5.Add(wxT("B"));
    strings5.Add(wxT("C"));
    strings5.Add(wxT("Toutes égales"));
    wxCheckListBox* ListBox5 = new wxCheckListBox(this, 605, wxPoint(700, 450), wxSize(180, 80), strings5, wxLB_SINGLE);
    ListBox5->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM2::OnListboxRDown2), NULL, this);

    if (!(ListBox5->IsChecked(1)) && !(ListBox5->IsChecked(0)) && (ListBox5->IsChecked(2)) && !(ListBox5->IsChecked(3)))
    {
        score++;
    }


    question6 = new wxListBox(this, 300, wxPoint(700, 540), wxSize(400, 40));
    question6->AppendString("Quel est le nombre de sites tétraédriques dans C");


    wxArrayString strings6;
    strings6.Add(wxT("0"));
    strings6.Add(wxT("4"));
    strings6.Add(wxT("2"));
    strings6.Add(wxT("8"));
    wxCheckListBox* ListBox6 = new wxCheckListBox(this, 606, wxPoint(700, 590), wxSize(180, 80), strings6, wxLB_SINGLE);
    ListBox6->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM2::OnListboxRDown3), NULL, this);
   
    if (!(ListBox6->IsChecked(1)) && !(ListBox6->IsChecked(0)) && (ListBox6->IsChecked(2)) && !(ListBox6->IsChecked(3)))
    {
        int a=7;
        score++;
    }


    question7 = new wxListBox(this, 300, wxPoint(700, 120), wxSize(400, 40));
    question7->AppendString("Quel type de site possède la figure A");


    wxArrayString strings7;
    strings7.Add(wxT("Carré."));
    strings7.Add(wxT("Tetraédrique."));
    strings7.Add(wxT("Octaédrique."));
    strings7.Add(wxT("Pas de site. "));
    wxCheckListBox* ListBox7 = new wxCheckListBox(this, 607, wxPoint(700, 170), wxSize(180, 80), strings7, wxLB_SINGLE);
    ListBox6->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM2::OnListboxRDown7), NULL, this);
    
    if (!(ListBox7->IsChecked(1)) && !(ListBox7->IsChecked(0)) && (ListBox7->IsChecked(2)) && !(ListBox7->IsChecked(3)))
    {
        score++;
    }



    wxButton* btn1 = new wxButton(this, 10001, "Submit", wxPoint(425, 685), wxSize(120, 50));
        
    


    wxInitAllImageHandlers();
    wxBitmap TempBitmap;
    TempBitmap.LoadFile(wxT("ato.png"), wxBITMAP_TYPE_PNG);
    background* NotebookBackground = new background(TempBitmap);
    this->PushEventHandler(NotebookBackground);

    wxPNGHandler* handler = new wxPNGHandler;
    wxImage::AddHandler(handler);
    wxStaticBitmap* image;
    image = new wxStaticBitmap(this, wxID_ANY, wxBitmap("cubes.png", wxBITMAP_TYPE_PNG), wxPoint(50, 40), wxSize(400, 200));

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
void QCM2::OnMain(wxCommandEvent& event)
{
    this->Close();
    MyFrame* mainframe = new MyFrame("Cristallographie", wxPoint(100, 100), wxSize(1400, 750));
    mainframe->Show();
}
void QCM2::OnClose(wxCloseEvent& evt) {
    Destroy();
    this->PopEventHandler(true);
}

void QCM2::OnListboxRDown1(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox1 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox1->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}
void QCM2::OnListboxRDown2(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox2 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox2->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}
void QCM2::OnListboxRDown3(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox3 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox3->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}
void QCM2::OnListboxRDown4(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox4 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox4->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}
void QCM2::OnListboxRDown5(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox5 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox5->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}
void QCM2::OnListboxRDown6(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox6 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox6->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}
void QCM2::OnListboxRDown7(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox7 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox7->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}
void QCM2::OnButton1(wxCommandEvent& event)
{
    wxMessageBox("Votre score est de : 4 sur 7",
        "Score final", wxOK | wxICON_INFORMATION);
}
