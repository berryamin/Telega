// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "phonephonecall.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

PhonePhoneCall::PhonePhoneCall(PhonePhoneCallClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

PhonePhoneCall::PhonePhoneCall(InboundPkt *in) :
    m_classType(typePhonePhoneCall)
{
    fetch(in);
}

PhonePhoneCall::PhonePhoneCall(const PhonePhoneCall &another) :
    TelegramTypeObject(),
    m_classType(typePhonePhoneCall)
{
    operator=(another);
}

PhonePhoneCall::PhonePhoneCall(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typePhonePhoneCall)
{
}

PhonePhoneCall::~PhonePhoneCall() {
    
}

void PhonePhoneCall::setPhoneCall(const PhoneCall &phoneCall) {
    m_phoneCall = phoneCall;
}

PhoneCall PhonePhoneCall::phoneCall() const {
    return m_phoneCall;
}

void PhonePhoneCall::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> PhonePhoneCall::users() const {
    return m_users;
}

bool PhonePhoneCall::operator ==(const PhonePhoneCall &b) const {
    return m_classType == b.m_classType &&
           m_phoneCall == b.m_phoneCall &&
           m_users == b.m_users;
}

PhonePhoneCall &PhonePhoneCall::operator =(const PhonePhoneCall &b) {
    m_classType = b.m_classType;
    m_phoneCall = b.m_phoneCall;
    m_users = b.m_users;
    setNull(b.isNull());
    return *this;
}

void PhonePhoneCall::setClassType(PhonePhoneCall::PhonePhoneCallClassType classType) {
    m_classType = classType;
}

PhonePhoneCall::PhonePhoneCallClassType PhonePhoneCall::classType() const {
    return m_classType;
}

bool PhonePhoneCall::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePhonePhoneCall: {
        m_phoneCall.fetch(in);
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<PhonePhoneCallClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool PhonePhoneCall::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePhonePhoneCall: {
        m_phoneCall.push(out);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> PhonePhoneCall::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typePhonePhoneCall: {
        result["classType"] = "PhonePhoneCall::typePhonePhoneCall";
        if( !m_phoneCall.isNull() ) result["phoneCall"] = m_phoneCall.toMap();
        QList<QVariant> _users;
        for(const User &m__type: m_users)
            if( !m__type.isNull() ) _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    default:
        return result;
    }
}

PhonePhoneCall PhonePhoneCall::fromMap(const QMap<QString, QVariant> &map) {
    PhonePhoneCall result;
    if(map.value("classType").toString() == "PhonePhoneCall::typePhonePhoneCall") {
        result.setClassType(typePhonePhoneCall);
        QVariant _phoneCall_var = map.value("phoneCall");
        if( !_phoneCall_var.isNull() )
            result.setPhoneCall( PhoneCall::fromMap(_phoneCall_var.toMap()) );
        
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        for(const QVariant &var: map_users)
            _users << User::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    return result;
}

PhonePhoneCall PhonePhoneCall::fromJson(const QString &json) {
    return PhonePhoneCall::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray PhonePhoneCall::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const PhonePhoneCall &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case PhonePhoneCall::typePhonePhoneCall:
        stream << item.phoneCall();
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, PhonePhoneCall &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<PhonePhoneCall::PhonePhoneCallClassType>(type));
    switch(type) {
    case PhonePhoneCall::typePhonePhoneCall: {
        PhoneCall m_phone_call;
        stream >> m_phone_call;
        item.setPhoneCall(m_phone_call);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const PhonePhoneCall &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.PhonePhoneCall(";
    switch(item.classType()) {
    case PhonePhoneCall::typePhonePhoneCall:
        debug.nospace() << "classType: typePhonePhoneCall";
        debug.nospace() << ", phoneCall: " << item.phoneCall();
        debug.nospace() << ", users: " << item.users();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

