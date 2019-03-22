#ifndef TESTFRAME_H
#define TESTFRAME_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(TestFrame)
	#include <wx/frame.h>
	//*)
#endif
//(*Headers(TestFrame)
//*)

class TestFrame: public wxFrame
{
	public:

		TestFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~TestFrame();

		//(*Declarations(TestFrame)
		//*)

	protected:

		//(*Identifiers(TestFrame)
		//*)

	private:

		//(*Handlers(TestFrame)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
