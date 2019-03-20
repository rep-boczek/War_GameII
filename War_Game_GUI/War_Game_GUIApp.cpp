/***************************************************************
 * Name:      War_Game_GUIApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Dawd ()
 * Created:   2019-03-21
 * Copyright: Dawd ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "War_Game_GUIApp.h"

//(*AppHeaders
#include "War_Game_GUIMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(War_Game_GUIApp);

bool War_Game_GUIApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	War_Game_GUIFrame* Frame = new War_Game_GUIFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
