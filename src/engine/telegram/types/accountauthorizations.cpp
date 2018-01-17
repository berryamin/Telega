// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "accountauthorizations.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

AccountAuthorizations::AccountAuthorizations(AccountAuthorizationsClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

AccountAuthorizations::AccountAuthorizations(InboundPkt *in) :
    m_classType(typeAccountAuthorizations)
{
    fetch(in);
}

AccountAuthorizations::AccountAuthorizations(const AccountAuthorizations &another) :
    TelegramTypeObject(),
    m_classType(typeAccountAuthorizations)
{
    operator=(another);
}

AccountAuthorizations::AccountAuthorizations(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeAccountAuthorizations)
{
}

AccountAuthorizations::~AccountAuthorizations() {

}

void AccountAuthorizations::setAuthorizations(const QList<Authorization> &authorizations) {
    m_authorizations = authorizations;
}

QList<Authorization> AccountAuthorizations::authorizations() const {
    return m_authorizations;
}

bool AccountAuthorizations::operator ==(const AccountAuthorizations &b) const {
    return m_classType == b.m_classType &&
           m_authorizations == b.m_authorizations;
}

AccountAuthorizations &AccountAuthorizations::operator =(const AccountAuthorizations &b) {
    m_classType = b.m_classType;
    m_authorizations = b.m_authorizations;
    setNull(b.isNull());
    return *this;
}

void AccountAuthorizations::setClassType(AccountAuthorizations::AccountAuthorizationsClassType classType) {
    m_classType = classType;
}

AccountAuthorizations::AccountAuthorizationsClassType AccountAuthorizations::classType() const {
    return m_classType;
}

bool AccountAuthorizations::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAccountAuthorizations: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_authorizations_length = in->fetchInt();
        m_authorizations.clear();
        for (qint32 i = 0; i < m_authorizations_length; i++) {
            Authorization type;
            type.fetch(in);
            m_authorizations.append(type);
        }
        m_classType = static_cast<AccountAuthorizationsClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool AccountAuthorizations::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAccountAuthorizations: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_authorizations.count());
        for (qint32 i = 0; i < m_authorizations.count(); i++) {
            m_authorizations[i].push(out);
        }
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> AccountAuthorizations::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeAccountAuthorizations: {
        result["classType"] = "AccountAuthorizations::typeAccountAuthorizations";
        QList<QVariant> _authorizations;
        //for(const Authorization &m__type: m_authorizations)
        for(int i = 0; i < m_authorizations.size(); ++i) {
            const Authorization &m__type = m_authorizations[i];
            if( !m__type.isNull() ) _authorizations << m__type.toMap();
        }
        result["authorizations"] = _authorizations;
        return result;
    }
        break;

    default:
        return result;
    }
}

AccountAuthorizations AccountAuthorizations::fromMap(const QMap<QString, QVariant> &map) {
    AccountAuthorizations result;
    if(map.value("classType").toString() == "AccountAuthorizations::typeAccountAuthorizations") {
        result.setClassType(typeAccountAuthorizations);
        QList<QVariant> map_authorizations = map["authorizations"].toList();
        QList<Authorization> _authorizations;
        //for(const QVariant &var: map_authorizations)
        for(int i = 0; i < map_authorizations.size(); ++i) {
            const QVariant &var = map_authorizations[i];
            _authorizations << Authorization::fromMap(var.toMap());
        }
        result.setAuthorizations(_authorizations);
        return result;
    }
    return result;
}

AccountAuthorizations AccountAuthorizations::fromJson(const QString &json) {
    return AccountAuthorizations::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray AccountAuthorizations::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const AccountAuthorizations &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case AccountAuthorizations::typeAccountAuthorizations:
        stream << item.authorizations();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, AccountAuthorizations &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<AccountAuthorizations::AccountAuthorizationsClassType>(type));
    switch(type) {
    case AccountAuthorizations::typeAccountAuthorizations: {
        QList<Authorization> m_authorizations;
        stream >> m_authorizations;
        item.setAuthorizations(m_authorizations);
    }
        break;
    }
    return stream;
}

/*
QDebug operator<<(QDebug debug,  const AccountAuthorizations &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.AccountAuthorizations(";
    switch(item.classType()) {
    case AccountAuthorizations::typeAccountAuthorizations:
        debug.nospace() << "classType: typeAccountAuthorizations";
        debug.nospace() << ", authorizations: " << item.authorizations();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/

