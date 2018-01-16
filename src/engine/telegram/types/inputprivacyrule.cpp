// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputprivacyrule.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputPrivacyRule::InputPrivacyRule(InputPrivacyRuleClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputPrivacyRule::InputPrivacyRule(InboundPkt *in) :
    m_classType(typeInputPrivacyValueAllowContacts)
{
    fetch(in);
}

InputPrivacyRule::InputPrivacyRule(const InputPrivacyRule &another) :
    TelegramTypeObject(),
    m_classType(typeInputPrivacyValueAllowContacts)
{
    operator=(another);
}

InputPrivacyRule::InputPrivacyRule(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeInputPrivacyValueAllowContacts)
{
}

InputPrivacyRule::~InputPrivacyRule() {
    
}

void InputPrivacyRule::setUsers(const QList<InputUser> &users) {
    m_users = users;
}

QList<InputUser> InputPrivacyRule::users() const {
    return m_users;
}

bool InputPrivacyRule::operator ==(const InputPrivacyRule &b) const {
    return m_classType == b.m_classType &&
           m_users == b.m_users;
}

InputPrivacyRule &InputPrivacyRule::operator =(const InputPrivacyRule &b) {
    m_classType = b.m_classType;
    m_users = b.m_users;
    setNull(b.isNull());
    return *this;
}

void InputPrivacyRule::setClassType(InputPrivacyRule::InputPrivacyRuleClassType classType) {
    m_classType = classType;
}

InputPrivacyRule::InputPrivacyRuleClassType InputPrivacyRule::classType() const {
    return m_classType;
}

