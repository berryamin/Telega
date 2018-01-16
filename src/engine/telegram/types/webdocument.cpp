// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "webdocument.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

WebDocument::WebDocument(WebDocumentClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_dcId(0),
    m_size(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

WebDocument::WebDocument(InboundPkt *in) :
    m_accessHash(0),
    m_dcId(0),
    m_size(0),
    m_classType(typeWebDocument)
{
    fetch(in);
}

WebDocument::WebDocument(const WebDocument &another) :
    TelegramTypeObject(),
    m_accessHash(0),
    m_dcId(0),
    m_size(0),
    m_classType(typeWebDocument)
{
    operator=(another);
}

WebDocument::WebDocument(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_dcId(0),
    m_size(0),
    m_classType(typeWebDocument)
{
}

WebDocument::~WebDocument() {
    
}

void WebDocument::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 WebDocument::accessHash() const {
    return m_accessHash;
}

void WebDocument::setAttributes(const QList<DocumentAttribute> &attributes) {
    m_attributes = attributes;
}

QList<DocumentAttribute> WebDocument::attributes() const {
    return m_attributes;
}

void WebDocument::setDcId(qint32 dcId) {
    m_dcId = dcId;
}

qint32 WebDocument::dcId() const {
    return m_dcId;
}

void WebDocument::setMimeType(const QString &mimeType) {
    m_mimeType = mimeType;
}

QString WebDocument::mimeType() const {
    return m_mimeType;
}

void WebDocument::setSize(qint32 size) {
    m_size = size;
}

qint32 WebDocument::size() const {
    return m_size;
}

void WebDocument::setUrl(const QString &url) {
    m_url = url;
}

QString WebDocument::url() const {
    return m_url;
}

bool WebDocument::operator ==(const WebDocument &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_attributes == b.m_attributes &&
           m_dcId == b.m_dcId &&
           m_mimeType == b.m_mimeType &&
           m_size == b.m_size &&
           m_url == b.m_url;
}

WebDocument &WebDocument::operator =(const WebDocument &b) {
    m_classType = b.m_classType;
    m_accessHash = b.m_accessHash;
    m_attributes = b.m_attributes;
    m_dcId = b.m_dcId;
    m_mimeType = b.m_mimeType;
    m_size = b.m_size;
    m_url = b.m_url;
    setNull(b.isNull());
    return *this;
}

void WebDocument::setClassType(WebDocument::WebDocumentClassType classType) {
    m_classType = classType;
}

WebDocument::WebDocumentClassType WebDocument::classType() const {
    return m_classType;
}

bool WebDocument::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeWebDocument: {
        m_url = in->fetchQString();
        m_accessHash = in->fetchLong();
        m_size = in->fetchInt();
        m_mimeType = in->fetchQString();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_attributes_length = in->fetchInt();
        m_attributes.clear();
        for (qint32 i = 0; i < m_attributes_length; i++) {
            DocumentAttribute type;
            type.fetch(in);
            m_attributes.append(type);
        }
        m_dcId = in->fetchInt();
        m_classType = static_cast<WebDocumentClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool WebDocument::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeWebDocument: {
        out->appendQString(m_url);
        out->appendLong(m_accessHash);
        out->appendInt(m_size);
        out->appendQString(m_mimeType);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_attributes.count());
        for (qint32 i = 0; i < m_attributes.count(); i++) {
            m_attributes[i].push(out);
        }
        out->appendInt(m_dcId);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> WebDocument::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeWebDocument: {
        result["classType"] = "WebDocument::typeWebDocument";
        if( !m_url.isEmpty() ) result["url"] = QVariant::fromValue<QString>(m_url);
        if( accessHash() ) result["accessHash"] = QString::number(accessHash());
        if( size() ) result["size"] = QString::number(size());
        if( !m_mimeType.isEmpty() ) result["mimeType"] = QVariant::fromValue<QString>(m_mimeType);
        QList<QVariant> _attributes;
        for(const DocumentAttribute &m__type: m_attributes)
            if( !m__type.isNull() ) _attributes << m__type.toMap();
        result["attributes"] = _attributes;
        if( dcId() ) result["dcId"] = QString::number(dcId());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

WebDocument WebDocument::fromMap(const QMap<QString, QVariant> &map) {
    WebDocument result;
    if(map.value("classType").toString() == "WebDocument::typeWebDocument") {
        result.setClassType(typeWebDocument);
        QVariant _url_var = map.value("url");
        if( !_url_var.isNull() ) {
            _url_var.convert( QVariant::nameToType("QString") );
            result.setUrl( _url_var.value<QString>() );
        }
        
        QVariant _accessHash_var = map.value("accessHash");
        if( !_accessHash_var.isNull() ) {
            _accessHash_var.convert( QVariant::nameToType("qint64") );
            result.setAccessHash( _accessHash_var.value<qint64>() );
        }
        
        QVariant _size_var = map.value("size");
        if( !_size_var.isNull() ) {
            _size_var.convert( QVariant::nameToType("qint32") );
            result.setSize( _size_var.value<qint32>() );
        }
        
        QVariant _mimeType_var = map.value("mimeType");
        if( !_mimeType_var.isNull() ) {
            _mimeType_var.convert( QVariant::nameToType("QString") );
            result.setMimeType( _mimeType_var.value<QString>() );
        }
        
        QList<QVariant> map_attributes = map["attributes"].toList();
        QList<DocumentAttribute> _attributes;
        for(const QVariant &var: map_attributes)
            _attributes << DocumentAttribute::fromMap(var.toMap());
        result.setAttributes(_attributes);
        QVariant _dcId_var = map.value("dcId");
        if( !_dcId_var.isNull() ) {
            _dcId_var.convert( QVariant::nameToType("qint32") );
            result.setDcId( _dcId_var.value<qint32>() );
        }
        
        return result;
    }
    return result;
}

WebDocument WebDocument::fromJson(const QString &json) {
    return WebDocument::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray WebDocument::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const WebDocument &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case WebDocument::typeWebDocument:
        stream << item.url();
        stream << item.accessHash();
        stream << item.size();
        stream << item.mimeType();
        stream << item.attributes();
        stream << item.dcId();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, WebDocument &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<WebDocument::WebDocumentClassType>(type));
    switch(type) {
    case WebDocument::typeWebDocument: {
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        qint32 m_size;
        stream >> m_size;
        item.setSize(m_size);
        QString m_mime_type;
        stream >> m_mime_type;
        item.setMimeType(m_mime_type);
        QList<DocumentAttribute> m_attributes;
        stream >> m_attributes;
        item.setAttributes(m_attributes);
        qint32 m_dc_id;
        stream >> m_dc_id;
        item.setDcId(m_dc_id);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const WebDocument &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.WebDocument(";
    switch(item.classType()) {
    case WebDocument::typeWebDocument:
        debug.nospace() << "classType: typeWebDocument";
        debug.nospace() << ", url: " << item.url();
        debug.nospace() << ", accessHash: " << item.accessHash();
        debug.nospace() << ", size: " << item.size();
        debug.nospace() << ", mimeType: " << item.mimeType();
        debug.nospace() << ", attributes: " << item.attributes();
        debug.nospace() << ", dcId: " << item.dcId();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

