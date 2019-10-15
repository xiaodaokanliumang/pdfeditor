#ifndef MODULEMACRO_CORE_H
#include "core/modulemacro.h"
#endif /*MODULEMACRO_CORE_H*/

#include "pdfeditorcmd.h"

#include "QtWidgets/QMainWindow"
#include "QtWidgets/QMessageBox"

QMainWindow *g_mainWindow = NULL;

BEGIN_DOX_NAMESPACE
BEGIN_DEFINE_DOX_MODULE("pdfeditor")

FINISH_DEFINE_DOX_MODULE()
END_DOX_NAMESPACE

OUTCAPI void attachDoxygen(void *ptr)
{
	initApplication();
}

OUTCAPI bool detachDoxygen(void *)
{
	return true;
}