bool InputPrivacyRule::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputPrivacyValueAllowContacts: {
        m_classType = static_cast<InputPrivacyRuleClassType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueAllowAll: {
        m_classType = static_cast<InputPrivacyRuleClassType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueAllowUsers: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            InputUser type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<InputPrivacyRuleClassType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowContacts: {
        m_classType = static_cast<InputPrivacyRuleClassType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowAll: {
        m_classType = static_cast<InputPrivacyRuleClassType>(x);
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowUsers: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            InputUser type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<InputPrivacyRuleClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputPrivacyRule::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPrivacyValueAllowContacts: {
        return true;
    }
        break;
    
    case typeInputPrivacyValueAllowAll: {
        return true;
    }
        break;
    
    case typeInputPrivacyValueAllowUsers: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowContacts: {
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowAll: {
        return true;
    }
        break;
    
    case typeInputPrivacyValueDisallowUsers: {
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

QMap<QString, QVariant> InputPrivacyRule::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputPrivacyValueAllowContacts: {
        result["classType"] = "InputPrivacyRule::typeInputPrivacyValueAllowContacts";
        return result;
    }
        break;
    
    case typeInputPrivacyValueAllowAll: {
        result["classType"] = "InputPrivacyRule::typeInputPrivacyValueAllowAll";
        return result;
    }
        break;
    
    case typeInputPrivacyValueAllowUsers: {
        result["classType"] = "InputPrivacyRule::typeInputPrivacyValueAllowUsers";
        QList<QVariant> _users;
        for(const InputUser &m__type: m_users)
            if( !m__type.isNull() ) _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    case typeInputPrivacyValueDisallowContacts: {
        result["classType"] = "InputPrivacyRule::typeInputPrivacyValueDisallowContacts";
        return result;
    }
        break;
    
    case typeInputPrivacyValueDisallowAll: {
        result["classType"] = "InputPrivacyRule::typeInputPrivacyValueDisallowAll";
        return result;
    }
        break;
    
    case typeInputPrivacyValueDisallowUsers: {
        result["classType"] = "InputPrivacyRule::typeInputPrivacyValueDisallowUsers";
        QList<QVariant> _users;
        for(const InputUser &m__type: m_users)
            if( !m__type.isNull() ) _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    default:
        return result;
    }
}

InputPrivacyRule InputPrivacyRule::fromMap(const QMap<QString, QVariant> &map) {
    InputPrivacyRule result;
    if(map.value("classType").toString() == "InputPrivacyRule::typeInputPrivacyValueAllowContacts") {
        result.setClassType(typeInputPrivacyValueAllowContacts);
        return result;
    }
    if(map.value("classType").toString() == "InputPrivacyRule::typeInputPrivacyValueAllowAll") {
        result.setClassType(typeInputPrivacyValueAllowAll);
        return result;
    }
    if(map.value("classType").toString() == "InputPrivacyRule::typeInputPrivacyValueAllowUsers") {
        result.setClassType(typeInputPrivacyValueAllowUsers);
        QList<QVariant> map_users = map["users"].toList();
        QList<InputUser> _users;
        for(const QVariant &var: map_users)
            _users << InputUser::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    if(map.value("classType").toString() == "InputPrivacyRule::typeInputPrivacyValueDisallowContacts") {
        result.setClassType(typeInputPrivacyValueDisallowContacts);
        return result;
    }
    if(map.value("classType").toString() == "InputPrivacyRule::typeInputPrivacyValueDisallowAll") {
        result.setClassType(typeInputPrivacyValueDisallowAll);
        return result;
    }
    if(map.value("classType").toString() == "InputPrivacyRule::typeInputPrivacyValueDisallowUsers") {
        result.setClassType(typeInputPrivacyValueDisallowUsers);
        QList<QVariant> map_users = map["users"].toList();
        QList<InputUser> _users;
        for(const QVariant &var: map_users)
            _users << InputUser::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    return result;
}

InputPrivacyRule InputPrivacyRule::fromJson(const QString &json) {
    return InputPrivacyRule::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray InputPrivacyRule::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const InputPrivacyRule &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputPrivacyRule::typeInputPrivacyValueAllowContacts:
        
        break;
    case InputPrivacyRule::typeInputPrivacyValueAllowAll:
        
        break;
    case InputPrivacyRule::typeInputPrivacyValueAllowUsers:
        stream << item.users();
        break;
    case InputPrivacyRule::typeInputPrivacyValueDisallowContacts:
        
        break;
    case InputPrivacyRule::typeInputPrivacyValueDisallowAll:
        
        break;
    case InputPrivacyRule::typeInputPrivacyValueDisallowUsers:
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputPrivacyRule &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputPrivacyRule::InputPrivacyRuleClassType>(type));
    switch(type) {
    case InputPrivacyRule::typeInputPrivacyValueAllowContacts: {
        
    }
        break;
    case InputPrivacyRule::typeInputPrivacyValueAllowAll: {
        
    }
        break;
    case InputPrivacyRule::typeInputPrivacyValueAllowUsers: {
        QList<InputUser> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case InputPrivacyRule::typeInputPrivacyValueDisallowContacts: {
        
    }
        break;
    case InputPrivacyRule::typeInputPrivacyValueDisallowAll: {
        
    }
        break;
    case InputPrivacyRule::typeInputPrivacyValueDisallowUsers: {
        QList<InputUser> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const InputPrivacyRule &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.InputPrivacyRule(";
    switch(item.classType()) {
    case InputPrivacyRule::typeInputPrivacyValueAllowContacts:
        debug.nospace() << "classType: typeInputPrivacyValueAllowContacts";
        break;
    case InputPrivacyRule::typeInputPrivacyValueAllowAll:
        debug.nospace() << "classType: typeInputPrivacyValueAllowAll";
        break;
    case InputPrivacyRule::typeInputPrivacyValueAllowUsers:
        debug.nospace() << "classType: typeInputPrivacyValueAllowUsers";
        debug.nospace() << ", users: " << item.users();
        break;
    case InputPrivacyRule::typeInputPrivacyValueDisallowContacts:
        debug.nospace() << "classType: typeInputPrivacyValueDisallowContacts";
        break;
    case InputPrivacyRule::typeInputPrivacyValueDisallowAll:
        debug.nospace() << "classType: typeInputPrivacyValueDisallowAll";
        break;
    case InputPrivacyRule::typeInputPrivacyValueDisallowUsers:
        debug.nospace() << "classType: typeInputPrivacyValueDisallowUsers";
        debug.nospace() << ", users: " << item.users();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

