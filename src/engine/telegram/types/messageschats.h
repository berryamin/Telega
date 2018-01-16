// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESCHATS
#define LQTG_TYPE_MESSAGESCHATS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "chat.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT MessagesChats : public TelegramTypeObject
{
public:
    enum MessagesChatsClassType {
        typeMessagesChats = 0x64ff9fd5,
        typeMessagesChatsSlice = 0x9cd81144
    };

    MessagesChats(MessagesChatsClassType classType = typeMessagesChats, InboundPkt *in = 0);
    MessagesChats(InboundPkt *in);
    MessagesChats(const Null&);
    MessagesChats(const MessagesChats &another);
    virtual ~MessagesChats();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setCount(qint32 count);
    qint32 count() const;

    void setClassType(MessagesChatsClassType classType);
    MessagesChatsClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static MessagesChats fromMap(const QMap<QString, QVariant> &map);
    static MessagesChats fromJson(const QString &json);

    bool operator ==(const MessagesChats &b) const;
    MessagesChats &operator =(const MessagesChats &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<Chat> m_chats;
    qint32 m_count;
    MessagesChatsClassType m_classType;
};

Q_DECLARE_METATYPE(MessagesChats)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessagesChats &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessagesChats &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const MessagesChats &item);

#endif // LQTG_TYPE_MESSAGESCHATS