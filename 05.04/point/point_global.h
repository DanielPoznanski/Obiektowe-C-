#ifndef POINT_GLOBAL_H
#define POINT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(POINT_LIBRARY)
#  define POINTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define POINTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // POINT_GLOBAL_H
