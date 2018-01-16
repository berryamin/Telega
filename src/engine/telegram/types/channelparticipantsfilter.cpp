// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "channelparticipantsfilter.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

ChannelParticipantsFilter::ChannelParticipantsFilter(ChannelParticipantsFilterClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

ChannelParticipantsFilter::ChannelParticipantsFilter(InboundPkt *in) :
    m_classType(typeChannelParticipantsRecent)
{
    fetch(in);
}

ChannelParticipantsFilter::ChannelParticipantsFilter(const ChannelParticipantsFilter &another) :
    TelegramTypeObject(),
    m_classType(typeChannelParticipantsRecent)
{
    operator=(another);
}

ChannelParticipantsFilter::ChannelParticipantsFilter(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeChannelParticipantsRecent)
{
}

ChannelParticipantsFilter::~ChannelParticipantsFilter() {
    
}

void ChannelParticipantsFilter::setQ(const QString &q) {
    m_q = q;
}

QString ChannelParticipantsFilter::q() const {
    return m_q;
}

bool ChannelParticipantsFilter::operator ==(const ChannelParticipantsFilter &b) const {
    return m_classType == b.m_classType &&
           m_q == b.m_q;
}

ChannelParticipantsFilter &ChannelParticipantsFilter::operator =(const ChannelParticipantsFilter &b) {
    m_classType = b.m_classType;
    m_q = b.m_q;
    setNull(b.isNull());
    return *this;
}

void ChannelParticipantsFilter::setClassType(ChannelParticipantsFilter::ChannelParticipantsFilterClassType classType) {
    m_classType = classType;
}

ChannelParticipantsFilter::ChannelParticipantsFilterClassType ChannelParticipantsFilter::classType() const {
    return m_classType;
}

bool ChannelParticipantsFilter::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChannelParticipantsRecent: {
        m_classType = static_cast<ChannelParticipantsFilterClassType>(x);
        return true;
    }
        break;
    
    case typeChannelParticipantsAdmins: {
        m_classType = static_cast<ChannelParticipantsFilterClassType>(x);
        return true;
    }
        break;
    
    case typeChannelParticipantsKicked: {
        m_q = in->fetchQString();
        m_classType = static_cast<ChannelParticipantsFilterClassType>(x);
        return true;
    }
        break;
    
    case typeChannelParticipantsBots: {
        m_classType = static_cast<ChannelParticipantsFilterClassType>(x);
        return true;
    }
        break;
    
    case typeChannelParticipantsBanned: {
        m_q = in->fetchQString();
        m_classType = static_cast<ChannelParticipantsFilterClassType>(x);
        return true;
    }
        break;
    
    case typeChannelParticipantsSearch: {
        m_q = in->fetchQString();
        m_classType = static_cast<ChannelParticipantsFilterClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ChannelParticipantsFilter::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChannelParticipantsRecent: {
        return true;
    }
        break;
    
    case typeChannelParticipantsAdmins: {
        return true;
    }
        break;
    
    case typeChannelParticipantsKicked: {
        out->appendQString(m_q);
        return true;
    }
        break;
    
    case typeChannelParticipantsBots: {
        return true;
    }
        break;
    
    case typeChannelParticipantsBanned: {
        out->appendQString(m_q);
        return true;
    }
        break;
    
    case typeChannelParticipantsSearch: {
        out->appendQString(m_q);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> ChannelParticipantsFilter::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeChannelParticipantsRecent: {
        result["classType"] = "ChannelParticipantsFilter::typeChannelParticipantsRecent";
        return result;
    }
        break;
    
    case typeChannelParticipantsAdmins: {
        result["classType"] = "ChannelParticipantsFilter::typeChannelParticipantsAdmins";
        return result;
    }
        break;
    
    case typeChannelParticipantsKicked: {
        result["classType"] = "ChannelParticipantsFilter::typeChannelParticipantsKicked";
        if( !m_q.isEmpty() ) result["q"] = QVariant::fromValue<QString>(m_q);
        return result;
    }
        break;
    
    case typeChannelParticipantsBots: {
        result["classType"] = "ChannelParticipantsFilter::typeChannelParticipantsBots";
        return result;
    }
        break;
    
    case typeChannelParticipantsBanned: {
        result["classType"] = "ChannelParticipantsFilter::typeChannelParticipantsBanned";
        if( !m_q.isEmpty() ) result["q"] = QVariant::fromValue<QString>(m_q);
        return result;
    }
        break;
    
    case typeChannelParticipantsSearch: {
        result["classType"] = "ChannelParticipantsFilter::typeChannelParticipantsSearch";
        if( !m_q.isEmpty() ) result["q"] = QVariant::fromValue<QString>(m_q);
        return result;
    }
        break;
    
    default:
        return result;
    }
}

ChannelParticipantsFilter ChannelParticipantsFilter::fromMap(const QMap<QString, QVariant> &map) {
    ChannelParticipantsFilter result;
    if(map.value("classType").toString() == "ChannelParticipantsFilter::typeChannelParticipantsRecent") {
        result.setClassType(typeChannelParticipantsRecent);
        return result;
    }
    if(map.value("classType").toString() == "ChannelParticipantsFilter::typeChannelParticipantsAdmins") {
        result.setClassType(typeChannelParticipantsAdmins);
        return result;
    }
    if(map.value("classType").toString() == "ChannelParticipantsFilter::typeChannelParticipantsKicked") {
        result.setClassType(typeChannelParticipantsKicked);
        QVariant _q_var = map.value("q");
        if( !_q_var.isNull() ) {
            _q_var.convert( QVariant::nameToType("QString") );
            result.setQ( _q_var.value<QString>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "ChannelParticipantsFilter::typeChannelParticipantsBots") {
        result.setClassType(typeChannelParticipantsBots);
        return result;
    }
    if(map.value("classType").toString() == "ChannelParticipantsFilter::typeChannelParticipantsBanned") {
        result.setClassType(typeChannelParticipantsBanned);
        QVariant _q_var = map.value("q");
        if( !_q_var.isNull() ) {
            _q_var.convert( QVariant::nameToType("QString") );
            result.setQ( _q_var.value<QString>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "ChannelParticipantsFilter::typeChannelParticipantsSearch") {
        result.setClassType(typeChannelParticipantsSearch);
        QVariant _q_var = map.value("q");
        if( !_q_var.isNull() ) {
            _q_var.convert( QVariant::nameToType("QString") );
            result.setQ( _q_var.value<QString>() );
        }
        
        return result;
    }
    return result;
}

ChannelParticipantsFilter ChannelParticipantsFilter::fromJson(const QString &json) {
    return ChannelParticipantsFilter::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray ChannelParticipantsFilter::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const ChannelParticipantsFilter &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ChannelParticipantsFilter::typeChannelParticipantsRecent:
        
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsAdmins:
        
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsKicked:
        stream << item.q();
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsBots:
        
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsBanned:
        stream << item.q();
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsSearch:
        stream << item.q();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, ChannelParticipantsFilter &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ChannelParticipantsFilter::ChannelParticipantsFilterClassType>(type));
    switch(type) {
    case ChannelParticipantsFilter::typeChannelParticipantsRecent: {
        
    }
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsAdmins: {
        
    }
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsKicked: {
        QString m_q;
        stream >> m_q;
        item.setQ(m_q);
    }
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsBots: {
        
    }
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsBanned: {
        QString m_q;
        stream >> m_q;
        item.setQ(m_q);
    }
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsSearch: {
        QString m_q;
        stream >> m_q;
        item.setQ(m_q);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const ChannelParticipantsFilter &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.ChannelParticipantsFilter(";
    switch(item.classType()) {
    case ChannelParticipantsFilter::typeChannelParticipantsRecent:
        debug.nospace() << "classType: typeChannelParticipantsRecent";
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsAdmins:
        debug.nospace() << "classType: typeChannelParticipantsAdmins";
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsKicked:
        debug.nospace() << "classType: typeChannelParticipantsKicked";
        debug.nospace() << ", q: " << item.q();
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsBots:
        debug.nospace() << "classType: typeChannelParticipantsBots";
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsBanned:
        debug.nospace() << "classType: typeChannelParticipantsBanned";
        debug.nospace() << ", q: " << item.q();
        break;
    case ChannelParticipantsFilter::typeChannelParticipantsSearch:
        debug.nospace() << "classType: typeChannelParticipantsSearch";
        debug.nospace() << ", q: " << item.q();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

