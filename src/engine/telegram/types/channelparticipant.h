// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELPARTICIPANT
#define LQTG_TYPE_CHANNELPARTICIPANT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include "channeladminrights.h"
#include "channelbannedrights.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT ChannelParticipant : public TelegramTypeObject
{
public:
    enum ChannelParticipantClassType {
        typeChannelParticipant = 0x15ebac1d,
        typeChannelParticipantSelf = 0xa3289a6d,
        typeChannelParticipantCreator = 0xe3e2e1f9,
        typeChannelParticipantAdmin = 0xa82fa898,
        typeChannelParticipantBanned = 0x222c1886
    };

    ChannelParticipant(ChannelParticipantClassType classType = typeChannelParticipant, InboundPkt *in = 0);
    ChannelParticipant(InboundPkt *in);
    ChannelParticipant(const Null&);
    ChannelParticipant(const ChannelParticipant &another);
    virtual ~ChannelParticipant();

    void setAdminRights(const ChannelAdminRights &adminRights);
    ChannelAdminRights adminRights() const;

    void setBannedRights(const ChannelBannedRights &bannedRights);
    ChannelBannedRights bannedRights() const;

    void setCanEdit(bool canEdit);
    bool canEdit() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setKickedBy(qint32 kickedBy);
    qint32 kickedBy() const;

    void setLeft(bool left);
    bool left() const;

    void setPromotedBy(qint32 promotedBy);
    qint32 promotedBy() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ChannelParticipantClassType classType);
    ChannelParticipantClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static ChannelParticipant fromMap(const QMap<QString, QVariant> &map);
    static ChannelParticipant fromJson(const QString &json);

    bool operator ==(const ChannelParticipant &b) const;
    ChannelParticipant &operator =(const ChannelParticipant &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    ChannelAdminRights m_adminRights;
    ChannelBannedRights m_bannedRights;
    qint32 m_date;
    qint32 m_flags;
    qint32 m_inviterId;
    qint32 m_kickedBy;
    qint32 m_promotedBy;
    qint32 m_userId;
    ChannelParticipantClassType m_classType;
};

Q_DECLARE_METATYPE(ChannelParticipant)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ChannelParticipant &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ChannelParticipant &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const ChannelParticipant &item);

#endif // LQTG_TYPE_CHANNELPARTICIPANT
