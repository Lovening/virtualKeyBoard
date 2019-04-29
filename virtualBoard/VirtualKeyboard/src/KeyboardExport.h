#ifndef DBAGENTEXPORT_H
#define DBAGENTEXPORT_H

#include <QtCore>
#include <QtCore/qglobal.h>

#if defined(VIRTUALKEYBOARD_LIBRARY)
#  define VIRTUALKEYBOARD_EXPORT Q_DECL_EXPORT
#else
#  define VIRTUALKEYBOARD_EXPORT Q_DECL_IMPORT
#endif

#endif // DBAGENTEXPORT_H
