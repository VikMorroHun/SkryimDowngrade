#include "subwindow.h"
#include "ui_subwindow.h"

Subwindow::Subwindow(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::Subwindow)
{
	ui->setupUi(this);
	connect( ui->buttonBox, &QDialogButtonBox::clicked, this, &Subwindow::on_buttonBoxClicked );
}

Subwindow::~Subwindow()
{
	delete ui;
}

void Subwindow::on_buttonBoxClicked(QAbstractButton *button)
{
	if ( button->text() == "OK" )
	{
		//qDebug() << "OK";
		emit SubwinSendTextSignal( ui->lineEdit->text() );
		ui->lineEdit->clear();
	}
	if ( button->text() == "Cancel" )
	{
		emit SubwinCancelSignal();
		ui->lineEdit->clear();
	}
}

