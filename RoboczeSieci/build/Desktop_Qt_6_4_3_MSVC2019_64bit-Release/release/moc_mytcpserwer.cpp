/****************************************************************************
** Meta object code from reading C++ file 'mytcpserwer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mytcpserwer.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpserwer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_myTCPserwer_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[13];
    char stringdata5[4];
    char stringdata6[5];
    char stringdata7[21];
    char stringdata8[19];
    char stringdata9[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_myTCPserwer_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_myTCPserwer_t qt_meta_stringdata_myTCPserwer = {
    {
        QT_MOC_LITERAL(0, 11),  // "myTCPserwer"
        QT_MOC_LITERAL(12, 16),  // "klientPodlaczony"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 15),  // "klientOdlaczony"
        QT_MOC_LITERAL(46, 12),  // "odebranoDane"
        QT_MOC_LITERAL(59, 3),  // "typ"
        QT_MOC_LITERAL(63, 4),  // "dane"
        QT_MOC_LITERAL(68, 20),  // "obsluzNowePolaczenie"
        QT_MOC_LITERAL(89, 18),  // "czytajDaneZGniazda"
        QT_MOC_LITERAL(108, 24)   // "obsluzRozlaczenieKlienta"
    },
    "myTCPserwer",
    "klientPodlaczony",
    "",
    "klientOdlaczony",
    "odebranoDane",
    "typ",
    "dane",
    "obsluzNowePolaczenie",
    "czytajDaneZGniazda",
    "obsluzRozlaczenieKlienta"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_myTCPserwer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    2,   52,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   57,    2, 0x08,    6 /* Private */,
       8,    0,   58,    2, 0x08,    7 /* Private */,
       9,    0,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QByteArray,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject myTCPserwer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_myTCPserwer.offsetsAndSizes,
    qt_meta_data_myTCPserwer,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_myTCPserwer_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<myTCPserwer, std::true_type>,
        // method 'klientPodlaczony'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'klientOdlaczony'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'odebranoDane'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint8, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'obsluzNowePolaczenie'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'czytajDaneZGniazda'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'obsluzRozlaczenieKlienta'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void myTCPserwer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myTCPserwer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->klientPodlaczony(); break;
        case 1: _t->klientOdlaczony(); break;
        case 2: _t->odebranoDane((*reinterpret_cast< std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 3: _t->obsluzNowePolaczenie(); break;
        case 4: _t->czytajDaneZGniazda(); break;
        case 5: _t->obsluzRozlaczenieKlienta(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (myTCPserwer::*)();
            if (_t _q_method = &myTCPserwer::klientPodlaczony; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (myTCPserwer::*)();
            if (_t _q_method = &myTCPserwer::klientOdlaczony; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (myTCPserwer::*)(quint8 , QByteArray );
            if (_t _q_method = &myTCPserwer::odebranoDane; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *myTCPserwer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myTCPserwer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myTCPserwer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int myTCPserwer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void myTCPserwer::klientPodlaczony()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void myTCPserwer::klientOdlaczony()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void myTCPserwer::odebranoDane(quint8 _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
