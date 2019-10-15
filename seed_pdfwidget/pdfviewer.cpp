#ifndef PDFVIEWER_H
#include "pdfviewer.h"
#endif /*PDFVIEWER_H*/
#include "pdfdocument.h"
#include "core/normalobject.h"
#include "QtWidgets/QMainWindow"

extern QMainWindow *g_mainWindow;

BEGIN_DOX_NAMESPACE

PDFViewer::PDFViewer()
	: QTabWidget(), IPDFViewer()
{
	QPalette palette = this->palette(); g_mainWindow->setCentralWidget(this);
	palette.setColor(QPalette::Background, QColor::fromRgb(199, 233, 199));
	this->setPalette(palette); this->setAutoFillBackground(true);
}

PDFViewer::~PDFViewer()
{

}

QColor PDFViewer::color() const
{
	QPalette palette = this->palette();
	return palette.color(QPalette::Background);
}

QWidget *PDFViewer::viewPointer()
{
	return ((QWidget *)this);
}

int PDFViewer::documentCount() const
{
	return this->count();
}

bool PDFViewer::color(const QColor &clr)
{
	QPalette palette = this->palette();
	palette.setColor(QPalette::Background, clr);
	this->setAutoFillBackground(true);
	return true;
}

Object<IPDFDocument> PDFViewer::newPage()
{
	IObject *pObj = NormalObject<PDFDocument>::create(IPDFDocument::ClassGuid());
	Object<IPDFDocument> pdf; pdf.createInner(pObj);
	int num = count(), val = 1;
	for(int idx = 0; idx < num; ++idx)
	{
		QString txt = this->tabText(idx);
		if(txt.contains("spyp")) val++;
	}
	this->addTab((PDFDocument *)pObj, QS("spyp%1*").arg(val));
	return pdf;
}

bool PDFViewer::addPage(const Object<IPDFDocument> &ipdfDoc)
{
	PDFDocument *pDoc = (PDFDocument *)ipdfDoc.p();
	QString title = pDoc->title();
	int ret = this->addTab(pDoc, title);
	QString txt = pDoc->toPlainText();
	pDoc->setPlainText(QS("jifdsfijsdif"));
	return true;
}

END_DOX_NAMESPACE