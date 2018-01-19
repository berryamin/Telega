// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "authauthorizationobject.h"

AuthAuthorizationObject::AuthAuthorizationObject(const AuthAuthorization &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_user(0),
    m_core(core)
{
    m_user = new UserObject(m_core.user(), this);
    connect(m_user.data(), SIGNAL(coreChanged()), this, SLOT(coreUserChanged()));
}

AuthAuthorizationObject::AuthAuthorizationObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_user(0),
    m_core()
{
    m_user = new UserObject(m_core.user(), this);
    connect(m_user.data(), SIGNAL(coreChanged()), this, SLOT(coreUserChanged()));
}

AuthAuthorizationObject::~AuthAuthorizationObject() {
}

void AuthAuthorizationObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 AuthAuthorizationObject::flags() const {
    return m_core.flags();
}

void AuthAuthorizationObject::setTmpSessions(qint32 tmpSessions) {
    if(m_core.tmpSessions() == tmpSessions) return;
    m_core.setTmpSessions(tmpSessions);
    Q_EMIT tmpSessionsChanged();
    Q_EMIT coreChanged();
}

qint32 AuthAuthorizationObject::tmpSessions() const {
    return m_core.tmpSessions();
}

void AuthAuthorizationObject::setUser(UserObject* user) {
    if(m_user == user) return;
    if(m_user) delete m_user;
    m_user = user;
    if(m_user) {
        m_user->setParent(this);
        m_core.setUser(m_user->core());
        connect(m_user.data(), SIGNAL(coreChanged()), this, SLOT(coreUserChanged()));
    }
    Q_EMIT userChanged();
    Q_EMIT coreChanged();
}

UserObject*  AuthAuthorizationObject::user() const {
    return m_user;
}

AuthAuthorizationObject &AuthAuthorizationObject::operator =(const AuthAuthorization &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_user->setCore(b.user());

    Q_EMIT flagsChanged();
    Q_EMIT tmpSessionsChanged();
    Q_EMIT userChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool AuthAuthorizationObject::operator ==(const AuthAuthorization &b) const {
    return m_core == b;
}

void AuthAuthorizationObject::setClassType(quint32 classType) {
    AuthAuthorization::AuthAuthorizationClassType result;
    switch(classType) {
    case TypeAuthAuthorization:
        result = AuthAuthorization::typeAuthAuthorization;
        break;
    default:
        result = AuthAuthorization::typeAuthAuthorization;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 AuthAuthorizationObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case AuthAuthorization::typeAuthAuthorization:
        result = TypeAuthAuthorization;
        break;
    default:
        result = TypeAuthAuthorization;
        break;
    }

    return result;
}

void AuthAuthorizationObject::setCore(const AuthAuthorization &core) {
    operator =(core);
}

AuthAuthorization AuthAuthorizationObject::core() const {
    return m_core;
}

void AuthAuthorizationObject::coreUserChanged() {
    if(m_core.user() == m_user->core()) return;
    m_core.setUser(m_user->core());
    Q_EMIT userChanged();
    Q_EMIT coreChanged();
}

