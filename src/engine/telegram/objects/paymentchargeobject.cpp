// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "paymentchargeobject.h"

PaymentChargeObject::PaymentChargeObject(const PaymentCharge &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

PaymentChargeObject::PaymentChargeObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

PaymentChargeObject::~PaymentChargeObject() {
}

void PaymentChargeObject::setId(const QString &id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

QString PaymentChargeObject::id() const {
    return m_core.id();
}

void PaymentChargeObject::setProviderChargeId(const QString &providerChargeId) {
    if(m_core.providerChargeId() == providerChargeId) return;
    m_core.setProviderChargeId(providerChargeId);
    Q_EMIT providerChargeIdChanged();
    Q_EMIT coreChanged();
}

QString PaymentChargeObject::providerChargeId() const {
    return m_core.providerChargeId();
}

PaymentChargeObject &PaymentChargeObject::operator =(const PaymentCharge &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT idChanged();
    Q_EMIT providerChargeIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool PaymentChargeObject::operator ==(const PaymentCharge &b) const {
    return m_core == b;
}

void PaymentChargeObject::setClassType(quint32 classType) {
    PaymentCharge::PaymentChargeClassType result;
    switch(classType) {
    case TypePaymentCharge:
        result = PaymentCharge::typePaymentCharge;
        break;
    default:
        result = PaymentCharge::typePaymentCharge;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 PaymentChargeObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case PaymentCharge::typePaymentCharge:
        result = TypePaymentCharge;
        break;
    default:
        result = TypePaymentCharge;
        break;
    }

    return result;
}

void PaymentChargeObject::setCore(const PaymentCharge &core) {
    operator =(core);
}

PaymentCharge PaymentChargeObject::core() const {
    return m_core;
}

