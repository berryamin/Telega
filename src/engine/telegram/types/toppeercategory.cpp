// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "toppeercategory.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

TopPeerCategory::TopPeerCategory(TopPeerCategoryClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

TopPeerCategory::TopPeerCategory(InboundPkt *in) :
    m_classType(typeTopPeerCategoryBotsPM)
{
    fetch(in);
}

TopPeerCategory::TopPeerCategory(const TopPeerCategory &another) :
    TelegramTypeObject(),
    m_classType(typeTopPeerCategoryBotsPM)
{
    operator=(another);
}

TopPeerCategory::TopPeerCategory(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeTopPeerCategoryBotsPM)
{
}

TopPeerCategory::~TopPeerCategory() {
    
}

bool TopPeerCategory::operator ==(const TopPeerCategory &b) const {
    return m_classType == b.m_classType;
}

TopPeerCategory &TopPeerCategory::operator =(const TopPeerCategory &b) {
    m_classType = b.m_classType;
    setNull(b.isNull());
    return *this;
}

void TopPeerCategory::setClassType(TopPeerCategory::TopPeerCategoryClassType classType) {
    m_classType = classType;
}

TopPeerCategory::TopPeerCategoryClassType TopPeerCategory::classType() const {
    return m_classType;
}

bool TopPeerCategory::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeTopPeerCategoryBotsPM: {
        m_classType = static_cast<TopPeerCategoryClassType>(x);
        return true;
    }
        break;
    
    case typeTopPeerCategoryBotsInline: {
        m_classType = static_cast<TopPeerCategoryClassType>(x);
        return true;
    }
        break;
    
    case typeTopPeerCategoryCorrespondents: {
        m_classType = static_cast<TopPeerCategoryClassType>(x);
        return true;
    }
        break;
    
    case typeTopPeerCategoryGroups: {
        m_classType = static_cast<TopPeerCategoryClassType>(x);
        return true;
    }
        break;
    
    case typeTopPeerCategoryChannels: {
        m_classType = static_cast<TopPeerCategoryClassType>(x);
        return true;
    }
        break;
    
    case typeTopPeerCategoryPhoneCalls: {
        m_classType = static_cast<TopPeerCategoryClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool TopPeerCategory::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeTopPeerCategoryBotsPM: {
        return true;
    }
        break;
    
    case typeTopPeerCategoryBotsInline: {
        return true;
    }
        break;
    
    case typeTopPeerCategoryCorrespondents: {
        return true;
    }
        break;
    
    case typeTopPeerCategoryGroups: {
        return true;
    }
        break;
    
    case typeTopPeerCategoryChannels: {
        return true;
    }
        break;
    
    case typeTopPeerCategoryPhoneCalls: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> TopPeerCategory::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeTopPeerCategoryBotsPM: {
        result["classType"] = "TopPeerCategory::typeTopPeerCategoryBotsPM";
        return result;
    }
        break;
    
    case typeTopPeerCategoryBotsInline: {
        result["classType"] = "TopPeerCategory::typeTopPeerCategoryBotsInline";
        return result;
    }
        break;
    
    case typeTopPeerCategoryCorrespondents: {
        result["classType"] = "TopPeerCategory::typeTopPeerCategoryCorrespondents";
        return result;
    }
        break;
    
    case typeTopPeerCategoryGroups: {
        result["classType"] = "TopPeerCategory::typeTopPeerCategoryGroups";
        return result;
    }
        break;
    
    case typeTopPeerCategoryChannels: {
        result["classType"] = "TopPeerCategory::typeTopPeerCategoryChannels";
        return result;
    }
        break;
    
    case typeTopPeerCategoryPhoneCalls: {
        result["classType"] = "TopPeerCategory::typeTopPeerCategoryPhoneCalls";
        return result;
    }
        break;
    
    default:
        return result;
    }
}

TopPeerCategory TopPeerCategory::fromMap(const QMap<QString, QVariant> &map) {
    TopPeerCategory result;
    if(map.value("classType").toString() == "TopPeerCategory::typeTopPeerCategoryBotsPM") {
        result.setClassType(typeTopPeerCategoryBotsPM);
        return result;
    }
    if(map.value("classType").toString() == "TopPeerCategory::typeTopPeerCategoryBotsInline") {
        result.setClassType(typeTopPeerCategoryBotsInline);
        return result;
    }
    if(map.value("classType").toString() == "TopPeerCategory::typeTopPeerCategoryCorrespondents") {
        result.setClassType(typeTopPeerCategoryCorrespondents);
        return result;
    }
    if(map.value("classType").toString() == "TopPeerCategory::typeTopPeerCategoryGroups") {
        result.setClassType(typeTopPeerCategoryGroups);
        return result;
    }
    if(map.value("classType").toString() == "TopPeerCategory::typeTopPeerCategoryChannels") {
        result.setClassType(typeTopPeerCategoryChannels);
        return result;
    }
    if(map.value("classType").toString() == "TopPeerCategory::typeTopPeerCategoryPhoneCalls") {
        result.setClassType(typeTopPeerCategoryPhoneCalls);
        return result;
    }
    return result;
}

TopPeerCategory TopPeerCategory::fromJson(const QString &json) {
    return TopPeerCategory::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray TopPeerCategory::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const TopPeerCategory &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case TopPeerCategory::typeTopPeerCategoryBotsPM:
        
        break;
    case TopPeerCategory::typeTopPeerCategoryBotsInline:
        
        break;
    case TopPeerCategory::typeTopPeerCategoryCorrespondents:
        
        break;
    case TopPeerCategory::typeTopPeerCategoryGroups:
        
        break;
    case TopPeerCategory::typeTopPeerCategoryChannels:
        
        break;
    case TopPeerCategory::typeTopPeerCategoryPhoneCalls:
        
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, TopPeerCategory &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<TopPeerCategory::TopPeerCategoryClassType>(type));
    switch(type) {
    case TopPeerCategory::typeTopPeerCategoryBotsPM: {
        
    }
        break;
    case TopPeerCategory::typeTopPeerCategoryBotsInline: {
        
    }
        break;
    case TopPeerCategory::typeTopPeerCategoryCorrespondents: {
        
    }
        break;
    case TopPeerCategory::typeTopPeerCategoryGroups: {
        
    }
        break;
    case TopPeerCategory::typeTopPeerCategoryChannels: {
        
    }
        break;
    case TopPeerCategory::typeTopPeerCategoryPhoneCalls: {
        
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const TopPeerCategory &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.TopPeerCategory(";
    switch(item.classType()) {
    case TopPeerCategory::typeTopPeerCategoryBotsPM:
        debug.nospace() << "classType: typeTopPeerCategoryBotsPM";
        break;
    case TopPeerCategory::typeTopPeerCategoryBotsInline:
        debug.nospace() << "classType: typeTopPeerCategoryBotsInline";
        break;
    case TopPeerCategory::typeTopPeerCategoryCorrespondents:
        debug.nospace() << "classType: typeTopPeerCategoryCorrespondents";
        break;
    case TopPeerCategory::typeTopPeerCategoryGroups:
        debug.nospace() << "classType: typeTopPeerCategoryGroups";
        break;
    case TopPeerCategory::typeTopPeerCategoryChannels:
        debug.nospace() << "classType: typeTopPeerCategoryChannels";
        break;
    case TopPeerCategory::typeTopPeerCategoryPhoneCalls:
        debug.nospace() << "classType: typeTopPeerCategoryPhoneCalls";
        break;
    }
    debug.nospace() << ")";
    return debug;
}

