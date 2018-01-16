// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "filelocation.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

FileLocation::FileLocation(FileLocationClassType classType, InboundPkt *in) :
    m_dcId(0),
    m_localId(0),
    m_secret(0),
    m_volumeId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

FileLocation::FileLocation(InboundPkt *in) :
    m_dcId(0),
    m_localId(0),
    m_secret(0),
    m_volumeId(0),
    m_classType(typeFileLocationUnavailable)
{
    fetch(in);
}

FileLocation::FileLocation(const FileLocation &another) :
    TelegramTypeObject(),
    m_dcId(0),
    m_localId(0),
    m_secret(0),
    m_volumeId(0),
    m_classType(typeFileLocationUnavailable)
{
    operator=(another);
}

FileLocation::FileLocation(const Null &null) :
    TelegramTypeObject(null),
    m_dcId(0),
    m_localId(0),
    m_secret(0),
    m_volumeId(0),
    m_classType(typeFileLocationUnavailable)
{
}

FileLocation::~FileLocation() {
    
}

void FileLocation::setDcId(qint32 dcId) {
    m_dcId = dcId;
}

qint32 FileLocation::dcId() const {
    return m_dcId;
}

void FileLocation::setLocalId(qint32 localId) {
    m_localId = localId;
}

qint32 FileLocation::localId() const {
    return m_localId;
}

void FileLocation::setSecret(qint64 secret) {
    m_secret = secret;
}

qint64 FileLocation::secret() const {
    return m_secret;
}

void FileLocation::setVolumeId(qint64 volumeId) {
    m_volumeId = volumeId;
}

qint64 FileLocation::volumeId() const {
    return m_volumeId;
}

bool FileLocation::operator ==(const FileLocation &b) const {
    return m_classType == b.m_classType &&
           m_dcId == b.m_dcId &&
           m_localId == b.m_localId &&
           m_secret == b.m_secret &&
           m_volumeId == b.m_volumeId;
}

FileLocation &FileLocation::operator =(const FileLocation &b) {
    m_classType = b.m_classType;
    m_dcId = b.m_dcId;
    m_localId = b.m_localId;
    m_secret = b.m_secret;
    m_volumeId = b.m_volumeId;
    setNull(b.isNull());
    return *this;
}

void FileLocation::setClassType(FileLocation::FileLocationClassType classType) {
    m_classType = classType;
}

FileLocation::FileLocationClassType FileLocation::classType() const {
    return m_classType;
}

