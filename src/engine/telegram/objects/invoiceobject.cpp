// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "invoiceobject.h"

InvoiceObject::InvoiceObject(const Invoice &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

InvoiceObject::InvoiceObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

InvoiceObject::~InvoiceObject() {
}

void InvoiceObject::setCurrency(const QString &currency) {
    if(m_core.currency() == currency) return;
    m_core.setCurrency(currency);
    Q_EMIT currencyChanged();
    Q_EMIT coreChanged();
}

QString InvoiceObject::currency() const {
    return m_core.currency();
}

void InvoiceObject::setEmailRequested(bool emailRequested) {
    if(m_core.emailRequested() == emailRequested) return;
    m_core.setEmailRequested(emailRequested);
    Q_EMIT emailRequestedChanged();
    Q_EMIT coreChanged();
}

bool InvoiceObject::emailRequested() const {
    return m_core.emailRequested();
}

void InvoiceObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 InvoiceObject::flags() const {
    return m_core.flags();
}

void InvoiceObject::setFlexible(bool flexible) {
    if(m_core.flexible() == flexible) return;
    m_core.setFlexible(flexible);
    Q_EMIT flexibleChanged();
    Q_EMIT coreChanged();
}

bool InvoiceObject::flexible() const {
    return m_core.flexible();
}

void InvoiceObject::setNameRequested(bool nameRequested) {
    if(m_core.nameRequested() == nameRequested) return;
    m_core.setNameRequested(nameRequested);
    Q_EMIT nameRequestedChanged();
    Q_EMIT coreChanged();
}

bool InvoiceObject::nameRequested() const {
    return m_core.nameRequested();
}

void InvoiceObject::setPhoneRequested(bool phoneRequested) {
    if(m_core.phoneRequested() == phoneRequested) return;
    m_core.setPhoneRequested(phoneRequested);
    Q_EMIT phoneRequestedChanged();
    Q_EMIT coreChanged();
}

bool InvoiceObject::phoneRequested() const {
    return m_core.phoneRequested();
}

void InvoiceObject::setPrices(const QList<LabeledPrice> &prices) {
    if(m_core.prices() == prices) return;
    m_core.setPrices(prices);
    Q_EMIT pricesChanged();
    Q_EMIT coreChanged();
}

QList<LabeledPrice> InvoiceObject::prices() const {
    return m_core.prices();
}

void InvoiceObject::setShippingAddressRequested(bool shippingAddressRequested) {
    if(m_core.shippingAddressRequested() == shippingAddressRequested) return;
    m_core.setShippingAddressRequested(shippingAddressRequested);
    Q_EMIT shippingAddressRequestedChanged();
    Q_EMIT coreChanged();
}

bool InvoiceObject::shippingAddressRequested() const {
    return m_core.shippingAddressRequested();
}

void InvoiceObject::setTest(bool test) {
    if(m_core.test() == test) return;
    m_core.setTest(test);
    Q_EMIT testChanged();
    Q_EMIT coreChanged();
}

bool InvoiceObject::test() const {
    return m_core.test();
}

InvoiceObject &InvoiceObject::operator =(const Invoice &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT currencyChanged();
    Q_EMIT emailRequestedChanged();
    Q_EMIT flagsChanged();
    Q_EMIT flexibleChanged();
    Q_EMIT nameRequestedChanged();
    Q_EMIT phoneRequestedChanged();
    Q_EMIT pricesChanged();
    Q_EMIT shippingAddressRequestedChanged();
    Q_EMIT testChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool InvoiceObject::operator ==(const Invoice &b) const {
    return m_core == b;
}

void InvoiceObject::setClassType(quint32 classType) {
    Invoice::InvoiceClassType result;
    switch(classType) {
    case TypeInvoice:
        result = Invoice::typeInvoice;
        break;
    default:
        result = Invoice::typeInvoice;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 InvoiceObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case Invoice::typeInvoice:
        result = TypeInvoice;
        break;
    default:
        result = TypeInvoice;
        break;
    }

    return result;
}

void InvoiceObject::setCore(const Invoice &core) {
    operator =(core);
}

Invoice InvoiceObject::core() const {
    return m_core;
}

