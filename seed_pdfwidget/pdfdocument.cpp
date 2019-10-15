#ifndef PDFDOCUMENT_H
#include "pdfdocument.h"
#endif /*PDFDOCUMENT_H*/

#include "QtGui/QColor"
#include "QtCore/QFile"
#include "QtCore/QTextStream"

BEGIN_DOX_NAMESPACE

PDFDocument::PDFDocument()
	: QTextEdit(NULL)
	, IPDFDocument()
{

}

PDFDocument::~PDFDocument()
{

}

bool PDFDocument::save()
{
	return false;
}

void PDFDocument::clearAll()
{
	this->clear();
}

QColor PDFDocument::color() const
{
	return QColor(199, 233, 199);
}

QString PDFDocument::title() const
{
	return m_fName;
}

bool PDFDocument::color(const QColor &)
{
	return false;
}

bool PDFDocument::open(const QString &fName, const DocType &)
{
	QFile file(fName); m_file = fName;
	m_fName = file.fileName();
	if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		return false;
	}
	QTextStream in(&file);
	QString text = in.readAll();
	this->setPlainText(text);
	this->setText(text);
	file.close();
	return true;
}

bool PDFDocument::saveAs(const QString &, const DocType &)
{
	return false;
}

void PDFDocument::addText(const QString &text, bool isAppent)
{
	if(!isAppent) clearAll();
	QString txt = this->toPlainText();
	txt.append(text); setPlainText(txt);
}

END_DOX_NAMESPACE