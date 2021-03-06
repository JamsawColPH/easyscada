/**********************************************************************
--- Qt Architect generated file ---
File: ActionConfigureData.cpp
Last generated: Thu Jan 4 15:52:11 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#include <qt.h>
#include "ActionConfigureData.h"

ActionConfigureData::ActionConfigureData(QWidget *parent, const char *name)
: QDialog(parent, name, TRUE, 208)
{
	Name = new QLabel(this, "Label_1");
	Name->setGeometry(20, 20, 570, 30);
	Name->setMinimumSize(0, 0);
	Name->setMaximumSize(32767, 32767);
	Name->setFocusPolicy(QWidget::NoFocus);
	Name->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	Name->setFontPropagation(QWidget::SameFont);
	Name->setPalettePropagation(QWidget::SameFont);
	#endif
	Name->setFrameStyle( 50 );
	Name->setLineWidth( 1 );
	Name->setMidLineWidth( 0 );
	Name->QFrame::setMargin( 0 );
	Name->setText( "" );
	Name->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	Name->setMargin( 0 );
	QPushButton *qtarch_PushButton_1 = new QPushButton(this, "PushButton_1");
	qtarch_PushButton_1->setGeometry(10, 250, 100, 30);
	qtarch_PushButton_1->setMinimumSize(0, 0);
	qtarch_PushButton_1->setMaximumSize(32767, 32767);
	qtarch_PushButton_1->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_1->setBackgroundMode(QWidget::PaletteButton);
#if QT_VERSION < 300
	qtarch_PushButton_1->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_1->setPalettePropagation(QWidget::SameFont);
		#endif
	qtarch_PushButton_1->setText( tr( "Ok" ) );
	qtarch_PushButton_1->setAutoRepeat( FALSE );
	qtarch_PushButton_1->setAutoResize( FALSE );
	qtarch_PushButton_1->setToggleButton( FALSE );
	qtarch_PushButton_1->setDefault( FALSE );
	qtarch_PushButton_1->setAutoDefault( FALSE );
	qtarch_PushButton_1->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_1, SIGNAL(clicked()), SLOT(OkClicked()));
	QPushButton *qtarch_PushButton_2 = new QPushButton(this, "PushButton_2");
	qtarch_PushButton_2->setGeometry(490, 250, 100, 30);
	qtarch_PushButton_2->setMinimumSize(0, 0);
	qtarch_PushButton_2->setMaximumSize(32767, 32767);
	qtarch_PushButton_2->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_2->setBackgroundMode(QWidget::PaletteButton);
#if QT_VERSION < 300
	qtarch_PushButton_2->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_2->setPalettePropagation(QWidget::SameFont);
		#endif
	qtarch_PushButton_2->setText( tr( "Cancel" ) );
	qtarch_PushButton_2->setAutoRepeat( FALSE );
	qtarch_PushButton_2->setAutoResize( FALSE );
	qtarch_PushButton_2->setToggleButton( FALSE );
	qtarch_PushButton_2->setDefault( FALSE );
	qtarch_PushButton_2->setAutoDefault( FALSE );
	qtarch_PushButton_2->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_2, SIGNAL(clicked()), SLOT(reject()));
	QLabel *qtarch_Label_2 = new QLabel(this, "Label_2");
	qtarch_Label_2->setGeometry(20, 70, 130, 30);
	qtarch_Label_2->setMinimumSize(0, 0);
	qtarch_Label_2->setMaximumSize(32767, 32767);
	qtarch_Label_2->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_2->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Label_2->setFontPropagation(QWidget::SameFont);
	qtarch_Label_2->setPalettePropagation(QWidget::SameFont);
		#endif
	qtarch_Label_2->setFrameStyle( 0 );
	qtarch_Label_2->setLineWidth( 1 );
	qtarch_Label_2->setMidLineWidth( 0 );
	qtarch_Label_2->QFrame::setMargin( 0 );
	qtarch_Label_2->setText( tr( "Measurment Action" ) );
	qtarch_Label_2->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_2->setMargin( 0 );
	MeasureAction = new QLineEdit(this, "LineEdit_1");
	MeasureAction->setGeometry(160, 70, 430, 30);
	MeasureAction->setMinimumSize(0, 0);
	MeasureAction->setMaximumSize(32767, 32767);
	MeasureAction->setFocusPolicy(QWidget::StrongFocus);
	MeasureAction->setBackgroundMode(QWidget::PaletteBase);
#if QT_VERSION < 300
	MeasureAction->setFontPropagation(QWidget::SameFont);
	MeasureAction->setPalettePropagation(QWidget::SameFont);
		#endif
	MeasureAction->setText( "" );
	MeasureAction->setMaxLength( 32767 );
	MeasureAction->setFrame( QLineEdit::Normal );
	MeasureAction->setFrame( TRUE );
	MeasureAction->setAlignment( AlignLeft );
	QLabel *qtarch_Label_3 = new QLabel(this, "Label_3");
	qtarch_Label_3->setGeometry(20, 120, 130, 30);
	qtarch_Label_3->setMinimumSize(0, 0);
	qtarch_Label_3->setMaximumSize(32767, 32767);
	qtarch_Label_3->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_3->setBackgroundMode(QWidget::PaletteBackground);
#if QT_VERSION < 300
	qtarch_Label_3->setFontPropagation(QWidget::SameFont);
	qtarch_Label_3->setPalettePropagation(QWidget::SameFont);
		#endif
	qtarch_Label_3->setFrameStyle( 0 );
	qtarch_Label_3->setLineWidth( 1 );
	qtarch_Label_3->setMidLineWidth( 0 );
	qtarch_Label_3->QFrame::setMargin( 0 );
	qtarch_Label_3->setText( tr( "Alarm Action" ) );
	qtarch_Label_3->setAlignment( AlignLeft|AlignVCenter|ExpandTabs );
	qtarch_Label_3->setMargin( 0 );
	AlarmAction = new QLineEdit(this, "LineEdit_2");
	AlarmAction->setGeometry(160, 120, 430, 30);
	AlarmAction->setMinimumSize(0, 0);
	AlarmAction->setMaximumSize(32767, 32767);
	AlarmAction->setFocusPolicy(QWidget::StrongFocus);
	AlarmAction->setBackgroundMode(QWidget::PaletteBase);
#if QT_VERSION < 300
	AlarmAction->setFontPropagation(QWidget::SameFont);
	AlarmAction->setPalettePropagation(QWidget::SameFont);
		#endif
	AlarmAction->setText( "" );
	AlarmAction->setMaxLength( 32767 );
	AlarmAction->setFrame( QLineEdit::Normal );
	AlarmAction->setFrame( TRUE );
	AlarmAction->setAlignment( AlignLeft );
	QPushButton *qtarch_PushButton_3 = new QPushButton(this, "PushButton_3");
	qtarch_PushButton_3->setGeometry(370, 250, 100, 30);
	qtarch_PushButton_3->setMinimumSize(0, 0);
	qtarch_PushButton_3->setMaximumSize(32767, 32767);
	qtarch_PushButton_3->setFocusPolicy(QWidget::TabFocus);
	qtarch_PushButton_3->setBackgroundMode(QWidget::PaletteButton);
#if QT_VERSION < 300
	qtarch_PushButton_3->setFontPropagation(QWidget::SameFont);
	qtarch_PushButton_3->setPalettePropagation(QWidget::SameFont);
		#endif
	qtarch_PushButton_3->setText( tr( "Help" ) );
	qtarch_PushButton_3->setAutoRepeat( FALSE );
	qtarch_PushButton_3->setAutoResize( FALSE );
	qtarch_PushButton_3->setToggleButton( FALSE );
	qtarch_PushButton_3->setDefault( FALSE );
	qtarch_PushButton_3->setAutoDefault( FALSE );
	qtarch_PushButton_3->setIsMenuButton( FALSE );
	connect(qtarch_PushButton_3, SIGNAL(clicked()), SLOT(Help()));
	resize(610,300);
	setMinimumSize(0, 0);
	setMaximumSize(32767, 32767);
}
ActionConfigureData::~ActionConfigureData()
{
}

