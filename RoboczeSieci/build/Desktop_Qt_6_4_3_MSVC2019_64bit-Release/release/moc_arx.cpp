/****************************************************************************
** Meta object code from reading C++ file 'arx.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../headers/arx.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arx.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_ARX_t {
    uint offsetsAndSizes[32];
    char stringdata0[4];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[2];
    char stringdata5[2];
    char stringdata6[2];
    char stringdata7[2];
    char stringdata8[24];
    char stringdata9[24];
    char stringdata10[22];
    char stringdata11[22];
    char stringdata12[10];
    char stringdata13[10];
    char stringdata14[27];
    char stringdata15[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ARX_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ARX_t qt_meta_stringdata_ARX = {
    {
        QT_MOC_LITERAL(0, 3),  // "ARX"
        QT_MOC_LITERAL(4, 21),  // "s_update_model_params"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 19),  // "std::vector<double>"
        QT_MOC_LITERAL(47, 1),  // "A"
        QT_MOC_LITERAL(49, 1),  // "B"
        QT_MOC_LITERAL(51, 1),  // "k"
        QT_MOC_LITERAL(53, 1),  // "s"
        QT_MOC_LITERAL(55, 23),  // "on_add_A_button_clicked"
        QT_MOC_LITERAL(79, 23),  // "on_add_B_button_clicked"
        QT_MOC_LITERAL(103, 21),  // "on_buttonBox_accepted"
        QT_MOC_LITERAL(125, 21),  // "on_buttonBox_rejected"
        QT_MOC_LITERAL(147, 9),  // "save_conf"
        QT_MOC_LITERAL(157, 9),  // "read_conf"
        QT_MOC_LITERAL(167, 26),  // "on_delA_pushButton_clicked"
        QT_MOC_LITERAL(194, 26)   // "on_delB_pushButton_clicked"
    },
    "ARX",
    "s_update_model_params",
    "",
    "std::vector<double>",
    "A",
    "B",
    "k",
    "s",
    "on_add_A_button_clicked",
    "on_add_B_button_clicked",
    "on_buttonBox_accepted",
    "on_buttonBox_rejected",
    "save_conf",
    "read_conf",
    "on_delA_pushButton_clicked",
    "on_delB_pushButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ARX[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   77,    2, 0x08,    6 /* Private */,
       9,    0,   78,    2, 0x08,    7 /* Private */,
      10,    0,   79,    2, 0x08,    8 /* Private */,
      11,    0,   80,    2, 0x08,    9 /* Private */,
      12,    0,   81,    2, 0x08,   10 /* Private */,
      13,    0,   82,    2, 0x08,   11 /* Private */,
      14,    0,   83,    2, 0x08,   12 /* Private */,
      15,    0,   84,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Int, QMetaType::Double,    4,    5,    6,    7,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject ARX::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ARX.offsetsAndSizes,
    qt_meta_data_ARX,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ARX_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ARX, std::true_type>,
        // method 's_update_model_params'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double>, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<double>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_add_A_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_B_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'save_conf'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'read_conf'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_delA_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_delB_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ARX::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ARX *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->s_update_model_params((*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<double>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4]))); break;
        case 1: _t->on_add_A_button_clicked(); break;
        case 2: _t->on_add_B_button_clicked(); break;
        case 3: _t->on_buttonBox_accepted(); break;
        case 4: _t->on_buttonBox_rejected(); break;
        case 5: _t->save_conf(); break;
        case 6: _t->read_conf(); break;
        case 7: _t->on_delA_pushButton_clicked(); break;
        case 8: _t->on_delB_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ARX::*)(std::vector<double> , std::vector<double> , int , double );
            if (_t _q_method = &ARX::s_update_model_params; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ARX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ARX::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ARX.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ARX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ARX::s_update_model_params(std::vector<double> _t1, std::vector<double> _t2, int _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
