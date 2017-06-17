/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Downloads/Library-Test-branch2/Library-Test-branch/admin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Admin_t {
    QByteArrayData data[19];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Admin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Admin_t qt_meta_stringdata_Admin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Admin"
QT_MOC_LITERAL(1, 6, 6), // "closed"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(4, 38, 16), // "on_Agree_clicked"
QT_MOC_LITERAL(5, 55, 15), // "on_Deny_clicked"
QT_MOC_LITERAL(6, 71, 24), // "on_CartInfos_cellClicked"
QT_MOC_LITERAL(7, 96, 3), // "row"
QT_MOC_LITERAL(8, 100, 6), // "column"
QT_MOC_LITERAL(9, 107, 18), // "on_newCart_clicked"
QT_MOC_LITERAL(10, 126, 23), // "on_acceptedCart_clicked"
QT_MOC_LITERAL(11, 150, 22), // "on_lendingCart_clicked"
QT_MOC_LITERAL(12, 173, 19), // "on_doneCart_clicked"
QT_MOC_LITERAL(13, 193, 23), // "on_infringeCart_clicked"
QT_MOC_LITERAL(14, 217, 17), // "on_accept_clicked"
QT_MOC_LITERAL(15, 235, 15), // "on_send_clicked"
QT_MOC_LITERAL(16, 251, 15), // "on_done_clicked"
QT_MOC_LITERAL(17, 267, 19), // "on_infringe_clicked"
QT_MOC_LITERAL(18, 287, 21) // "on_name_returnPressed"

    },
    "Admin\0closed\0\0on_searchButton_clicked\0"
    "on_Agree_clicked\0on_Deny_clicked\0"
    "on_CartInfos_cellClicked\0row\0column\0"
    "on_newCart_clicked\0on_acceptedCart_clicked\0"
    "on_lendingCart_clicked\0on_doneCart_clicked\0"
    "on_infringeCart_clicked\0on_accept_clicked\0"
    "on_send_clicked\0on_done_clicked\0"
    "on_infringe_clicked\0on_name_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    2,   93,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Admin *_t = static_cast<Admin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->on_searchButton_clicked(); break;
        case 2: _t->on_Agree_clicked(); break;
        case 3: _t->on_Deny_clicked(); break;
        case 4: _t->on_CartInfos_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_newCart_clicked(); break;
        case 6: _t->on_acceptedCart_clicked(); break;
        case 7: _t->on_lendingCart_clicked(); break;
        case 8: _t->on_doneCart_clicked(); break;
        case 9: _t->on_infringeCart_clicked(); break;
        case 10: _t->on_accept_clicked(); break;
        case 11: _t->on_send_clicked(); break;
        case 12: _t->on_done_clicked(); break;
        case 13: _t->on_infringe_clicked(); break;
        case 14: _t->on_name_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Admin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Admin::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Admin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Admin.data,
      qt_meta_data_Admin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Admin.stringdata0))
        return static_cast<void*>(const_cast< Admin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Admin::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
