// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesbotcallbackanswer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessagesBotCallbackAnswer::MessagesBotCallbackAnswer(MessagesBotCallbackAnswerClassType classType, InboundPkt *in) :
    m_cacheTime(0),
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesBotCallbackAnswer::MessagesBotCallbackAnswer(InboundPkt *in) :
    m_cacheTime(0),
    m_flags(0),
    m_classType(typeMessagesBotCallbackAnswer)
{
    fetch(in);
}

MessagesBotCallbackAnswer::MessagesBotCallbackAnswer(const MessagesBotCallbackAnswer &another) :
    TelegramTypeObject(),
    m_cacheTime(0),
    m_flags(0),
    m_classType(typeMessagesBotCallbackAnswer)
{
    operator=(another);
}

MessagesBotCallbackAnswer::MessagesBotCallbackAnswer(const Null &null) :
    TelegramTypeObject(null),
    m_cacheTime(0),
    m_flags(0),
    m_classType(typeMessagesBotCallbackAnswer)
{
}

MessagesBotCallbackAnswer::~MessagesBotCallbackAnswer() {
    
}

void MessagesBotCallbackAnswer::setAlert(bool alert) {
    if(alert) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

bool MessagesBotCallbackAnswer::alert() const {
    return (m_flags & 1<<1);
}

void MessagesBotCallbackAnswer::setCacheTime(qint32 cacheTime) {
    m_cacheTime = cacheTime;
}

qint32 MessagesBotCallbackAnswer::cacheTime() const {
    return m_cacheTime;
}

void MessagesBotCallbackAnswer::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 MessagesBotCallbackAnswer::flags() const {
    return m_flags;
}

void MessagesBotCallbackAnswer::setHasUrl(bool hasUrl) {
    if(hasUrl) m_flags = (m_flags | (1<<3));
    else m_flags = (m_flags & ~(1<<3));
}

bool MessagesBotCallbackAnswer::hasUrl() const {
    return (m_flags & 1<<3);
}

void MessagesBotCallbackAnswer::setMessage(const QString &message) {
    if(!message.isNull()) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
    m_message = message;
}

QString MessagesBotCallbackAnswer::message() const {
    return m_message;
}

void MessagesBotCallbackAnswer::setUrl(const QString &url) {
    if(!url.isNull()) m_flags = (m_flags | (1<<2));
    else m_flags = (m_flags & ~(1<<2));
    m_url = url;
}

QString MessagesBotCallbackAnswer::url() const {
    return m_url;
}

bool MessagesBotCallbackAnswer::operator ==(const MessagesBotCallbackAnswer &b) const {
    return m_classType == b.m_classType &&
           m_cacheTime == b.m_cacheTime &&
           m_flags == b.m_flags &&
           m_message == b.m_message &&
           m_url == b.m_url;
}

MessagesBotCallbackAnswer &MessagesBotCallbackAnswer::operator =(const MessagesBotCallbackAnswer &b) {
    m_classType = b.m_classType;
    m_cacheTime = b.m_cacheTime;
    m_flags = b.m_flags;
    m_message = b.m_message;
    m_url = b.m_url;
    setNull(b.isNull());
    return *this;
}

void MessagesBotCallbackAnswer::setClassType(MessagesBotCallbackAnswer::MessagesBotCallbackAnswerClassType classType) {
    m_classType = classType;
}

MessagesBotCallbackAnswer::MessagesBotCallbackAnswerClassType MessagesBotCallbackAnswer::classType() const {
    return m_classType;
}

bool MessagesBotCallbackAnswer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesBotCallbackAnswer: {
        m_flags = in->fetchInt();
        if(m_flags & 1<<0) {
            m_message = in->fetchQString();
        }
        if(m_flags & 1<<2) {
            m_url = in->fetchQString();
        }
        m_cacheTime = in->fetchInt();
        m_classType = static_cast<MessagesBotCallbackAnswerClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesBotCallbackAnswer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesBotCallbackAnswer: {
        out->appendInt(m_flags);
        if(m_flags & 1<<0) {
            out->appendQString(m_message);
        }
        if(m_flags & 1<<2) {
            out->appendQString(m_url);
        }
        out->appendInt(m_cacheTime);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> MessagesBotCallbackAnswer::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessagesBotCallbackAnswer: {
        result["classType"] = "MessagesBotCallbackAnswer::typeMessagesBotCallbackAnswer";
        if( alert() ) result["alert"] = QString::number(alert());
        if( hasUrl() ) result["hasUrl"] = QString::number(hasUrl());
        if( !m_message.isEmpty() ) result["message"] = QVariant::fromValue<QString>(m_message);
        if( !m_url.isEmpty() ) result["url"] = QVariant::fromValue<QString>(m_url);
        if( cacheTime() ) result["cacheTime"] = QString::number(cacheTime());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

MessagesBotCallbackAnswer MessagesBotCallbackAnswer::fromMap(const QMap<QString, QVariant> &map) {
    MessagesBotCallbackAnswer result;
    if(map.value("classType").toString() == "MessagesBotCallbackAnswer::typeMessagesBotCallbackAnswer") {
        result.setClassType(typeMessagesBotCallbackAnswer);
        QVariant _alert_var = map.value("alert");
        if( !_alert_var.isNull() ) {
            _alert_var.convert( QVariant::nameToType("bool") );
            result.setAlert( _alert_var.value<bool>() );
        }
        
        QVariant _hasUrl_var = map.value("hasUrl");
        if( !_hasUrl_var.isNull() ) {
            _hasUrl_var.convert( QVariant::nameToType("bool") );
            result.setHasUrl( _hasUrl_var.value<bool>() );
        }
        
        QVariant _message_var = map.value("message");
        if( !_message_var.isNull() ) {
            _message_var.convert( QVariant::nameToType("QString") );
            result.setMessage( _message_var.value<QString>() );
        }
        
        QVariant _url_var = map.value("url");
        if( !_url_var.isNull() ) {
            _url_var.convert( QVariant::nameToType("QString") );
            result.setUrl( _url_var.value<QString>() );
        }
        
        QVariant _cacheTime_var = map.value("cacheTime");
        if( !_cacheTime_var.isNull() ) {
            _cacheTime_var.convert( QVariant::nameToType("qint32") );
            result.setCacheTime( _cacheTime_var.value<qint32>() );
        }
        
        return result;
    }
    return result;
}

MessagesBotCallbackAnswer MessagesBotCallbackAnswer::fromJson(const QString &json) {
    return MessagesBotCallbackAnswer::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray MessagesBotCallbackAnswer::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const MessagesBotCallbackAnswer &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesBotCallbackAnswer::typeMessagesBotCallbackAnswer:
        stream << item.flags();
        stream << item.message();
        stream << item.url();
        stream << item.cacheTime();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessagesBotCallbackAnswer &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesBotCallbackAnswer::MessagesBotCallbackAnswerClassType>(type));
    switch(type) {
    case MessagesBotCallbackAnswer::typeMessagesBotCallbackAnswer: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QString m_message;
        stream >> m_message;
        item.setMessage(m_message);
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
        qint32 m_cache_time;
        stream >> m_cache_time;
        item.setCacheTime(m_cache_time);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const MessagesBotCallbackAnswer &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.MessagesBotCallbackAnswer(";
    switch(item.classType()) {
    case MessagesBotCallbackAnswer::typeMessagesBotCallbackAnswer:
        debug.nospace() << "classType: typeMessagesBotCallbackAnswer";
        debug.nospace() << ", flags: " << item.flags();
        debug.nospace() << ", message: " << item.message();
        debug.nospace() << ", url: " << item.url();
        debug.nospace() << ", cacheTime: " << item.cacheTime();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

