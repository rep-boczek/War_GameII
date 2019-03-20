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
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WAR_GAME_GUIMAIN_H
