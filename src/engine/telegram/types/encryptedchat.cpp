// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "encryptedchat.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

EncryptedChat::EncryptedChat(EncryptedChatClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_adminId(0),
    m_date(0),
    m_id(0),
    m_keyFingerprint(0),
    m_participantId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

EncryptedChat::EncryptedChat(InboundPkt *in) :
    m_accessHash(0),
    m_adminId(0),
    m_date(0),
    m_id(0),
    m_keyFingerprint(0),
    m_participantId(0),
    m_classType(typeEncryptedChatEmpty)
{
    fetch(in);
}

EncryptedChat::EncryptedChat(const EncryptedChat &another) :
    TelegramTypeObject(),
    m_accessHash(0),
    m_adminId(0),
    m_date(0),
    m_id(0),
    m_keyFingerprint(0),
    m_participantId(0),
    m_classType(typeEncryptedChatEmpty)
{
    operator=(another);
}

EncryptedChat::EncryptedChat(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_adminId(0),
    m_date(0),
    m_id(0),
    m_keyFingerprint(0),
    m_participantId(0),
    m_classType(typeEncryptedChatEmpty)
{
}

EncryptedChat::~EncryptedChat() {
    
}

void EncryptedChat::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 EncryptedChat::accessHash() const {
    return m_accessHash;
}

void EncryptedChat::setAdminId(qint32 adminId) {
    m_adminId = adminId;
}

qint32 EncryptedChat::adminId() const {
    return m_adminId;
}

void EncryptedChat::setDate(qint32 date) {
    m_date = date;
}

qint32 EncryptedChat::date() const {
    return m_date;
}

void EncryptedChat::setGA(const QByteArray &gA) {
    m_gA = gA;
}

QByteArray EncryptedChat::gA() const {
    return m_gA;
}

void EncryptedChat::setGAOrB(const QByteArray &gAOrB) {
    m_gAOrB = gAOrB;
}

QByteArray EncryptedChat::gAOrB() const {
    return m_gAOrB;
}

void EncryptedChat::setId(qint32 id) {
    m_id = id;
}

qint32 EncryptedChat::id() const {
    return m_id;
}

void EncryptedChat::setKeyFingerprint(qint64 keyFingerprint) {
    m_keyFingerprint = keyFingerprint;
}

qint64 EncryptedChat::keyFingerprint() const {
    return m_keyFingerprint;
}

void EncryptedChat::setParticipantId(qint32 participantId) {
    m_participantId = participantId;
}

qint32 EncryptedChat::participantId() const {
    return m_participantId;
}

bool EncryptedChat::operator ==(const EncryptedChat &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_adminId == b.m_adminId &&
           m_date == b.m_date &&
           m_gA == b.m_gA &&
           m_gAOrB == b.m_gAOrB &&
           m_id == b.m_id &&
           m_keyFingerprint == b.m_keyFingerprint &&
           m_participantId == b.m_participantId;
}

EncryptedChat &EncryptedChat::operator =(const EncryptedChat &b) {
    m_classType = b.m_classType;
    m_accessHash = b.m_accessHash;
    m_adminId = b.m_adminId;
    m_date = b.m_date;
    m_gA = b.m_gA;
    m_gAOrB = b.m_gAOrB;
    m_id = b.m_id;
    m_keyFingerprint = b.m_keyFingerprint;
    m_participantId = b.m_participantId;
    setNull(b.isNull());
    return *this;
}

void EncryptedChat::setClassType(EncryptedChat::EncryptedChatClassType classType) {
    m_classType = classType;
}

EncryptedChat::EncryptedChatClassType EncryptedChat::classType() const {
    return m_classType;
}

bool EncryptedChat::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeEncryptedChatEmpty: {
        m_id = in->fetchInt();
        m_classType = static_cast<EncryptedChatClassType>(x);
        return true;
    }
        break;
    
    case typeEncryptedChatWaiting: {
        m_id = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_date = in->fetchInt();
        m_adminId = in->fetchInt();
        m_participantId = in->fetchInt();
        m_classType = static_cast<EncryptedChatClassType>(x);
        return true;
    }
        break;
    
    case typeEncryptedChatRequested: {
        m_id = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_date = in->fetchInt();
        m_adminId = in->fetchInt();
        m_participantId = in->fetchInt();
        m_gA = in->fetchBytes();
        m_classType = static_cast<EncryptedChatClassType>(x);
        return true;
    }
        break;
    
    case typeEncryptedChat: {
        m_id = in->fetchInt();
        m_accessHash = in->fetchLong();
        m_date = in->fetchInt();
        m_adminId = in->fetchInt();
        m_participantId = in->fetchInt();
        m_gAOrB = in->fetchBytes();
        m_keyFingerprint = in->fetchLong();
        m_classType = static_cast<EncryptedChatClassType>(x);
        return true;
    }
        break;
    
    case typeEncryptedChatDiscarded: {
        m_id = in->fetchInt();
        m_classType = static_cast<EncryptedChatClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool EncryptedChat::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeEncryptedChatEmpty: {
        out->appendInt(m_id);
        return true;
    }
        break;
    
    case typeEncryptedChatWaiting: {
        out->appendInt(m_id);
        out->appendLong(m_accessHash);
        out->appendInt(m_date);
        out->appendInt(m_adminId);
        out->appendInt(m_participantId);
        return true;
    }
        break;
    
    case typeEncryptedChatRequested: {
        out->appendInt(m_id);
        out->appendLong(m_accessHash);
        out->appendInt(m_date);
        out->appendInt(m_adminId);
        out->appendInt(m_participantId);
        out->appendBytes(m_gA);
        return true;
    }
        break;
    
    case typeEncryptedChat: {
        out->appendInt(m_id);
        out->appendLong(m_accessHash);
        out->appendInt(m_date);
        out->appendInt(m_adminId);
        out->appendInt(m_participantId);
        out->appendBytes(m_gAOrB);
        out->appendLong(m_keyFingerprint);
        return true;
    }
        break;
    
    case typeEncryptedChatDiscarded: {
        out->appendInt(m_id);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> EncryptedChat::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeEncryptedChatEmpty: {
        result["classType"] = "EncryptedChat::typeEncryptedChatEmpty";
        if( id() ) result["id"] = QString::number(id());
        return result;
    }
        break;
    
    case typeEncryptedChatWaiting: {
        result["classType"] = "EncryptedChat::typeEncryptedChatWaiting";
        if( id() ) result["id"] = QString::number(id());
        if( accessHash() ) result["accessHash"] = QString::number(accessHash());
        if( date() ) result["date"] = QString::number(date());
        if( adminId() ) result["adminId"] = QString::number(adminId());
        if( participantId() ) result["participantId"] = QString::number(participantId());
        return result;
    }
        break;
    
    case typeEncryptedChatRequested: {
        result["classType"] = "EncryptedChat::typeEncryptedChatRequested";
        if( id() ) result["id"] = QString::number(id());
        if( accessHash() ) result["accessHash"] = QString::number(accessHash());
        if( date() ) result["date"] = QString::number(date());
        if( adminId() ) result["adminId"] = QString::number(adminId());
        if( participantId() ) result["participantId"] = QString::number(participantId());
        if( !m_gA.isEmpty() ) result["gA"] = QVariant::fromValue<QByteArray>(m_gA);
        return result;
    }
        break;
    
    case typeEncryptedChat: {
        result["classType"] = "EncryptedChat::typeEncryptedChat";
        if( id() ) result["id"] = QString::number(id());
        if( accessHash() ) result["accessHash"] = QString::number(accessHash());
        if( date() ) result["date"] = QString::number(date());
        if( adminId() ) result["adminId"] = QString::number(adminId());
        if( participantId() ) result["participantId"] = QString::number(participantId());
        if( !m_gAOrB.isEmpty() ) result["gAOrB"] = QVariant::fromValue<QByteArray>(m_gAOrB);
        if( keyFingerprint() ) result["keyFingerprint"] = QString::number(keyFingerprint());
        return result;
    }
        break;
    
    case typeEncryptedChatDiscarded: {
        result["classType"] = "EncryptedChat::typeEncryptedChatDiscarded";
        if( id() ) result["id"] = QString::number(id());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

EncryptedChat EncryptedChat::fromMap(const QMap<QString, QVariant> &map) {
    EncryptedChat result;
    if(map.value("classType").toString() == "EncryptedChat::typeEncryptedChatEmpty") {
        result.setClassType(typeEncryptedChatEmpty);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "EncryptedChat::typeEncryptedChatWaiting") {
        result.setClassType(typeEncryptedChatWaiting);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }
        
        QVariant _accessHash_var = map.value("accessHash");
        if( !_accessHash_var.isNull() ) {
            _accessHash_var.convert( QVariant::nameToType("qint64") );
            result.setAccessHash( _accessHash_var.value<qint64>() );
        }
        
        QVariant _date_var = map.value("date");
        if( !_date_var.isNull() ) {
            _date_var.convert( QVariant::nameToType("qint32") );
            result.setDate( _date_var.value<qint32>() );
        }
        
        QVariant _adminId_var = map.value("adminId");
        if( !_adminId_var.isNull() ) {
            _adminId_var.convert( QVariant::nameToType("qint32") );
            result.setAdminId( _adminId_var.value<qint32>() );
        }
        
        QVariant _participantId_var = map.value("participantId");
        if( !_participantId_var.isNull() ) {
            _participantId_var.convert( QVariant::nameToType("qint32") );
            result.setParticipantId( _participantId_var.value<qint32>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "EncryptedChat::typeEncryptedChatRequested") {
        result.setClassType(typeEncryptedChatRequested);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }
        
        QVariant _accessHash_var = map.value("accessHash");
        if( !_accessHash_var.isNull() ) {
            _accessHash_var.convert( QVariant::nameToType("qint64") );
            result.setAccessHash( _accessHash_var.value<qint64>() );
        }
        
        QVariant _date_var = map.value("date");
        if( !_date_var.isNull() ) {
            _date_var.convert( QVariant::nameToType("qint32") );
            result.setDate( _date_var.value<qint32>() );
        }
        
        QVariant _adminId_var = map.value("adminId");
        if( !_adminId_var.isNull() ) {
            _adminId_var.convert( QVariant::nameToType("qint32") );
            result.setAdminId( _adminId_var.value<qint32>() );
        }
        
        QVariant _participantId_var = map.value("participantId");
        if( !_participantId_var.isNull() ) {
            _participantId_var.convert( QVariant::nameToType("qint32") );
            result.setParticipantId( _participantId_var.value<qint32>() );
        }
        
        QVariant _gA_var = map.value("gA");
        if( !_gA_var.isNull() ) {
            _gA_var.convert( QVariant::nameToType("QByteArray") );
            result.setGA( _gA_var.value<QByteArray>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "EncryptedChat::typeEncryptedChat") {
        result.setClassType(typeEncryptedChat);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }
        
        QVariant _accessHash_var = map.value("accessHash");
        if( !_accessHash_var.isNull() ) {
            _accessHash_var.convert( QVariant::nameToType("qint64") );
            result.setAccessHash( _accessHash_var.value<qint64>() );
        }
        
        QVariant _date_var = map.value("date");
        if( !_date_var.isNull() ) {
            _date_var.convert( QVariant::nameToType("qint32") );
            result.setDate( _date_var.value<qint32>() );
        }
        
        QVariant _adminId_var = map.value("adminId");
        if( !_adminId_var.isNull() ) {
            _adminId_var.convert( QVariant::nameToType("qint32") );
            result.setAdminId( _adminId_var.value<qint32>() );
        }
        
        QVariant _participantId_var = map.value("participantId");
        if( !_participantId_var.isNull() ) {
            _participantId_var.convert( QVariant::nameToType("qint32") );
            result.setParticipantId( _participantId_var.value<qint32>() );
        }
        
        QVariant _gAOrB_var = map.value("gAOrB");
        if( !_gAOrB_var.isNull() ) {
            _gAOrB_var.convert( QVariant::nameToType("QByteArray") );
            result.setGAOrB( _gAOrB_var.value<QByteArray>() );
        }
        
        QVariant _keyFingerprint_var = map.value("keyFingerprint");
        if( !_keyFingerprint_var.isNull() ) {
            _keyFingerprint_var.convert( QVariant::nameToType("qint64") );
            result.setKeyFingerprint( _keyFingerprint_var.value<qint64>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "EncryptedChat::typeEncryptedChatDiscarded") {
        result.setClassType(typeEncryptedChatDiscarded);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }
        
        return result;
    }
    return result;
}

EncryptedChat EncryptedChat::fromJson(const QString &json) {
    return EncryptedChat::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray EncryptedChat::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const EncryptedChat &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case EncryptedChat::typeEncryptedChatEmpty:
        stream << item.id();
        break;
    case EncryptedChat::typeEncryptedChatWaiting:
        stream << item.id();
        stream << item.accessHash();
        stream << item.date();
        stream << item.adminId();
        stream << item.participantId();
        break;
    case EncryptedChat::typeEncryptedChatRequested:
        stream << item.id();
        stream << item.accessHash();
        stream << item.date();
        stream << item.adminId();
        stream << item.participantId();
        stream << item.gA();
        break;
    case EncryptedChat::typeEncryptedChat:
        stream << item.id();
        stream << item.accessHash();
        stream << item.date();
        stream << item.adminId();
        stream << item.participantId();
        stream << item.gAOrB();
        stream << item.keyFingerprint();
        break;
    case EncryptedChat::typeEncryptedChatDiscarded:
        stream << item.id();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, EncryptedChat &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<EncryptedChat::EncryptedChatClassType>(type));
    switch(type) {
    case EncryptedChat::typeEncryptedChatEmpty: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
    }
        break;
    case EncryptedChat::typeEncryptedChatWaiting: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        qint32 m_admin_id;
        stream >> m_admin_id;
        item.setAdminId(m_admin_id);
        qint32 m_participant_id;
        stream >> m_participant_id;
        item.setParticipantId(m_participant_id);
    }
        break;
    case EncryptedChat::typeEncryptedChatRequested: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        qint32 m_admin_id;
        stream >> m_admin_id;
        item.setAdminId(m_admin_id);
        qint32 m_participant_id;
        stream >> m_participant_id;
        item.setParticipantId(m_participant_id);
        QByteArray m_g_a;
        stream >> m_g_a;
        item.setGA(m_g_a);
    }
        break;
    case EncryptedChat::typeEncryptedChat: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        qint32 m_admin_id;
        stream >> m_admin_id;
        item.setAdminId(m_admin_id);
        qint32 m_participant_id;
        stream >> m_participant_id;
        item.setParticipantId(m_participant_id);
        QByteArray m_g_a_or_b;
        stream >> m_g_a_or_b;
        item.setGAOrB(m_g_a_or_b);
        qint64 m_key_fingerprint;
        stream >> m_key_fingerprint;
        item.setKeyFingerprint(m_key_fingerprint);
    }
        break;
    case EncryptedChat::typeEncryptedChatDiscarded: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const EncryptedChat &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.EncryptedChat(";
    switch(item.classType()) {
    case EncryptedChat::typeEncryptedChatEmpty:
        debug.nospace() << "classType: typeEncryptedChatEmpty";
        debug.nospace() << ", id: " << item.id();
        break;
    case EncryptedChat::typeEncryptedChatWaiting:
        debug.nospace() << "classType: typeEncryptedChatWaiting";
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", accessHash: " << item.accessHash();
        debug.nospace() << ", date: " << item.date();
        debug.nospace() << ", adminId: " << item.adminId();
        debug.nospace() << ", participantId: " << item.participantId();
        break;
    case EncryptedChat::typeEncryptedChatRequested:
        debug.nospace() << "classType: typeEncryptedChatRequested";
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", accessHash: " << item.accessHash();
        debug.nospace() << ", date: " << item.date();
        debug.nospace() << ", adminId: " << item.adminId();
        debug.nospace() << ", participantId: " << item.participantId();
        debug.nospace() << ", gA: " << item.gA();
        break;
    case EncryptedChat::typeEncryptedChat:
        debug.nospace() << "classType: typeEncryptedChat";
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", accessHash: " << item.accessHash();
        debug.nospace() << ", date: " << item.date();
        debug.nospace() << ", adminId: " << item.adminId();
        debug.nospace() << ", participantId: " << item.participantId();
        debug.nospace() << ", gAOrB: " << item.gAOrB();
        debug.nospace() << ", keyFingerprint: " << item.keyFingerprint();
        break;
    case EncryptedChat::typeEncryptedChatDiscarded:
        debug.nospace() << "classType: typeEncryptedChatDiscarded";
        debug.nospace() << ", id: " << item.id();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

