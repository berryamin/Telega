// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "contactscontacts.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

ContactsContacts::ContactsContacts(ContactsContactsClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ContactsContacts::ContactsContacts(InboundPkt *in) :
    m_classType(typeContactsContactsNotModified)
{
    fetch(in);
}

ContactsContacts::ContactsContacts(const ContactsContacts &another) :
    TelegramTypeObject(),
    m_classType(typeContactsContactsNotModified)
{
    operator=(another);
}

ContactsContacts::ContactsContacts(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeContactsContactsNotModified)
{
}

ContactsContacts::~ContactsContacts() {

}

void ContactsContacts::setContacts(const QList<Contact> &contacts) {
    m_contacts = contacts;
}

QList<Contact> ContactsContacts::contacts() const {
    return m_contacts;
}

void ContactsContacts::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> ContactsContacts::users() const {
    return m_users;
}

bool ContactsContacts::operator ==(const ContactsContacts &b) const {
    return m_classType == b.m_classType &&
           m_contacts == b.m_contacts &&
           m_users == b.m_users;
}

ContactsContacts &ContactsContacts::operator =(const ContactsContacts &b) {
    m_classType = b.m_classType;
    m_contacts = b.m_contacts;
    m_users = b.m_users;
    setNull(b.isNull());
    return *this;
}

void ContactsContacts::setClassType(ContactsContacts::ContactsContactsClassType classType) {
    m_classType = classType;
}

ContactsContacts::ContactsContactsClassType ContactsContacts::classType() const {
    return m_classType;
}

bool ContactsContacts::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeContactsContactsNotModified: {
        m_classType = static_cast<ContactsContactsClassType>(x);
        return true;
    }
        break;

    case typeContactsContacts: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_contacts_length = in->fetchInt();
        m_contacts.clear();
        for (qint32 i = 0; i < m_contacts_length; i++) {
            Contact type;
            type.fetch(in);
            m_contacts.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<ContactsContactsClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ContactsContacts::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactsContactsNotModified: {
        return true;
    }
        break;

    case typeContactsContacts: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_contacts.count());
        for (qint32 i = 0; i < m_contacts.count(); i++) {
            m_contacts[i].push(out);
        }
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

QMap<QString, QVariant> ContactsContacts::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeContactsContactsNotModified: {
        result["classType"] = "ContactsContacts::typeContactsContactsNotModified";
        return result;
    }
        break;

    case typeContactsContacts: {
        result["classType"] = "ContactsContacts::typeContactsContacts";
        QList<QVariant> _contacts;
        //for(const Contact &m__type: m_contacts)
        for(int i = 0; i < m_contacts.size(); ++i) {
            const Contact &m__type = m_contacts[i];
            if( !m__type.isNull() ) _contacts << m__type.toMap();
        }
        result["contacts"] = _contacts;
        QList<QVariant> _users;
        //for(const User &m__type: m_users)
        for(int i = 0; i < m_users.size(); ++i) {
            const User &m__type = m_users[i];
            if( !m__type.isNull() ) _users << m__type.toMap();
        }
        result["users"] = _users;
        return result;
    }
        break;

    default:
        return result;
    }
}

ContactsContacts ContactsContacts::fromMap(const QMap<QString, QVariant> &map) {
    ContactsContacts result;
    if(map.value("classType").toString() == "ContactsContacts::typeContactsContactsNotModified") {
        result.setClassType(typeContactsContactsNotModified);
        return result;
    }
    if(map.value("classType").toString() == "ContactsContacts::typeContactsContacts") {
        result.setClassType(typeContactsContacts);
        QList<QVariant> map_contacts = map["contacts"].toList();
        QList<Contact> _contacts;
        //for(const QVariant &var: map_contacts)
        for(int i = 0; i < map_contacts.size(); ++i) {
            const QVariant &var = map_contacts[i];
            _contacts << Contact::fromMap(var.toMap());
        }
        result.setContacts(_contacts);
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        //for(const QVariant &var: map_users)
        for(int i = 0; i < map_users.size(); ++i) {
            const QVariant &var = map_users[i];
            _users << User::fromMap(var.toMap());
        }
        result.setUsers(_users);
        return result;
    }
    return result;
}

ContactsContacts ContactsContacts::fromJson(const QString &json) {
    return ContactsContacts::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray ContactsContacts::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const ContactsContacts &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ContactsContacts::typeContactsContactsNotModified:

        break;
    case ContactsContacts::typeContactsContacts:
        stream << item.contacts();
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, ContactsContacts &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ContactsContacts::ContactsContactsClassType>(type));
    switch(type) {
    case ContactsContacts::typeContactsContactsNotModified: {

    }
        break;
    case ContactsContacts::typeContactsContacts: {
        QList<Contact> m_contacts;
        stream >> m_contacts;
        item.setContacts(m_contacts);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const ContactsContacts &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.ContactsContacts(";
    switch(item.classType()) {
    case ContactsContacts::typeContactsContactsNotModified:
        debug.nospace() << "classType: typeContactsContactsNotModified";
        break;
    case ContactsContacts::typeContactsContacts:
        debug.nospace() << "classType: typeContactsContacts";
        debug.nospace() << ", contacts: " << item.contacts();
        debug.nospace() << ", users: " << item.users();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
