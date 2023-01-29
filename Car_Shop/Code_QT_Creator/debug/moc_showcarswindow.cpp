/****************************************************************************
** Meta object code from reading C++ file 'showcarswindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../showcarswindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'showcarswindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShowCarsWindow_t {
    const uint offsetsAndSize[24];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ShowCarsWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ShowCarsWindow_t qt_meta_stringdata_ShowCarsWindow = {
    {
QT_MOC_LITERAL(0, 14), // "ShowCarsWindow"
QT_MOC_LITERAL(15, 16), // "on_menu_released"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 9), // "showTable"
QT_MOC_LITERAL(43, 24), // "on_filtroModelo_released"
QT_MOC_LITERAL(68, 21), // "on_filtroAno_released"
QT_MOC_LITERAL(90, 23), // "on_filtroMarca_released"
QT_MOC_LITERAL(114, 21), // "on_available_released"
QT_MOC_LITERAL(136, 31), // "on_show_table_cellDoubleClicked"
QT_MOC_LITERAL(168, 3), // "row"
QT_MOC_LITERAL(172, 6), // "column"
QT_MOC_LITERAL(179, 25) // "on_show_table_cellChanged"

    },
    "ShowCarsWindow\0on_menu_released\0\0"
    "showTable\0on_filtroModelo_released\0"
    "on_filtroAno_released\0on_filtroMarca_released\0"
    "on_available_released\0"
    "on_show_table_cellDoubleClicked\0row\0"
    "column\0on_show_table_cellChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShowCarsWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    2,   68,    2, 0x08,    7 /* Private */,
      11,    2,   73,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

       0        // eod
};

void ShowCarsWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShowCarsWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_menu_released(); break;
        case 1: _t->showTable(); break;
        case 2: _t->on_filtroModelo_released(); break;
        case 3: _t->on_filtroAno_released(); break;
        case 4: _t->on_filtroMarca_released(); break;
        case 5: _t->on_available_released(); break;
        case 6: _t->on_show_table_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_show_table_cellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ShowCarsWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ShowCarsWindow.offsetsAndSize,
    qt_meta_data_ShowCarsWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ShowCarsWindow_t
, QtPrivate::TypeAndForceComplete<ShowCarsWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *ShowCarsWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShowCarsWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShowCarsWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ShowCarsWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
