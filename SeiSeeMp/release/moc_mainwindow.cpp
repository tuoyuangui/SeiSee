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
struct qt_meta_stringdata_myTextEditEventCatcher_t {
    QByteArrayData data[6];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myTextEditEventCatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myTextEditEventCatcher_t qt_meta_stringdata_myTextEditEventCatcher = {
    {
QT_MOC_LITERAL(0, 0, 22), // "myTextEditEventCatcher"
QT_MOC_LITERAL(1, 23, 8), // "keyEvent"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "tag"
QT_MOC_LITERAL(4, 37, 10), // "QKeyEvent*"
QT_MOC_LITERAL(5, 48, 5) // "event"

    },
    "myTextEditEventCatcher\0keyEvent\0\0tag\0"
    "QKeyEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myTextEditEventCatcher[] = {

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

void myTextEditEventCatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myTextEditEventCatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (myTextEditEventCatcher::*)(int , QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&myTextEditEventCatcher::keyEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject myTextEditEventCatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_myTextEditEventCatcher.data,
    qt_meta_data_myTextEditEventCatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *myTextEditEventCatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myTextEditEventCatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myTextEditEventCatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int myTextEditEventCatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void myTextEditEventCatcher::keyEvent(int _t1, QKeyEvent * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[153];
    char stringdata0[2533];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "stop_dirs"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "stop_find"
QT_MOC_LITERAL(4, 32, 9), // "stop_expu"
QT_MOC_LITERAL(5, 42, 9), // "stop_dlys"
QT_MOC_LITERAL(6, 52, 8), // "execProc"
QT_MOC_LITERAL(7, 61, 9), // "SeisFile*"
QT_MOC_LITERAL(8, 71, 2), // "sf"
QT_MOC_LITERAL(9, 74, 2), // "ns"
QT_MOC_LITERAL(10, 77, 2), // "si"
QT_MOC_LITERAL(11, 80, 6), // "float*"
QT_MOC_LITERAL(12, 87, 3), // "smp"
QT_MOC_LITERAL(13, 91, 7), // "sclZoom"
QT_MOC_LITERAL(14, 99, 2), // "zx"
QT_MOC_LITERAL(15, 102, 2), // "zy"
QT_MOC_LITERAL(16, 105, 2), // "xc"
QT_MOC_LITERAL(17, 108, 2), // "yc"
QT_MOC_LITERAL(18, 111, 8), // "sclZoomV"
QT_MOC_LITERAL(19, 120, 8), // "sclZoomH"
QT_MOC_LITERAL(20, 129, 7), // "winZoom"
QT_MOC_LITERAL(21, 137, 1), // "r"
QT_MOC_LITERAL(22, 139, 22), // "binHdrGridChangedEvent"
QT_MOC_LITERAL(23, 162, 27), // "syncHorizontalAxisScrollBar"
QT_MOC_LITERAL(24, 190, 7), // "minimum"
QT_MOC_LITERAL(25, 198, 7), // "maximum"
QT_MOC_LITERAL(26, 206, 25), // "syncVerticalAxisScrollBar"
QT_MOC_LITERAL(27, 232, 17), // "fitAxesToViewport"
QT_MOC_LITERAL(28, 250, 12), // "dirGridEvent"
QT_MOC_LITERAL(29, 263, 3), // "row"
QT_MOC_LITERAL(30, 267, 4), // "mode"
QT_MOC_LITERAL(31, 272, 18), // "hdrListDtGridEvent"
QT_MOC_LITERAL(32, 291, 24), // "hdrListDtGridHeaderEvent"
QT_MOC_LITERAL(33, 316, 3), // "col"
QT_MOC_LITERAL(34, 320, 24), // "hdrElstDtGridHeaderEvent"
QT_MOC_LITERAL(35, 345, 14), // "hdrListCkEvent"
QT_MOC_LITERAL(36, 360, 14), // "hdrElstCkEvent"
QT_MOC_LITERAL(37, 375, 14), // "viewMouseEvent"
QT_MOC_LITERAL(38, 390, 12), // "QMouseEvent*"
QT_MOC_LITERAL(39, 403, 5), // "event"
QT_MOC_LITERAL(40, 409, 13), // "procParmEvent"
QT_MOC_LITERAL(41, 423, 12), // "axesDlgEvent"
QT_MOC_LITERAL(42, 436, 12), // "hdreDlgEvent"
QT_MOC_LITERAL(43, 449, 22), // "hdrListDtGridDataEvent"
QT_MOC_LITERAL(44, 472, 1), // "c"
QT_MOC_LITERAL(45, 474, 8), // "QString&"
QT_MOC_LITERAL(46, 483, 1), // "v"
QT_MOC_LITERAL(47, 485, 22), // "hdrElstDtGridDataEvent"
QT_MOC_LITERAL(48, 508, 15), // "txtEditKeyEvent"
QT_MOC_LITERAL(49, 524, 3), // "tag"
QT_MOC_LITERAL(50, 528, 10), // "QKeyEvent*"
QT_MOC_LITERAL(51, 539, 14), // "txtEditChanged"
QT_MOC_LITERAL(52, 554, 12), // "edWhellEvent"
QT_MOC_LITERAL(53, 567, 12), // "QWheelEvent*"
QT_MOC_LITERAL(54, 580, 10), // "closeEvent"
QT_MOC_LITERAL(55, 591, 12), // "QCloseEvent*"
QT_MOC_LITERAL(56, 604, 8), // "ResetSrc"
QT_MOC_LITERAL(57, 613, 16), // "on_ckAgc_toggled"
QT_MOC_LITERAL(58, 630, 7), // "checked"
QT_MOC_LITERAL(59, 638, 17), // "on_ckFilt_toggled"
QT_MOC_LITERAL(60, 656, 17), // "on_ckNorm_toggled"
QT_MOC_LITERAL(61, 674, 19), // "on_ckWiggle_toggled"
QT_MOC_LITERAL(62, 694, 17), // "on_ckGray_toggled"
QT_MOC_LITERAL(63, 712, 18), // "on_ckColor_toggled"
QT_MOC_LITERAL(64, 731, 16), // "on_rbNon_toggled"
QT_MOC_LITERAL(65, 748, 16), // "on_rbPos_toggled"
QT_MOC_LITERAL(66, 765, 16), // "on_rbNeg_toggled"
QT_MOC_LITERAL(67, 782, 21), // "on_zoomAllBtn_pressed"
QT_MOC_LITERAL(68, 804, 22), // "on_zoomVallBtn_pressed"
QT_MOC_LITERAL(69, 827, 22), // "on_zoomHallBtn_pressed"
QT_MOC_LITERAL(70, 850, 23), // "on_edTr_editingFinished"
QT_MOC_LITERAL(71, 874, 23), // "on_edTm_editingFinished"
QT_MOC_LITERAL(72, 898, 23), // "on_edGn_editingFinished"
QT_MOC_LITERAL(73, 922, 21), // "on_zoomPreBtn_pressed"
QT_MOC_LITERAL(74, 944, 21), // "on_zoomOutBtn_pressed"
QT_MOC_LITERAL(75, 966, 20), // "on_zoomInBtn_pressed"
QT_MOC_LITERAL(76, 987, 20), // "on_selDirBtn_pressed"
QT_MOC_LITERAL(77, 1008, 21), // "on_refreshBtn_pressed"
QT_MOC_LITERAL(78, 1030, 22), // "on_procParmBtn_pressed"
QT_MOC_LITERAL(79, 1053, 21), // "on_zoomWinBtn_pressed"
QT_MOC_LITERAL(80, 1075, 33), // "on_actionOpen_Directory_trigg..."
QT_MOC_LITERAL(81, 1109, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(82, 1134, 24), // "on_TrSlider_valueChanged"
QT_MOC_LITERAL(83, 1159, 1), // "p"
QT_MOC_LITERAL(84, 1161, 26), // "on_TrSlider_sliderReleased"
QT_MOC_LITERAL(85, 1188, 25), // "on_TrSlider_sliderPressed"
QT_MOC_LITERAL(86, 1214, 25), // "on_TmSlider_sliderPressed"
QT_MOC_LITERAL(87, 1240, 26), // "on_TmSlider_sliderReleased"
QT_MOC_LITERAL(88, 1267, 24), // "on_TmSlider_valueChanged"
QT_MOC_LITERAL(89, 1292, 25), // "on_GnSlider_sliderPressed"
QT_MOC_LITERAL(90, 1318, 26), // "on_GnSlider_sliderReleased"
QT_MOC_LITERAL(91, 1345, 24), // "on_GnSlider_valueChanged"
QT_MOC_LITERAL(92, 1370, 35), // "on_TxtHdrEdit_cursorPositionC..."
QT_MOC_LITERAL(93, 1406, 18), // "on_axisBtn_pressed"
QT_MOC_LITERAL(94, 1425, 29), // "on_actionAxes_Setup_triggered"
QT_MOC_LITERAL(95, 1455, 29), // "on_actionParameters_triggered"
QT_MOC_LITERAL(96, 1485, 32), // "on_actionHeader_Editor_triggered"
QT_MOC_LITERAL(97, 1518, 19), // "on_btnEdHdr_clicked"
QT_MOC_LITERAL(98, 1538, 19), // "on_btnTxtRd_clicked"
QT_MOC_LITERAL(99, 1558, 45), // "on_actionLoad_Text_Header_fro..."
QT_MOC_LITERAL(100, 1604, 45), // "on_actionExport_Text_Header_t..."
QT_MOC_LITERAL(101, 1650, 20), // "on_btnTxtRdx_clicked"
QT_MOC_LITERAL(102, 1671, 20), // "on_btnTxtRst_clicked"
QT_MOC_LITERAL(103, 1692, 20), // "on_btnTxtUpd_clicked"
QT_MOC_LITERAL(104, 1713, 17), // "on_ckTrEd_toggled"
QT_MOC_LITERAL(105, 1731, 20), // "on_btnBinRst_clicked"
QT_MOC_LITERAL(106, 1752, 20), // "on_btnBinUpd_clicked"
QT_MOC_LITERAL(107, 1773, 25), // "on_InfoTab_currentChanged"
QT_MOC_LITERAL(108, 1799, 5), // "index"
QT_MOC_LITERAL(109, 1805, 20), // "on_btnLastTr_clicked"
QT_MOC_LITERAL(110, 1826, 21), // "on_btnFirstTr_clicked"
QT_MOC_LITERAL(111, 1848, 18), // "on_btnSbin_clicked"
QT_MOC_LITERAL(112, 1867, 25), // "on_cbSval_editTextChanged"
QT_MOC_LITERAL(113, 1893, 4), // "arg1"
QT_MOC_LITERAL(114, 1898, 29), // "on_cbSidx_currentIndexChanged"
QT_MOC_LITERAL(115, 1928, 5), // "x_dir"
QT_MOC_LITERAL(116, 1934, 7), // "DirList"
QT_MOC_LITERAL(117, 1942, 5), // "dlist"
QT_MOC_LITERAL(118, 1948, 7), // "x_progr"
QT_MOC_LITERAL(119, 1956, 4), // "pers"
QT_MOC_LITERAL(120, 1961, 4), // "mess"
QT_MOC_LITERAL(121, 1966, 5), // "x_fin"
QT_MOC_LITERAL(122, 1972, 7), // "x_fin_e"
QT_MOC_LITERAL(123, 1980, 6), // "x_find"
QT_MOC_LITERAL(124, 1987, 5), // "tridx"
QT_MOC_LITERAL(125, 1993, 10), // "x_find_fin"
QT_MOC_LITERAL(126, 2004, 7), // "x_delay"
QT_MOC_LITERAL(127, 2012, 4), // "dmin"
QT_MOC_LITERAL(128, 2017, 4), // "dmax"
QT_MOC_LITERAL(129, 2022, 18), // "on_btnSfwd_clicked"
QT_MOC_LITERAL(130, 2041, 18), // "on_btnSbkw_clicked"
QT_MOC_LITERAL(131, 2060, 19), // "on_btnSstop_clicked"
QT_MOC_LITERAL(132, 2080, 20), // "on_btnUpdTrh_clicked"
QT_MOC_LITERAL(133, 2101, 26), // "on_cbEnval_editTextChanged"
QT_MOC_LITERAL(134, 2128, 19), // "on_btnCkNon_clicked"
QT_MOC_LITERAL(135, 2148, 19), // "on_btnCkAll_clicked"
QT_MOC_LITERAL(136, 2168, 20), // "on_btnCkNonE_clicked"
QT_MOC_LITERAL(137, 2189, 21), // "on_edExpr_textChanged"
QT_MOC_LITERAL(138, 2211, 18), // "on_btnNexp_clicked"
QT_MOC_LITERAL(139, 2230, 18), // "on_btnLexp_clicked"
QT_MOC_LITERAL(140, 2249, 18), // "on_btnHexp_clicked"
QT_MOC_LITERAL(141, 2268, 20), // "on_btnClrExp_clicked"
QT_MOC_LITERAL(142, 2289, 18), // "on_btnUpdE_clicked"
QT_MOC_LITERAL(143, 2308, 18), // "on_btnUndE_clicked"
QT_MOC_LITERAL(144, 2327, 26), // "on_actionSave_As_triggered"
QT_MOC_LITERAL(145, 2354, 22), // "on_btnLastTr_2_clicked"
QT_MOC_LITERAL(146, 2377, 23), // "on_btnFirstTr_2_clicked"
QT_MOC_LITERAL(147, 2401, 22), // "on_autoGainBtn_clicked"
QT_MOC_LITERAL(148, 2424, 20), // "on_rbDirNorm_toggled"
QT_MOC_LITERAL(149, 2445, 19), // "on_rbDirRev_toggled"
QT_MOC_LITERAL(150, 2465, 21), // "on_ckTimLines_toggled"
QT_MOC_LITERAL(151, 2487, 28), // "on_actionOpen_File_triggered"
QT_MOC_LITERAL(152, 2516, 16) // "on_ckDly_toggled"

    },
    "MainWindow\0stop_dirs\0\0stop_find\0"
    "stop_expu\0stop_dlys\0execProc\0SeisFile*\0"
    "sf\0ns\0si\0float*\0smp\0sclZoom\0zx\0zy\0xc\0"
    "yc\0sclZoomV\0sclZoomH\0winZoom\0r\0"
    "binHdrGridChangedEvent\0"
    "syncHorizontalAxisScrollBar\0minimum\0"
    "maximum\0syncVerticalAxisScrollBar\0"
    "fitAxesToViewport\0dirGridEvent\0row\0"
    "mode\0hdrListDtGridEvent\0"
    "hdrListDtGridHeaderEvent\0col\0"
    "hdrElstDtGridHeaderEvent\0hdrListCkEvent\0"
    "hdrElstCkEvent\0viewMouseEvent\0"
    "QMouseEvent*\0event\0procParmEvent\0"
    "axesDlgEvent\0hdreDlgEvent\0"
    "hdrListDtGridDataEvent\0c\0QString&\0v\0"
    "hdrElstDtGridDataEvent\0txtEditKeyEvent\0"
    "tag\0QKeyEvent*\0txtEditChanged\0"
    "edWhellEvent\0QWheelEvent*\0closeEvent\0"
    "QCloseEvent*\0ResetSrc\0on_ckAgc_toggled\0"
    "checked\0on_ckFilt_toggled\0on_ckNorm_toggled\0"
    "on_ckWiggle_toggled\0on_ckGray_toggled\0"
    "on_ckColor_toggled\0on_rbNon_toggled\0"
    "on_rbPos_toggled\0on_rbNeg_toggled\0"
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
    "on_GnSlider_valueChanged\0"
    "on_TxtHdrEdit_cursorPositionChanged\0"
    "on_axisBtn_pressed\0on_actionAxes_Setup_triggered\0"
    "on_actionParameters_triggered\0"
    "on_actionHeader_Editor_triggered\0"
    "on_btnEdHdr_clicked\0on_btnTxtRd_clicked\0"
    "on_actionLoad_Text_Header_from_File_triggered\0"
    "on_actionExport_Text_Header_to_File_triggered\0"
    "on_btnTxtRdx_clicked\0on_btnTxtRst_clicked\0"
    "on_btnTxtUpd_clicked\0on_ckTrEd_toggled\0"
    "on_btnBinRst_clicked\0on_btnBinUpd_clicked\0"
    "on_InfoTab_currentChanged\0index\0"
    "on_btnLastTr_clicked\0on_btnFirstTr_clicked\0"
    "on_btnSbin_clicked\0on_cbSval_editTextChanged\0"
    "arg1\0on_cbSidx_currentIndexChanged\0"
    "x_dir\0DirList\0dlist\0x_progr\0pers\0mess\0"
    "x_fin\0x_fin_e\0x_find\0tridx\0x_find_fin\0"
    "x_delay\0dmin\0dmax\0on_btnSfwd_clicked\0"
    "on_btnSbkw_clicked\0on_btnSstop_clicked\0"
    "on_btnUpdTrh_clicked\0on_cbEnval_editTextChanged\0"
    "on_btnCkNon_clicked\0on_btnCkAll_clicked\0"
    "on_btnCkNonE_clicked\0on_edExpr_textChanged\0"
    "on_btnNexp_clicked\0on_btnLexp_clicked\0"
    "on_btnHexp_clicked\0on_btnClrExp_clicked\0"
    "on_btnUpdE_clicked\0on_btnUndE_clicked\0"
    "on_actionSave_As_triggered\0"
    "on_btnLastTr_2_clicked\0on_btnFirstTr_2_clicked\0"
    "on_autoGainBtn_clicked\0on_rbDirNorm_toggled\0"
    "on_rbDirRev_toggled\0on_ckTimLines_toggled\0"
    "on_actionOpen_File_triggered\0"
    "on_ckDly_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     115,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  589,    2, 0x06 /* Public */,
       3,    0,  590,    2, 0x06 /* Public */,
       4,    0,  591,    2, 0x06 /* Public */,
       5,    0,  592,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    4,  593,    2, 0x0a /* Public */,
      13,    4,  602,    2, 0x0a /* Public */,
      18,    4,  611,    2, 0x0a /* Public */,
      19,    4,  620,    2, 0x0a /* Public */,
      20,    1,  629,    2, 0x0a /* Public */,
      22,    0,  632,    2, 0x08 /* Private */,
      23,    2,  633,    2, 0x08 /* Private */,
      26,    2,  638,    2, 0x08 /* Private */,
      27,    0,  643,    2, 0x08 /* Private */,
      28,    2,  644,    2, 0x08 /* Private */,
      31,    2,  649,    2, 0x08 /* Private */,
      32,    1,  654,    2, 0x08 /* Private */,
      34,    1,  657,    2, 0x08 /* Private */,
      35,    2,  660,    2, 0x08 /* Private */,
      36,    2,  665,    2, 0x08 /* Private */,
      37,    1,  670,    2, 0x08 /* Private */,
      40,    0,  673,    2, 0x08 /* Private */,
      41,    0,  674,    2, 0x08 /* Private */,
      42,    0,  675,    2, 0x08 /* Private */,
      43,    3,  676,    2, 0x08 /* Private */,
      47,    3,  683,    2, 0x08 /* Private */,
      48,    2,  690,    2, 0x08 /* Private */,
      51,    0,  695,    2, 0x08 /* Private */,
      52,    2,  696,    2, 0x08 /* Private */,
      54,    1,  701,    2, 0x08 /* Private */,
      56,    0,  704,    2, 0x08 /* Private */,
      57,    1,  705,    2, 0x08 /* Private */,
      59,    1,  708,    2, 0x08 /* Private */,
      60,    1,  711,    2, 0x08 /* Private */,
      61,    1,  714,    2, 0x08 /* Private */,
      62,    1,  717,    2, 0x08 /* Private */,
      63,    1,  720,    2, 0x08 /* Private */,
      64,    1,  723,    2, 0x08 /* Private */,
      65,    1,  726,    2, 0x08 /* Private */,
      66,    1,  729,    2, 0x08 /* Private */,
      67,    0,  732,    2, 0x08 /* Private */,
      68,    0,  733,    2, 0x08 /* Private */,
      69,    0,  734,    2, 0x08 /* Private */,
      70,    0,  735,    2, 0x08 /* Private */,
      71,    0,  736,    2, 0x08 /* Private */,
      72,    0,  737,    2, 0x08 /* Private */,
      73,    0,  738,    2, 0x08 /* Private */,
      74,    0,  739,    2, 0x08 /* Private */,
      75,    0,  740,    2, 0x08 /* Private */,
      76,    0,  741,    2, 0x08 /* Private */,
      77,    0,  742,    2, 0x08 /* Private */,
      78,    0,  743,    2, 0x08 /* Private */,
      79,    0,  744,    2, 0x08 /* Private */,
      80,    0,  745,    2, 0x08 /* Private */,
      81,    0,  746,    2, 0x08 /* Private */,
      82,    1,  747,    2, 0x08 /* Private */,
      84,    0,  750,    2, 0x08 /* Private */,
      85,    0,  751,    2, 0x08 /* Private */,
      86,    0,  752,    2, 0x08 /* Private */,
      87,    0,  753,    2, 0x08 /* Private */,
      88,    1,  754,    2, 0x08 /* Private */,
      89,    0,  757,    2, 0x08 /* Private */,
      90,    0,  758,    2, 0x08 /* Private */,
      91,    1,  759,    2, 0x08 /* Private */,
      92,    0,  762,    2, 0x08 /* Private */,
      93,    0,  763,    2, 0x08 /* Private */,
      94,    0,  764,    2, 0x08 /* Private */,
      95,    0,  765,    2, 0x08 /* Private */,
      96,    0,  766,    2, 0x08 /* Private */,
      97,    0,  767,    2, 0x08 /* Private */,
      98,    0,  768,    2, 0x08 /* Private */,
      99,    0,  769,    2, 0x08 /* Private */,
     100,    0,  770,    2, 0x08 /* Private */,
     101,    0,  771,    2, 0x08 /* Private */,
     102,    0,  772,    2, 0x08 /* Private */,
     103,    0,  773,    2, 0x08 /* Private */,
     104,    1,  774,    2, 0x08 /* Private */,
     105,    0,  777,    2, 0x08 /* Private */,
     106,    0,  778,    2, 0x08 /* Private */,
     107,    1,  779,    2, 0x08 /* Private */,
     109,    0,  782,    2, 0x08 /* Private */,
     110,    0,  783,    2, 0x08 /* Private */,
     111,    0,  784,    2, 0x08 /* Private */,
     112,    1,  785,    2, 0x08 /* Private */,
     114,    1,  788,    2, 0x08 /* Private */,
     115,    1,  791,    2, 0x08 /* Private */,
     118,    2,  794,    2, 0x08 /* Private */,
     121,    1,  799,    2, 0x08 /* Private */,
     122,    1,  802,    2, 0x08 /* Private */,
     123,    1,  805,    2, 0x08 /* Private */,
     125,    1,  808,    2, 0x08 /* Private */,
     126,    2,  811,    2, 0x08 /* Private */,
     129,    0,  816,    2, 0x08 /* Private */,
     130,    0,  817,    2, 0x08 /* Private */,
     131,    0,  818,    2, 0x08 /* Private */,
     132,    0,  819,    2, 0x08 /* Private */,
     133,    1,  820,    2, 0x08 /* Private */,
     134,    0,  823,    2, 0x08 /* Private */,
     135,    0,  824,    2, 0x08 /* Private */,
     136,    0,  825,    2, 0x08 /* Private */,
     137,    1,  826,    2, 0x08 /* Private */,
     138,    0,  829,    2, 0x08 /* Private */,
     139,    0,  830,    2, 0x08 /* Private */,
     140,    0,  831,    2, 0x08 /* Private */,
     141,    0,  832,    2, 0x08 /* Private */,
     142,    0,  833,    2, 0x08 /* Private */,
     143,    0,  834,    2, 0x08 /* Private */,
     144,    0,  835,    2, 0x08 /* Private */,
     145,    0,  836,    2, 0x08 /* Private */,
     146,    0,  837,    2, 0x08 /* Private */,
     147,    0,  838,    2, 0x08 /* Private */,
     148,    1,  839,    2, 0x08 /* Private */,
     149,    1,  842,    2, 0x08 /* Private */,
     150,    1,  845,    2, 0x08 /* Private */,
     151,    0,  848,    2, 0x08 /* Private */,
     152,    1,  849,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Double, 0x80000000 | 11,    8,    9,   10,   12,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Int, QMetaType::Int,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::QRect,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   24,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   29,   30,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 45,   21,   44,   46,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 45,   21,   44,   46,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 50,   49,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 53,   49,   39,
    QMetaType::Void, 0x80000000 | 55,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
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
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   83,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   83,
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
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  108,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  113,
    QMetaType::Void, QMetaType::QString,  113,
    QMetaType::Void, 0x80000000 | 116,  117,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,  119,  120,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Void, QMetaType::Int,  124,
    QMetaType::Void, QMetaType::QString,  120,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,  127,  128,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  113,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  113,
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
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   58,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stop_dirs(); break;
        case 1: _t->stop_find(); break;
        case 2: _t->stop_expu(); break;
        case 3: _t->stop_dlys(); break;
        case 4: _t->execProc((*reinterpret_cast< SeisFile*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< float*(*)>(_a[4]))); break;
        case 5: _t->sclZoom((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->sclZoomV((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->sclZoomH((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 8: _t->winZoom((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 9: _t->binHdrGridChangedEvent(); break;
        case 10: _t->syncHorizontalAxisScrollBar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->syncVerticalAxisScrollBar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->fitAxesToViewport(); break;
        case 13: _t->dirGridEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->hdrListDtGridEvent((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->hdrListDtGridHeaderEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->hdrElstDtGridHeaderEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->hdrListCkEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->hdrElstCkEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->viewMouseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 20: _t->procParmEvent(); break;
        case 21: _t->axesDlgEvent(); break;
        case 22: _t->hdreDlgEvent(); break;
        case 23: _t->hdrListDtGridDataEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 24: _t->hdrElstDtGridDataEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 25: _t->txtEditKeyEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 26: _t->txtEditChanged(); break;
        case 27: _t->edWhellEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
        case 28: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 29: _t->ResetSrc(); break;
        case 30: _t->on_ckAgc_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->on_ckFilt_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_ckNorm_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_ckWiggle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->on_ckGray_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_ckColor_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_rbNon_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_rbPos_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_rbNeg_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_zoomAllBtn_pressed(); break;
        case 40: _t->on_zoomVallBtn_pressed(); break;
        case 41: _t->on_zoomHallBtn_pressed(); break;
        case 42: _t->on_edTr_editingFinished(); break;
        case 43: _t->on_edTm_editingFinished(); break;
        case 44: _t->on_edGn_editingFinished(); break;
        case 45: _t->on_zoomPreBtn_pressed(); break;
        case 46: _t->on_zoomOutBtn_pressed(); break;
        case 47: _t->on_zoomInBtn_pressed(); break;
        case 48: _t->on_selDirBtn_pressed(); break;
        case 49: _t->on_refreshBtn_pressed(); break;
        case 50: _t->on_procParmBtn_pressed(); break;
        case 51: _t->on_zoomWinBtn_pressed(); break;
        case 52: _t->on_actionOpen_Directory_triggered(); break;
        case 53: _t->on_actionAbout_triggered(); break;
        case 54: _t->on_TrSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->on_TrSlider_sliderReleased(); break;
        case 56: _t->on_TrSlider_sliderPressed(); break;
        case 57: _t->on_TmSlider_sliderPressed(); break;
        case 58: _t->on_TmSlider_sliderReleased(); break;
        case 59: _t->on_TmSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->on_GnSlider_sliderPressed(); break;
        case 61: _t->on_GnSlider_sliderReleased(); break;
        case 62: _t->on_GnSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->on_TxtHdrEdit_cursorPositionChanged(); break;
        case 64: _t->on_axisBtn_pressed(); break;
        case 65: _t->on_actionAxes_Setup_triggered(); break;
        case 66: _t->on_actionParameters_triggered(); break;
        case 67: _t->on_actionHeader_Editor_triggered(); break;
        case 68: _t->on_btnEdHdr_clicked(); break;
        case 69: _t->on_btnTxtRd_clicked(); break;
        case 70: _t->on_actionLoad_Text_Header_from_File_triggered(); break;
        case 71: _t->on_actionExport_Text_Header_to_File_triggered(); break;
        case 72: _t->on_btnTxtRdx_clicked(); break;
        case 73: _t->on_btnTxtRst_clicked(); break;
        case 74: _t->on_btnTxtUpd_clicked(); break;
        case 75: _t->on_ckTrEd_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->on_btnBinRst_clicked(); break;
        case 77: _t->on_btnBinUpd_clicked(); break;
        case 78: _t->on_InfoTab_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->on_btnLastTr_clicked(); break;
        case 80: _t->on_btnFirstTr_clicked(); break;
        case 81: _t->on_btnSbin_clicked(); break;
        case 82: _t->on_cbSval_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 83: _t->on_cbSidx_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 84: _t->x_dir((*reinterpret_cast< DirList(*)>(_a[1]))); break;
        case 85: _t->x_progr((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 86: _t->x_fin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 87: _t->x_fin_e((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 88: _t->x_find((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 89: _t->x_find_fin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 90: _t->x_delay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 91: _t->on_btnSfwd_clicked(); break;
        case 92: _t->on_btnSbkw_clicked(); break;
        case 93: _t->on_btnSstop_clicked(); break;
        case 94: _t->on_btnUpdTrh_clicked(); break;
        case 95: _t->on_cbEnval_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 96: _t->on_btnCkNon_clicked(); break;
        case 97: _t->on_btnCkAll_clicked(); break;
        case 98: _t->on_btnCkNonE_clicked(); break;
        case 99: _t->on_edExpr_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 100: _t->on_btnNexp_clicked(); break;
        case 101: _t->on_btnLexp_clicked(); break;
        case 102: _t->on_btnHexp_clicked(); break;
        case 103: _t->on_btnClrExp_clicked(); break;
        case 104: _t->on_btnUpdE_clicked(); break;
        case 105: _t->on_btnUndE_clicked(); break;
        case 106: _t->on_actionSave_As_triggered(); break;
        case 107: _t->on_btnLastTr_2_clicked(); break;
        case 108: _t->on_btnFirstTr_2_clicked(); break;
        case 109: _t->on_autoGainBtn_clicked(); break;
        case 110: _t->on_rbDirNorm_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 111: _t->on_rbDirRev_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: _t->on_ckTimLines_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 113: _t->on_actionOpen_File_triggered(); break;
        case 114: _t->on_ckDly_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeisFile* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stop_dirs)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stop_find)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stop_expu)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stop_dlys)) {
                *result = 3;
                return;
            }
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
        if (_id < 115)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 115;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 115)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 115;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::stop_dirs()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::stop_find()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::stop_expu()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::stop_dlys()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
