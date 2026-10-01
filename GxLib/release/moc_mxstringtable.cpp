/****************************************************************************
** Meta object code from reading C++ file 'mxstringtable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mxstringtable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mxstringtable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MxStringTableDelegate_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MxStringTableDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MxStringTableDelegate_t qt_meta_stringdata_MxStringTableDelegate = {
    {
QT_MOC_LITERAL(0, 0, 21) // "MxStringTableDelegate"

    },
    "MxStringTableDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MxStringTableDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MxStringTableDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MxStringTableDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_MxStringTableDelegate.data,
    qt_meta_data_MxStringTableDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MxStringTableDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MxStringTableDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MxStringTableDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int MxStringTableDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MxStringTableModel_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MxStringTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MxStringTableModel_t qt_meta_stringdata_MxStringTableModel = {
    {
QT_MOC_LITERAL(0, 0, 18) // "MxStringTableModel"

    },
    "MxStringTableModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MxStringTableModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void MxStringTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MxStringTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_MxStringTableModel.data,
    qt_meta_data_MxStringTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MxStringTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MxStringTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MxStringTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int MxStringTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MxStringTable_t {
    QByteArrayData data[13];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MxStringTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MxStringTable_t qt_meta_stringdata_MxStringTable = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MxStringTable"
QT_MOC_LITERAL(1, 14, 12), // "hHeaderEvent"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "col"
QT_MOC_LITERAL(4, 32, 8), // "rowEvent"
QT_MOC_LITERAL(5, 41, 3), // "row"
QT_MOC_LITERAL(6, 45, 4), // "mode"
QT_MOC_LITERAL(7, 50, 15), // "cellDataRequest"
QT_MOC_LITERAL(8, 66, 8), // "QString&"
QT_MOC_LITERAL(9, 75, 4), // "data"
QT_MOC_LITERAL(10, 80, 11), // "textChanged"
QT_MOC_LITERAL(11, 92, 14), // "hHeaderPressed"
QT_MOC_LITERAL(12, 107, 12) // "logicalIndex"

    },
    "MxStringTable\0hHeaderEvent\0\0col\0"
    "rowEvent\0row\0mode\0cellDataRequest\0"
    "QString&\0data\0textChanged\0hHeaderPressed\0"
    "logicalIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MxStringTable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,
       7,    3,   47,    2, 0x06 /* Public */,
      10,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,    5,    3,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void MxStringTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MxStringTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hHeaderEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->rowEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->cellDataRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->textChanged(); break;
        case 4: _t->hHeaderPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MxStringTable::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxStringTable::hHeaderEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MxStringTable::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxStringTable::rowEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MxStringTable::*)(int , int , QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxStringTable::cellDataRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MxStringTable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MxStringTable::textChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MxStringTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_MxStringTable.data,
    qt_meta_data_MxStringTable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MxStringTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MxStringTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MxStringTable.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int MxStringTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void MxStringTable::hHeaderEvent(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MxStringTable::rowEvent(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MxStringTable::cellDataRequest(int _t1, int _t2, QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MxStringTable::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
