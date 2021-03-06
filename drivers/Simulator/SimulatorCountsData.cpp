/**********************************************************************
--- Qt Architect generated file ---
File: SimulatorCountsData.cpp
Last generated: Thu Jan 4 16:19:37 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#include <qt.h>
#include "SimulatorCountsData.h"
SimulatorCountsData::SimulatorCountsData(QWidget *parent, const char *name)
: QWidget(parent, name, 16)
{
	QLabel *qtarch_Label_5 = new QLabel(this, "Label_5");
	qtarch_Label_5->setGeometry(10, 10, 100, 20);
	qtarch_Label_5->setMinimumSize(0, 0);
	qtarch_Label_5->setMaximumSize(32767, 32767);
	qtarch_Label_5->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_5->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	qtarch_Label_5->setFontPropagation(QWidget::SameFont);
	qtarch_Label_5->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_5->setFrameStyle( 0 );
	qtarch_Label_5->setLineWidth( 1 );
	qtarch_Label_5->setMidLineWidth( 0 );
	qtarch_Label_5->QFrame::setMargin( 0 );
	qtarch_Label_5->setText( tr( "Sample Period" ) );
	qtarch_Label_5->setAlignment( AlignHCenter|AlignVCenter|ExpandTabs );
	qtarch_Label_5->setMargin( 0 );
	Time = new TIMEEDIT(this, "User_2");
	Time->setGeometry(20, 40, 80, 30);
	Time->setMinimumSize(0, 0);
	Time->setMaximumSize(32767, 32767);
	Time->setFocusPolicy(QWidget::StrongFocus);
	Time->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	Time->setFontPropagation(QWidget::SameFont);
	Time->setPalettePropagation(QWidget::SameFont);
	#endif
	QLabel *qtarch_Label_7 = new QLabel(this, "Label_7");
	qtarch_Label_7->setGeometry(120, 10, 100, 20);
	qtarch_Label_7->setMinimumSize(0, 0);
	qtarch_Label_7->setMaximumSize(32767, 32767);
	qtarch_Label_7->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_7->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	qtarch_Label_7->setFontPropagation(QWidget::SameFont);
	qtarch_Label_7->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_7->setFrameStyle( 0 );
	qtarch_Label_7->setLineWidth( 1 );
	qtarch_Label_7->setMidLineWidth( 0 );
	qtarch_Label_7->QFrame::setMargin( 0 );
	qtarch_Label_7->setText( tr( "1st Size Mean " ) );
	qtarch_Label_7->setAlignment( AlignHCenter|AlignVCenter|ExpandTabs );
	qtarch_Label_7->setMargin( 0 );
	QLabel *qtarch_Label_8 = new QLabel(this, "Label_8");
	qtarch_Label_8->setGeometry(240, 10, 100, 20);
	qtarch_Label_8->setMinimumSize(0, 0);
	qtarch_Label_8->setMaximumSize(32767, 32767);
	qtarch_Label_8->setFocusPolicy(QWidget::NoFocus);
	qtarch_Label_8->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	qtarch_Label_8->setFontPropagation(QWidget::SameFont);
	qtarch_Label_8->setPalettePropagation(QWidget::SameFont);
	#endif
	qtarch_Label_8->setFrameStyle( 0 );
	qtarch_Label_8->setLineWidth( 1 );
	qtarch_Label_8->setMidLineWidth( 0 );
	qtarch_Label_8->QFrame::setMargin( 0 );
	qtarch_Label_8->setText( tr( "Variation" ) );
	qtarch_Label_8->setAlignment( AlignHCenter|AlignVCenter|ExpandTabs );
	qtarch_Label_8->setMargin( 0 );
	Mean = new INTEDIT(this, "User_5");
	Mean->setGeometry(120, 40, 100, 30);
	Mean->setMinimumSize(0, 0);
	Mean->setMaximumSize(32767, 32767);
	Mean->setFocusPolicy(QWidget::StrongFocus);
	Mean->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	Mean->setFontPropagation(QWidget::SameFont);
	Mean->setPalettePropagation(QWidget::SameFont);
	#endif
	Variation = new INTEDIT(this, "User_6");
	Variation->setGeometry(240, 40, 100, 30);
	Variation->setMinimumSize(0, 0);
	Variation->setMaximumSize(32767, 32767);
	Variation->setFocusPolicy(QWidget::StrongFocus);
	Variation->setBackgroundMode(QWidget::PaletteBackground);
	#if QT_VERSION < 300
	Variation->setFontPropagation(QWidget::SameFont);
	Variation->setPalettePropagation(QWidget::SameFont);
	#endif
	resize(460,100);
	setMinimumSize(0, 0);
	setMaximumSize(32767, 32767);
}
SimulatorCountsData::~SimulatorCountsData()
{
}

