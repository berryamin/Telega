// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHATPARTICIPANT
#define LQTG_TYPE_CHATPARTICIPANT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT ChatParticipant : public TelegramTypeObject
{
public:
    enum ChatParticipantClassType {
        typeChatParticipant = 0xc8d7493e,
        typeChatParticipantCreator = 0xda13538a,
        typeChatParticipantAdmin = 0xe2d6e436
    };

    ChatParticipant(ChatParticipantClassType classType = typeChatParticipant, InboundPkt *in = 0);
    ChatParticipant(InboundPkt *in);
    ChatParticipant(const Null&);
    ChatParticipant(const ChatParticipant &another);
    virtual ~ChatParticipant();

    void setDate(qint32 date);
    qint32 date() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ChatParticipantClassType classType);
    ChatParticipantClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static ChatParticipant fromMap(const QMap<QString, QVariant> &map);
    static ChatParticipant fromJson(const QString &json);

    bool operator ==(const ChatParticipant &b) const;
    ChatParticipant &operator =(const ChatParticipant &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_date;
    qint32 m_inviterId;
    qint32 m_userId;
    ChatParticipantClassType m_classType;
};

Q_DECLARE_METATYPE(ChatParticipant)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ChatParticipant &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ChatParticipant &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const ChatParticipant &item);

#endif // LQTG_TYPE_CHATPARTICIPANT
