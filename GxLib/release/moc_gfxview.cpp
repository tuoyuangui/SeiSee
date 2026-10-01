/****************************************************************************
** Meta object code from reading C++ file 'gfxview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../gfxview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gfxview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GfxView_t {
    QByteArrayData data[13];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GfxView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GfxView_t qt_meta_stringdata_GfxView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "GfxView"
QT_MOC_LITERAL(1, 8, 10), // "OnPrevDraw"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "GfxView*"
QT_MOC_LITERAL(4, 29, 4), // "view"
QT_MOC_LITERAL(5, 34, 10), // "OnPostDraw"
QT_MOC_LITERAL(6, 45, 10), // "mouseEvent"
QT_MOC_LITERAL(7, 56, 12), // "QMouseEvent*"
QT_MOC_LITERAL(8, 69, 5), // "event"
QT_MOC_LITERAL(9, 75, 11), // "wheel_Event"
QT_MOC_LITERAL(10, 87, 12), // "QWheelEvent*"
QT_MOC_LITERAL(11, 100, 12), // "timeSetEvent"
QT_MOC_LITERAL(12, 113, 4) // "time"

    },
    "GfxView\0OnPrevDraw\0\0GfxView*\0view\0"
    "OnPostDraw\0mouseEvent\0QMouseEvent*\0"
    "event\0wheel_Event\0QWheelEvent*\0"
    "timeSetEvent\0time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GfxView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       9,    1,   48,    2, 0x06 /* Public */,
      11,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,    8,
    QMetaType::Void, QMetaType::Double,   12,

       0        // eod
};

void GfxView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GfxView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnPrevDraw((*reinterpret_cast< GfxView*(*)>(_a[1]))); break;
        case 1: _t->OnPostDraw((*reinterpret_cast< GfxView*(*)>(_a[1]))); break;
        case 2: _t->mouseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->wheel_Event((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 4: _t->timeSetEvent((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GfxView* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GfxView* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GfxView::*)(GfxView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GfxView::OnPrevDraw)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GfxView::*)(GfxView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GfxView::OnPostDraw)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GfxView::*)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GfxView::mouseEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GfxView::*)(QWheelEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GfxView::wheel_Event)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GfxView::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GfxView::timeSetEvent)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GfxView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GfxView.data,
    qt_meta_data_GfxView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GfxView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GfxView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GfxView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GfxView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GfxView::OnPrevDraw(GfxView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GfxView::OnPostDraw(GfxView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GfxView::mouseEvent(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GfxView::wheel_Event(QWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GfxView::timeSetEvent(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
