// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "peer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

Peer::Peer(PeerClassType classType, InboundPkt *in) :
    m_channelId(0),
    m_chatId(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Peer::Peer(InboundPkt *in) :
    m_channelId(0),
    m_chatId(0),
    m_userId(0),
    m_classType(typePeerUser)
{
    fetch(in);
}

Peer::Peer(const Peer &another) :
    TelegramTypeObject(),
    m_channelId(0),
    m_chatId(0),
    m_userId(0),
    m_classType(typePeerUser)
{
    operator=(another);
}

Peer::Peer(const Null &null) :
    TelegramTypeObject(null),
    m_channelId(0),
    m_chatId(0),
    m_userId(0),
    m_classType(typePeerUser)
{
}

Peer::~Peer() {

}

void Peer::setChannelId(qint32 channelId) {
    m_channelId = channelId;
}

qint32 Peer::channelId() const {
    return m_channelId;
}

void Peer::setChatId(qint32 chatId) {
    m_chatId = chatId;
}

qint32 Peer::chatId() const {
    return m_chatId;
}

void Peer::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 Peer::userId() const {
    return m_userId;
}

bool Peer::operator ==(const Peer &b) const {
    return m_classType == b.m_classType &&
           m_channelId == b.m_channelId &&
           m_chatId == b.m_chatId &&
           m_userId == b.m_userId;
}

Peer &Peer::operator =(const Peer &b) {
    m_classType = b.m_classType;
    m_channelId = b.m_channelId;
    m_chatId = b.m_chatId;
    m_userId = b.m_userId;
    setNull(b.isNull());
    return *this;
}

void Peer::setClassType(Peer::PeerClassType classType) {
    m_classType = classType;
}

Peer::PeerClassType Peer::classType() const {
    return m_classType;
}

bool Peer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePeerUser: {
        m_userId = in->fetchInt();
        m_classType = static_cast<PeerClassType>(x);
        return true;
    }
        break;

    case typePeerChat: {
        m_chatId = in->fetchInt();
        m_classType = static_cast<PeerClassType>(x);
        return true;
    }
        break;

    case typePeerChannel: {
        m_channelId = in->fetchInt();
        m_classType = static_cast<PeerClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Peer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePeerUser: {
        out->appendInt(m_userId);
        return true;
    }
        break;

    case typePeerChat: {
        out->appendInt(m_chatId);
        return true;
    }
        break;

    case typePeerChannel: {
        out->appendInt(m_channelId);
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> Peer::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typePeerUser: {
        result["classType"] = "Peer::typePeerUser";
        if( userId() ) result["userId"] = QString::number(userId());
        return result;
    }
        break;

    case typePeerChat: {
        result["classType"] = "Peer::typePeerChat";
        if( chatId() ) result["chatId"] = QString::number(chatId());
        return result;
    }
        break;

    case typePeerChannel: {
        result["classType"] = "Peer::typePeerChannel";
        if( channelId() ) result["channelId"] = QString::number(channelId());
        return result;
    }
        break;

    default:
        return result;
    }
}

Peer Peer::fromMap(const QMap<QString, QVariant> &map) {
    Peer result;
    if(map.value("classType").toString() == "Peer::typePeerUser") {
        result.setClassType(typePeerUser);
        QVariant _userId_var = map.value("userId");
        if( !_userId_var.isNull() ) {
            _userId_var.convert( QVariant::nameToType("qint32") );
            result.setUserId( _userId_var.value<qint32>() );
        }

        return result;
    }
    if(map.value("classType").toString() == "Peer::typePeerChat") {
        result.setClassType(typePeerChat);
        QVariant _chatId_var = map.value("chatId");
        if( !_chatId_var.isNull() ) {
            _chatId_var.convert( QVariant::nameToType("qint32") );
            result.setChatId( _chatId_var.value<qint32>() );
        }

        return result;
    }
    if(map.value("classType").toString() == "Peer::typePeerChannel") {
        result.setClassType(typePeerChannel);
        QVariant _channelId_var = map.value("channelId");
        if( !_channelId_var.isNull() ) {
            _channelId_var.convert( QVariant::nameToType("qint32") );
            result.setChannelId( _channelId_var.value<qint32>() );
        }

        return result;
    }
    return result;
}

Peer Peer::fromJson(const QString &json) {
    return Peer::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray Peer::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const Peer &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case Peer::typePeerUser:
        stream << item.userId();
        break;
    case Peer::typePeerChat:
        stream << item.chatId();
        break;
    case Peer::typePeerChannel:
        stream << item.channelId();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Peer &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<Peer::PeerClassType>(type));
    switch(type) {
    case Peer::typePeerUser: {
        qint32 m_user_id;
        stream >> m_user_id;
        item.setUserId(m_user_id);
    }
        break;
    case Peer::typePeerChat: {
        qint32 m_chat_id;
        stream >> m_chat_id;
        item.setChatId(m_chat_id);
    }
        break;
    case Peer::typePeerChannel: {
        qint32 m_channel_id;
        stream >> m_channel_id;
        item.setChannelId(m_channel_id);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const Peer &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.Peer(";
    switch(item.classType()) {
    case Peer::typePeerUser:
        debug.nospace() << "classType: typePeerUser";
        debug.nospace() << ", userId: " << item.userId();
        break;
    case Peer::typePeerChat:
        debug.nospace() << "classType: typePeerChat";
        debug.nospace() << ", chatId: " << item.chatId();
        break;
    case Peer::typePeerChannel:
        debug.nospace() << "classType: typePeerChannel";
        debug.nospace() << ", channelId: " << item.channelId();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
