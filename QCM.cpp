#include "QCM.h"
#include "wxBackgroundBitmap.h"
        


int compt;
int scoree = 0;

wxBEGIN_EVENT_TABLE(QCM, wxFrame)
EVT_MENU(991, frame3::OnMain)
EVT_CLOSE(frame3::OnClose)
EVT_LEFT_DCLICK(QCM::OnListboxRDown1)
EVT_LEFT_DCLICK(QCM::OnListboxRDown2)
EVT_LEFT_DCLICK(QCM::OnListboxRDown3)
EVT_LEFT_DCLICK(QCM::OnListboxRDown4)
EVT_LEFT_DCLICK(QCM::OnListboxRDown5)
EVT_LEFT_DCLICK(QCM::OnListboxRDown6)
EVT_LEFT_DCLICK(QCM::OnListboxRDown7)
EVT_BUTTON(70, OnButtonn)


wxEND_EVENT_TABLE()

QCM::QCM(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)

{
    wxArrayString strings1;
    strings1.Add(wxT("74%"));
    strings1.Add(wxT("68%"));
    strings1.Add(wxT("80%"));
    strings1.Add(wxT("59%"));
    wxCheckListBox* ListBox1 = new wxCheckListBox(this, 601, wxPoint(50, 110), wxSize(180, 80), strings1, wxLB_SINGLE);
    ListBox1->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM::OnListboxRDown1), NULL, this);

    

    question1 = new wxListBox(this, 300, wxPoint(50, 50), wxSize(240, 40));
    question1->AppendString("Quelle est la compacité du cubique centré");

    wxArrayString strings2;
    strings2.Add(wxT("(4/(Sqrt(2)))R"));
    strings2.Add(wxT("R*SQRT(2)"));
    strings2.Add(wxT("(1/2)R*SQRT(2)"));
    strings2.Add(wxT("R/4"));
    wxCheckListBox* ListBox2 = new wxCheckListBox(this, 602, wxPoint(50, 250), wxSize(180, 80), strings2, wxLB_SINGLE);
    ListBox2->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM::OnListboxRDown2), NULL, this);

    question2 = new wxListBox(this, 300, wxPoint(50, 200), wxSize(280, 40));
    question2->AppendString("Quelle est la formule de l'arete dans un CFC");

    wxArrayString strings3;
    strings3.Add(wxT("à la masse d'une maille de ce solide"));
    strings3.Add(wxT("à la masse sur le volume d'une maille"));
    strings3.Add(wxT("au volume de la maille fois sa masse"));
    strings3.Add(wxT("à la masse d'un kilo de ce solide"));

    wxCheckListBox* ListBox3 = new wxCheckListBox(this, 603, wxPoint(50, 390), wxSize(240, 80), strings3, wxLB_SINGLE);
    ListBox1->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM::OnListboxRDown1), NULL, this);

    question3 = new wxListBox(this, 300, wxPoint(50, 340), wxSize(240, 40));
    question3->AppendString("La masse volumique d'un solide cristallin est égale");

    compt = 390 + 80 +10;

    question4 = new wxListBox(this, 300, wxPoint(50, compt), wxSize(240, 30));
    question4->AppendString("L'unité de la compacité est ");

    wxArrayString strings4;
    strings4.Add(wxT("s'exprime en mètre cube"));
    strings4.Add(wxT("n'a pas d'unité"));
    strings4.Add(wxT("est toujours supérieure à 1"));
    strings4.Add(wxT("est toujours inférieure à 1"));
    wxCheckListBox* ListBox4 = new wxCheckListBox(this, 604, wxPoint(50, compt+40), wxSize(180, 80), strings4, wxLB_SINGLE);
    ListBox4->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM::OnListboxRDown4), NULL, this);

    question5 = new wxListBox(this, 300, wxPoint(350, 50), wxSize(240, 40));
    question5->AppendString("Quels sont les deux types de réseaux solides");

    wxArrayString strings5;
    strings5.Add(wxT("Les solides minéraux"));
    strings5.Add(wxT("Les solides structurés"));
    strings5.Add(wxT("Les solides amorphes"));
    strings5.Add(wxT("Les solides cristallins"));
    wxCheckListBox* ListBox5 = new wxCheckListBox(this, 605, wxPoint(350, 110), wxSize(180, 80), strings5, wxLB_SINGLE);
    ListBox5->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM::OnListboxRDown5), NULL, this);

    
    question6 = new wxListBox(this, 300, wxPoint(350, 200), wxSize(240, 40));
    question6->AppendString("Soit R le rayin de l'un des cubes, quel est son volume");

    wxArrayString strings6;
    strings6.Add(wxT("R"));
    strings6.Add(wxT("R*R/2"));
    strings6.Add(wxT("3*R"));
    strings6.Add(wxT("R*R*R"));
    wxCheckListBox* ListBox6 = new wxCheckListBox(this, 606, wxPoint(350, 250), wxSize(180, 80), strings6, wxLB_SINGLE);
    ListBox6->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM::OnListboxRDown6), NULL, this);

    question7 = new wxListBox(this, 300, wxPoint(350, 340), wxSize(240, 40));
    question7->AppendString("Quel type de site existe-t-il dans la cubique simple");

    wxArrayString strings7;
    strings7.Add(wxT("Tétraédrique"));
    strings7.Add(wxT("Carré"));
    strings7.Add(wxT("Octaédrique"));
    strings7.Add(wxT("Pas de site "));

    wxCheckListBox* ListBox7 = new wxCheckListBox(this, 607, wxPoint(350, 390), wxSize(280, 80), strings7, wxLB_SINGLE);
    ListBox7->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM::OnListboxRDown7), NULL, this);

    
    compt = 390 + 80 + 10;


    wxArrayString strings8;
    strings8.Add(wxT("Tétraédrique"));
    strings8.Add(wxT("Carré"));
    strings8.Add(wxT("Octaédrique"));
    strings8.Add(wxT("Pas de site"));
    wxCheckListBox* ListBox8 = new wxCheckListBox(this, 608, wxPoint(350, compt + 40), wxSize(180, 80), strings8, wxLB_SINGLE);
    ListBox8->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(QCM::OnListboxRDown8), NULL, this);

    question8 = new wxListBox(this, 300, wxPoint(350, compt), wxSize(240, 30));
    question8->AppendString("Quel type de site existe-t-il dans le CFC");

    compt += 50;

    wxButton* btnn = new wxButton(this, 70, "Submit", wxPoint(375, 685), wxSize(120, 50));



    wxInitAllImageHandlers();
    wxBitmap TempBitmap;
    TempBitmap.LoadFile(wxT("ato.png"), wxBITMAP_TYPE_PNG);
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
void QCM::OnMain(wxCommandEvent& event)
{
    this->Close();
    MyFrame* mainframe = new MyFrame("Cristallographie", wxPoint(100, 100), wxSize(1400, 750));
    mainframe->Show();
}

void QCM::OnClose(wxCloseEvent& evt) {
    Destroy();
    this->PopEventHandler(true);
}

void QCM::OnListboxRDown1(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox1 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox1->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}

void QCM::OnListboxRDown2(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox2 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox2->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}

void QCM::OnListboxRDown3(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox3 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox3->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}

void QCM::OnListboxRDown4(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox4 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox4->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}

void QCM::OnListboxRDown5(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox5 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox5->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}

void QCM::OnListboxRDown6(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox6 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox6->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}

void QCM::OnListboxRDown7(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox7 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox7->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}

void QCM::OnListboxRDown8(wxMouseEvent& event)
{
    wxCheckListBox* m_lbox8 = dynamic_cast<wxCheckListBox*>(event.GetEventObject());

    // Get the item index
    int item = m_lbox8->HitTest(event.GetPosition());
    if (item != wxNOT_FOUND)
        wxLogMessage(_T("Listbox item %d right clicked"), item);
    else
        wxLogMessage(_T("Listbox right clicked but no item clicked upon"));
}

void QCM::OnButtonn(wxCommandEvent& event)
{
    wxMessageBox("Votre score est de : 0 sur 8",
        "Score final", wxOK | wxICON_INFORMATION);
}

