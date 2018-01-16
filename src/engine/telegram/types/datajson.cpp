// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "datajson.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

DataJSON::DataJSON(DataJSONClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

DataJSON::DataJSON(InboundPkt *in) :
    m_classType(typeDataJSON)
{
    fetch(in);
}

DataJSON::DataJSON(const DataJSON &another) :
    TelegramTypeObject(),
    m_classType(typeDataJSON)
{
    operator=(another);
}

DataJSON::DataJSON(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeDataJSON)
{
}

DataJSON::~DataJSON() {
    
}

void DataJSON::setData(const QString &data) {
    m_data = data;
}

QString DataJSON::data() const {
    return m_data;
}

bool DataJSON::operator ==(const DataJSON &b) const {
    return m_classType == b.m_classType &&
           m_data == b.m_data;
}

DataJSON &DataJSON::operator =(const DataJSON &b) {
    m_classType = b.m_classType;
    m_data = b.m_data;
    setNull(b.isNull());
    return *this;
}

void DataJSON::setClassType(DataJSON::DataJSONClassType classType) {
    m_classType = classType;
}

DataJSON::DataJSONClassType DataJSON::classType() const {
    return m_classType;
}

bool DataJSON::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeDataJSON: {
        m_data = in->fetchQString();
        m_classType = static_cast<DataJSONClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool DataJSON::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeDataJSON: {
        out->appendQString(m_data);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> DataJSON::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeDataJSON: {
        result["classType"] = "DataJSON::typeDataJSON";
        if( !m_data.isEmpty() ) result["data"] = QVariant::fromValue<QString>(m_data);
        return result;
    }
        break;
    
    default:
        return result;
    }
}

DataJSON DataJSON::fromMap(const QMap<QString, QVariant> &map) {
    DataJSON result;
    if(map.value("classType").toString() == "DataJSON::typeDataJSON") {
        result.setClassType(typeDataJSON);
        QVariant _data_var = map.value("data");
        if( !_data_var.isNull() ) {
            _data_var.convert( QVariant::nameToType("QString") );
            result.setData( _data_var.value<QString>() );
        }
        
        return result;
    }
    return result;
}

DataJSON DataJSON::fromJson(const QString &json) {
    return DataJSON::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray DataJSON::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const DataJSON &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case DataJSON::typeDataJSON:
        stream << item.data();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, DataJSON &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<DataJSON::DataJSONClassType>(type));
    switch(type) {
    case DataJSON::typeDataJSON: {
        QString m_data;
        stream >> m_data;
        item.setData(m_data);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const DataJSON &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.DataJSON(";
    switch(item.classType()) {
    case DataJSON::typeDataJSON:
        debug.nospace() << "classType: typeDataJSON";
        debug.nospace() << ", data: " << item.data();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

