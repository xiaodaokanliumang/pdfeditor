#include "pdfchar.h"

BEGIN_DOX_NAMESPACE

PDFChar::PDFChar()
	: IPDFChar()
	, QWidget()
{

}

PDFChar::~PDFChar()
{

}

bool PDFChar::textSize(int)
{
	throw std::logic_error("The method or operation is not implemented.");
}

int PDFChar::textSize() const
{
	throw std::logic_error("The method or operation is not implemented.");
}

QColor PDFChar::color() const
{
	throw std::logic_error("The method or operation is not implemented.");
}

bool PDFChar::color(const QColor &)
{
	throw std::logic_error("The method or operation is not implemented.");
}

QColor PDFChar::textColor() const
{
	throw std::logic_error("The method or operation is not implemented.");
}

bool PDFChar::textColor(const QColor &)
{
	throw std::logic_error("The method or operation is not implemented.");
}

QString PDFChar::textFont() const
{
	throw std::logic_error("The method or operation is not implemented.");
}

bool PDFChar::textFont(const QString &)
{
	throw std::logic_error("The method or operation is not implemented.");
}

END_DOX_NAMESPACE