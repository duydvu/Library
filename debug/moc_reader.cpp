/****************************************************************************
** Meta object code from reading C++ file 'reader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../reader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_reader_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_reader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_reader_t qt_meta_stringdata_reader = {
    {
QT_MOC_LITERAL(0, 0, 6), // "reader"
QT_MOC_LITERAL(1, 7, 6), // "closed"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(4, 39, 23), // "on_changeButton_clicked"
QT_MOC_LITERAL(5, 63, 24), // "on_bookTable_cellClicked"
QT_MOC_LITERAL(6, 88, 3), // "row"
QT_MOC_LITERAL(7, 92, 6), // "column"
QT_MOC_LITERAL(8, 99, 19), // "on_name_textChanged"
QT_MOC_LITERAL(9, 119, 4), // "arg1"
QT_MOC_LITERAL(10, 124, 21), // "on_bookBorrow_clicked"
QT_MOC_LITERAL(11, 146, 15), // "on_send_clicked"
QT_MOC_LITERAL(12, 162, 17) // "on_cancel_clicked"

    },
    "reader\0closed\0\0on_searchButton_clicked\0"
    "on_changeButton_clicked\0"
    "on_bookTable_cellClicked\0row\0column\0"
    "on_name_textChanged\0arg1\0on_bookBorrow_clicked\0"
    "on_send_clicked\0on_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_reader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    2,   57,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void reader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        reader *_t = static_cast<reader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->on_searchButton_clicked(); break;
        case 2: _t->on_changeButton_clicked(); break;
        case 3: _t->on_bookTable_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_name_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_bookBorrow_clicked(); break;
        case 6: _t->on_send_clicked(); break;
        case 7: _t->on_cancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (reader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&reader::closed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject reader::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_reader.data,
      qt_meta_data_reader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *reader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *reader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_reader.stringdata0))
        return static_cast<void*>(const_cast< reader*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int reader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void reader::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
