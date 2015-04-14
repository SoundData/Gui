/****************************************************************************
** Meta object code from reading C++ file 'main_screen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SoundData/main_screen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_screen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Main_screen_t {
    QByteArrayData data[16];
    char stringdata[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Main_screen_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Main_screen_t qt_meta_stringdata_Main_screen = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Main_screen"
QT_MOC_LITERAL(1, 12, 10), // "changeText"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "QString&"
QT_MOC_LITERAL(4, 33, 9), // "server_ip"
QT_MOC_LITERAL(5, 43, 8), // "steam_id"
QT_MOC_LITERAL(6, 52, 12), // "player_class"
QT_MOC_LITERAL(7, 65, 10), // "player_map"
QT_MOC_LITERAL(8, 76, 11), // "player_team"
QT_MOC_LITERAL(9, 88, 14), // "getDataBetween"
QT_MOC_LITERAL(10, 103, 5), // "begin"
QT_MOC_LITERAL(11, 109, 3), // "end"
QT_MOC_LITERAL(12, 113, 6), // "source"
QT_MOC_LITERAL(13, 120, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 142, 25), // "on_actionLogout_triggered"
QT_MOC_LITERAL(15, 168, 13) // "processOutput"

    },
    "Main_screen\0changeText\0\0QString&\0"
    "server_ip\0steam_id\0player_class\0"
    "player_map\0player_team\0getDataBetween\0"
    "begin\0end\0source\0on_pushButton_clicked\0"
    "on_actionLogout_triggered\0processOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main_screen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   39,    2, 0x0a /* Public */,
       9,    3,   50,    2, 0x08 /* Private */,
      13,    0,   57,    2, 0x08 /* Private */,
      14,    0,   58,    2, 0x08 /* Private */,
      15,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,    8,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 3,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Main_screen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Main_screen *_t = static_cast<Main_screen *>(_o);
        switch (_id) {
        case 0: _t->changeText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 1: { QString _r = _t->getDataBetween((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_actionLogout_triggered(); break;
        case 4: _t->processOutput(); break;
        default: ;
        }
    }
}

const QMetaObject Main_screen::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Main_screen.data,
      qt_meta_data_Main_screen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Main_screen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main_screen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Main_screen.stringdata))
        return static_cast<void*>(const_cast< Main_screen*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Main_screen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
