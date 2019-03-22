#include "wx_pch.h"
#include "TestFrame.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(TestFrame)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(TestFrame)
//*)

//(*IdInit(TestFrame)
//*)

BEGIN_EVENT_TABLE(TestFrame,wxFrame)
	//(*EventTable(TestFrame)
	//*)
END_EVENT_TABLE()

TestFrame::TestFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(TestFrame)
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	//*)
}

TestFrame::~TestFrame()
{
	//(*Destroy(TestFrame)
	//*)
}

