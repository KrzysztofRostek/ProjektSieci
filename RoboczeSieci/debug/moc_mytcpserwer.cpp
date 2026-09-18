/****************************************************************************
** Meta object code from reading C++ file 'mytcpserwer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mytcpserwer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytcpserwer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11myTCPserwerE_t {};
} // unnamed namespace

template <> constexpr inline auto myTCPserwer::qt_create_metaobjectdata<qt_meta_tag_ZN11myTCPserwerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
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

    QtMocHelpers::UintData qt_methods {
        // Signal 'klientPodlaczony'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'klientOdlaczony'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'odebranoDane'
        QtMocHelpers::SignalData<void(quint8, QByteArray)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UChar, 5 }, { QMetaType::QByteArray, 6 },
        }}),
        // Slot 'obsluzNowePolaczenie'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'czytajDaneZGniazda'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'obsluzRozlaczenieKlienta'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<myTCPserwer, qt_meta_tag_ZN11myTCPserwerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject myTCPserwer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11myTCPserwerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11myTCPserwerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11myTCPserwerE_t>.metaTypes,
    nullptr
} };

void myTCPserwer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<myTCPserwer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->klientPodlaczony(); break;
        case 1: _t->klientOdlaczony(); break;
        case 2: _t->odebranoDane((*reinterpret_cast<std::add_pointer_t<quint8>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 3: _t->obsluzNowePolaczenie(); break;
        case 4: _t->czytajDaneZGniazda(); break;
        case 5: _t->obsluzRozlaczenieKlienta(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (myTCPserwer::*)()>(_a, &myTCPserwer::klientPodlaczony, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (myTCPserwer::*)()>(_a, &myTCPserwer::klientOdlaczony, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (myTCPserwer::*)(quint8 , QByteArray )>(_a, &myTCPserwer::odebranoDane, 2))
            return;
    }
}

const QMetaObject *myTCPserwer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myTCPserwer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11myTCPserwerE_t>.strings))
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
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
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
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
QT_WARNING_POP
