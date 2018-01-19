// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputwebfilelocation.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputWebFileLocation::InputWebFileLocation(InputWebFileLocationClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputWebFileLocation::InputWebFileLocation(InboundPkt *in) :
    m_accessHash(0),
    m_classType(typeInputWebFileLocation)
{
    fetch(in);
}

InputWebFileLocation::InputWebFileLocation(const InputWebFileLocation &another) :
    TelegramTypeObject(),
    m_accessHash(0),
    m_classType(typeInputWebFileLocation)
{
    operator=(another);
}

InputWebFileLocation::InputWebFileLocation(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_classType(typeInputWebFileLocation)
{
}

InputWebFileLocation::~InputWebFileLocation() {

}

void InputWebFileLocation::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 InputWebFileLocation::accessHash() const {
    return m_accessHash;
}

void InputWebFileLocation::setUrl(const QString &url) {
    m_url = url;
}

QString InputWebFileLocation::url() const {
    return m_url;
}

bool InputWebFileLocation::operator ==(const InputWebFileLocation &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_url == b.m_url;
}

InputWebFileLocation &InputWebFileLocation::operator =(const InputWebFileLocation &b) {
    m_classType = b.m_classType;
    m_accessHash = b.m_accessHash;
    m_url = b.m_url;
    setNull(b.isNull());
    return *this;
}

void InputWebFileLocation::setClassType(InputWebFileLocation::InputWebFileLocationClassType classType) {
    m_classType = classType;
}

InputWebFileLocation::InputWebFileLocationClassType InputWebFileLocation::classType() const {
    return m_classType;
}

bool InputWebFileLocation::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputWebFileLocation: {
        m_url = in->fetchQString();
        m_accessHash = in->fetchLong();
        m_classType = static_cast<InputWebFileLocationClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputWebFileLocation::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputWebFileLocation: {
        out->appendQString(m_url);
        out->appendLong(m_accessHash);
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> InputWebFileLocation::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputWebFileLocation: {
        result["classType"] = "InputWebFileLocation::typeInputWebFileLocation";
        if( !m_url.isEmpty() ) result["url"] = QVariant::fromValue<QString>(m_url);
        if( accessHash() ) result["accessHash"] = QString::number(accessHash());
        return result;
    }
        break;

    default:
        return result;
    }
}

InputWebFileLocation InputWebFileLocation::fromMap(const QMap<QString, QVariant> &map) {
    InputWebFileLocation result;
    if(map.value("classType").toString() == "InputWebFileLocation::typeInputWebFileLocation") {
        result.setClassType(typeInputWebFileLocation);
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

        return result;
    }
    return result;
}

InputWebFileLocation InputWebFileLocation::fromJson(const QString &json) {
    return InputWebFileLocation::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray InputWebFileLocation::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const InputWebFileLocation &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputWebFileLocation::typeInputWebFileLocation:
        stream << item.url();
        stream << item.accessHash();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputWebFileLocation &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputWebFileLocation::InputWebFileLocationClassType>(type));
    switch(type) {
    case InputWebFileLocation::typeInputWebFileLocation: {
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const InputWebFileLocation &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.InputWebFileLocation(";
    switch(item.classType()) {
    case InputWebFileLocation::typeInputWebFileLocation:
        debug.nospace() << "classType: typeInputWebFileLocation";
        debug.nospace() << ", url: " << item.url();
        debug.nospace() << ", accessHash: " << item.accessHash();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
