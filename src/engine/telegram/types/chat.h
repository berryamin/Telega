// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHAT
#define LQTG_TYPE_CHAT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include "channeladminrights.h"
#include "channelbannedrights.h"
#include "inputchannel.h"
#include "chatphoto.h"
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT Chat : public TelegramTypeObject
{
public:
    enum ChatClassType {
        typeChatEmpty = 0x9ba2d800,
        typeChat = 0xd91cdd54,
        typeChatForbidden = 0x7328bdb,
        typeChannel = 0xcb44b1c,
        typeChannelForbidden = 0x289da732
    };

    Chat(ChatClassType classType = typeChatEmpty, InboundPkt *in = 0);
    Chat(InboundPkt *in);
    Chat(const Null&);
    Chat(const Chat &another);
    virtual ~Chat();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setAdmin(bool admin);
    bool admin() const;

    void setAdminRights(const ChannelAdminRights &adminRights);
    ChannelAdminRights adminRights() const;

    void setAdminsEnabled(bool adminsEnabled);
    bool adminsEnabled() const;

    void setBannedRights(const ChannelBannedRights &bannedRights);
    ChannelBannedRights bannedRights() const;

    void setBroadcast(bool broadcast);
    bool broadcast() const;

    void setCreator(bool creator);
    bool creator() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDeactivated(bool deactivated);
    bool deactivated() const;

    void setDemocracy(bool democracy);
    bool democracy() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint32 id);
    qint32 id() const;

    void setKicked(bool kicked);
    bool kicked() const;

    void setLeft(bool left);
    bool left() const;

    void setMegagroup(bool megagroup);
    bool megagroup() const;

    void setMigratedTo(const InputChannel &migratedTo);
    InputChannel migratedTo() const;

    void setMin(bool min);
    bool min() const;

    void setParticipantsCount(qint32 participantsCount);
    qint32 participantsCount() const;

    void setPhoto(const ChatPhoto &photo);
    ChatPhoto photo() const;

    void setRestricted(bool restricted);
    bool restricted() const;

    void setRestrictionReason(const QString &restrictionReason);
    QString restrictionReason() const;

    void setSignatures(bool signatures);
    bool signatures() const;

    void setTitle(const QString &title);
    QString title() const;

    void setUntilDate(qint32 untilDate);
    qint32 untilDate() const;

    void setUsername(const QString &username);
    QString username() const;

    void setVerified(bool verified);
    bool verified() const;

    void setVersion(qint32 version);
    qint32 version() const;

    void setClassType(ChatClassType classType);
    ChatClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static Chat fromMap(const QMap<QString, QVariant> &map);
    static Chat fromJson(const QString &json);

    bool operator ==(const Chat &b) const;
    Chat &operator =(const Chat &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_accessHash;
    ChannelAdminRights m_adminRights;
    ChannelBannedRights m_bannedRights;
    qint32 m_date;
    qint32 m_flags;
    qint32 m_id;
    InputChannel m_migratedTo;
    qint32 m_participantsCount;
    ChatPhoto m_photo;
    QString m_restrictionReason;
    QString m_title;
    qint32 m_untilDate;
    QString m_username;
    qint32 m_version;
    ChatClassType m_classType;
};

Q_DECLARE_METATYPE(Chat)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Chat &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Chat &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const Chat &item);

#endif // LQTG_TYPE_CHAT
