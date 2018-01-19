// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "decryptedmessagelayer.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

DecryptedMessageLayer::DecryptedMessageLayer(DecryptedMessageLayerClassType classType, InboundPkt *in) :
    m_inSeqNo(0),
    m_layer(0),
    m_outSeqNo(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

DecryptedMessageLayer::DecryptedMessageLayer(InboundPkt *in) :
    m_inSeqNo(0),
    m_layer(0),
    m_outSeqNo(0),
    m_classType(typeDecryptedMessageLayerSecret17)
{
    fetch(in);
}

DecryptedMessageLayer::DecryptedMessageLayer(const DecryptedMessageLayer &another) :
    TelegramTypeObject(),
    m_inSeqNo(0),
    m_layer(0),
    m_outSeqNo(0),
    m_classType(typeDecryptedMessageLayerSecret17)
{
    operator=(another);
}

DecryptedMessageLayer::DecryptedMessageLayer(const Null &null) :
    TelegramTypeObject(null),
    m_inSeqNo(0),
    m_layer(0),
    m_outSeqNo(0),
    m_classType(typeDecryptedMessageLayerSecret17)
{
}

DecryptedMessageLayer::~DecryptedMessageLayer() {

}

void DecryptedMessageLayer::setInSeqNo(qint32 inSeqNo) {
    m_inSeqNo = inSeqNo;
}

qint32 DecryptedMessageLayer::inSeqNo() const {
    return m_inSeqNo;
}

void DecryptedMessageLayer::setLayer(qint32 layer) {
    m_layer = layer;
}

qint32 DecryptedMessageLayer::layer() const {
    return m_layer;
}

void DecryptedMessageLayer::setMessage(const DecryptedMessage &message) {
    m_message = message;
}

DecryptedMessage DecryptedMessageLayer::message() const {
    return m_message;
}

void DecryptedMessageLayer::setOutSeqNo(qint32 outSeqNo) {
    m_outSeqNo = outSeqNo;
}

qint32 DecryptedMessageLayer::outSeqNo() const {
    return m_outSeqNo;
}

void DecryptedMessageLayer::setRandomBytes(const QByteArray &randomBytes) {
    m_randomBytes = randomBytes;
}

QByteArray DecryptedMessageLayer::randomBytes() const {
    return m_randomBytes;
}

bool DecryptedMessageLayer::operator ==(const DecryptedMessageLayer &b) const {
    return m_classType == b.m_classType &&
           m_inSeqNo == b.m_inSeqNo &&
           m_layer == b.m_layer &&
           m_message == b.m_message &&
           m_outSeqNo == b.m_outSeqNo &&
           m_randomBytes == b.m_randomBytes;
}

DecryptedMessageLayer &DecryptedMessageLayer::operator =(const DecryptedMessageLayer &b) {
    m_classType = b.m_classType;
    m_inSeqNo = b.m_inSeqNo;
    m_layer = b.m_layer;
    m_message = b.m_message;
    m_outSeqNo = b.m_outSeqNo;
    m_randomBytes = b.m_randomBytes;
    setNull(b.isNull());
    return *this;
}

void DecryptedMessageLayer::setClassType(DecryptedMessageLayer::DecryptedMessageLayerClassType classType) {
    m_classType = classType;
}

DecryptedMessageLayer::DecryptedMessageLayerClassType DecryptedMessageLayer::classType() const {
    return m_classType;
}

bool DecryptedMessageLayer::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeDecryptedMessageLayerSecret17: {
        m_randomBytes = in->fetchBytes();
        m_layer = in->fetchInt();
        m_inSeqNo = in->fetchInt();
        m_outSeqNo = in->fetchInt();
        m_message.fetch(in);
        m_classType = static_cast<DecryptedMessageLayerClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool DecryptedMessageLayer::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeDecryptedMessageLayerSecret17: {
        out->appendBytes(m_randomBytes);
        out->appendInt(m_layer);
        out->appendInt(m_inSeqNo);
        out->appendInt(m_outSeqNo);
        m_message.push(out);
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> DecryptedMessageLayer::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeDecryptedMessageLayerSecret17: {
        result["classType"] = "DecryptedMessageLayer::typeDecryptedMessageLayerSecret17";
        if( !m_randomBytes.isEmpty() ) result["randomBytes"] = QVariant::fromValue<QByteArray>(m_randomBytes);
        if( layer() ) result["layer"] = QString::number(layer());
        if( inSeqNo() ) result["inSeqNo"] = QString::number(inSeqNo());
        if( outSeqNo() ) result["outSeqNo"] = QString::number(outSeqNo());
        if( !m_message.isNull() ) result["message"] = m_message.toMap();
        return result;
    }
        break;

    default:
        return result;
    }
}

DecryptedMessageLayer DecryptedMessageLayer::fromMap(const QMap<QString, QVariant> &map) {
    DecryptedMessageLayer result;
    if(map.value("classType").toString() == "DecryptedMessageLayer::typeDecryptedMessageLayerSecret17") {
        result.setClassType(typeDecryptedMessageLayerSecret17);
        QVariant _randomBytes_var = map.value("randomBytes");
        if( !_randomBytes_var.isNull() ) {
            _randomBytes_var.convert( QVariant::nameToType("QByteArray") );
            result.setRandomBytes( _randomBytes_var.value<QByteArray>() );
        }

        QVariant _layer_var = map.value("layer");
        if( !_layer_var.isNull() ) {
            _layer_var.convert( QVariant::nameToType("qint32") );
            result.setLayer( _layer_var.value<qint32>() );
        }

        QVariant _inSeqNo_var = map.value("inSeqNo");
        if( !_inSeqNo_var.isNull() ) {
            _inSeqNo_var.convert( QVariant::nameToType("qint32") );
            result.setInSeqNo( _inSeqNo_var.value<qint32>() );
        }

        QVariant _outSeqNo_var = map.value("outSeqNo");
        if( !_outSeqNo_var.isNull() ) {
            _outSeqNo_var.convert( QVariant::nameToType("qint32") );
            result.setOutSeqNo( _outSeqNo_var.value<qint32>() );
        }

        QVariant _message_var = map.value("message");
        if( !_message_var.isNull() )
            result.setMessage( DecryptedMessage::fromMap(_message_var.toMap()) );

        return result;
    }
    return result;
}

DecryptedMessageLayer DecryptedMessageLayer::fromJson(const QString &json) {
    return DecryptedMessageLayer::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray DecryptedMessageLayer::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const DecryptedMessageLayer &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case DecryptedMessageLayer::typeDecryptedMessageLayerSecret17:
        stream << item.randomBytes();
        stream << item.layer();
        stream << item.inSeqNo();
        stream << item.outSeqNo();
        stream << item.message();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, DecryptedMessageLayer &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<DecryptedMessageLayer::DecryptedMessageLayerClassType>(type));
    switch(type) {
    case DecryptedMessageLayer::typeDecryptedMessageLayerSecret17: {
        QByteArray m_random_bytes;
        stream >> m_random_bytes;
        item.setRandomBytes(m_random_bytes);
        qint32 m_layer;
        stream >> m_layer;
        item.setLayer(m_layer);
        qint32 m_in_seq_no;
        stream >> m_in_seq_no;
        item.setInSeqNo(m_in_seq_no);
        qint32 m_out_seq_no;
        stream >> m_out_seq_no;
        item.setOutSeqNo(m_out_seq_no);
        DecryptedMessage m_message;
        stream >> m_message;
        item.setMessage(m_message);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const DecryptedMessageLayer &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.DecryptedMessageLayer(";
    switch(item.classType()) {
    case DecryptedMessageLayer::typeDecryptedMessageLayerSecret17:
        debug.nospace() << "classType: typeDecryptedMessageLayerSecret17";
        debug.nospace() << ", randomBytes: " << item.randomBytes();
        debug.nospace() << ", layer: " << item.layer();
        debug.nospace() << ", inSeqNo: " << item.inSeqNo();
        debug.nospace() << ", outSeqNo: " << item.outSeqNo();
        debug.nospace() << ", message: " << item.message();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
