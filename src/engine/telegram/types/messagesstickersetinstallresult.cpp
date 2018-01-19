// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesstickersetinstallresult.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessagesStickerSetInstallResult::MessagesStickerSetInstallResult(MessagesStickerSetInstallResultClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesStickerSetInstallResult::MessagesStickerSetInstallResult(InboundPkt *in) :
    m_classType(typeMessagesStickerSetInstallResultSuccess)
{
    fetch(in);
}

MessagesStickerSetInstallResult::MessagesStickerSetInstallResult(const MessagesStickerSetInstallResult &another) :
    TelegramTypeObject(),
    m_classType(typeMessagesStickerSetInstallResultSuccess)
{
    operator=(another);
}

MessagesStickerSetInstallResult::MessagesStickerSetInstallResult(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeMessagesStickerSetInstallResultSuccess)
{
}

MessagesStickerSetInstallResult::~MessagesStickerSetInstallResult() {

}

void MessagesStickerSetInstallResult::setSets(const QList<StickerSetCovered> &sets) {
    m_sets = sets;
}

QList<StickerSetCovered> MessagesStickerSetInstallResult::sets() const {
    return m_sets;
}

bool MessagesStickerSetInstallResult::operator ==(const MessagesStickerSetInstallResult &b) const {
    return m_classType == b.m_classType &&
           m_sets == b.m_sets;
}

MessagesStickerSetInstallResult &MessagesStickerSetInstallResult::operator =(const MessagesStickerSetInstallResult &b) {
    m_classType = b.m_classType;
    m_sets = b.m_sets;
    setNull(b.isNull());
    return *this;
}

void MessagesStickerSetInstallResult::setClassType(MessagesStickerSetInstallResult::MessagesStickerSetInstallResultClassType classType) {
    m_classType = classType;
}

MessagesStickerSetInstallResult::MessagesStickerSetInstallResultClassType MessagesStickerSetInstallResult::classType() const {
    return m_classType;
}

bool MessagesStickerSetInstallResult::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesStickerSetInstallResultSuccess: {
        m_classType = static_cast<MessagesStickerSetInstallResultClassType>(x);
        return true;
    }
        break;

    case typeMessagesStickerSetInstallResultArchive: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_sets_length = in->fetchInt();
        m_sets.clear();
        for (qint32 i = 0; i < m_sets_length; i++) {
            StickerSetCovered type;
            type.fetch(in);
            m_sets.append(type);
        }
        m_classType = static_cast<MessagesStickerSetInstallResultClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesStickerSetInstallResult::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesStickerSetInstallResultSuccess: {
        return true;
    }
        break;

    case typeMessagesStickerSetInstallResultArchive: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_sets.count());
        for (qint32 i = 0; i < m_sets.count(); i++) {
            m_sets[i].push(out);
        }
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> MessagesStickerSetInstallResult::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessagesStickerSetInstallResultSuccess: {
        result["classType"] = "MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultSuccess";
        return result;
    }
        break;

    case typeMessagesStickerSetInstallResultArchive: {
        result["classType"] = "MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultArchive";
        QList<QVariant> _sets;
        //for(const StickerSetCovered &m__type: m_sets)
        for(int i = 0; i < m_sets.size(); ++i) {
            const StickerSetCovered &m__type = m_sets[i];
            if( !m__type.isNull() ) _sets << m__type.toMap();
        }
        result["sets"] = _sets;
        return result;
    }
        break;

    default:
        return result;
    }
}

MessagesStickerSetInstallResult MessagesStickerSetInstallResult::fromMap(const QMap<QString, QVariant> &map) {
    MessagesStickerSetInstallResult result;
    if(map.value("classType").toString() == "MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultSuccess") {
        result.setClassType(typeMessagesStickerSetInstallResultSuccess);
        return result;
    }
    if(map.value("classType").toString() == "MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultArchive") {
        result.setClassType(typeMessagesStickerSetInstallResultArchive);
        QList<QVariant> map_sets = map["sets"].toList();
        QList<StickerSetCovered> _sets;
        //for(const QVariant &var: map_sets)
        for(int i = 0; i < map_sets.size(); ++i) {
            const QVariant &var = map_sets[i];
            _sets << StickerSetCovered::fromMap(var.toMap());
        }
        result.setSets(_sets);
        return result;
    }
    return result;
}

MessagesStickerSetInstallResult MessagesStickerSetInstallResult::fromJson(const QString &json) {
    return MessagesStickerSetInstallResult::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray MessagesStickerSetInstallResult::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const MessagesStickerSetInstallResult &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultSuccess:

        break;
    case MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultArchive:
        stream << item.sets();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessagesStickerSetInstallResult &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesStickerSetInstallResult::MessagesStickerSetInstallResultClassType>(type));
    switch(type) {
    case MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultSuccess: {

    }
        break;
    case MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultArchive: {
        QList<StickerSetCovered> m_sets;
        stream >> m_sets;
        item.setSets(m_sets);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const MessagesStickerSetInstallResult &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.MessagesStickerSetInstallResult(";
    switch(item.classType()) {
    case MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultSuccess:
        debug.nospace() << "classType: typeMessagesStickerSetInstallResultSuccess";
        break;
    case MessagesStickerSetInstallResult::typeMessagesStickerSetInstallResultArchive:
        debug.nospace() << "classType: typeMessagesStickerSetInstallResultArchive";
        debug.nospace() << ", sets: " << item.sets();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
