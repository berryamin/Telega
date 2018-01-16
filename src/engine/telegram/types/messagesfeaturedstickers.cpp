// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesfeaturedstickers.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessagesFeaturedStickers::MessagesFeaturedStickers(MessagesFeaturedStickersClassType classType, InboundPkt *in) :
    m_hash(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesFeaturedStickers::MessagesFeaturedStickers(InboundPkt *in) :
    m_hash(0),
    m_classType(typeMessagesFeaturedStickersNotModified)
{
    fetch(in);
}

MessagesFeaturedStickers::MessagesFeaturedStickers(const MessagesFeaturedStickers &another) :
    TelegramTypeObject(),
    m_hash(0),
    m_classType(typeMessagesFeaturedStickersNotModified)
{
    operator=(another);
}

MessagesFeaturedStickers::MessagesFeaturedStickers(const Null &null) :
    TelegramTypeObject(null),
    m_hash(0),
    m_classType(typeMessagesFeaturedStickersNotModified)
{
}

MessagesFeaturedStickers::~MessagesFeaturedStickers() {
    
}

void MessagesFeaturedStickers::setHash(qint32 hash) {
    m_hash = hash;
}

qint32 MessagesFeaturedStickers::hash() const {
    return m_hash;
}

void MessagesFeaturedStickers::setSets(const QList<StickerSetCovered> &sets) {
    m_sets = sets;
}

QList<StickerSetCovered> MessagesFeaturedStickers::sets() const {
    return m_sets;
}

void MessagesFeaturedStickers::setUnread(const QList<qint64> &unread) {
    m_unread = unread;
}

QList<qint64> MessagesFeaturedStickers::unread() const {
    return m_unread;
}

bool MessagesFeaturedStickers::operator ==(const MessagesFeaturedStickers &b) const {
    return m_classType == b.m_classType &&
           m_hash == b.m_hash &&
           m_sets == b.m_sets &&
           m_unread == b.m_unread;
}

MessagesFeaturedStickers &MessagesFeaturedStickers::operator =(const MessagesFeaturedStickers &b) {
    m_classType = b.m_classType;
    m_hash = b.m_hash;
    m_sets = b.m_sets;
    m_unread = b.m_unread;
    setNull(b.isNull());
    return *this;
}

void MessagesFeaturedStickers::setClassType(MessagesFeaturedStickers::MessagesFeaturedStickersClassType classType) {
    m_classType = classType;
}

MessagesFeaturedStickers::MessagesFeaturedStickersClassType MessagesFeaturedStickers::classType() const {
    return m_classType;
}

bool MessagesFeaturedStickers::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesFeaturedStickersNotModified: {
        m_classType = static_cast<MessagesFeaturedStickersClassType>(x);
        return true;
    }
        break;
    
    case typeMessagesFeaturedStickers: {
        m_hash = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_sets_length = in->fetchInt();
        m_sets.clear();
        for (qint32 i = 0; i < m_sets_length; i++) {
            StickerSetCovered type;
            type.fetch(in);
            m_sets.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_unread_length = in->fetchInt();
        m_unread.clear();
        for (qint32 i = 0; i < m_unread_length; i++) {
            qint64 type;
            type = in->fetchLong();
            m_unread.append(type);
        }
        m_classType = static_cast<MessagesFeaturedStickersClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesFeaturedStickers::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesFeaturedStickersNotModified: {
        return true;
    }
        break;
    
    case typeMessagesFeaturedStickers: {
        out->appendInt(m_hash);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_sets.count());
        for (qint32 i = 0; i < m_sets.count(); i++) {
            m_sets[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_unread.count());
        for (qint32 i = 0; i < m_unread.count(); i++) {
            out->appendLong(m_unread[i]);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> MessagesFeaturedStickers::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessagesFeaturedStickersNotModified: {
        result["classType"] = "MessagesFeaturedStickers::typeMessagesFeaturedStickersNotModified";
        return result;
    }
        break;
    
    case typeMessagesFeaturedStickers: {
        result["classType"] = "MessagesFeaturedStickers::typeMessagesFeaturedStickers";
        if( hash() ) result["hash"] = QString::number(hash());
        QList<QVariant> _sets;
        for(const StickerSetCovered &m__type: m_sets)
            if( !m__type.isNull() ) _sets << m__type.toMap();
        result["sets"] = _sets;
        QList<QVariant> _unread;
        for(const qint64 &m__type: m_unread)
            _unread << QVariant::fromValue<qint64>(m__type);
        result["unread"] = _unread;
        return result;
    }
        break;
    
    default:
        return result;
    }
}

MessagesFeaturedStickers MessagesFeaturedStickers::fromMap(const QMap<QString, QVariant> &map) {
    MessagesFeaturedStickers result;
    if(map.value("classType").toString() == "MessagesFeaturedStickers::typeMessagesFeaturedStickersNotModified") {
        result.setClassType(typeMessagesFeaturedStickersNotModified);
        return result;
    }
    if(map.value("classType").toString() == "MessagesFeaturedStickers::typeMessagesFeaturedStickers") {
        result.setClassType(typeMessagesFeaturedStickers);
        QVariant _hash_var = map.value("hash");
        if( !_hash_var.isNull() ) {
            _hash_var.convert( QVariant::nameToType("qint32") );
            result.setHash( _hash_var.value<qint32>() );
        }
        
        QList<QVariant> map_sets = map["sets"].toList();
        QList<StickerSetCovered> _sets;
        for(const QVariant &var: map_sets)
            _sets << StickerSetCovered::fromMap(var.toMap());
        result.setSets(_sets);
        QList<QVariant> map_unread = map["unread"].toList();
        QList<qint64> _unread;
        for(const QVariant &var: map_unread)
            _unread << var.value<qint64>();;
        result.setUnread(_unread);
        return result;
    }
    return result;
}

MessagesFeaturedStickers MessagesFeaturedStickers::fromJson(const QString &json) {
    return MessagesFeaturedStickers::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray MessagesFeaturedStickers::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const MessagesFeaturedStickers &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesFeaturedStickers::typeMessagesFeaturedStickersNotModified:
        
        break;
    case MessagesFeaturedStickers::typeMessagesFeaturedStickers:
        stream << item.hash();
        stream << item.sets();
        stream << item.unread();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessagesFeaturedStickers &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesFeaturedStickers::MessagesFeaturedStickersClassType>(type));
    switch(type) {
    case MessagesFeaturedStickers::typeMessagesFeaturedStickersNotModified: {
        
    }
        break;
    case MessagesFeaturedStickers::typeMessagesFeaturedStickers: {
        qint32 m_hash;
        stream >> m_hash;
        item.setHash(m_hash);
        QList<StickerSetCovered> m_sets;
        stream >> m_sets;
        item.setSets(m_sets);
        QList<qint64> m_unread;
        stream >> m_unread;
        item.setUnread(m_unread);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const MessagesFeaturedStickers &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.MessagesFeaturedStickers(";
    switch(item.classType()) {
    case MessagesFeaturedStickers::typeMessagesFeaturedStickersNotModified:
        debug.nospace() << "classType: typeMessagesFeaturedStickersNotModified";
        break;
    case MessagesFeaturedStickers::typeMessagesFeaturedStickers:
        debug.nospace() << "classType: typeMessagesFeaturedStickers";
        debug.nospace() << ", hash: " << item.hash();
        debug.nospace() << ", sets: " << item.sets();
        debug.nospace() << ", unread: " << item.unread();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

