// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "paymentrequestedinfoobject.h"

PaymentRequestedInfoObject::PaymentRequestedInfoObject(const PaymentRequestedInfo &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_shippingAddress(0),
    m_core(core)
{
    m_shippingAddress = new PostAddressObject(m_core.shippingAddress(), this);
    connect(m_shippingAddress.data(), SIGNAL(coreChanged()), this, SLOT(coreShippingAddressChanged()));
}

PaymentRequestedInfoObject::PaymentRequestedInfoObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_shippingAddress(0),
    m_core()
{
    m_shippingAddress = new PostAddressObject(m_core.shippingAddress(), this);
    connect(m_shippingAddress.data(), SIGNAL(coreChanged()), this, SLOT(coreShippingAddressChanged()));
}

PaymentRequestedInfoObject::~PaymentRequestedInfoObject() {
}

void PaymentRequestedInfoObject::setEmail(const QString &email) {
    if(m_core.email() == email) return;
    m_core.setEmail(email);
    Q_EMIT emailChanged();
    Q_EMIT coreChanged();
}

QString PaymentRequestedInfoObject::email() const {
    return m_core.email();
}

void PaymentRequestedInfoObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 PaymentRequestedInfoObject::flags() const {
    return m_core.flags();
}

void PaymentRequestedInfoObject::setName(const QString &name) {
    if(m_core.name() == name) return;
    m_core.setName(name);
    Q_EMIT nameChanged();
    Q_EMIT coreChanged();
}

QString PaymentRequestedInfoObject::name() const {
    return m_core.name();
}

void PaymentRequestedInfoObject::setPhone(const QString &phone) {
    if(m_core.phone() == phone) return;
    m_core.setPhone(phone);
    Q_EMIT phoneChanged();
    Q_EMIT coreChanged();
}

QString PaymentRequestedInfoObject::phone() const {
    return m_core.phone();
}

void PaymentRequestedInfoObject::setShippingAddress(PostAddressObject* shippingAddress) {
    if(m_shippingAddress == shippingAddress) return;
    if(m_shippingAddress) delete m_shippingAddress;
    m_shippingAddress = shippingAddress;
    if(m_shippingAddress) {
        m_shippingAddress->setParent(this);
        m_core.setShippingAddress(m_shippingAddress->core());
        connect(m_shippingAddress.data(), SIGNAL(coreChanged()), this, SLOT(coreShippingAddressChanged()));
    }
    Q_EMIT shippingAddressChanged();
    Q_EMIT coreChanged();
}

PostAddressObject*  PaymentRequestedInfoObject::shippingAddress() const {
    return m_shippingAddress;
}

PaymentRequestedInfoObject &PaymentRequestedInfoObject::operator =(const PaymentRequestedInfo &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_shippingAddress->setCore(b.shippingAddress());

    Q_EMIT emailChanged();
    Q_EMIT flagsChanged();
    Q_EMIT nameChanged();
    Q_EMIT phoneChanged();
    Q_EMIT shippingAddressChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool PaymentRequestedInfoObject::operator ==(const PaymentRequestedInfo &b) const {
    return m_core == b;
}

void PaymentRequestedInfoObject::setClassType(quint32 classType) {
    PaymentRequestedInfo::PaymentRequestedInfoClassType result;
    switch(classType) {
    case TypePaymentRequestedInfo:
        result = PaymentRequestedInfo::typePaymentRequestedInfo;
        break;
    default:
        result = PaymentRequestedInfo::typePaymentRequestedInfo;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 PaymentRequestedInfoObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case PaymentRequestedInfo::typePaymentRequestedInfo:
        result = TypePaymentRequestedInfo;
        break;
    default:
        result = TypePaymentRequestedInfo;
        break;
    }

    return result;
}

void PaymentRequestedInfoObject::setCore(const PaymentRequestedInfo &core) {
    operator =(core);
}

PaymentRequestedInfo PaymentRequestedInfoObject::core() const {
    return m_core;
}

void PaymentRequestedInfoObject::coreShippingAddressChanged() {
    if(m_core.shippingAddress() == m_shippingAddress->core()) return;
    m_core.setShippingAddress(m_shippingAddress->core());
    Q_EMIT shippingAddressChanged();
    Q_EMIT coreChanged();
}

