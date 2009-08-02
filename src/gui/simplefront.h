#ifndef __simplefront__
#define __simplefront__

/**
@file
Subclass of SimpleFrontBase, which is generated by wxFormBuilder.
*/

class settings_frame;
class SkirmishDialog;
class wxBoxSizer;
class wxGradientButton;


#include "../mmoptionswrapper.h"
#include <wx/frame.h>
#include <wx/bitmap.h>
#include <wx/icon.h>


/** Implementing SimpleFrontBase */
class SimpleFront : public wxFrame
{
protected:
	// Handlers for SimpleFrontBase events.
	void OnSingleplayer( wxCommandEvent& event );
	void OnMultiplayer( wxCommandEvent& event );
	void OnSettings( wxCommandEvent& event );
	void OnHelp( wxCommandEvent& event );
	void OnExit( wxCommandEvent& event );
	void OnSkipChecked( wxCommandEvent& event );

	void Close();

	settings_frame* m_settings_frame;
	SkirmishDialog* m_skirmish;
	OptionsWrapper m_mod_customs;
	const wxString m_modname;
	wxBitmap m_bg_img;
	wxIcon m_frame_ico;

    wxBoxSizer* m_button_sizer;
    wxBoxSizer* m_skirmish_sizer;
    wxBoxSizer* m_sp_button_sizer;

    wxBoxSizer* bSizer1;

    wxGradientButton* m_back;
    wxGradientButton* m_advanced;
    wxGradientButton* m_start;

    wxGradientButton* m_sp;
    wxGradientButton* m_mp;
    wxGradientButton* m_settings;
    wxGradientButton* m_exit;
    wxGradientButton* m_help;

public:
	/** Constructor */
	SimpleFront( wxWindow* parent, const wxString& modname );
	~SimpleFront();

    void ShowSP( bool show );
};

#endif // __simplefront__
