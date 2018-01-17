// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "contactsimportedcontacts.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

ContactsImportedContacts::ContactsImportedContacts(ContactsImportedContactsClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ContactsImportedContacts::ContactsImportedContacts(InboundPkt *in) :
    m_classType(typeContactsImportedContacts)
{
    fetch(in);
}

ContactsImportedContacts::ContactsImportedContacts(const ContactsImportedContacts &another) :
    TelegramTypeObject(),
    m_classType(typeContactsImportedContacts)
{
    operator=(another);
}

ContactsImportedContacts::ContactsImportedContacts(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeContactsImportedContacts)
{
}

ContactsImportedContacts::~ContactsImportedContacts() {

}

void ContactsImportedContacts::setImported(const QList<ImportedContact> &imported) {
    m_imported = imported;
}

QList<ImportedContact> ContactsImportedContacts::imported() const {
    return m_imported;
}

void ContactsImportedContacts::setRetryContacts(const QList<qint64> &retryContacts) {
    m_retryContacts = retryContacts;
}

QList<qint64> ContactsImportedContacts::retryContacts() const {
    return m_retryContacts;
}

void ContactsImportedContacts::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> ContactsImportedContacts::users() const {
    return m_users;
}

bool ContactsImportedContacts::operator ==(const ContactsImportedContacts &b) const {
    return m_classType == b.m_classType &&
           m_imported == b.m_imported &&
           m_retryContacts == b.m_retryContacts &&
           m_users == b.m_users;
}

ContactsImportedContacts &ContactsImportedContacts::operator =(const ContactsImportedContacts &b) {
    m_classType = b.m_classType;
    m_imported = b.m_imported;
    m_retryContacts = b.m_retryContacts;
    m_users = b.m_users;
    setNull(b.isNull());
    return *this;
}

void ContactsImportedContacts::setClassType(ContactsImportedContacts::ContactsImportedContactsClassType classType) {
    m_classType = classType;
}

ContactsImportedContacts::ContactsImportedContactsClassType ContactsImportedContacts::classType() const {
    return m_classType;
}

bool ContactsImportedContacts::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeContactsImportedContacts: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_imported_length = in->fetchInt();
        m_imported.clear();
        for (qint32 i = 0; i < m_imported_length; i++) {
            ImportedContact type;
            type.fetch(in);
            m_imported.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_retryContacts_length = in->fetchInt();
        m_retryContacts.clear();
        for (qint32 i = 0; i < m_retryContacts_length; i++) {
            qint64 type;
            type = in->fetchLong();
            m_retryContacts.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<ContactsImportedContactsClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ContactsImportedContacts::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactsImportedContacts: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_imported.count());
        for (qint32 i = 0; i < m_imported.count(); i++) {
            m_imported[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_retryContacts.count());
        for (qint32 i = 0; i < m_retryContacts.count(); i++) {
            out->appendLong(m_retryContacts[i]);
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

QMap<QString, QVariant> ContactsImportedContacts::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeContactsImportedContacts: {
        result["classType"] = "ContactsImportedContacts::typeContactsImportedContacts";
        QList<QVariant> _imported;
        //for(const ImportedContact &m__type: m_imported)
        for(int i = 0; i < m_imported.size(); ++i) {
            const ImportedContact &m__type = m_imported[i];
            if( !m__type.isNull() ) _imported << m__type.toMap();
        }
        result["imported"] = _imported;
        QList<QVariant> _retryContacts;
        //for(const qint64 &m__type: m_retryContacts)
        for(int i = 0; i < m_retryContacts.size(); ++i) {
            const qint64 &m__type = m_retryContacts[i];
            _retryContacts << QVariant::fromValue<qint64>(m__type);
        }
        result["retryContacts"] = _retryContacts;
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

ContactsImportedContacts ContactsImportedContacts::fromMap(const QMap<QString, QVariant> &map) {
    ContactsImportedContacts result;
    if(map.value("classType").toString() == "ContactsImportedContacts::typeContactsImportedContacts") {
        result.setClassType(typeContactsImportedContacts);
        QList<QVariant> map_imported = map["imported"].toList();
        QList<ImportedContact> _imported;
        //for(const QVariant &var: map_imported)
        for(int i = 0; i < map_imported.size(); ++i) {
            const QVariant &var = map_imported[i];
            _imported << ImportedContact::fromMap(var.toMap());
        }
        result.setImported(_imported);
        QList<QVariant> map_retryContacts = map["retryContacts"].toList();
        QList<qint64> _retryContacts;
        //for(const QVariant &var: map_retryContacts)
        for(int i = 0; i < map_retryContacts.size(); ++i) {
            const QVariant &var = map_retryContacts[i];
            _retryContacts << var.value<qint64>();
        }
        result.setRetryContacts(_retryContacts);
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

ContactsImportedContacts ContactsImportedContacts::fromJson(const QString &json) {
    return ContactsImportedContacts::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray ContactsImportedContacts::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const ContactsImportedContacts &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ContactsImportedContacts::typeContactsImportedContacts:
        stream << item.imported();
        stream << item.retryContacts();
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, ContactsImportedContacts &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ContactsImportedContacts::ContactsImportedContactsClassType>(type));
    switch(type) {
    case ContactsImportedContacts::typeContactsImportedContacts: {
        QList<ImportedContact> m_imported;
        stream >> m_imported;
        item.setImported(m_imported);
        QList<qint64> m_retry_contacts;
        stream >> m_retry_contacts;
        item.setRetryContacts(m_retry_contacts);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const ContactsImportedContacts &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.ContactsImportedContacts(";
    switch(item.classType()) {
    case ContactsImportedContacts::typeContactsImportedContacts:
        debug.nospace() << "classType: typeContactsImportedContacts";
        debug.nospace() << ", imported: " << item.imported();
        debug.nospace() << ", retryContacts: " << item.retryContacts();
        debug.nospace() << ", users: " << item.users();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
