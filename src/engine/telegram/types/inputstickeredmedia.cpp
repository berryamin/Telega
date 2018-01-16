// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputstickeredmedia.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputStickeredMedia::InputStickeredMedia(InputStickeredMediaClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

InputStickeredMedia::InputStickeredMedia(InboundPkt *in) :
    m_classType(typeInputStickeredMediaPhoto)
{
    fetch(in);
}

InputStickeredMedia::InputStickeredMedia(const InputStickeredMedia &another) :
    TelegramTypeObject(),
    m_classType(typeInputStickeredMediaPhoto)
{
    operator=(another);
}

InputStickeredMedia::InputStickeredMedia(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeInputStickeredMediaPhoto)
{
}

InputStickeredMedia::~InputStickeredMedia() {
    
}

void InputStickeredMedia::setIdInputDocument(const InputDocument &idInputDocument) {
    m_idInputDocument = idInputDocument;
}

InputDocument InputStickeredMedia::idInputDocument() const {
    return m_idInputDocument;
}

void InputStickeredMedia::setIdInputPhoto(const InputPhoto &idInputPhoto) {
    m_idInputPhoto = idInputPhoto;
}

InputPhoto InputStickeredMedia::idInputPhoto() const {
    return m_idInputPhoto;
}

bool InputStickeredMedia::operator ==(const InputStickeredMedia &b) const {
    return m_classType == b.m_classType &&
           m_idInputDocument == b.m_idInputDocument &&
           m_idInputPhoto == b.m_idInputPhoto;
}

InputStickeredMedia &InputStickeredMedia::operator =(const InputStickeredMedia &b) {
    m_classType = b.m_classType;
    m_idInputDocument = b.m_idInputDocument;
    m_idInputPhoto = b.m_idInputPhoto;
    setNull(b.isNull());
    return *this;
}

void InputStickeredMedia::setClassType(InputStickeredMedia::InputStickeredMediaClassType classType) {
    m_classType = classType;
}

InputStickeredMedia::InputStickeredMediaClassType InputStickeredMedia::classType() const {
    return m_classType;
}

bool InputStickeredMedia::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputStickeredMediaPhoto: {
        m_idInputPhoto.fetch(in);
        m_classType = static_cast<InputStickeredMediaClassType>(x);
        return true;
    }
        break;
    
    case typeInputStickeredMediaDocument: {
        m_idInputDocument.fetch(in);
        m_classType = static_cast<InputStickeredMediaClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputStickeredMedia::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputStickeredMediaPhoto: {
        m_idInputPhoto.push(out);
        return true;
    }
        break;
    
    case typeInputStickeredMediaDocument: {
        m_idInputDocument.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> InputStickeredMedia::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputStickeredMediaPhoto: {
        result["classType"] = "InputStickeredMedia::typeInputStickeredMediaPhoto";
        if( !m_idInputPhoto.isNull() ) result["idInputPhoto"] = m_idInputPhoto.toMap();
        return result;
    }
        break;
    
    case typeInputStickeredMediaDocument: {
        result["classType"] = "InputStickeredMedia::typeInputStickeredMediaDocument";
        if( !m_idInputDocument.isNull() ) result["idInputDocument"] = m_idInputDocument.toMap();
        return result;
    }
        break;
    
    default:
        return result;
    }
}

InputStickeredMedia InputStickeredMedia::fromMap(const QMap<QString, QVariant> &map) {
    InputStickeredMedia result;
    if(map.value("classType").toString() == "InputStickeredMedia::typeInputStickeredMediaPhoto") {
        result.setClassType(typeInputStickeredMediaPhoto);
        QVariant _idInputPhoto_var = map.value("idInputPhoto");
        if( !_idInputPhoto_var.isNull() )
            result.setIdInputPhoto( InputPhoto::fromMap(_idInputPhoto_var.toMap()) );
        
        return result;
    }
    if(map.value("classType").toString() == "InputStickeredMedia::typeInputStickeredMediaDocument") {
        result.setClassType(typeInputStickeredMediaDocument);
        QVariant _idInputDocument_var = map.value("idInputDocument");
        if( !_idInputDocument_var.isNull() )
            result.setIdInputDocument( InputDocument::fromMap(_idInputDocument_var.toMap()) );
        
        return result;
    }
    return result;
}

InputStickeredMedia InputStickeredMedia::fromJson(const QString &json) {
    return InputStickeredMedia::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray InputStickeredMedia::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const InputStickeredMedia &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputStickeredMedia::typeInputStickeredMediaPhoto:
        stream << item.idInputPhoto();
        break;
    case InputStickeredMedia::typeInputStickeredMediaDocument:
        stream << item.idInputDocument();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputStickeredMedia &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputStickeredMedia::InputStickeredMediaClassType>(type));
    switch(type) {
    case InputStickeredMedia::typeInputStickeredMediaPhoto: {
        InputPhoto m_id_InputPhoto;
        stream >> m_id_InputPhoto;
        item.setIdInputPhoto(m_id_InputPhoto);
    }
        break;
    case InputStickeredMedia::typeInputStickeredMediaDocument: {
        InputDocument m_id_InputDocument;
        stream >> m_id_InputDocument;
        item.setIdInputDocument(m_id_InputDocument);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const InputStickeredMedia &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.InputStickeredMedia(";
    switch(item.classType()) {
    case InputStickeredMedia::typeInputStickeredMediaPhoto:
        debug.nospace() << "classType: typeInputStickeredMediaPhoto";
        debug.nospace() << ", idInputPhoto: " << item.idInputPhoto();
        break;
    case InputStickeredMedia::typeInputStickeredMediaDocument:
        debug.nospace() << "classType: typeInputStickeredMediaDocument";
        debug.nospace() << ", idInputDocument: " << item.idInputDocument();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

