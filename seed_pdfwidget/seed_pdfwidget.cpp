#ifndef MODULEMACRO_CORE_H
#include "core/modulemacro.h"
#endif /*MODULEMACRO_CORE_H*/
#include "pdfviewer.h"
#include "pdfdocument.h"
#include "QtWidgets/QMainWindow"
#include "QtWidgets/QMessageBox"
#include "QtWidgets/QDockWidget"
#include "seed_widget/idoxcmdline.h"

QMainWindow *g_mainWindow = NULL;

BEGIN_DOX_NAMESPACE
BEGIN_DEFINE_DOX_MODULE("pdfwidget")
	XDEFINE_CLASSMAP_ENTRY_SINGLE(PDFViewer)
	XDEFINE_CLASSMAP_ENTRY_NORMAL(PDFDocument)
FINISH_DEFINE_DOX_MODULE()
END_DOX_NAMESPACE

OUTCAPI void attachDoxygen(void *ptr)
{
	g_mainWindow = (QMainWindow *)ptr;
}

OUTCAPI bool detachDoxygen(void *)
{
	return true;
}