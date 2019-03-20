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
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/spinctrl.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
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
        //*)

        //(*Identifiers(War_Game_GUIFrame)
        static const long ID_GRID1;
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
        static const long ID_PANEL2;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(War_Game_GUIFrame)
        wxGrid* Grid1;
        wxPanel* Panel1;
        wxPanel* Panel2;
        wxSpinCtrl* SpinCtrl1;
        wxSpinCtrl* SpinCtrl2;
        wxSpinCtrl* SpinCtrl3;
        wxSpinCtrl* SpinCtrl4;
        wxSpinCtrl* SpinCtrl5;
        wxSpinCtrl* SpinCtrl6;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WAR_GAME_GUIMAIN_H
