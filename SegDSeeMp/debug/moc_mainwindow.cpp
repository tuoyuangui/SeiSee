/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myEventCatcher_t {
    QByteArrayData data[6];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myEventCatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myEventCatcher_t qt_meta_stringdata_myEventCatcher = {
    {
QT_MOC_LITERAL(0, 0, 14), // "myEventCatcher"
QT_MOC_LITERAL(1, 15, 10), // "whellEvent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "tag"
QT_MOC_LITERAL(4, 31, 12), // "QWheelEvent*"
QT_MOC_LITERAL(5, 44, 5) // "event"

    },
    "myEventCatcher\0whellEvent\0\0tag\0"
    "QWheelEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myEventCatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void myEventCatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myEventCatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->whellEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (myEventCatcher::*)(int , QWheelEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myEventCatcher::whellEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject myEventCatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_myEventCatcher.data,
    qt_meta_data_myEventCatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *myEventCatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myEventCatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myEventCatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int myEventCatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void myEventCatcher::whellEvent(int _t1, QWheelEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[82];
    char stringdata0[1300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "sendSmp"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 3), // "ncs"
QT_MOC_LITERAL(4, 24, 3), // "nch"
QT_MOC_LITERAL(5, 28, 6), // "float*"
QT_MOC_LITERAL(6, 35, 3), // "smp"
QT_MOC_LITERAL(7, 39, 5), // "char&"
QT_MOC_LITERAL(8, 45, 2), // "rc"
QT_MOC_LITERAL(9, 48, 7), // "sclZoom"
QT_MOC_LITERAL(10, 56, 2), // "zx"
QT_MOC_LITERAL(11, 59, 2), // "zy"
QT_MOC_LITERAL(12, 62, 2), // "xc"
QT_MOC_LITERAL(13, 65, 2), // "yc"
QT_MOC_LITERAL(14, 68, 8), // "sclZoomV"
QT_MOC_LITERAL(15, 77, 8), // "sclZoomH"
QT_MOC_LITERAL(16, 86, 7), // "winZoom"
QT_MOC_LITERAL(17, 94, 1), // "r"
QT_MOC_LITERAL(18, 96, 11), // "FillChsGrid"
QT_MOC_LITERAL(19, 108, 10), // "closeEvent"
QT_MOC_LITERAL(20, 119, 12), // "QCloseEvent*"
QT_MOC_LITERAL(21, 132, 5), // "event"
QT_MOC_LITERAL(22, 138, 12), // "dirGridEvent"
QT_MOC_LITERAL(23, 151, 3), // "row"
QT_MOC_LITERAL(24, 155, 4), // "mode"
QT_MOC_LITERAL(25, 160, 12), // "hdrGridEvent"
QT_MOC_LITERAL(26, 173, 12), // "chsGridEvent"
QT_MOC_LITERAL(27, 186, 14), // "viewMouseEvent"
QT_MOC_LITERAL(28, 201, 12), // "QMouseEvent*"
QT_MOC_LITERAL(29, 214, 13), // "procParmEvent"
QT_MOC_LITERAL(30, 228, 12), // "edWhellEvent"
QT_MOC_LITERAL(31, 241, 3), // "tag"
QT_MOC_LITERAL(32, 245, 12), // "QWheelEvent*"
QT_MOC_LITERAL(33, 258, 8), // "ResetSrc"
QT_MOC_LITERAL(34, 267, 16), // "on_ckAgc_toggled"
QT_MOC_LITERAL(35, 284, 7), // "checked"
QT_MOC_LITERAL(36, 292, 17), // "on_ckFilt_toggled"
QT_MOC_LITERAL(37, 310, 17), // "on_ckNorm_toggled"
QT_MOC_LITERAL(38, 328, 19), // "on_ckWiggle_toggled"
QT_MOC_LITERAL(39, 348, 17), // "on_ckGray_toggled"
QT_MOC_LITERAL(40, 366, 18), // "on_ckColor_toggled"
QT_MOC_LITERAL(41, 385, 16), // "on_rbNon_toggled"
QT_MOC_LITERAL(42, 402, 16), // "on_rbPos_toggled"
QT_MOC_LITERAL(43, 419, 16), // "on_rbNeg_toggled"
QT_MOC_LITERAL(44, 436, 19), // "on_btnCkNon_pressed"
QT_MOC_LITERAL(45, 456, 19), // "on_btnCkAll_pressed"
QT_MOC_LITERAL(46, 476, 16), // "on_ckAll_toggled"
QT_MOC_LITERAL(47, 493, 16), // "on_ckSng_toggled"
QT_MOC_LITERAL(48, 510, 21), // "on_zoomAllBtn_pressed"
QT_MOC_LITERAL(49, 532, 22), // "on_zoomVallBtn_pressed"
QT_MOC_LITERAL(50, 555, 22), // "on_zoomHallBtn_pressed"
QT_MOC_LITERAL(51, 578, 23), // "on_edTr_editingFinished"
QT_MOC_LITERAL(52, 602, 23), // "on_edTm_editingFinished"
QT_MOC_LITERAL(53, 626, 23), // "on_edGn_editingFinished"
QT_MOC_LITERAL(54, 650, 21), // "on_zoomPreBtn_pressed"
QT_MOC_LITERAL(55, 672, 21), // "on_zoomOutBtn_pressed"
QT_MOC_LITERAL(56, 694, 20), // "on_zoomInBtn_pressed"
QT_MOC_LITERAL(57, 715, 20), // "on_selDirBtn_pressed"
QT_MOC_LITERAL(58, 736, 21), // "on_refreshBtn_pressed"
QT_MOC_LITERAL(59, 758, 22), // "on_procParmBtn_pressed"
QT_MOC_LITERAL(60, 781, 21), // "on_zoomWinBtn_pressed"
QT_MOC_LITERAL(61, 803, 33), // "on_actionOpen_Directory_trigg..."
QT_MOC_LITERAL(62, 837, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(63, 862, 24), // "on_TrSlider_valueChanged"
QT_MOC_LITERAL(64, 887, 1), // "p"
QT_MOC_LITERAL(65, 889, 26), // "on_TrSlider_sliderReleased"
QT_MOC_LITERAL(66, 916, 25), // "on_TrSlider_sliderPressed"
QT_MOC_LITERAL(67, 942, 25), // "on_TmSlider_sliderPressed"
QT_MOC_LITERAL(68, 968, 26), // "on_TmSlider_sliderReleased"
QT_MOC_LITERAL(69, 995, 24), // "on_TmSlider_valueChanged"
QT_MOC_LITERAL(70, 1020, 25), // "on_GnSlider_sliderPressed"
QT_MOC_LITERAL(71, 1046, 26), // "on_GnSlider_sliderReleased"
QT_MOC_LITERAL(72, 1073, 24), // "on_GnSlider_valueChanged"
QT_MOC_LITERAL(73, 1098, 19), // "on_aGainBtn_pressed"
QT_MOC_LITERAL(74, 1118, 25), // "on_splitter_splitterMoved"
QT_MOC_LITERAL(75, 1144, 3), // "pos"
QT_MOC_LITERAL(76, 1148, 5), // "index"
QT_MOC_LITERAL(77, 1154, 21), // "on_hdrsTopBtn_clicked"
QT_MOC_LITERAL(78, 1176, 21), // "on_hdrsBtmBtn_clicked"
QT_MOC_LITERAL(79, 1198, 30), // "on_actionUser_Manual_triggered"
QT_MOC_LITERAL(80, 1229, 29), // "on_actionParameters_triggered"
QT_MOC_LITERAL(81, 1259, 40) // "on_actionUser_s_Manual_Russia..."

    },
    "MainWindow\0sendSmp\0\0ncs\0nch\0float*\0"
    "smp\0char&\0rc\0sclZoom\0zx\0zy\0xc\0yc\0"
    "sclZoomV\0sclZoomH\0winZoom\0r\0FillChsGrid\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "dirGridEvent\0row\0mode\0hdrGridEvent\0"
    "chsGridEvent\0viewMouseEvent\0QMouseEvent*\0"
    "procParmEvent\0edWhellEvent\0tag\0"
    "QWheelEvent*\0ResetSrc\0on_ckAgc_toggled\0"
    "checked\0on_ckFilt_toggled\0on_ckNorm_toggled\0"
    "on_ckWiggle_toggled\0on_ckGray_toggled\0"
    "on_ckColor_toggled\0on_rbNon_toggled\0"
    "on_rbPos_toggled\0on_rbNeg_toggled\0"
    "on_btnCkNon_pressed\0on_btnCkAll_pressed\0"
    "on_ckAll_toggled\0on_ckSng_toggled\0"
    "on_zoomAllBtn_pressed\0on_zoomVallBtn_pressed\0"
    "on_zoomHallBtn_pressed\0on_edTr_editingFinished\0"
    "on_edTm_editingFinished\0on_edGn_editingFinished\0"
    "on_zoomPreBtn_pressed\0on_zoomOutBtn_pressed\0"
    "on_zoomInBtn_pressed\0on_selDirBtn_pressed\0"
    "on_refreshBtn_pressed\0on_procParmBtn_pressed\0"
    "on_zoomWinBtn_pressed\0"
    "on_actionOpen_Directory_triggered\0"
    "on_actionAbout_triggered\0"
    "on_TrSlider_valueChanged\0p\0"
    "on_TrSlider_sliderReleased\0"
    "on_TrSlider_sliderPressed\0"
    "on_TmSlider_sliderPressed\0"
    "on_TmSlider_sliderReleased\0"
    "on_TmSlider_valueChanged\0"
    "on_GnSlider_sliderPressed\0"
    "on_GnSlider_sliderReleased\0"
    "on_GnSlider_valueChanged\0on_aGainBtn_pressed\0"
    "on_splitter_splitterMoved\0pos\0index\0"
    "on_hdrsTopBtn_clicked\0on_hdrsBtmBtn_clicked\0"
    "on_actionUser_Manual_triggered\0"
    "on_actionParameters_triggered\0"
    "on_actionUser_s_Manual_Russian_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,  304,    2, 0x0a /* Public */,
       9,    4,  313,    2, 0x0a /* Public */,
      14,    4,  322,    2, 0x0a /* Public */,
      15,    4,  331,    2, 0x0a /* Public */,
      16,    1,  340,    2, 0x0a /* Public */,
      18,    0,  343,    2, 0x0a /* Public */,
      19,    1,  344,    2, 0x0a /* Public */,
      22,    2,  347,    2, 0x08 /* Private */,
      25,    2,  352,    2, 0x08 /* Private */,
      26,    2,  357,    2, 0x08 /* Private */,
      27,    1,  362,    2, 0x08 /* Private */,
      29,    0,  365,    2, 0x08 /* Private */,
      30,    2,  366,    2, 0x08 /* Private */,
      33,    0,  371,    2, 0x08 /* Private */,
      34,    1,  372,    2, 0x08 /* Private */,
      36,    1,  375,    2, 0x08 /* Private */,
      37,    1,  378,    2, 0x08 /* Private */,
      38,    1,  381,    2, 0x08 /* Private */,
      39,    1,  384,    2, 0x08 /* Private */,
      40,    1,  387,    2, 0x08 /* Private */,
      41,    1,  390,    2, 0x08 /* Private */,
      42,    1,  393,    2, 0x08 /* Private */,
      43,    1,  396,    2, 0x08 /* Private */,
      44,    0,  399,    2, 0x08 /* Private */,
      45,    0,  400,    2, 0x08 /* Private */,
      46,    1,  401,    2, 0x08 /* Private */,
      47,    1,  404,    2, 0x08 /* Private */,
      48,    0,  407,    2, 0x08 /* Private */,
      49,    0,  408,    2, 0x08 /* Private */,
      50,    0,  409,    2, 0x08 /* Private */,
      51,    0,  410,    2, 0x08 /* Private */,
      52,    0,  411,    2, 0x08 /* Private */,
      53,    0,  412,    2, 0x08 /* Private */,
      54,    0,  413,    2, 0x08 /* Private */,
      55,    0,  414,    2, 0x08 /* Private */,
      56,    0,  415,    2, 0x08 /* Private */,
      57,    0,  416,    2, 0x08 /* Private */,
      58,    0,  417,    2, 0x08 /* Private */,
      59,    0,  418,    2, 0x08 /* Private */,
      60,    0,  419,    2, 0x08 /* Private */,
      61,    0,  420,    2, 0x08 /* Private */,
      62,    0,  421,    2, 0x08 /* Private */,
      63,    1,  422,    2, 0x08 /* Private */,
      65,    0,  425,    2, 0x08 /* Private */,
      66,    0,  426,    2, 0x08 /* Private */,
      67,    0,  427,    2, 0x08 /* Private */,
      68,    0,  428,    2, 0x08 /* Private */,
      69,    1,  429,    2, 0x08 /* Private */,
      70,    0,  432,    2, 0x08 /* Private */,
      71,    0,  433,    2, 0x08 /* Private */,
      72,    1,  434,    2, 0x08 /* Private */,
      73,    0,  437,    2, 0x08 /* Private */,
      74,    2,  438,    2, 0x08 /* Private */,
      77,    0,  443,    2, 0x08 /* Private */,
      78,    0,  444,    2, 0x08 /* Private */,
      79,    0,  445,    2, 0x08 /* Private */,
      80,    0,  446,    2, 0x08 /* Private */,
      81,    0,  447,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5, 0x80000000 | 7,    3,    4,    6,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::QRect,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   24,
    QMetaType::Void, 0x80000000 | 28,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 32,   31,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   75,   76,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendSmp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float*(*)>(_a[3])),(*reinterpret_cast< char(*)>(_a[4]))); break;
        case 1: _t->sclZoom((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->sclZoomV((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->sclZoomH((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->winZoom((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 5: _t->FillChsGrid(); break;
        case 6: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 7: _t->dirGridEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->hdrGridEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->chsGridEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->viewMouseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->procParmEvent(); break;
        case 12: _t->edWhellEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
        case 13: _t->ResetSrc(); break;
        case 14: _t->on_ckAgc_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_ckFilt_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_ckNorm_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_ckWiggle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->on_ckGray_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->on_ckColor_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->on_rbNon_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->on_rbPos_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->on_rbNeg_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_btnCkNon_pressed(); break;
        case 24: _t->on_btnCkAll_pressed(); break;
        case 25: _t->on_ckAll_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_ckSng_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->on_zoomAllBtn_pressed(); break;
        case 28: _t->on_zoomVallBtn_pressed(); break;
        case 29: _t->on_zoomHallBtn_pressed(); break;
        case 30: _t->on_edTr_editingFinished(); break;
        case 31: _t->on_edTm_editingFinished(); break;
        case 32: _t->on_edGn_editingFinished(); break;
        case 33: _t->on_zoomPreBtn_pressed(); break;
        case 34: _t->on_zoomOutBtn_pressed(); break;
        case 35: _t->on_zoomInBtn_pressed(); break;
        case 36: _t->on_selDirBtn_pressed(); break;
        case 37: _t->on_refreshBtn_pressed(); break;
        case 38: _t->on_procParmBtn_pressed(); break;
        case 39: _t->on_zoomWinBtn_pressed(); break;
        case 40: _t->on_actionOpen_Directory_triggered(); break;
        case 41: _t->on_actionAbout_triggered(); break;
        case 42: _t->on_TrSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_TrSlider_sliderReleased(); break;
        case 44: _t->on_TrSlider_sliderPressed(); break;
        case 45: _t->on_TmSlider_sliderPressed(); break;
        case 46: _t->on_TmSlider_sliderReleased(); break;
        case 47: _t->on_TmSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_GnSlider_sliderPressed(); break;
        case 49: _t->on_GnSlider_sliderReleased(); break;
        case 50: _t->on_GnSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->on_aGainBtn_pressed(); break;
        case 52: _t->on_splitter_splitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->on_hdrsTopBtn_clicked(); break;
        case 54: _t->on_hdrsBtmBtn_clicked(); break;
        case 55: _t->on_actionUser_Manual_triggered(); break;
        case 56: _t->on_actionParameters_triggered(); break;
        case 57: _t->on_actionUser_s_Manual_Russian_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 58;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
