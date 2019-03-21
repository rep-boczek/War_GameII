/***************************************************************
 * Name:      War_Game_GUIMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Dawd ()
 * Created:   2019-03-21
 * Copyright: Dawd ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "War_Game_GUIMain.h"
#include <wx/msgdlg.h>
#include <wx/textctrl.h>
#include "Unit.h"
#include "Coordinates.h"
#include <string>
#include <sstream>

//(*InternalHeaders(War_Game_GUIFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(War_Game_GUIFrame)
const long War_Game_GUIFrame::ID_STATICTEXT1 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT2 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT3 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT4 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT5 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT6 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL1 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL2 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL3 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL4 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL5 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL6 = wxNewId();
const long War_Game_GUIFrame::ID_PANEL1 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT7 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT8 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT9 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT10 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT11 = wxNewId();
const long War_Game_GUIFrame::ID_STATICTEXT12 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL7 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL8 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL9 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL10 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL11 = wxNewId();
const long War_Game_GUIFrame::ID_SPINCTRL12 = wxNewId();
const long War_Game_GUIFrame::ID_PANEL2 = wxNewId();
const long War_Game_GUIFrame::ID_PANEL3 = wxNewId();
const long War_Game_GUIFrame::ID_TEXTCTRL1 = wxNewId();
const long War_Game_GUIFrame::ID_BUTTON1 = wxNewId();
const long War_Game_GUIFrame::idMenuQuit = wxNewId();
const long War_Game_GUIFrame::idMenuAbout = wxNewId();
const long War_Game_GUIFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(War_Game_GUIFrame,wxFrame)
    //(*EventTable(War_Game_GUIFrame)
    //*)
END_EVENT_TABLE()

War_Game_GUIFrame::War_Game_GUIFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(War_Game_GUIFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, _("MainFrame"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(1000,800));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(615,5), wxSize(380,305), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    wxFont Panel1Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    Panel1->SetFont(Panel1Font);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Ninja"), wxPoint(24,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Archer"), wxPoint(24,120), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Cannon"), wxPoint(24,168), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Robot1000"), wxPoint(24,216), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Robot2000"), wxPoint(24,264), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Soldier"), wxPoint(24,72), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    SpinCtrl1 = new wxSpinCtrl(Panel1, ID_SPINCTRL1, _T("0"), wxPoint(144,16), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL1"));
    SpinCtrl1->SetValue(_T("0"));
    SpinCtrl2 = new wxSpinCtrl(Panel1, ID_SPINCTRL2, _T("0"), wxPoint(144,64), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL2"));
    SpinCtrl2->SetValue(_T("0"));
    SpinCtrl3 = new wxSpinCtrl(Panel1, ID_SPINCTRL3, _T("0"), wxPoint(144,112), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL3"));
    SpinCtrl3->SetValue(_T("0"));
    SpinCtrl4 = new wxSpinCtrl(Panel1, ID_SPINCTRL4, _T("0"), wxPoint(144,160), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL4"));
    SpinCtrl4->SetValue(_T("0"));
    SpinCtrl5 = new wxSpinCtrl(Panel1, ID_SPINCTRL5, _T("0"), wxPoint(144,208), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL5"));
    SpinCtrl5->SetValue(_T("0"));
    SpinCtrl6 = new wxSpinCtrl(Panel1, ID_SPINCTRL6, _T("0"), wxPoint(144,256), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL6"));
    SpinCtrl6->SetValue(_T("0"));
    Panel2 = new wxPanel(this, ID_PANEL2, wxPoint(615,315), wxSize(380,305), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    wxFont Panel2Font(12,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
    Panel2->SetFont(Panel2Font);
    StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT7, _("Ninja"), wxPoint(24,24), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    StaticText8 = new wxStaticText(Panel2, ID_STATICTEXT8, _("Soldier"), wxPoint(24,72), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    StaticText9 = new wxStaticText(Panel2, ID_STATICTEXT9, _("Archer"), wxPoint(24,120), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    StaticText10 = new wxStaticText(Panel2, ID_STATICTEXT10, _("Cannon"), wxPoint(24,168), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    StaticText11 = new wxStaticText(Panel2, ID_STATICTEXT11, _("Robot1000"), wxPoint(24,216), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    StaticText12 = new wxStaticText(Panel2, ID_STATICTEXT12, _("Robot2000"), wxPoint(24,264), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    SpinCtrl7 = new wxSpinCtrl(Panel2, ID_SPINCTRL7, _T("0"), wxPoint(144,16), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL7"));
    SpinCtrl7->SetValue(_T("0"));
    SpinCtrl8 = new wxSpinCtrl(Panel2, ID_SPINCTRL8, _T("0"), wxPoint(144,64), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL8"));
    SpinCtrl8->SetValue(_T("0"));
    SpinCtrl9 = new wxSpinCtrl(Panel2, ID_SPINCTRL9, _T("0"), wxPoint(144,112), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL9"));
    SpinCtrl9->SetValue(_T("0"));
    SpinCtrl10 = new wxSpinCtrl(Panel2, ID_SPINCTRL10, _T("0"), wxPoint(144,160), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL10"));
    SpinCtrl10->SetValue(_T("0"));
    SpinCtrl11 = new wxSpinCtrl(Panel2, ID_SPINCTRL11, _T("0"), wxPoint(144,208), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL11"));
    SpinCtrl11->SetValue(_T("0"));
    SpinCtrl12 = new wxSpinCtrl(Panel2, ID_SPINCTRL12, _T("0"), wxPoint(144,256), wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL12"));
    SpinCtrl12->SetValue(_T("0"));
    Panel3 = new wxPanel(this, ID_PANEL3, wxPoint(5,5), wxSize(605,615), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxPoint(8,632), wxSize(600,152), wxTE_READONLY|wxTE_WORDWRAP, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Start"), wxPoint(624,744), wxSize(360,31), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&War_Game_GUIFrame::OnTextCtrl1Text);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&War_Game_GUIFrame::OnButton1Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&War_Game_GUIFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&War_Game_GUIFrame::OnAbout);
    //*)

}




War_Game_GUIFrame::~War_Game_GUIFrame()
{
    //(*Destroy(War_Game_GUIFrame)
    //*)
}

void War_Game_GUIFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void War_Game_GUIFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void War_Game_GUIFrame::OnTextCtrl1Text(wxCommandEvent& event)
{
    /*wxTextCtrl *control = TextCtrl1;
    std::streambuf *sbOld = std::cout.rdbuf();
    std::cout.rdbuf(sbOld);*/
}

void War_Game_GUIFrame::OnButton1Click(wxCommandEvent& event)
{
    /*int *arr;*/
    int arr[2];
    arr[0] = Coordinates::pickRan();
    wxString dziala = wxT("");
    //std::cout << "Your coordinates are: " << arr[1] <<std::endl;
    //std::string slowo = static_cast<char>(p.xval());
    int a = arr[0];
    dziala<<a;

    TextCtrl1 -> ChangeValue(dziala);

}

