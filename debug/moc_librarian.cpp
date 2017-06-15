/****************************************************************************
** Meta object code from reading C++ file 'librarian.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../librarian.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarian.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_librarian_t {
    QByteArrayData data[17];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_librarian_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_librarian_t qt_meta_stringdata_librarian = {
    {
QT_MOC_LITERAL(0, 0, 9), // "librarian"
QT_MOC_LITERAL(1, 10, 6), // "closed"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 16), // "on_Agree_clicked"
QT_MOC_LITERAL(4, 35, 15), // "on_Deny_clicked"
QT_MOC_LITERAL(5, 51, 18), // "on_newCart_clicked"
QT_MOC_LITERAL(6, 70, 23), // "on_acceptedCart_clicked"
QT_MOC_LITERAL(7, 94, 22), // "on_lendingCart_clicked"
QT_MOC_LITERAL(8, 117, 19), // "on_doneCart_clicked"
QT_MOC_LITERAL(9, 137, 23), // "on_infringeCart_clicked"
QT_MOC_LITERAL(10, 161, 24), // "on_CartInfos_cellClicked"
QT_MOC_LITERAL(11, 186, 3), // "row"
QT_MOC_LITERAL(12, 190, 6), // "column"
QT_MOC_LITERAL(13, 197, 17), // "on_accept_clicked"
QT_MOC_LITERAL(14, 215, 15), // "on_send_clicked"
QT_MOC_LITERAL(15, 231, 15), // "on_done_clicked"
QT_MOC_LITERAL(16, 247, 19) // "on_infringe_clicked"

    },
    "librarian\0closed\0\0on_Agree_clicked\0"
    "on_Deny_clicked\0on_newCart_clicked\0"
    "on_acceptedCart_clicked\0on_lendingCart_clicked\0"
    "on_doneCart_clicked\0on_infringeCart_clicked\0"
    "on_CartInfos_cellClicked\0row\0column\0"
    "on_accept_clicked\0on_send_clicked\0"
    "on_done_clicked\0on_infringe_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_librarian[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    2,   87,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void librarian::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        librarian *_t = static_cast<librarian *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->on_Agree_clicked(); break;
        case 2: _t->on_Deny_clicked(); break;
        case 3: _t->on_newCart_clicked(); break;
        case 4: _t->on_acceptedCart_clicked(); break;
        case 5: _t->on_lendingCart_clicked(); break;
        case 6: _t->on_doneCart_clicked(); break;
        case 7: _t->on_infringeCart_clicked(); break;
        case 8: _t->on_CartInfos_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_accept_clicked(); break;
        case 10: _t->on_send_clicked(); break;
        case 11: _t->on_done_clicked(); break;
        case 12: _t->on_infringe_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (librarian::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&librarian::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject librarian::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_librarian.data,
      qt_meta_data_librarian,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *librarian::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *librarian::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_librarian.stringdata0))
        return static_cast<void*>(const_cast< librarian*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int librarian::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void librarian::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
