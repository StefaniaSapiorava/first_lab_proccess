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
    "setXYZvalues",
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
    "xyzChanchedByLineX",
    "xyzChanchedByLineY",
    "xyzChanchedByLineZ",
    "xyzChangedByEditX",
    "xyzChangedByEditY",
    "xyzChangedByEditZ",
    "hlsChanchedByLine",
    "hlsChangedByEdit",
    "hsvChanchedByLine",
    "hsvChangedByEdit",
    "fromRGBtoCMYK",
    "fromCMYKtoRGB",
    "fromRGBtoXYZ",
    "fromXYZtoRGB",
    "countFforFromRGBtoXYZ",
    "x",
    "countFforFromXYZtoRGB",
    "fromXYZtoLAB",
    "countFforFromXYZtoLAB"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[112];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[22];
    char stringdata5[13];
    char stringdata6[13];
    char stringdata7[14];
    char stringdata8[13];
    char stringdata9[15];
    char stringdata10[12];
    char stringdata11[4];
    char stringdata12[13];
    char stringdata13[12];
    char stringdata14[12];
    char stringdata15[12];
    char stringdata16[12];
    char stringdata17[19];
    char stringdata18[18];
    char stringdata19[19];
    char stringdata20[18];
    char stringdata21[19];
    char stringdata22[18];
    char stringdata23[20];
    char stringdata24[19];
    char stringdata25[20];
    char stringdata26[19];
    char stringdata27[20];
    char stringdata28[19];
    char stringdata29[20];
    char stringdata30[19];
    char stringdata31[19];
    char stringdata32[18];
    char stringdata33[19];
    char stringdata34[18];
    char stringdata35[19];
    char stringdata36[18];
    char stringdata37[19];
    char stringdata38[19];
    char stringdata39[19];
    char stringdata40[18];
    char stringdata41[18];
    char stringdata42[18];
    char stringdata43[18];
    char stringdata44[17];
    char stringdata45[18];
    char stringdata46[17];
    char stringdata47[14];
    char stringdata48[14];
    char stringdata49[13];
    char stringdata50[13];
    char stringdata51[22];
    char stringdata52[2];
    char stringdata53[22];
    char stringdata54[13];
    char stringdata55[22];
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
        QT_MOC_LITERAL(93, 12),  // "setXYZvalues"
        QT_MOC_LITERAL(106, 14),  // "setStartVisual"
        QT_MOC_LITERAL(121, 11),  // "rgbInWindow"
        QT_MOC_LITERAL(133, 3),  // "pos"
        QT_MOC_LITERAL(137, 12),  // "cmykInWindow"
        QT_MOC_LITERAL(150, 11),  // "labInWindow"
        QT_MOC_LITERAL(162, 11),  // "hslInWindow"
        QT_MOC_LITERAL(174, 11),  // "hsvInWindow"
        QT_MOC_LITERAL(186, 11),  // "xyzInWindow"
        QT_MOC_LITERAL(198, 18),  // "rgbChanchedByLineR"
        QT_MOC_LITERAL(217, 17),  // "rgbChangedByEditR"
        QT_MOC_LITERAL(235, 18),  // "rgbChanchedByLineG"
        QT_MOC_LITERAL(254, 17),  // "rgbChangedByEditG"
        QT_MOC_LITERAL(272, 18),  // "rgbChanchedByLineB"
        QT_MOC_LITERAL(291, 17),  // "rgbChangedByEditB"
        QT_MOC_LITERAL(309, 19),  // "cmykChanchedByLineC"
        QT_MOC_LITERAL(329, 18),  // "cmykChangedByEditC"
        QT_MOC_LITERAL(348, 19),  // "cmykChanchedByLineM"
        QT_MOC_LITERAL(368, 18),  // "cmykChangedByEditM"
        QT_MOC_LITERAL(387, 19),  // "cmykChanchedByLineY"
        QT_MOC_LITERAL(407, 18),  // "cmykChangedByEditY"
        QT_MOC_LITERAL(426, 19),  // "cmykChanchedByLineK"
        QT_MOC_LITERAL(446, 18),  // "cmykChangedByEditK"
        QT_MOC_LITERAL(465, 18),  // "labChanchedByLineL"
        QT_MOC_LITERAL(484, 17),  // "labChangedByEditL"
        QT_MOC_LITERAL(502, 18),  // "labChanchedByLineA"
        QT_MOC_LITERAL(521, 17),  // "labChangedByEditA"
        QT_MOC_LITERAL(539, 18),  // "labChanchedByLineB"
        QT_MOC_LITERAL(558, 17),  // "labChangedByEditB"
        QT_MOC_LITERAL(576, 18),  // "xyzChanchedByLineX"
        QT_MOC_LITERAL(595, 18),  // "xyzChanchedByLineY"
        QT_MOC_LITERAL(614, 18),  // "xyzChanchedByLineZ"
        QT_MOC_LITERAL(633, 17),  // "xyzChangedByEditX"
        QT_MOC_LITERAL(651, 17),  // "xyzChangedByEditY"
        QT_MOC_LITERAL(669, 17),  // "xyzChangedByEditZ"
        QT_MOC_LITERAL(687, 17),  // "hlsChanchedByLine"
        QT_MOC_LITERAL(705, 16),  // "hlsChangedByEdit"
        QT_MOC_LITERAL(722, 17),  // "hsvChanchedByLine"
        QT_MOC_LITERAL(740, 16),  // "hsvChangedByEdit"
        QT_MOC_LITERAL(757, 13),  // "fromRGBtoCMYK"
        QT_MOC_LITERAL(771, 13),  // "fromCMYKtoRGB"
        QT_MOC_LITERAL(785, 12),  // "fromRGBtoXYZ"
        QT_MOC_LITERAL(798, 12),  // "fromXYZtoRGB"
        QT_MOC_LITERAL(811, 21),  // "countFforFromRGBtoXYZ"
        QT_MOC_LITERAL(833, 1),  // "x"
        QT_MOC_LITERAL(835, 21),  // "countFforFromXYZtoRGB"
        QT_MOC_LITERAL(857, 12),  // "fromXYZtoLAB"
        QT_MOC_LITERAL(870, 21)   // "countFforFromXYZtoLAB"
    },
    "MainWindow",
    "indexChanged",
    "",
    "index",
    "on_pushButton_clicked",
    "setRGBvalues",
    "setLABvalues",
    "setCMYKvalues",
    "setXYZvalues",
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
    "xyzChanchedByLineX",
    "xyzChanchedByLineY",
    "xyzChanchedByLineZ",
    "xyzChangedByEditX",
    "xyzChangedByEditY",
    "xyzChangedByEditZ",
    "hlsChanchedByLine",
    "hlsChangedByEdit",
    "hsvChanchedByLine",
    "hsvChangedByEdit",
    "fromRGBtoCMYK",
    "fromCMYKtoRGB",
    "fromRGBtoXYZ",
    "fromXYZtoRGB",
    "countFforFromRGBtoXYZ",
    "x",
    "countFforFromXYZtoRGB",
    "fromXYZtoLAB",
    "countFforFromXYZtoLAB"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  320,    2, 0x08,    1 /* Private */,
       4,    0,  323,    2, 0x08,    3 /* Private */,
       5,    0,  324,    2, 0x08,    4 /* Private */,
       6,    0,  325,    2, 0x08,    5 /* Private */,
       7,    0,  326,    2, 0x08,    6 /* Private */,
       8,    0,  327,    2, 0x08,    7 /* Private */,
       9,    0,  328,    2, 0x08,    8 /* Private */,
      10,    1,  329,    2, 0x08,    9 /* Private */,
      12,    1,  332,    2, 0x08,   11 /* Private */,
      13,    1,  335,    2, 0x08,   13 /* Private */,
      14,    1,  338,    2, 0x08,   15 /* Private */,
      15,    1,  341,    2, 0x08,   17 /* Private */,
      16,    1,  344,    2, 0x08,   19 /* Private */,
      17,    0,  347,    2, 0x08,   21 /* Private */,
      18,    0,  348,    2, 0x08,   22 /* Private */,
      19,    0,  349,    2, 0x08,   23 /* Private */,
      20,    0,  350,    2, 0x08,   24 /* Private */,
      21,    0,  351,    2, 0x08,   25 /* Private */,
      22,    0,  352,    2, 0x08,   26 /* Private */,
      23,    0,  353,    2, 0x08,   27 /* Private */,
      24,    0,  354,    2, 0x08,   28 /* Private */,
      25,    0,  355,    2, 0x08,   29 /* Private */,
      26,    0,  356,    2, 0x08,   30 /* Private */,
      27,    0,  357,    2, 0x08,   31 /* Private */,
      28,    0,  358,    2, 0x08,   32 /* Private */,
      29,    0,  359,    2, 0x08,   33 /* Private */,
      30,    0,  360,    2, 0x08,   34 /* Private */,
      31,    0,  361,    2, 0x08,   35 /* Private */,
      32,    0,  362,    2, 0x08,   36 /* Private */,
      33,    0,  363,    2, 0x08,   37 /* Private */,
      34,    0,  364,    2, 0x08,   38 /* Private */,
      35,    0,  365,    2, 0x08,   39 /* Private */,
      36,    0,  366,    2, 0x08,   40 /* Private */,
      37,    0,  367,    2, 0x08,   41 /* Private */,
      38,    0,  368,    2, 0x08,   42 /* Private */,
      39,    0,  369,    2, 0x08,   43 /* Private */,
      40,    0,  370,    2, 0x08,   44 /* Private */,
      41,    0,  371,    2, 0x08,   45 /* Private */,
      42,    0,  372,    2, 0x08,   46 /* Private */,
      43,    0,  373,    2, 0x08,   47 /* Private */,
      44,    0,  374,    2, 0x08,   48 /* Private */,
      45,    0,  375,    2, 0x08,   49 /* Private */,
      46,    0,  376,    2, 0x08,   50 /* Private */,
      47,    0,  377,    2, 0x08,   51 /* Private */,
      48,    0,  378,    2, 0x08,   52 /* Private */,
      49,    0,  379,    2, 0x08,   53 /* Private */,
      50,    0,  380,    2, 0x08,   54 /* Private */,
      51,    1,  381,    2, 0x08,   55 /* Private */,
      53,    1,  384,    2, 0x08,   57 /* Private */,
      54,    0,  387,    2, 0x08,   59 /* Private */,
      55,    1,  388,    2, 0x08,   60 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double, QMetaType::Double,   52,
    QMetaType::Double, QMetaType::Double,   52,
    QMetaType::Void,
    QMetaType::Double, QMetaType::Double,   52,

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
        // method 'setXYZvalues'
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
        // method 'xyzChanchedByLineX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xyzChanchedByLineY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xyzChanchedByLineZ'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xyzChangedByEditX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xyzChangedByEditY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'xyzChangedByEditZ'
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fromXYZtoRGB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'countFforFromRGBtoXYZ'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'countFforFromXYZtoRGB'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'fromXYZtoLAB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'countFforFromXYZtoLAB'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
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
        case 5: _t->setXYZvalues(); break;
        case 6: _t->setStartVisual(); break;
        case 7: _t->rgbInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->cmykInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->labInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->hslInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->hsvInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->xyzInWindow((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->rgbChanchedByLineR(); break;
        case 14: _t->rgbChangedByEditR(); break;
        case 15: _t->rgbChanchedByLineG(); break;
        case 16: _t->rgbChangedByEditG(); break;
        case 17: _t->rgbChanchedByLineB(); break;
        case 18: _t->rgbChangedByEditB(); break;
        case 19: _t->cmykChanchedByLineC(); break;
        case 20: _t->cmykChangedByEditC(); break;
        case 21: _t->cmykChanchedByLineM(); break;
        case 22: _t->cmykChangedByEditM(); break;
        case 23: _t->cmykChanchedByLineY(); break;
        case 24: _t->cmykChangedByEditY(); break;
        case 25: _t->cmykChanchedByLineK(); break;
        case 26: _t->cmykChangedByEditK(); break;
        case 27: _t->labChanchedByLineL(); break;
        case 28: _t->labChangedByEditL(); break;
        case 29: _t->labChanchedByLineA(); break;
        case 30: _t->labChangedByEditA(); break;
        case 31: _t->labChanchedByLineB(); break;
        case 32: _t->labChangedByEditB(); break;
        case 33: _t->xyzChanchedByLineX(); break;
        case 34: _t->xyzChanchedByLineY(); break;
        case 35: _t->xyzChanchedByLineZ(); break;
        case 36: _t->xyzChangedByEditX(); break;
        case 37: _t->xyzChangedByEditY(); break;
        case 38: _t->xyzChangedByEditZ(); break;
        case 39: _t->hlsChanchedByLine(); break;
        case 40: _t->hlsChangedByEdit(); break;
        case 41: _t->hsvChanchedByLine(); break;
        case 42: _t->hsvChangedByEdit(); break;
        case 43: _t->fromRGBtoCMYK(); break;
        case 44: _t->fromCMYKtoRGB(); break;
        case 45: _t->fromRGBtoXYZ(); break;
        case 46: _t->fromXYZtoRGB(); break;
        case 47: { double _r = _t->countFforFromRGBtoXYZ((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 48: { double _r = _t->countFforFromXYZtoRGB((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->fromXYZtoLAB(); break;
        case 50: { double _r = _t->countFforFromXYZtoLAB((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
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
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 51;
    }
    return _id;
}
QT_WARNING_POP
