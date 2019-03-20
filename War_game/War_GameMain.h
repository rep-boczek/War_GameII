/***************************************************************
 * Name:      War_GameMain.h
 * Purpose:   Defines Application Frame
 * Author:    Dawd ()
 * Created:   2019-03-19
 * Copyright: Dawd ()
 * License:
 **************************************************************/

#ifndef WAR_GAMEMAIN_H
#define WAR_GAMEMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "War_GameApp.h"


#include <wx/button.h>
#include <wx/statline.h>
class War_GameDialog: public wxDialog
{
    public:
        War_GameDialog(wxDialog *dlg, const wxString& title);
        ~War_GameDialog();

    protected:
        enum
        {
            idBtnQuit = 1000,
            idBtnAbout
        };
        wxStaticText* m_staticText1;
        wxButton* BtnAbout;
        wxStaticLine* m_staticline1;
        wxButton* BtnQuit;

    private:
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // WAR_GAMEMAIN_H
