/****************************************************************************
** Meta object code from reading C++ file 'sieciowka.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sieciowka.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sieciowka.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
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
struct qt_meta_tag_ZN9SieciowkaE_t {};
} // unnamed namespace

template <> constexpr inline auto Sieciowka::qt_create_metaobjectdata<qt_meta_tag_ZN9SieciowkaE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
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

    QtMocHelpers::UintData qt_methods {
        // Signal 'zadaniePolaczenia'
        QtMocHelpers::SignalData<void(QString, quint16)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::UShort, 4 },
        }}),
        // Signal 'zadanieSerwera'
        QtMocHelpers::SignalData<void(quint16)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UShort, 4 },
        }}),
        // Signal 'zadanieRozlaczenia'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'zmianaTrybuTaktowania'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 8 },
        }}),
        // Signal 'zmianaSerializacji'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'on_btnPolacz_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnSerwer_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_btnRozlacz_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Sieciowka, qt_meta_tag_ZN9SieciowkaE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Sieciowka::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SieciowkaE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SieciowkaE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9SieciowkaE_t>.metaTypes,
    nullptr
} };

void Sieciowka::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Sieciowka *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->zadaniePolaczenia((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint16>>(_a[2]))); break;
        case 1: _t->zadanieSerwera((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1]))); break;
        case 2: _t->zadanieRozlaczenia(); break;
        case 3: _t->zmianaTrybuTaktowania((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->zmianaSerializacji((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_btnPolacz_clicked(); break;
        case 6: _t->on_btnSerwer_clicked(); break;
        case 7: _t->on_btnRozlacz_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Sieciowka::*)(QString , quint16 )>(_a, &Sieciowka::zadaniePolaczenia, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Sieciowka::*)(quint16 )>(_a, &Sieciowka::zadanieSerwera, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Sieciowka::*)()>(_a, &Sieciowka::zadanieRozlaczenia, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Sieciowka::*)(bool )>(_a, &Sieciowka::zmianaTrybuTaktowania, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Sieciowka::*)(bool )>(_a, &Sieciowka::zmianaSerializacji, 4))
            return;
    }
}

const QMetaObject *Sieciowka::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sieciowka::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SieciowkaE_t>.strings))
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
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Sieciowka::zadaniePolaczenia(QString _t1, quint16 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void Sieciowka::zadanieSerwera(quint16 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Sieciowka::zadanieRozlaczenia()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Sieciowka::zmianaTrybuTaktowania(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Sieciowka::zmianaSerializacji(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}
QT_WARNING_POP
