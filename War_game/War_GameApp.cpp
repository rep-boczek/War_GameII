/***************************************************************
 * Name:      War_GameApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Dawd ()
 * Created:   2019-03-19
 * Copyright: Dawd ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "War_GameApp.h"
#include "War_GameMain.h"

IMPLEMENT_APP(War_GameApp);

bool War_GameApp::OnInit()
{
    
    War_GameDialog* dlg = new War_GameDialog(0L, _("wxWidgets Application Template"));
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
