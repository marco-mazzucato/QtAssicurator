/****************************************************************************
** Meta object code from reading C++ file 'addcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ProgettoP2/controller/addcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addController_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addController_t qt_meta_stringdata_addController = {
    {
QT_MOC_LITERAL(0, 0, 13), // "addController"
QT_MOC_LITERAL(1, 14, 11), // "checkParams"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "buildAss"
QT_MOC_LITERAL(4, 36, 8), // "getScene"
QT_MOC_LITERAL(5, 45, 9) // "addScene*"

    },
    "addController\0checkParams\0\0buildAss\0"
    "getScene\0addScene*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,

       0        // eod
};

void addController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<addController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkParams(); break;
        case 1: _t->buildAss(); break;
        case 2: { addScene* _r = _t->getScene();
            if (_a[0]) *reinterpret_cast< addScene**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject addController::staticMetaObject = { {
    QMetaObject::SuperData::link<controller::staticMetaObject>(),
    qt_meta_stringdata_addController.data,
    qt_meta_data_addController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *addController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addController.stringdata0))
        return static_cast<void*>(this);
    return controller::qt_metacast(_clname);
}

int addController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = controller::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
