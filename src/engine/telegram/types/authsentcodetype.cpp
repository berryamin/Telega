// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "authsentcodetype.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

AuthSentCodeType::AuthSentCodeType(AuthSentCodeTypeClassType classType, InboundPkt *in) :
    m_length(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

AuthSentCodeType::AuthSentCodeType(InboundPkt *in) :
    m_length(0),
    m_classType(typeAuthSentCodeTypeApp)
{
    fetch(in);
}

AuthSentCodeType::AuthSentCodeType(const AuthSentCodeType &another) :
    TelegramTypeObject(),
    m_length(0),
    m_classType(typeAuthSentCodeTypeApp)
{
    operator=(another);
}

AuthSentCodeType::AuthSentCodeType(const Null &null) :
    TelegramTypeObject(null),
    m_length(0),
    m_classType(typeAuthSentCodeTypeApp)
{
}

AuthSentCodeType::~AuthSentCodeType() {
    
}

void AuthSentCodeType::setLength(qint32 length) {
    m_length = length;
}

qint32 AuthSentCodeType::length() const {
    return m_length;
}

void AuthSentCodeType::setPattern(const QString &pattern) {
    m_pattern = pattern;
}

QString AuthSentCodeType::pattern() const {
    return m_pattern;
}

bool AuthSentCodeType::operator ==(const AuthSentCodeType &b) const {
    return m_classType == b.m_classType &&
           m_length == b.m_length &&
           m_pattern == b.m_pattern;
}

AuthSentCodeType &AuthSentCodeType::operator =(const AuthSentCodeType &b) {
    m_classType = b.m_classType;
    m_length = b.m_length;
    m_pattern = b.m_pattern;
    setNull(b.isNull());
    return *this;
}

void AuthSentCodeType::setClassType(AuthSentCodeType::AuthSentCodeTypeClassType classType) {
    m_classType = classType;
}

AuthSentCodeType::AuthSentCodeTypeClassType AuthSentCodeType::classType() const {
    return m_classType;
}

bool AuthSentCodeType::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAuthSentCodeTypeApp: {
        m_length = in->fetchInt();
        m_classType = static_cast<AuthSentCodeTypeClassType>(x);
        return true;
    }
        break;
    
    case typeAuthSentCodeTypeSms: {
        m_length = in->fetchInt();
        m_classType = static_cast<AuthSentCodeTypeClassType>(x);
        return true;
    }
        break;
    
    case typeAuthSentCodeTypeCall: {
        m_length = in->fetchInt();
        m_classType = static_cast<AuthSentCodeTypeClassType>(x);
        return true;
    }
        break;
    
    case typeAuthSentCodeTypeFlashCall: {
        m_pattern = in->fetchQString();
        m_classType = static_cast<AuthSentCodeTypeClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool AuthSentCodeType::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAuthSentCodeTypeApp: {
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeAuthSentCodeTypeSms: {
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeAuthSentCodeTypeCall: {
        out->appendInt(m_length);
        return true;
    }
        break;
    
    case typeAuthSentCodeTypeFlashCall: {
        out->appendQString(m_pattern);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> AuthSentCodeType::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeAuthSentCodeTypeApp: {
        result["classType"] = "AuthSentCodeType::typeAuthSentCodeTypeApp";
        if( length() ) result["length"] = QString::number(length());
        return result;
    }
        break;
    
    case typeAuthSentCodeTypeSms: {
        result["classType"] = "AuthSentCodeType::typeAuthSentCodeTypeSms";
        if( length() ) result["length"] = QString::number(length());
        return result;
    }
        break;
    
    case typeAuthSentCodeTypeCall: {
        result["classType"] = "AuthSentCodeType::typeAuthSentCodeTypeCall";
        if( length() ) result["length"] = QString::number(length());
        return result;
    }
        break;
    
    case typeAuthSentCodeTypeFlashCall: {
        result["classType"] = "AuthSentCodeType::typeAuthSentCodeTypeFlashCall";
        if( !m_pattern.isEmpty() ) result["pattern"] = QVariant::fromValue<QString>(m_pattern);
        return result;
    }
        break;
    
    default:
        return result;
    }
}

AuthSentCodeType AuthSentCodeType::fromMap(const QMap<QString, QVariant> &map) {
    AuthSentCodeType result;
    if(map.value("classType").toString() == "AuthSentCodeType::typeAuthSentCodeTypeApp") {
        result.setClassType(typeAuthSentCodeTypeApp);
        QVariant _length_var = map.value("length");
        if( !_length_var.isNull() ) {
            _length_var.convert( QVariant::nameToType("qint32") );
            result.setLength( _length_var.value<qint32>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "AuthSentCodeType::typeAuthSentCodeTypeSms") {
        result.setClassType(typeAuthSentCodeTypeSms);
        QVariant _length_var = map.value("length");
        if( !_length_var.isNull() ) {
            _length_var.convert( QVariant::nameToType("qint32") );
            result.setLength( _length_var.value<qint32>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "AuthSentCodeType::typeAuthSentCodeTypeCall") {
        result.setClassType(typeAuthSentCodeTypeCall);
        QVariant _length_var = map.value("length");
        if( !_length_var.isNull() ) {
            _length_var.convert( QVariant::nameToType("qint32") );
            result.setLength( _length_var.value<qint32>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "AuthSentCodeType::typeAuthSentCodeTypeFlashCall") {
        result.setClassType(typeAuthSentCodeTypeFlashCall);
        QVariant _pattern_var = map.value("pattern");
        if( !_pattern_var.isNull() ) {
            _pattern_var.convert( QVariant::nameToType("QString") );
            result.setPattern( _pattern_var.value<QString>() );
        }
        
        return result;
    }
    return result;
}

AuthSentCodeType AuthSentCodeType::fromJson(const QString &json) {
    return AuthSentCodeType::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray AuthSentCodeType::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const AuthSentCodeType &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case AuthSentCodeType::typeAuthSentCodeTypeApp:
        stream << item.length();
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeSms:
        stream << item.length();
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeCall:
        stream << item.length();
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeFlashCall:
        stream << item.pattern();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, AuthSentCodeType &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<AuthSentCodeType::AuthSentCodeTypeClassType>(type));
    switch(type) {
    case AuthSentCodeType::typeAuthSentCodeTypeApp: {
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeSms: {
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeCall: {
        qint32 m_length;
        stream >> m_length;
        item.setLength(m_length);
    }
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeFlashCall: {
        QString m_pattern;
        stream >> m_pattern;
        item.setPattern(m_pattern);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const AuthSentCodeType &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.AuthSentCodeType(";
    switch(item.classType()) {
    case AuthSentCodeType::typeAuthSentCodeTypeApp:
        debug.nospace() << "classType: typeAuthSentCodeTypeApp";
        debug.nospace() << ", length: " << item.length();
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeSms:
        debug.nospace() << "classType: typeAuthSentCodeTypeSms";
        debug.nospace() << ", length: " << item.length();
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeCall:
        debug.nospace() << "classType: typeAuthSentCodeTypeCall";
        debug.nospace() << ", length: " << item.length();
        break;
    case AuthSentCodeType::typeAuthSentCodeTypeFlashCall:
        debug.nospace() << "classType: typeAuthSentCodeTypeFlashCall";
        debug.nospace() << ", pattern: " << item.pattern();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

