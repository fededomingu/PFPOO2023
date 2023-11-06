///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

Principal::Principal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INACTIVECAPTION ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer3->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_textCtrl1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button2 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( bSizer3, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	m_grid1 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid1->CreateGrid( 0, 0 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );

	// Columns
	m_grid1->EnableDragColMove( false );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelSize( 30 );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelSize( 80 );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer4->Add( m_grid1, 1, wxALL|wxEXPAND, 5 );


	bSizer2->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_button3 = new wxButton( this, wxID_ANY, wxT("Libros"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button3, 0, wxALL, 5 );

	m_button4 = new wxButton( this, wxID_ANY, wxT("Socios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button4, 0, wxALL, 5 );

	m_button5 = new wxButton( this, wxID_ANY, wxT("Informes"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button5, 0, wxALL, 5 );

	m_button6 = new wxButton( this, wxID_ANY, wxT("Prestamos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button6, 0, wxALL, 5 );


	bSizer2->Add( bSizer5, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );
}

Principal::~Principal()
{
}

Prestamos::Prestamos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	bSizer32->Add( m_staticText20, 0, wxALL, 5 );

	m_textCtrl18 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_textCtrl18, 1, wxALL, 5 );

	m_button20 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_button20, 0, wxALL, 5 );


	bSizer31->Add( bSizer32, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxVERTICAL );

	m_grid4 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid4->CreateGrid( 0, 0 );
	m_grid4->EnableEditing( true );
	m_grid4->EnableGridLines( true );
	m_grid4->EnableDragGridSize( false );
	m_grid4->SetMargins( 0, 0 );

	// Columns
	m_grid4->EnableDragColMove( false );
	m_grid4->EnableDragColSize( true );
	m_grid4->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid4->EnableDragRowSize( true );
	m_grid4->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid4->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer33->Add( m_grid4, 1, wxALL|wxEXPAND, 5 );


	bSizer31->Add( bSizer33, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );

	m_btnprestamo = new wxButton( this, wxID_ANY, wxT("Prestamo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_btnprestamo, 0, wxALL, 5 );

	m_btndevolucion = new wxButton( this, wxID_ANY, wxT("Devolucion"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_btndevolucion, 0, wxALL, 5 );

	m_btncancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_btncancelar, 0, wxALL, 5 );


	bSizer31->Add( bSizer34, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer31 );
	this->Layout();

	this->Centre( wxBOTH );
}

Prestamos::~Prestamos()
{
}

cargar_prestamo::cargar_prestamo( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Libro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer36->Add( m_staticText21, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl19 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_textCtrl19, 1, wxALL, 5 );

	m_button24 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_button24, 0, wxALL, 5 );


	bSizer57->Add( bSizer36, 0, wxEXPAND|wxBOTTOM, 5 );

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer37->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Codigo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizer32->Add( m_staticText18, 0, wxALL, 5 );

	m_textCtrl15 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_textCtrl15, 0, wxALL, 5 );


	bSizer31->Add( bSizer32, 0, 0, 5 );

	wxBoxSizer* bSizer321;
	bSizer321 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText181 = new wxStaticText( this, wxID_ANY, wxT("Titulo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText181->Wrap( -1 );
	bSizer321->Add( m_staticText181, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl151 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer321->Add( m_textCtrl151, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer31->Add( bSizer321, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer322;
	bSizer322 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText182 = new wxStaticText( this, wxID_ANY, wxT("Autor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText182->Wrap( -1 );
	bSizer322->Add( m_staticText182, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl152 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer322->Add( m_textCtrl152, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer31->Add( bSizer322, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer323;
	bSizer323 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText183 = new wxStaticText( this, wxID_ANY, wxT("Editorial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText183->Wrap( -1 );
	bSizer323->Add( m_staticText183, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl153 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer323->Add( m_textCtrl153, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer31->Add( bSizer323, 0, wxEXPAND, 5 );


	bSizer37->Add( bSizer31, 1, wxEXPAND|wxTOP, 5 );


	bSizer57->Add( bSizer37, 0, wxEXPAND, 5 );


	bSizer81->Add( bSizer57, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText34 = new wxStaticText( this, wxID_ANY, wxT("Socio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	bSizer55->Add( m_staticText34, 0, wxALL, 5 );

	m_textCtrl30 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( m_textCtrl30, 1, wxALL|wxEXPAND, 5 );

	m_btnfinddni = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( m_btnfinddni, 0, wxALL, 5 );


	bSizer59->Add( bSizer55, 0, wxEXPAND, 5 );


	bSizer58->Add( bSizer59, 0, wxEXPAND, 5 );

	m_staticline3 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer58->Add( m_staticline3, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer7->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_textCtrl2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer7, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer71->Add( m_staticText31, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl21 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_textCtrl21, 1, wxALL, 5 );


	bSizer6->Add( bSizer71, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer72;
	bSizer72 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	bSizer72->Add( m_staticText32, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl22 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer72->Add( m_textCtrl22, 0, wxALL, 5 );


	bSizer6->Add( bSizer72, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer73;
	bSizer73 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText33 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer73->Add( m_staticText33, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl23 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer73->Add( m_textCtrl23, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer73, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer74;
	bSizer74 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText341 = new wxStaticText( this, wxID_ANY, wxT("eMail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText341->Wrap( -1 );
	bSizer74->Add( m_staticText341, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl24 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer74->Add( m_textCtrl24, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer74, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer75;
	bSizer75 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Movil"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	bSizer75->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl25 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer75->Add( m_textCtrl25, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer6->Add( bSizer75, 0, wxEXPAND, 5 );


	bSizer58->Add( bSizer6, 0, wxEXPAND, 5 );


	bSizer81->Add( bSizer58, 1, 0, 5 );


	bSizer35->Add( bSizer81, 1, wxEXPAND, 5 );

	m_staticline4 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer35->Add( m_staticline4, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer82;
	bSizer82 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer83;
	bSizer83 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer84;
	bSizer84 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText56 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	bSizer84->Add( m_staticText56, 0, wxALL, 5 );

	m_textCtrl50 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer84->Add( m_textCtrl50, 0, wxALL, 5 );

	m_textCtrl51 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer84->Add( m_textCtrl51, 0, wxALL, 5 );

	m_textCtrl52 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer84->Add( m_textCtrl52, 0, wxALL, 5 );


	bSizer83->Add( bSizer84, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer841;
	bSizer841 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText561 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText561->Wrap( -1 );
	bSizer841->Add( m_staticText561, 0, wxALL, 5 );

	m_textCtrl501 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer841->Add( m_textCtrl501, 0, wxALL, 5 );

	m_textCtrl511 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer841->Add( m_textCtrl511, 0, wxALL, 5 );

	m_textCtrl521 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer841->Add( m_textCtrl521, 0, wxALL, 5 );


	bSizer83->Add( bSizer841, 1, wxEXPAND, 5 );


	bSizer82->Add( bSizer83, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer89;
	bSizer89 = new wxBoxSizer( wxHORIZONTAL );

	m_button34 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer89->Add( m_button34, 0, wxALL, 5 );

	m_button35 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer89->Add( m_button35, 0, wxALL, 5 );


	bSizer82->Add( bSizer89, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer35->Add( bSizer82, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );


	this->SetSizer( bSizer35 );
	this->Layout();

	this->Centre( wxBOTH );
}

cargar_prestamo::~cargar_prestamo()
{
}

Socios::Socios( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer26->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl12 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer26->Add( m_textCtrl12, 1, wxALL, 5 );

	m_button13 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer26->Add( m_button13, 0, wxALL, 5 );


	bSizer23->Add( bSizer26, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );

	m_grid2 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid2->CreateGrid( 5, 5 );
	m_grid2->EnableEditing( true );
	m_grid2->EnableGridLines( true );
	m_grid2->EnableDragGridSize( false );
	m_grid2->SetMargins( 0, 0 );

	// Columns
	m_grid2->EnableDragColMove( false );
	m_grid2->EnableDragColSize( true );
	m_grid2->SetColLabelSize( 30 );
	m_grid2->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid2->EnableDragRowSize( true );
	m_grid2->SetRowLabelSize( 80 );
	m_grid2->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid2->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer24->Add( m_grid2, 0, wxALL, 5 );


	bSizer23->Add( bSizer24, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );

	m_button9 = new wxButton( this, wxID_ANY, wxT("Registrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button9, 0, wxALL, 5 );

	m_button10 = new wxButton( this, wxID_ANY, wxT("Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button10, 0, wxALL, 5 );

	m_button11 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button11, 0, wxALL, 5 );

	m_button12 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_button12, 0, wxALL, 5 );


	bSizer23->Add( bSizer25, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer23 );
	this->Layout();

	this->Centre( wxBOTH );
}

Socios::~Socios()
{
}

cargar_socio::cargar_socio( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer7->Add( m_staticText3, 0, wxALL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_textCtrl2, 0, wxALL, 5 );


	bSizer6->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Apellido"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer71->Add( m_staticText31, 0, wxALL, 5 );

	m_textCtrl21 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_textCtrl21, 0, wxALL, 5 );


	bSizer6->Add( bSizer71, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer72;
	bSizer72 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32 = new wxStaticText( this, wxID_ANY, wxT("DNI"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	bSizer72->Add( m_staticText32, 0, wxALL, 5 );

	m_textCtrl22 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer72->Add( m_textCtrl22, 0, wxALL, 5 );


	bSizer6->Add( bSizer72, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer73;
	bSizer73 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText33 = new wxStaticText( this, wxID_ANY, wxT("Domicilio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer73->Add( m_staticText33, 0, wxALL, 5 );

	m_textCtrl23 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer73->Add( m_textCtrl23, 0, wxALL, 5 );


	bSizer6->Add( bSizer73, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer74;
	bSizer74 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText34 = new wxStaticText( this, wxID_ANY, wxT("eMail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	bSizer74->Add( m_staticText34, 0, wxALL, 5 );

	m_textCtrl24 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer74->Add( m_textCtrl24, 0, wxALL, 5 );


	bSizer6->Add( bSizer74, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer75;
	bSizer75 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Movil"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	bSizer75->Add( m_staticText35, 0, wxALL, 5 );

	m_textCtrl25 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer75->Add( m_textCtrl25, 0, wxALL, 5 );


	bSizer6->Add( bSizer75, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Fecha de Nacimiento"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer21->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer76;
	bSizer76 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Dia"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	bSizer76->Add( m_staticText36, 0, wxALL, 5 );

	m_textCtrl26 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_textCtrl26, 0, wxALL, 5 );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer76->Add( m_staticText11, 0, wxALL, 5 );

	m_textCtrl10 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_textCtrl10, 0, wxALL, 5 );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer76->Add( m_staticText12, 0, wxALL, 5 );

	m_textCtrl11 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer76->Add( m_textCtrl11, 0, wxALL, 5 );


	bSizer21->Add( bSizer76, 1, wxEXPAND, 5 );


	bSizer6->Add( bSizer21, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	rs_guardar = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( rs_guardar, 0, wxALL, 5 );

	rs_cancelar = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( rs_cancelar, 0, wxALL, 5 );


	bSizer6->Add( bSizer22, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer6 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	rs_guardar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( cargar_socio::clickGuardar ), NULL, this );
	rs_cancelar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( cargar_socio::clickCancelar ), NULL, this );
}

cargar_socio::~cargar_socio()
{
	// Disconnect Events
	rs_guardar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( cargar_socio::clickGuardar ), NULL, this );
	rs_cancelar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( cargar_socio::clickCancelar ), NULL, this );

}

Libros::Libros( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer28->Add( m_staticText16, 0, wxALL, 5 );

	m_textCtrl13 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( m_textCtrl13, 1, wxALL, 5 );

	m_button14 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( m_button14, 0, wxALL, 5 );


	bSizer27->Add( bSizer28, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	m_grid3 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid3->CreateGrid( 5, 5 );
	m_grid3->EnableEditing( true );
	m_grid3->EnableGridLines( true );
	m_grid3->EnableDragGridSize( false );
	m_grid3->SetMargins( 0, 0 );

	// Columns
	m_grid3->EnableDragColMove( false );
	m_grid3->EnableDragColSize( true );
	m_grid3->SetColLabelSize( 30 );
	m_grid3->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid3->EnableDragRowSize( true );
	m_grid3->SetRowLabelSize( 80 );
	m_grid3->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid3->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer29->Add( m_grid3, 1, wxALL|wxEXPAND, 5 );


	bSizer27->Add( bSizer29, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxHORIZONTAL );

	m_button15 = new wxButton( this, wxID_ANY, wxT("Registrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer30->Add( m_button15, 0, wxALL, 5 );

	m_button16 = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer30->Add( m_button16, 0, wxALL, 5 );

	m_button17 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer30->Add( m_button17, 0, wxALL, 5 );

	m_button18 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer30->Add( m_button18, 0, wxALL, 5 );


	bSizer27->Add( bSizer30, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer27 );
	this->Layout();

	this->Centre( wxBOTH );
}

Libros::~Libros()
{
}

cargar_libro::cargar_libro( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Codigo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizer32->Add( m_staticText18, 0, wxALL, 5 );

	m_textCtrl15 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer32->Add( m_textCtrl15, 0, wxALL, 5 );


	bSizer31->Add( bSizer32, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer321;
	bSizer321 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText181 = new wxStaticText( this, wxID_ANY, wxT("Titulo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText181->Wrap( -1 );
	bSizer321->Add( m_staticText181, 0, wxALL, 5 );

	m_textCtrl151 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer321->Add( m_textCtrl151, 0, wxALL, 5 );


	bSizer31->Add( bSizer321, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer322;
	bSizer322 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText182 = new wxStaticText( this, wxID_ANY, wxT("Autor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText182->Wrap( -1 );
	bSizer322->Add( m_staticText182, 0, wxALL, 5 );

	m_textCtrl152 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer322->Add( m_textCtrl152, 0, wxALL, 5 );


	bSizer31->Add( bSizer322, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer323;
	bSizer323 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText183 = new wxStaticText( this, wxID_ANY, wxT("Editorial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText183->Wrap( -1 );
	bSizer323->Add( m_staticText183, 0, wxALL, 5 );

	m_textCtrl153 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer323->Add( m_textCtrl153, 0, wxALL, 5 );


	bSizer31->Add( bSizer323, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer324;
	bSizer324 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText184 = new wxStaticText( this, wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText184->Wrap( -1 );
	bSizer324->Add( m_staticText184, 0, wxALL, 5 );

	m_textCtrl154 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer324->Add( m_textCtrl154, 0, wxALL, 5 );


	bSizer31->Add( bSizer324, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer325;
	bSizer325 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText185 = new wxStaticText( this, wxID_ANY, wxT("Stock"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText185->Wrap( -1 );
	bSizer325->Add( m_staticText185, 1, wxALL|wxEXPAND, 5 );

	m_spinCtrl1 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	bSizer325->Add( m_spinCtrl1, 0, wxALL, 5 );


	bSizer31->Add( bSizer325, 1, 0, 5 );

	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxHORIZONTAL );

	m_button20 = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer44->Add( m_button20, 0, wxALL, 5 );

	m_button21 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer44->Add( m_button21, 0, wxALL, 5 );


	bSizer31->Add( bSizer44, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer31 );
	this->Layout();
	bSizer31->Fit( this );

	this->Centre( wxBOTH );
}

cargar_libro::~cargar_libro()
{
}
