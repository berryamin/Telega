// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "accountpasswordobject.h"

AccountPasswordObject::AccountPasswordObject(const AccountPassword &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

AccountPasswordObject::AccountPasswordObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

AccountPasswordObject::~AccountPasswordObject() {
}

void AccountPasswordObject::setCurrentSalt(const QByteArray &currentSalt) {
    if(m_core.currentSalt() == currentSalt) return;
    m_core.setCurrentSalt(currentSalt);
    Q_EMIT currentSaltChanged();
    Q_EMIT coreChanged();
}

QByteArray AccountPasswordObject::currentSalt() const {
    return m_core.currentSalt();
}

void AccountPasswordObject::setEmailUnconfirmedPattern(const QString &emailUnconfirmedPattern) {
    if(m_core.emailUnconfirmedPattern() == emailUnconfirmedPattern) return;
    m_core.setEmailUnconfirmedPattern(emailUnconfirmedPattern);
    Q_EMIT emailUnconfirmedPatternChanged();
    Q_EMIT coreChanged();
}

QString AccountPasswordObject::emailUnconfirmedPattern() const {
    return m_core.emailUnconfirmedPattern();
}

void AccountPasswordObject::setHasRecovery(bool hasRecovery) {
    if(m_core.hasRecovery() == hasRecovery) return;
    m_core.setHasRecovery(hasRecovery);
    Q_EMIT hasRecoveryChanged();
    Q_EMIT coreChanged();
}

bool AccountPasswordObject::hasRecovery() const {
    return m_core.hasRecovery();
}

void AccountPasswordObject::setHint(const QString &hint) {
    if(m_core.hint() == hint) return;
    m_core.setHint(hint);
    Q_EMIT hintChanged();
    Q_EMIT coreChanged();
}

QString AccountPasswordObject::hint() const {
    return m_core.hint();
}

void AccountPasswordObject::setNewSalt(const QByteArray &newSalt) {
    if(m_core.newSalt() == newSalt) return;
    m_core.setNewSalt(newSalt);
    Q_EMIT newSaltChanged();
    Q_EMIT coreChanged();
}

QByteArray AccountPasswordObject::newSalt() const {
    return m_core.newSalt();
}

AccountPasswordObject &AccountPasswordObject::operator =(const AccountPassword &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT currentSaltChanged();
    Q_EMIT emailUnconfirmedPatternChanged();
    Q_EMIT hasRecoveryChanged();
    Q_EMIT hintChanged();
    Q_EMIT newSaltChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool AccountPasswordObject::operator ==(const AccountPassword &b) const {
    return m_core == b;
}

void AccountPasswordObject::setClassType(quint32 classType) {
    AccountPassword::AccountPasswordClassType result;
    switch(classType) {
    case TypeAccountNoPassword:
        result = AccountPassword::typeAccountNoPassword;
        break;
    case TypeAccountPassword:
        result = AccountPassword::typeAccountPassword;
        break;
    default:
        result = AccountPassword::typeAccountNoPassword;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 AccountPasswordObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AccountPassword::typeAccountNoPassword:
        result = TypeAccountNoPassword;
        break;
    case AccountPassword::typeAccountPassword:
        result = TypeAccountPassword;
        break;
    default:
        result = TypeAccountNoPassword;
        break;
    }

    return result;
}

void AccountPasswordObject::setCore(const AccountPassword &core) {
    operator =(core);
}

AccountPassword AccountPasswordObject::core() const {
    return m_core;
}

