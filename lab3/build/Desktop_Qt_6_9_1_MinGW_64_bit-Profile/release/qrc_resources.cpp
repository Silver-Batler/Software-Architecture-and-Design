/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.9.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#ifdef _MSC_VER
// disable informational message "function ... selected for automatic inline expansion"
#pragma warning (disable: 4711)
#endif

static const unsigned char qt_resource_data[] = {
  // refresh.png
  0x0,0x0,0x0,0x0,
  
  
};

static const unsigned char qt_resource_name[] = {
  // icons
  0x0,0x5,
  0x0,0x6f,0xa6,0x53,
  0x0,0x69,
  0x0,0x63,0x0,0x6f,0x0,0x6e,0x0,0x73,
    // refresh.png
  0x0,0xb,
  0xc,0x6a,0x2c,0x47,
  0x0,0x72,
  0x0,0x65,0x0,0x66,0x0,0x72,0x0,0x65,0x0,0x73,0x0,0x68,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
    // delete.png
  0x0,0xa,
  0xc,0xad,0xf,0x7,
  0x0,0x64,
  0x0,0x65,0x0,0x6c,0x0,0x65,0x0,0x74,0x0,0x65,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
    // add.png
  0x0,0x7,
  0x7,0xa7,0x57,0x87,
  0x0,0x61,
  0x0,0x64,0x0,0x64,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
    // edit.png
  0x0,0x8,
  0xb,0x7,0x5a,0x27,
  0x0,0x65,
  0x0,0x64,0x0,0x69,0x0,0x74,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/icons
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x4,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/icons/add.png
  0x0,0x0,0x0,0x46,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x97,0x47,0xbb,0x4b,0x6,
  // :/icons/edit.png
  0x0,0x0,0x0,0x5a,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x97,0x47,0xbb,0x4b,0xd,
  // :/icons/refresh.png
  0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x97,0x47,0xbb,0x4b,0x10,
  // :/icons/delete.png
  0x0,0x0,0x0,0x2c,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x97,0x47,0xbb,0x4b,0x9,

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

#if defined(QT_INLINE_NAMESPACE)
inline namespace QT_NAMESPACE {
#elif defined(QT_NAMESPACE)
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

#ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wexit-time-destructors"
#endif

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)(); }
   } dummy;
}

#ifdef __clang__
#   pragma clang diagnostic pop
#endif
