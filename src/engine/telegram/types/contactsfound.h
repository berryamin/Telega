// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSFOUND
#define LQTG_TYPE_CONTACTSFOUND

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "chat.h"
#include "peer.h"
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT ContactsFound : public TelegramTypeObject
{
public:
    enum ContactsFoundClassType {
        typeContactsFound = 0x1aa1f784
    };

    ContactsFound(ContactsFoundClassType classType = typeContactsFound, InboundPkt *in = 0);
    ContactsFound(InboundPkt *in);
    ContactsFound(const Null&);
    ContactsFound(const ContactsFound &another);
    virtual ~ContactsFound();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setResults(const QList<Peer> &results);
    QList<Peer> results() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(ContactsFoundClassType classType);
    ContactsFoundClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static ContactsFound fromMap(const QMap<QString, QVariant> &map);
    static ContactsFound fromJson(const QString &json);

    bool operator ==(const ContactsFound &b) const;
    ContactsFound &operator =(const ContactsFound &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<Chat> m_chats;
    QList<Peer> m_results;
    QList<User> m_users;
    ContactsFoundClassType m_classType;
};

Q_DECLARE_METATYPE(ContactsFound)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ContactsFound &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ContactsFound &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const ContactsFound &item);

#endif // LQTG_TYPE_CONTACTSFOUND
