/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../colors_lab/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "indexChanged",
    "",
    "index",
    "on_pushButton_clicked",
    "setRGBvalues",
    "setLABvalues",
    "setCMYKvalues",
    "setStartVisual",
    "rgbInWindow",
    "pos",
    "cmykInWindow",
    "labInWindow",
    "hslInWindow",
    "hsvInWindow",
    "xyzInWindow",
    "rgbChanchedByLineR",
    "rgbChangedByEditR",
    "rgbChanchedByLineG",
    "rgbChangedByEditG",
    "rgbChanchedByLineB",
    "rgbChangedByEditB",
    "cmykChanchedByLineC",
    "cmykChangedByEditC",
    "cmykChanchedByLineM",
    "cmykChangedByEditM",
    "cmykChanchedByLineY",
    "cmykChangedByEditY",
    "cmykChanchedByLineK",
    "cmykChangedByEditK",
    "labChanchedByLineL",
    "labChangedByEditL",
    "labChanchedByLineA",
    "labChangedByEditA",
    "labChanchedByLineB",
    "labChangedByEditB",
    "xyzChanchedByLine",
    "xyzChangedByEdit",
    "hlsChanchedByLine",
    "hlsChangedByEdit",
    "hsvChanchedByLine",
    "hsvChangedByEdit",
    "fromRGBtoCMYK",
    "fromCMYKtoRGB",
    "fromRGBtoXYZ"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[90];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[22];
    char stringdata5[13];
    char stringdata6[13];
    char stringdata7[14];
    char stringdata8[15];
    char stringdata9[12];
    char stringdata10[4];
    char stringdata11[13];
    char stringdata12[12];
    char stringdata13[12];
    char stringdata14[12];
    char stringdata15[12];
    char stringdata16[19];
    char stringdata17[18];
    char stringdata18[19];
    char stringdata19[18];
    char stringdata20[19];
    char stringdata21[18];
    char stringdata22[20];
    char stringdata23[19];
    char stringdata24[20];
    char stringdata25[19];
    char stringdata26[20];
    char stringdata27[19];
    char stringdata28[20];
    char stringdata29[19];
    char stringdata30[19];
    char stringdata31[18];
    char stringdata32[19];
    char stringdata33[18];
    char stringdata34[19];
    char stringdata35[18];
    char stringdata36[18];
    char stringdata37[17];
    char stringdata38[18];
    char stringdata39[17];
    char stringdata40[18];
    char stringdata41[17];
    char stringdata42[14];
    char stringdata43[14];
    char stringdata44[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 12),  // "indexChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 5),  // "index"
        QT_MOC_LITERAL(31, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(53, 12),  // "setRGBvalues"
        QT_MOC_LITERAL(66, 12),  // "setLABvalues"
        QT_MOC_LITERAL(79, 13),  // "setCMYKvalues"
        QT_MOC_LITERAL(93, 14),  // "setStartVisual"
        QT_MOC_LITERAL(108, 11),  // "rgbInWindow"
        QT_MOC_LITERAL(120, 3),  // "pos"
        QT_MOC_LITERAL(124, 12),  // "cmykInWindow"
        QT_MOC_LITERAL(137, 11),  // "labInWindow"
        QT_MOC_LITERAL(149, 11),  // "hslInWindow"
        QT_MOC_LITERAL(161, 11),  // "hsvInWindow"
        QT_MOC_LITERAL(173, 11),  // "xyzInWindow"
        QT_MOC_LITERAL(185, 18),  // "rgbChanchedByLineR"
        QT_MOC_LITERAL(204, 17),  // "rgbChangedByEditR"
        QT_MOC_LITERAL(222, 18),  // "rgbChanchedByLineG"
        QT_MOC_LITERAL(241, 17),  // "rgbChangedByEditG"
        QT_MOC_LITERAL(259, 18),  // "rgbChanchedByLineB"
        QT_MOC_LITERAL(278, 17),  // "rgbChangedByEditB"
        QT_MOC_LITERAL(296, 19),  // "cmykChanchedByLineC"
        QT_MOC_LITERAL(316, 18),  // "cmykChangedByEditC"
        QT_MOC_LITERAL(335, 19),  // "cmykChanchedByLineM"
        QT_MOC_LITERAL(355, 18),  // "cmykChangedByEditM"
        QT_MOC_LITERAL(374, 19),  // "cmykChanchedByLineY"
        QT_MOC_LITERAL(394, 18),  // "cmykChangedByEditY"
        QT_MOC_LITERAL(413, 19),  // "cmykChanchedByLineK"
        QT_MOC_LITERAL(433, 18),  // "cmykChangedByEditK"
        QT_MOC_LITERAL(452, 18),  // "labChanchedByLineL"
        QT_MOC_LITERAL(471, 17),  // "labChangedByEditL"
        QT_MOC_LITERAL(489, 18),  // "labChanchedByLineA"
        QT_MOC_LITERAL(508, 17),  // "labChangedByEditA"
        QT_MOC_LITERAL(526, 18),  // "labChanchedByLineB"
        QT_MOC_LITERAL(545, 17),  // "labChangedByEditB"
        QT_MOC_LITERAL(563, 17),  // "xyzChanchedByLine"
        QT_MOC_LITERAL(581, 16),  // "xyzChangedByEdit"
        QT_MOC_LITERAL(598, 17),  // "hlsChanchedByLine"
        QT_MOC_LITERAL(616, 16),  // "hlsChangedByEdit"
        QT_MOC_LITERAL(633, 17),  // "hsvChanchedByLine"
        QT_MOC_LITERAL(651, 16),  // "hsvChangedByEdit"
        QT_MOC_LITERAL(668, 13),  // "fromRGBtoCMYK"
        QT_MOC_LITERAL(682, 13),  // "fromCMYKtoRGB"
        QT_MOC_LITERAL(696, 12)   // "fromRGBtoXYZ"
    },
    "MainWindow",
    "indexChanged",
    "",
    "index",
    "on_pushButton_clicked",
    "setRGBvalues",
    "setLABvalues",
    "setCMYKvalues",
    "setStartVisual",
    "rgbInWindow",
    "pos",
    "cmykInWindow",
    "labInWindow",
    "hslInWindow",
    "hsvInWindow",
    "xyzInWindow",
    "rgbChanchedByLineR",
    "rgbChangedByEditR",
    "rgbChanchedByLineG",
    "rgbChangedByEditG",
    "rgbChanchedByLineB",
    "rgbChangedByEditB",
    "cmykChanchedByLineC",
    "cmykChangedByEditC",
    "cmykChanchedByLineM",
    "cmykChangedByEditM",
    "cmykChanchedByLineY",
    "cmykChangedByEditY",
    "cmykChanchedByLineK",
    "cmykChangedByEditK",
    "labChanchedByLineL",
    "labChangedByEditL",
    "labChanchedByLineA",
    "labChangedByEditA",
    "labChanchedByLineB",
    "labChangedByEditB",
    "xyzChanchedByLine",
    "xyzChangedByEdit",
    "hlsChanchedByLine",
    "hlsChangedByEdit",
    "hsvChanchedByLine",
    "hsvChangedByEdit",
    "fromRGBtoCMYK",
    "fromCMYKtoRGB",
    "fromRGBtoXYZ"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  260,    2, 0x08,    1 /* Private */,
       4,    0,  263,    2, 0x08,    3 /* Private */,
       5,    0,  264,    2, 0x08,    4 /* Private */,
       6,    0,  265,    2, 0x08,    5 /* Private */,
       7,    0,  266,    2, 0x08,    6 /* Private */,
       8,    0,  267,    2, 0x08,    7 /* Private */,
       9,    1,  268,    2, 0x08,    8 /* Private */,
      11,    1,  271,    2, 0x08,   10 /* Private */,
      12,    1,  274,    2, 0x08,   12 /* Private */,
      13,    1,  277,    2, 0x08,   14 /* Private */,
      14,    1,  280,    2, 0x08,   16 /* Private */,
      15,    1,  283,    2, 0x08,   18 /* Private */,
      16,    0,  286,    2, 0x08,   20 /* Private */,
      17,    0,  287,    2, 0x08,   21 /* Private */,
      18,    0,  288,    2, 0x08,   22 /* Private */,
      19,    0,  289,    2, 0x08,   23 /* Private */,
      20,    0,  290,    2, 0x08,   24 /* Private */,
      21,    0,  291,    2, 0x08,   25 /* Private */,
      22,    0,  292,    2, 0x08,   26 /* Private */,
      23,    0,  293,    2, 0x08,   27 /* Private */,
      24,    0,  294,    2, 0x08,   28 /* Private */,
      25,    0,  295,    2, 0x08,   29 /* Private */,
      26,    0,  296,    2, 0x08,   30 /* Private */,
      27,    0,  297,    2, 0x08,   31 /* Private */,
      28,    0,  298,    2, 0x08,   32 /* Private */,
      29,    0,  299,    2, 0x08,   33 /* Private */,
      30,    0,  300,    2, 0x08,   34 /* Private */,
      31,    0,  301,    2, 0x08,   35 /* Private */,
      32,    0,  302,    2, 0x08,   36 /* Private */,
      33,    0,  303,    2, 0x08,   37 /* Private */,
      34,    0,  304,    2, 0x08,   38 /* Private */,
      35,    0,  305,    2, 0x08,   39 /* Private */,
      36,    0,  306,    2, 0x08,   40 /* Private */,
      37,    0,  307,    2, 0x08,   41 /* Private */,
      38,    0,  308,    2, 0x08,   42 /* Private */,
      39,    0,  309,    2, 0x08,   43 /* Private */,
      40,    0,  310,    2, 0x08,   44 /* Private */,
      41,    0,  311,    2, 0x08,   45 /* Private */,
      42,    0,  312,    2, 0x08,   46 /* Private */,
      43,    0,  313,    2, 0x08,   47 /* Private */,
      44,    0,  314,    2, 0x08,   48 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
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

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'indexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setRGBvalues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLABvalues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCMYKvalues'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setStartVisual'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rgbInWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cmykInWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'labInWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hslInWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hsvInWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'xyzInWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rgbChanchedByLineR'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rgbChangedByEditR'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rgbChanchedByLineG'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rgbChangedByEditG'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rgbChanchedByLineB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rgbChangedByEditB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cmykChanchedByLineC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cmykChangedByEditC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cmykChanchedByLineM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cmykChangedByEditM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cmykChanchedByLineY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cmykChangedByEditY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cmykChanchedByLineK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cmykChangedByEditK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'labChanchedByLineL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'labChangedByEditL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'labChanchedByLineA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'labChangedByEditA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'labChanchedByLineB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'labChangedByEditB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xyzChanchedByLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xyzChangedByEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hlsChanchedByLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hlsChangedByEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hsvChanchedByLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hsvChangedByEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fromRGBtoCMYK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fromCMYKtoRGB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fromRGBtoXYZ'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->indexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->setRGBvalues(); break;
        case 3: _t->setLABvalues(); break;
        case 4: _t->setCMYKvalues(); break;
        case 5: _t->setStartVisual(); break;
        case 6: _t->rgbInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->cmykInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->labInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->hslInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->hsvInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->xyzInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->rgbChanchedByLineR(); break;
        case 13: _t->rgbChangedByEditR(); break;
        case 14: _t->rgbChanchedByLineG(); break;
        case 15: _t->rgbChangedByEditG(); break;
        case 16: _t->rgbChanchedByLineB(); break;
        case 17: _t->rgbChangedByEditB(); break;
        case 18: _t->cmykChanchedByLineC(); break;
        case 19: _t->cmykChangedByEditC(); break;
        case 20: _t->cmykChanchedByLineM(); break;
        case 21: _t->cmykChangedByEditM(); break;
        case 22: _t->cmykChanchedByLineY(); break;
        case 23: _t->cmykChangedByEditY(); break;
        case 24: _t->cmykChanchedByLineK(); break;
        case 25: _t->cmykChangedByEditK(); break;
        case 26: _t->labChanchedByLineL(); break;
        case 27: _t->labChangedByEditL(); break;
        case 28: _t->labChanchedByLineA(); break;
        case 29: _t->labChangedByEditA(); break;
        case 30: _t->labChanchedByLineB(); break;
        case 31: _t->labChangedByEditB(); break;
        case 32: _t->xyzChanchedByLine(); break;
        case 33: _t->xyzChangedByEdit(); break;
        case 34: _t->hlsChanchedByLine(); break;
        case 35: _t->hlsChangedByEdit(); break;
        case 36: _t->hsvChanchedByLine(); break;
        case 37: _t->hsvChangedByEdit(); break;
        case 38: _t->fromRGBtoCMYK(); break;
        case 39: _t->fromCMYKtoRGB(); break;
        case 40: _t->fromRGBtoXYZ(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }
    return _id;
}
QT_WARNING_POP
