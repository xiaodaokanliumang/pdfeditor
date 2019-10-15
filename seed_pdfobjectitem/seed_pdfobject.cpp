#ifndef MODULEMACRO_CORE_H
#include "core/modulemacro.h"
#endif /*MODULEMACRO_CORE_H*/

#include "pdfchar.h"

BEGIN_DOX_NAMESPACE
BEGIN_DEFINE_DOX_MODULE("pdfeditor")
	XDEFINE_CLASSMAP_ENTRY_NORMAL(PDFChar)
FINISH_DEFINE_DOX_MODULE()
END_DOX_NAMESPACE

QMainWindow *g_mainWindow = NULL;

OUTCAPI void attachDoxygen(void *ptr)
{
	g_mainWindow = (QMainWindow *)ptr;
}

OUTCAPI bool detachDoxygen(void *)
{
	return true;
}