/****************************************************************************
** Meta object code from reading C++ file 'mytcpclient.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mytcpclient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpclient.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11myTCPclientE_t {};
} // unnamed namespace

template <> constexpr inline auto myTCPclient::qt_create_metaobjectdata<qt_meta_tag_ZN11myTCPclientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
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

    QtMocHelpers::UintData qt_methods {
        // Signal 'polaczono'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rozlaczono'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'odebranoDane'
        QtMocHelpers::SignalData<void(quint8, QByteArray)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 5 }, { QMetaType::QByteArray, 6 },
        }}),
        // Signal 'wystapilBlad'
        QtMocHelpers::SignalData<void(QString)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Slot 'czytajDaneZGniazda'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'obsluzPolaczenie'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'obsluzRozlaczenie'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<myTCPclient, qt_meta_tag_ZN11myTCPclientE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject myTCPclient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11myTCPclientE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11myTCPclientE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11myTCPclientE_t>.metaTypes,
    nullptr
} };

void myTCPclient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<myTCPclient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->polaczono(); break;
        case 1: _t->rozlaczono(); break;
        case 2: _t->odebranoDane((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 3: _t->wystapilBlad((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->czytajDaneZGniazda(); break;
        case 5: _t->obsluzPolaczenie(); break;
        case 6: _t->obsluzRozlaczenie(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (myTCPclient::*)()>(_a, &myTCPclient::polaczono, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (myTCPclient::*)()>(_a, &myTCPclient::rozlaczono, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (myTCPclient::*)(quint8 , QByteArray )>(_a, &myTCPclient::odebranoDane, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (myTCPclient::*)(QString )>(_a, &myTCPclient::wystapilBlad, 3))
            return;
    }
}

const QMetaObject *myTCPclient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myTCPclient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11myTCPclientE_t>.strings))
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
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
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
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void myTCPclient::wystapilBlad(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
