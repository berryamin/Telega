// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "shippingoptionobject.h"

ShippingOptionObject::ShippingOptionObject(const ShippingOption &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

ShippingOptionObject::ShippingOptionObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

ShippingOptionObject::~ShippingOptionObject() {
}

void ShippingOptionObject::setId(const QString &id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

QString ShippingOptionObject::id() const {
    return m_core.id();
}

void ShippingOptionObject::setPrices(const QList<LabeledPrice> &prices) {
    if(m_core.prices() == prices) return;
    m_core.setPrices(prices);
    Q_EMIT pricesChanged();
    Q_EMIT coreChanged();
}

QList<LabeledPrice> ShippingOptionObject::prices() const {
    return m_core.prices();
}

void ShippingOptionObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

QString ShippingOptionObject::title() const {
    return m_core.title();
}

ShippingOptionObject &ShippingOptionObject::operator =(const ShippingOption &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT idChanged();
    Q_EMIT pricesChanged();
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ShippingOptionObject::operator ==(const ShippingOption &b) const {
    return m_core == b;
}

void ShippingOptionObject::setClassType(quint32 classType) {
    ShippingOption::ShippingOptionClassType result;
    switch(classType) {
    case TypeShippingOption:
        result = ShippingOption::typeShippingOption;
        break;
    default:
        result = ShippingOption::typeShippingOption;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ShippingOptionObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ShippingOption::typeShippingOption:
        result = TypeShippingOption;
        break;
    default:
        result = TypeShippingOption;
        break;
    }

    return result;
}

void ShippingOptionObject::setCore(const ShippingOption &core) {
    operator =(core);
}

ShippingOption ShippingOptionObject::core() const {
    return m_core;
}

