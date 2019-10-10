#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_pdfeditor.h"

class PDFEditor : public QMainWindow
{
	Q_OBJECT

public:
	PDFEditor(QWidget *parent = Q_NULLPTR);

private:
	Ui::PDFEditorClass ui;
};
