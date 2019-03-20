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

//(*InternalHeaders(War_Game_GUIFrame)
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
const long War_Game_GUIFrame::ID_GRID1 = wxNewId();
const long War_Game_GUIFrame::ID_PANEL1 = wxNewId();
const long War_Game_GUIFrame::ID_PANEL2 = wxNewId();
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

    Create(parent, id, _("MainFrame"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(1000,800));
    Grid1 = new wxGrid(this, ID_GRID1, wxPoint(5,5), wxSize(605,605), 0, _T("ID_GRID1"));
    Grid1->CreateGrid(40,40);
    Grid1->EnableEditing(true);
    Grid1->EnableGridLines(true);
    Grid1->SetColLabelSize(1);
    Grid1->SetRowLabelSize(1);
    Grid1->SetDefaultRowSize(1, true);
    Grid1->SetDefaultColSize(1, true);
    Grid1->SetDefaultCellFont( Grid1->GetFont() );
    Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(615,5), wxSize(380,305), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel2 = new wxPanel(this, ID_PANEL2, wxPoint(615,315), wxSize(380,305), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
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
