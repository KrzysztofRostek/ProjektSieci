/****************************************************************************
** Meta object code from reading C++ file 'sieciowka.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../sieciowka.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sieciowka.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Sieciowka_t {
    uint offsetsAndSizes[28];
    char stringdata0[10];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[5];
    char stringdata5[15];
    char stringdata6[19];
    char stringdata7[22];
    char stringdata8[11];
    char stringdata9[19];
    char stringdata10[7];
    char stringdata11[21];
    char stringdata12[21];
    char stringdata13[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Sieciowka_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Sieciowka_t qt_meta_stringdata_Sieciowka = {
    {
        QT_MOC_LITERAL(0, 9),  // "Sieciowka"
        QT_MOC_LITERAL(10, 17),  // "zadaniePolaczenia"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 2),  // "ip"
        QT_MOC_LITERAL(32, 4),  // "port"
        QT_MOC_LITERAL(37, 14),  // "zadanieSerwera"
        QT_MOC_LITERAL(52, 18),  // "zadanieRozlaczenia"
        QT_MOC_LITERAL(71, 21),  // "zmianaTrybuTaktowania"
        QT_MOC_LITERAL(93, 10),  // "obustronne"
        QT_MOC_LITERAL(104, 18),  // "zmianaSerializacji"
        QT_MOC_LITERAL(123, 6),  // "isJson"
        QT_MOC_LITERAL(130, 20),  // "on_btnPolacz_clicked"
        QT_MOC_LITERAL(151, 20),  // "on_btnSerwer_clicked"
        QT_MOC_LITERAL(172, 21)   // "on_btnRozlacz_clicked"
    },
    "Sieciowka",
    "zadaniePolaczenia",
    "",
    "ip",
    "port",
    "zadanieSerwera",
    "zadanieRozlaczenia",
    "zmianaTrybuTaktowania",
    "obustronne",
    "zmianaSerializacji",
    "isJson",
    "on_btnPolacz_clicked",
    "on_btnSerwer_clicked",
    "on_btnRozlacz_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Sieciowka[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       5,    1,   67,    2, 0x06,    4 /* Public */,
       6,    0,   70,    2, 0x06,    6 /* Public */,
       7,    1,   71,    2, 0x06,    7 /* Public */,
       9,    1,   74,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   77,    2, 0x08,   11 /* Private */,
      12,    0,   78,    2, 0x08,   12 /* Private */,
      13,    0,   79,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::UShort,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Sieciowka::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Sieciowka.offsetsAndSizes,
    qt_meta_data_Sieciowka,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Sieciowka_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Sieciowka, std::true_type>,
        // method 'zadaniePolaczenia'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'zadanieSerwera'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'zadanieRozlaczenia'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zmianaTrybuTaktowania'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'zmianaSerializacji'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_btnPolacz_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSerwer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnRozlacz_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Sieciowka::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Sieciowka *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->zadaniePolaczenia((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2]))); break;
        case 1: _t->zadanieSerwera((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1]))); break;
        case 2: _t->zadanieRozlaczenia(); break;
        case 3: _t->zmianaTrybuTaktowania((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->zmianaSerializacji((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_btnPolacz_clicked(); break;
        case 6: _t->on_btnSerwer_clicked(); break;
        case 7: _t->on_btnRozlacz_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Sieciowka::*)(QString , quint16 );
            if (_t _q_method = &Sieciowka::zadaniePolaczenia; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Sieciowka::*)(quint16 );
            if (_t _q_method = &Sieciowka::zadanieSerwera; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Sieciowka::*)();
            if (_t _q_method = &Sieciowka::zadanieRozlaczenia; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Sieciowka::*)(bool );
            if (_t _q_method = &Sieciowka::zmianaTrybuTaktowania; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Sieciowka::*)(bool );
            if (_t _q_method = &Sieciowka::zmianaSerializacji; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *Sieciowka::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sieciowka::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Sieciowka.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Sieciowka::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Sieciowka::zadaniePolaczenia(QString _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Sieciowka::zadanieSerwera(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Sieciowka::zadanieRozlaczenia()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Sieciowka::zmianaTrybuTaktowania(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Sieciowka::zmianaSerializacji(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
