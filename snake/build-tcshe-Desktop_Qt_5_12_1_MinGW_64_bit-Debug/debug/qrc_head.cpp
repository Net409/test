/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.12.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // D:/snake/tcshe/shead.qrc
  0x0,0x0,0x0,0xa9,
  0x3c,
  0x52,0x43,0x43,0x3e,0xd,0xa,0x20,0x20,0x20,0x20,0x3c,0x71,0x72,0x65,0x73,0x6f,
  0x75,0x72,0x63,0x65,0x20,0x70,0x72,0x65,0x66,0x69,0x78,0x3d,0x22,0x2f,0x6e,0x65,
  0x77,0x2f,0x70,0x72,0x65,0x66,0x69,0x78,0x31,0x22,0x2f,0x3e,0xd,0xa,0x20,0x20,
  0x20,0x20,0x3c,0x71,0x72,0x65,0x73,0x6f,0x75,0x72,0x63,0x65,0x20,0x70,0x72,0x65,
  0x66,0x69,0x78,0x3d,0x22,0x2f,0x6e,0x65,0x77,0x2f,0x70,0x72,0x65,0x66,0x69,0x78,
  0x32,0x22,0x2f,0x3e,0xd,0xa,0x20,0x20,0x20,0x20,0x3c,0x71,0x72,0x65,0x73,0x6f,
  0x75,0x72,0x63,0x65,0x20,0x70,0x72,0x65,0x66,0x69,0x78,0x3d,0x22,0x2f,0x22,0x3e,
  0xd,0xa,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x3c,0x66,0x69,0x6c,0x65,0x3e,
  0x32,0x2e,0x71,0x72,0x63,0x3c,0x2f,0x66,0x69,0x6c,0x65,0x3e,0xd,0xa,0x20,0x20,
  0x20,0x20,0x3c,0x2f,0x71,0x72,0x65,0x73,0x6f,0x75,0x72,0x63,0x65,0x3e,0xd,0xa,
  0x3c,0x2f,0x52,0x43,0x43,0x3e,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // shead.qrc
  0x0,0x9,
  0xb,0x77,0xab,0x43,
  0x0,0x73,
  0x0,0x68,0x0,0x65,0x0,0x61,0x0,0x64,0x0,0x2e,0x0,0x71,0x0,0x72,0x0,0x63,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/shead.qrc
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x72,0xef,0x81,0x9c,0x8d,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_head)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_head)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_head)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_head)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x2, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_head)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_head)(); }
   } dummy;
}
