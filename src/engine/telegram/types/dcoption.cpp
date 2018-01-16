// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "dcoption.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

DcOption::DcOption(DcOptionClassType classType, InboundPkt *in) :
    m_flags(0),
    m_id(0),
    m_port(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

DcOption::DcOption(InboundPkt *in) :
    m_flags(0),
    m_id(0),
    m_port(0),
    m_classType(typeDcOption)
{
    fetch(in);
}

DcOption::DcOption(const DcOption &another) :
    TelegramTypeObject(),
    m_flags(0),
    m_id(0),
    m_port(0),
    m_classType(typeDcOption)
{
    operator=(another);
}

DcOption::DcOption(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_id(0),
    m_port(0),
    m_classType(typeDcOption)
{
}

DcOption::~DcOption() {
    
}

void DcOption::setCdn(bool cdn) {
    if(cdn) m_flags = (m_flags | (1<<3));
    else m_flags = (m_flags & ~(1<<3));
}

bool DcOption::cdn() const {
    return (m_flags & 1<<3);
}

void DcOption::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 DcOption::flags() const {
    return m_flags;
}

void DcOption::setId(qint32 id) {
    m_id = id;
}

qint32 DcOption::id() const {
    return m_id;
}

void DcOption::setIpAddress(const QString &ipAddress) {
    m_ipAddress = ipAddress;
}

QString DcOption::ipAddress() const {
    return m_ipAddress;
}

void DcOption::setIpv6(bool ipv6) {
    if(ipv6) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool DcOption::ipv6() const {
    return (m_flags & 1<<0);
}

void DcOption::setMediaOnly(bool mediaOnly) {
    if(mediaOnly) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

bool DcOption::mediaOnly() const {
    return (m_flags & 1<<1);
}

void DcOption::setPort(qint32 port) {
    m_port = port;
}

qint32 DcOption::port() const {
    return m_port;
}

void DcOption::setStaticValue(bool staticValue) {
    if(staticValue) m_flags = (m_flags | (1<<4));
    else m_flags = (m_flags & ~(1<<4));
}

bool DcOption::staticValue() const {
    return (m_flags & 1<<4);
}

void DcOption::setTcpoOnly(bool tcpoOnly) {
    if(tcpoOnly) m_flags = (m_flags | (1<<2));
    else m_flags = (m_flags & ~(1<<2));
}

bool DcOption::tcpoOnly() const {
    return (m_flags & 1<<2);
}

bool DcOption::operator ==(const DcOption &b) const {
    return m_classType == b.m_classType &&
           m_flags == b.m_flags &&
           m_id == b.m_id &&
           m_ipAddress == b.m_ipAddress &&
           m_port == b.m_port;
}

DcOption &DcOption::operator =(const DcOption &b) {
    m_classType = b.m_classType;
    m_flags = b.m_flags;
    m_id = b.m_id;
    m_ipAddress = b.m_ipAddress;
    m_port = b.m_port;
    setNull(b.isNull());
    return *this;
}

void DcOption::setClassType(DcOption::DcOptionClassType classType) {
    m_classType = classType;
}

DcOption::DcOptionClassType DcOption::classType() const {
    return m_classType;
}

bool DcOption::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeDcOption: {
        m_flags = in->fetchInt();
        m_id = in->fetchInt();
        m_ipAddress = in->fetchQString();
        m_port = in->fetchInt();
        m_classType = static_cast<DcOptionClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool DcOption::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeDcOption: {
        out->appendInt(m_flags);
        out->appendInt(m_id);
        out->appendQString(m_ipAddress);
        out->appendInt(m_port);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> DcOption::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeDcOption: {
        result["classType"] = "DcOption::typeDcOption";
        if( ipv6() ) result["ipv6"] = QString::number(ipv6());
        if( mediaOnly() ) result["mediaOnly"] = QString::number(mediaOnly());
        if( tcpoOnly() ) result["tcpoOnly"] = QString::number(tcpoOnly());
        if( cdn() ) result["cdn"] = QString::number(cdn());
        if( staticValue() ) result["staticValue"] = QString::number(staticValue());
        if( id() ) result["id"] = QString::number(id());
        if( !m_ipAddress.isEmpty() ) result["ipAddress"] = QVariant::fromValue<QString>(m_ipAddress);
        if( port() ) result["port"] = QString::number(port());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

DcOption DcOption::fromMap(const QMap<QString, QVariant> &map) {
    DcOption result;
    if(map.value("classType").toString() == "DcOption::typeDcOption") {
        result.setClassType(typeDcOption);
        QVariant _ipv6_var = map.value("ipv6");
        if( !_ipv6_var.isNull() ) {
            _ipv6_var.convert( QVariant::nameToType("bool") );
            result.setIpv6( _ipv6_var.value<bool>() );
        }
        
        QVariant _mediaOnly_var = map.value("mediaOnly");
        if( !_mediaOnly_var.isNull() ) {
            _mediaOnly_var.convert( QVariant::nameToType("bool") );
            result.setMediaOnly( _mediaOnly_var.value<bool>() );
        }
        
        QVariant _tcpoOnly_var = map.value("tcpoOnly");
        if( !_tcpoOnly_var.isNull() ) {
            _tcpoOnly_var.convert( QVariant::nameToType("bool") );
            result.setTcpoOnly( _tcpoOnly_var.value<bool>() );
        }
        
        QVariant _cdn_var = map.value("cdn");
        if( !_cdn_var.isNull() ) {
            _cdn_var.convert( QVariant::nameToType("bool") );
            result.setCdn( _cdn_var.value<bool>() );
        }
        
        QVariant _staticValue_var = map.value("staticValue");
        if( !_staticValue_var.isNull() ) {
            _staticValue_var.convert( QVariant::nameToType("bool") );
            result.setStaticValue( _staticValue_var.value<bool>() );
        }
        
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }
        
        QVariant _ipAddress_var = map.value("ipAddress");
        if( !_ipAddress_var.isNull() ) {
            _ipAddress_var.convert( QVariant::nameToType("QString") );
            result.setIpAddress( _ipAddress_var.value<QString>() );
        }
        
        QVariant _port_var = map.value("port");
        if( !_port_var.isNull() ) {
            _port_var.convert( QVariant::nameToType("qint32") );
            result.setPort( _port_var.value<qint32>() );
        }
        
        return result;
    }
    return result;
}

DcOption DcOption::fromJson(const QString &json) {
    return DcOption::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray DcOption::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const DcOption &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case DcOption::typeDcOption:
        stream << item.flags();
        stream << item.id();
        stream << item.ipAddress();
        stream << item.port();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, DcOption &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<DcOption::DcOptionClassType>(type));
    switch(type) {
    case DcOption::typeDcOption: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        QString m_ip_address;
        stream >> m_ip_address;
        item.setIpAddress(m_ip_address);
        qint32 m_port;
        stream >> m_port;
        item.setPort(m_port);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const DcOption &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.DcOption(";
    switch(item.classType()) {
    case DcOption::typeDcOption:
        debug.nospace() << "classType: typeDcOption";
        debug.nospace() << ", flags: " << item.flags();
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", ipAddress: " << item.ipAddress();
        debug.nospace() << ", port: " << item.port();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