bool FileLocation::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeFileLocationUnavailable: {
        m_volumeId = in->fetchLong();
        m_localId = in->fetchInt();
        m_secret = in->fetchLong();
        m_classType = static_cast<FileLocationClassType>(x);
        return true;
    }
        break;
    
    case typeFileLocation: {
        m_dcId = in->fetchInt();
        m_volumeId = in->fetchLong();
        m_localId = in->fetchInt();
        m_secret = in->fetchLong();
        m_classType = static_cast<FileLocationClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool FileLocation::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeFileLocationUnavailable: {
        out->appendLong(m_volumeId);
        out->appendInt(m_localId);
        out->appendLong(m_secret);
        return true;
    }
        break;
    
    case typeFileLocation: {
        out->appendInt(m_dcId);
        out->appendLong(m_volumeId);
        out->appendInt(m_localId);
        out->appendLong(m_secret);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> FileLocation::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeFileLocationUnavailable: {
        result["classType"] = "FileLocation::typeFileLocationUnavailable";
        if( volumeId() ) result["volumeId"] = QString::number(volumeId());
        if( localId() ) result["localId"] = QString::number(localId());
        if( secret() ) result["secret"] = QString::number(secret());
        return result;
    }
        break;
    
    case typeFileLocation: {
        result["classType"] = "FileLocation::typeFileLocation";
        if( dcId() ) result["dcId"] = QString::number(dcId());
        if( volumeId() ) result["volumeId"] = QString::number(volumeId());
        if( localId() ) result["localId"] = QString::number(localId());
        if( secret() ) result["secret"] = QString::number(secret());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

FileLocation FileLocation::fromMap(const QMap<QString, QVariant> &map) {
    FileLocation result;
    if(map.value("classType").toString() == "FileLocation::typeFileLocationUnavailable") {
        result.setClassType(typeFileLocationUnavailable);
        QVariant _volumeId_var = map.value("volumeId");
        if( !_volumeId_var.isNull() ) {
            _volumeId_var.convert( QVariant::nameToType("qint64") );
            result.setVolumeId( _volumeId_var.value<qint64>() );
        }
        
        QVariant _localId_var = map.value("localId");
        if( !_localId_var.isNull() ) {
            _localId_var.convert( QVariant::nameToType("qint32") );
            result.setLocalId( _localId_var.value<qint32>() );
        }
        
        QVariant _secret_var = map.value("secret");
        if( !_secret_var.isNull() ) {
            _secret_var.convert( QVariant::nameToType("qint64") );
            result.setSecret( _secret_var.value<qint64>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "FileLocation::typeFileLocation") {
        result.setClassType(typeFileLocation);
        QVariant _dcId_var = map.value("dcId");
        if( !_dcId_var.isNull() ) {
            _dcId_var.convert( QVariant::nameToType("qint32") );
            result.setDcId( _dcId_var.value<qint32>() );
        }
        
        QVariant _volumeId_var = map.value("volumeId");
        if( !_volumeId_var.isNull() ) {
            _volumeId_var.convert( QVariant::nameToType("qint64") );
            result.setVolumeId( _volumeId_var.value<qint64>() );
        }
        
        QVariant _localId_var = map.value("localId");
        if( !_localId_var.isNull() ) {
            _localId_var.convert( QVariant::nameToType("qint32") );
            result.setLocalId( _localId_var.value<qint32>() );
        }
        
        QVariant _secret_var = map.value("secret");
        if( !_secret_var.isNull() ) {
            _secret_var.convert( QVariant::nameToType("qint64") );
            result.setSecret( _secret_var.value<qint64>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "FileLocation::typeFileLocationUnavailableSecret23") {
        result.setClassType(typeFileLocationUnavailableSecret23);
        QVariant _volumeId_var = map.value("volumeId");
        if( !_volumeId_var.isNull() ) {
            _volumeId_var.convert( QVariant::nameToType("qint64") );
            result.setVolumeId( _volumeId_var.value<qint64>() );
        }
        
        QVariant _localId_var = map.value("localId");
        if( !_localId_var.isNull() ) {
            _localId_var.convert( QVariant::nameToType("qint32") );
            result.setLocalId( _localId_var.value<qint32>() );
        }
        
        QVariant _secret_var = map.value("secret");
        if( !_secret_var.isNull() ) {
            _secret_var.convert( QVariant::nameToType("qint64") );
            result.setSecret( _secret_var.value<qint64>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "FileLocation::typeFileLocationSecret23") {
        result.setClassType(typeFileLocationSecret23);
        QVariant _dcId_var = map.value("dcId");
        if( !_dcId_var.isNull() ) {
            _dcId_var.convert( QVariant::nameToType("qint32") );
            result.setDcId( _dcId_var.value<qint32>() );
        }
        
        QVariant _volumeId_var = map.value("volumeId");
        if( !_volumeId_var.isNull() ) {
            _volumeId_var.convert( QVariant::nameToType("qint64") );
            result.setVolumeId( _volumeId_var.value<qint64>() );
        }
        
        QVariant _localId_var = map.value("localId");
        if( !_localId_var.isNull() ) {
            _localId_var.convert( QVariant::nameToType("qint32") );
            result.setLocalId( _localId_var.value<qint32>() );
        }
        
        QVariant _secret_var = map.value("secret");
        if( !_secret_var.isNull() ) {
            _secret_var.convert( QVariant::nameToType("qint64") );
            result.setSecret( _secret_var.value<qint64>() );
        }
        
        return result;
    }
    return result;
}

FileLocation FileLocation::fromJson(const QString &json) {
    return FileLocation::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray FileLocation::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const FileLocation &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case FileLocation::typeFileLocationUnavailable:
        stream << item.volumeId();
        stream << item.localId();
        stream << item.secret();
        break;
    case FileLocation::typeFileLocation:
        stream << item.dcId();
        stream << item.volumeId();
        stream << item.localId();
        stream << item.secret();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, FileLocation &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<FileLocation::FileLocationClassType>(type));
    switch(type) {
    case FileLocation::typeFileLocationUnavailable: {
        qint64 m_volume_id;
        stream >> m_volume_id;
        item.setVolumeId(m_volume_id);
        qint32 m_local_id;
        stream >> m_local_id;
        item.setLocalId(m_local_id);
        qint64 m_secret;
        stream >> m_secret;
        item.setSecret(m_secret);
    }
        break;
    case FileLocation::typeFileLocation: {
        qint32 m_dc_id;
        stream >> m_dc_id;
        item.setDcId(m_dc_id);
        qint64 m_volume_id;
        stream >> m_volume_id;
        item.setVolumeId(m_volume_id);
        qint32 m_local_id;
        stream >> m_local_id;
        item.setLocalId(m_local_id);
        qint64 m_secret;
        stream >> m_secret;
        item.setSecret(m_secret);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const FileLocation &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.FileLocation(";
    switch(item.classType()) {
    case FileLocation::typeFileLocationUnavailable:
        debug.nospace() << "classType: typeFileLocationUnavailable";
        debug.nospace() << ", volumeId: " << item.volumeId();
        debug.nospace() << ", localId: " << item.localId();
        debug.nospace() << ", secret: " << item.secret();
        break;
    case FileLocation::typeFileLocation:
        debug.nospace() << "classType: typeFileLocation";
        debug.nospace() << ", dcId: " << item.dcId();
        debug.nospace() << ", volumeId: " << item.volumeId();
        debug.nospace() << ", localId: " << item.localId();
        debug.nospace() << ", secret: " << item.secret();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

