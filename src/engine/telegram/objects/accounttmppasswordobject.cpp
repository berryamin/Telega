// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "accounttmppasswordobject.h"

AccountTmpPasswordObject::AccountTmpPasswordObject(const AccountTmpPassword &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

AccountTmpPasswordObject::AccountTmpPasswordObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

AccountTmpPasswordObject::~AccountTmpPasswordObject() {
}

void AccountTmpPasswordObject::setTmpPassword(const QByteArray &tmpPassword) {
    if(m_core.tmpPassword() == tmpPassword) return;
    m_core.setTmpPassword(tmpPassword);
    Q_EMIT tmpPasswordChanged();
    Q_EMIT coreChanged();
}

QByteArray AccountTmpPasswordObject::tmpPassword() const {
    return m_core.tmpPassword();
}

void AccountTmpPasswordObject::setValidUntil(qint32 validUntil) {
    if(m_core.validUntil() == validUntil) return;
    m_core.setValidUntil(validUntil);
    Q_EMIT validUntilChanged();
    Q_EMIT coreChanged();
}

qint32 AccountTmpPasswordObject::validUntil() const {
    return m_core.validUntil();
}

AccountTmpPasswordObject &AccountTmpPasswordObject::operator =(const AccountTmpPassword &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT tmpPasswordChanged();
    Q_EMIT validUntilChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool AccountTmpPasswordObject::operator ==(const AccountTmpPassword &b) const {
    return m_core == b;
}

void AccountTmpPasswordObject::setClassType(quint32 classType) {
    AccountTmpPassword::AccountTmpPasswordClassType result;
    switch(classType) {
    case TypeAccountTmpPassword:
        result = AccountTmpPassword::typeAccountTmpPassword;
        break;
    default:
        result = AccountTmpPassword::typeAccountTmpPassword;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 AccountTmpPasswordObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AccountTmpPassword::typeAccountTmpPassword:
        result = TypeAccountTmpPassword;
        break;
    default:
        result = TypeAccountTmpPassword;
        break;
    }

    return result;
}

void AccountTmpPasswordObject::setCore(const AccountTmpPassword &core) {
    operator =(core);
}

AccountTmpPassword AccountTmpPasswordObject::core() const {
    return m_core;
}

