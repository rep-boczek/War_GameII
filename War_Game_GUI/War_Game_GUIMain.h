/***************************************************************
 * Name:      War_Game_GUIMain.h
 * Purpose:   Defines Application Frame
 * Author:    Dawd ()
 * Created:   2019-03-21
 * Copyright: Dawd ()
 * License:
 **************************************************************/

#ifndef WAR_GAME_GUIMAIN_H
#define WAR_GAME_GUIMAIN_H

//(*Headers(War_Game_GUIFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
#include <wx/textctrl.h>
//*)

class War_Game_GUIFrame: public wxFrame
{
    public:

        War_Game_GUIFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~War_Game_GUIFrame();

    private:

        //(*Handlers(War_Game_GUIFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(War_Game_GUIFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_SPINCTRL1;
        static const long ID_SPINCTRL2;
        static const long ID_SPINCTRL3;
        static const long ID_SPINCTRL4;
        static const long ID_SPINCTRL5;
        static const long ID_SPINCTRL6;
        static const long ID_PANEL1;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT9;
        static const long ID_STATICTEXT10;
        static const long ID_STATICTEXT11;
        static const long ID_STATICTEXT12;
        static const long ID_SPINCTRL7;
        static const long ID_SPINCTRL8;
        static const long ID_SPINCTRL9;
        static const long ID_SPINCTRL10;
        static const long ID_SPINCTRL11;
        static const long ID_SPINCTRL12;
        static const long ID_PANEL2;
        static const long ID_PANEL3;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(War_Game_GUIFrame)
        wxButton* Button1;
        wxPanel* Panel1;
        wxPanel* Panel2;
        wxPanel* Panel3;
        wxSpinCtrl* SpinCtrl10;
        wxSpinCtrl* SpinCtrl11;
        wxSpinCtrl* SpinCtrl12;
        wxSpinCtrl* SpinCtrl1;
        wxSpinCtrl* SpinCtrl2;
        wxSpinCtrl* SpinCtrl3;
        wxSpinCtrl* SpinCtrl4;
        wxSpinCtrl* SpinCtrl5;
        wxSpinCtrl* SpinCtrl6;
        wxSpinCtrl* SpinCtrl7;
        wxSpinCtrl* SpinCtrl8;
        wxSpinCtrl* SpinCtrl9;
        wxStaticText* StaticText10;
        wxStaticText* StaticText11;
        wxStaticText* StaticText12;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStaticText* StaticText7;
        wxStaticText* StaticText8;
        wxStaticText* StaticText9;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WAR_GAME_GUIMAIN_H
