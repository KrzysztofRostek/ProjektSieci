/****************************************************************************
** Meta object code from reading C++ file 'mytcpclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mytcpclient.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpclient.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_myTCPclient_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[13];
    char stringdata5[4];
    char stringdata6[5];
    char stringdata7[13];
    char stringdata8[10];
    char stringdata9[19];
    char stringdata10[17];
    char stringdata11[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_myTCPclient_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_myTCPclient_t qt_meta_stringdata_myTCPclient = {
    {
        QT_MOC_LITERAL(0, 11),  // "myTCPclient"
        QT_MOC_LITERAL(12, 9),  // "polaczono"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 10),  // "rozlaczono"
        QT_MOC_LITERAL(34, 12),  // "odebranoDane"
        QT_MOC_LITERAL(47, 3),  // "typ"
        QT_MOC_LITERAL(51, 4),  // "dane"
        QT_MOC_LITERAL(56, 12),  // "wystapilBlad"
        QT_MOC_LITERAL(69, 9),  // "opisBledu"
        QT_MOC_LITERAL(79, 18),  // "czytajDaneZGniazda"
        QT_MOC_LITERAL(98, 16),  // "obsluzPolaczenie"
        QT_MOC_LITERAL(115, 17)   // "obsluzRozlaczenie"
    },
    "myTCPclient",
    "polaczono",
    "",
    "rozlaczono",
    "odebranoDane",
    "typ",
    "dane",
    "wystapilBlad",
    "opisBledu",
    "czytajDaneZGniazda",
    "obsluzPolaczenie",
    "obsluzRozlaczenie"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_myTCPclient[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    2,   58,    2, 0x06,    3 /* Public */,
       7,    1,   63,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   66,    2, 0x08,    8 /* Private */,
      10,    0,   67,    2, 0x08,    9 /* Private */,
      11,    0,   68,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QByteArray,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject myTCPclient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_myTCPclient.offsetsAndSizes,
    qt_meta_data_myTCPclient,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_myTCPclient_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<myTCPclient, std::true_type>,
        // method 'polaczono'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rozlaczono'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'odebranoDane'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'wystapilBlad'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'czytajDaneZGniazda'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'obsluzPolaczenie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'obsluzRozlaczenie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void myTCPclient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myTCPclient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->polaczono(); break;
        case 1: _t->rozlaczono(); break;
        case 2: _t->odebranoDane((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 3: _t->wystapilBlad((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->czytajDaneZGniazda(); break;
        case 5: _t->obsluzPolaczenie(); break;
        case 6: _t->obsluzRozlaczenie(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (myTCPclient::*)();
            if (_t _q_method = &myTCPclient::polaczono; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (myTCPclient::*)();
            if (_t _q_method = &myTCPclient::rozlaczono; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (myTCPclient::*)(quint8 , QByteArray );
            if (_t _q_method = &myTCPclient::odebranoDane; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (myTCPclient::*)(QString );
            if (_t _q_method = &myTCPclient::wystapilBlad; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *myTCPclient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myTCPclient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myTCPclient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int myTCPclient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void myTCPclient::polaczono()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void myTCPclient::rozlaczono()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void myTCPclient::odebranoDane(quint8 _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void myTCPclient::wystapilBlad(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
