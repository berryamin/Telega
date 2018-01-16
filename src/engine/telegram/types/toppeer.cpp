// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "toppeer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

TopPeer::TopPeer(TopPeerClassType classType, InboundPkt *in) :
    m_rating(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

TopPeer::TopPeer(InboundPkt *in) :
    m_rating(0),
    m_classType(typeTopPeer)
{
    fetch(in);
}

TopPeer::TopPeer(const TopPeer &another) :
    TelegramTypeObject(),
    m_rating(0),
    m_classType(typeTopPeer)
{
    operator=(another);
}

TopPeer::TopPeer(const Null &null) :
    TelegramTypeObject(null),
    m_rating(0),
    m_classType(typeTopPeer)
{
}

TopPeer::~TopPeer() {
    
}

void TopPeer::setPeer(const Peer &peer) {
    m_peer = peer;
}

Peer TopPeer::peer() const {
    return m_peer;
}

void TopPeer::setRating(qreal rating) {
    m_rating = rating;
}

qreal TopPeer::rating() const {
    return m_rating;
}

bool TopPeer::operator ==(const TopPeer &b) const {
    return m_classType == b.m_classType &&
           m_peer == b.m_peer &&
           m_rating == b.m_rating;
}

TopPeer &TopPeer::operator =(const TopPeer &b) {
    m_classType = b.m_classType;
    m_peer = b.m_peer;
    m_rating = b.m_rating;
    setNull(b.isNull());
    return *this;
}

void TopPeer::setClassType(TopPeer::TopPeerClassType classType) {
    m_classType = classType;
}

TopPeer::TopPeerClassType TopPeer::classType() const {
    return m_classType;
}

bool TopPeer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeTopPeer: {
        m_peer.fetch(in);
        m_rating = in->fetchDouble();
        m_classType = static_cast<TopPeerClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool TopPeer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeTopPeer: {
        m_peer.push(out);
        out->appendDouble(m_rating);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> TopPeer::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeTopPeer: {
        result["classType"] = "TopPeer::typeTopPeer";
        if( !m_peer.isNull() ) result["peer"] = m_peer.toMap();
        if( rating() ) result["rating"] = QString::number(rating());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

TopPeer TopPeer::fromMap(const QMap<QString, QVariant> &map) {
    TopPeer result;
    if(map.value("classType").toString() == "TopPeer::typeTopPeer") {
        result.setClassType(typeTopPeer);
        QVariant _peer_var = map.value("peer");
        if( !_peer_var.isNull() )
            result.setPeer( Peer::fromMap(_peer_var.toMap()) );
        
        QVariant _rating_var = map.value("rating");
        if( !_rating_var.isNull() ) {
            _rating_var.convert( QVariant::nameToType("qreal") );
            result.setRating( _rating_var.value<qreal>() );
        }
        
        return result;
    }
    return result;
}

TopPeer TopPeer::fromJson(const QString &json) {
    return TopPeer::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray TopPeer::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const TopPeer &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case TopPeer::typeTopPeer:
        stream << item.peer();
        stream << item.rating();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TopPeer &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<TopPeer::TopPeerClassType>(type));
    switch(type) {
    case TopPeer::typeTopPeer: {
        Peer m_peer;
        stream >> m_peer;
        item.setPeer(m_peer);
        qreal m_rating;
        stream >> m_rating;
        item.setRating(m_rating);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const TopPeer &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.TopPeer(";
    switch(item.classType()) {
    case TopPeer::typeTopPeer:
        debug.nospace() << "classType: typeTopPeer";
        debug.nospace() << ", peer: " << item.peer();
        debug.nospace() << ", rating: " << item.rating();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

