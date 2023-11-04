///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/grid.h>
#include <wx/frame.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Principal
///////////////////////////////////////////////////////////////////////////////
class Principal : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrl1;
		wxButton* m_button2;
		wxGrid* m_grid1;
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button5;
		wxButton* m_button6;
	
	public:
		
		Principal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Gestion de Biblioteca"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 762,508 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~Principal();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Socios
///////////////////////////////////////////////////////////////////////////////
class Socios : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText15;
		wxTextCtrl* m_textCtrl12;
		wxButton* m_button13;
		wxGrid* m_grid2;
		wxButton* m_button9;
		wxButton* m_button10;
		wxButton* m_button11;
		wxButton* m_button12;
	
	public:
		
		Socios( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Lista de Socios Activos"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 584,298 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Socios();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class cargar_socio
///////////////////////////////////////////////////////////////////////////////
class cargar_socio : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText31;
		wxTextCtrl* m_textCtrl21;
		wxStaticText* m_staticText32;
		wxTextCtrl* m_textCtrl22;
		wxStaticText* m_staticText33;
		wxTextCtrl* m_textCtrl23;
		wxStaticText* m_staticText34;
		wxTextCtrl* m_textCtrl24;
		wxStaticText* m_staticText35;
		wxTextCtrl* m_textCtrl25;
		wxStaticText* m_staticText14;
		wxStaticText* m_staticText36;
		wxTextCtrl* m_textCtrl26;
		wxStaticText* m_staticText11;
		wxTextCtrl* m_textCtrl10;
		wxStaticText* m_staticText12;
		wxTextCtrl* m_textCtrl11;
		wxButton* rs_guardar;
		wxButton* rs_cancelar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void clickGuardar( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickCancelar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		cargar_socio( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Registro de Socios"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 517,371 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~cargar_socio();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Libros
///////////////////////////////////////////////////////////////////////////////
class Libros : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText16;
		wxTextCtrl* m_textCtrl13;
		wxButton* m_button14;
		wxGrid* m_grid3;
		wxButton* m_button15;
		wxButton* m_button16;
		wxButton* m_button17;
		wxButton* m_button18;
	
	public:
		
		Libros( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Listado de Libros"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 641,334 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Libros();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class cargar_libro
///////////////////////////////////////////////////////////////////////////////
class cargar_libro : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText18;
		wxTextCtrl* m_textCtrl15;
		wxStaticText* m_staticText181;
		wxTextCtrl* m_textCtrl151;
		wxStaticText* m_staticText182;
		wxTextCtrl* m_textCtrl152;
		wxStaticText* m_staticText183;
		wxTextCtrl* m_textCtrl153;
		wxStaticText* m_staticText184;
		wxTextCtrl* m_textCtrl154;
		wxStaticText* m_staticText185;
		wxSpinCtrl* m_spinCtrl1;
		wxButton* m_button20;
		wxButton* m_button21;
	
	public:
		
		cargar_libro( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Registrar Libro"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~cargar_libro();
	
};

#endif //__WXFB_PROJECT_H__
