// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_NOTIFYPEER
#define LQTG_TYPE_NOTIFYPEER

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include "peer.h"

class LIBQTELEGRAMSHARED_EXPORT NotifyPeer : public TelegramTypeObject
{
public:
    enum NotifyPeerClassType {
        typeNotifyPeer = 0x9fd40bd8,
        typeNotifyUsers = 0xb4c83b4c,
        typeNotifyChats = 0xc007cec3,
        typeNotifyAll = 0x74d07c60
    };

    NotifyPeer(NotifyPeerClassType classType = typeNotifyPeer, InboundPkt *in = 0);
    NotifyPeer(InboundPkt *in);
    NotifyPeer(const Null&);
    NotifyPeer(const NotifyPeer &another);
    virtual ~NotifyPeer();

    void setPeer(const Peer &peer);
    Peer peer() const;

    void setClassType(NotifyPeerClassType classType);
    NotifyPeerClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static NotifyPeer fromMap(const QMap<QString, QVariant> &map);
    static NotifyPeer fromJson(const QString &json);

    bool operator ==(const NotifyPeer &b) const;
    NotifyPeer &operator =(const NotifyPeer &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    Peer m_peer;
    NotifyPeerClassType m_classType;
};

Q_DECLARE_METATYPE(NotifyPeer)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const NotifyPeer &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, NotifyPeer &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const NotifyPeer &item);

#endif // LQTG_TYPE_NOTIFYPEER
