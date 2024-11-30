#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class Subwindow;
}

class Subwindow : public QDialog
{
	Q_OBJECT

public:
	explicit Subwindow(QWidget *parent = nullptr);
	~Subwindow();

private slots:
	void on_buttonBoxClicked(QAbstractButton *button);

private:
	Ui::Subwindow *ui;

signals:
	void SubwinSendTextSignal( QString s );
	void SubwinCancelSignal();
};

#endif // SUBWINDOW_H
