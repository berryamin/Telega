// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELSADMINLOGRESULTS
#define LQTG_TYPE_CHANNELSADMINLOGRESULTS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "chat.h"
#include "channeladminlogevent.h"
#include "user.h"

class LIBQTELEGRAMSHARED_EXPORT ChannelsAdminLogResults : public TelegramTypeObject
{
public:
    enum ChannelsAdminLogResultsClassType {
        typeChannelsAdminLogResults = 0xed8af74d
    };

    ChannelsAdminLogResults(ChannelsAdminLogResultsClassType classType = typeChannelsAdminLogResults, InboundPkt *in = 0);
    ChannelsAdminLogResults(InboundPkt *in);
    ChannelsAdminLogResults(const Null&);
    ChannelsAdminLogResults(const ChannelsAdminLogResults &another);
    virtual ~ChannelsAdminLogResults();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setEvents(const QList<ChannelAdminLogEvent> &events);
    QList<ChannelAdminLogEvent> events() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(ChannelsAdminLogResultsClassType classType);
    ChannelsAdminLogResultsClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static ChannelsAdminLogResults fromMap(const QMap<QString, QVariant> &map);
    static ChannelsAdminLogResults fromJson(const QString &json);

    bool operator ==(const ChannelsAdminLogResults &b) const;
    ChannelsAdminLogResults &operator =(const ChannelsAdminLogResults &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<Chat> m_chats;
    QList<ChannelAdminLogEvent> m_events;
    QList<User> m_users;
    ChannelsAdminLogResultsClassType m_classType;
};

Q_DECLARE_METATYPE(ChannelsAdminLogResults)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const ChannelsAdminLogResults &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, ChannelsAdminLogResults &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const ChannelsAdminLogResults &item);

#endif // LQTG_TYPE_CHANNELSADMINLOGRESULTS