// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "stickerpack.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

StickerPack::StickerPack(StickerPackClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

StickerPack::StickerPack(InboundPkt *in) :
    m_classType(typeStickerPack)
{
    fetch(in);
}

StickerPack::StickerPack(const StickerPack &another) :
    TelegramTypeObject(),
    m_classType(typeStickerPack)
{
    operator=(another);
}

StickerPack::StickerPack(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeStickerPack)
{
}

StickerPack::~StickerPack() {

}

void StickerPack::setDocuments(const QList<qint64> &documents) {
    m_documents = documents;
}

QList<qint64> StickerPack::documents() const {
    return m_documents;
}

void StickerPack::setEmoticon(const QString &emoticon) {
    m_emoticon = emoticon;
}

QString StickerPack::emoticon() const {
    return m_emoticon;
}

bool StickerPack::operator ==(const StickerPack &b) const {
    return m_classType == b.m_classType &&
           m_documents == b.m_documents &&
           m_emoticon == b.m_emoticon;
}

StickerPack &StickerPack::operator =(const StickerPack &b) {
    m_classType = b.m_classType;
    m_documents = b.m_documents;
    m_emoticon = b.m_emoticon;
    setNull(b.isNull());
    return *this;
}

void StickerPack::setClassType(StickerPack::StickerPackClassType classType) {
    m_classType = classType;
}

StickerPack::StickerPackClassType StickerPack::classType() const {
    return m_classType;
}

bool StickerPack::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeStickerPack: {
        m_emoticon = in->fetchQString();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_documents_length = in->fetchInt();
        m_documents.clear();
        for (qint32 i = 0; i < m_documents_length; i++) {
            qint64 type;
            type = in->fetchLong();
            m_documents.append(type);
        }
        m_classType = static_cast<StickerPackClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool StickerPack::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeStickerPack: {
        out->appendQString(m_emoticon);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_documents.count());
        for (qint32 i = 0; i < m_documents.count(); i++) {
            out->appendLong(m_documents[i]);
        }
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> StickerPack::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeStickerPack: {
        result["classType"] = "StickerPack::typeStickerPack";
        if( !m_emoticon.isEmpty() ) result["emoticon"] = QVariant::fromValue<QString>(m_emoticon);
        QList<QVariant> _documents;
        //for(const qint64 &m__type: m_documents)
        for(int i = 0; i < m_documents.size(); ++i) {
            const qint64 &m__type = m_documents[i];
            _documents << QVariant::fromValue<qint64>(m__type);
        }
        result["documents"] = _documents;
        return result;
    }
        break;

    default:
        return result;
    }
}

StickerPack StickerPack::fromMap(const QMap<QString, QVariant> &map) {
    StickerPack result;
    if(map.value("classType").toString() == "StickerPack::typeStickerPack") {
        result.setClassType(typeStickerPack);
        QVariant _emoticon_var = map.value("emoticon");
        if( !_emoticon_var.isNull() ) {
            _emoticon_var.convert( QVariant::nameToType("QString") );
            result.setEmoticon( _emoticon_var.value<QString>() );
        }

        QList<QVariant> map_documents = map["documents"].toList();
        QList<qint64> _documents;
        //for(const QVariant &var: map_documents)
        for(int i = 0; i < map_documents.size(); ++i) {
            const QVariant &var = map_documents[i];
            _documents << var.value<qint64>();
        }
        result.setDocuments(_documents);
        return result;
    }
    return result;
}

StickerPack StickerPack::fromJson(const QString &json) {
    return StickerPack::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray StickerPack::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const StickerPack &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case StickerPack::typeStickerPack:
        stream << item.emoticon();
        stream << item.documents();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, StickerPack &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<StickerPack::StickerPackClassType>(type));
    switch(type) {
    case StickerPack::typeStickerPack: {
        QString m_emoticon;
        stream >> m_emoticon;
        item.setEmoticon(m_emoticon);
        QList<qint64> m_documents;
        stream >> m_documents;
        item.setDocuments(m_documents);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const StickerPack &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.StickerPack(";
    switch(item.classType()) {
    case StickerPack::typeStickerPack:
        debug.nospace() << "classType: typeStickerPack";
        debug.nospace() << ", emoticon: " << item.emoticon();
        debug.nospace() << ", documents: " << item.documents();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
