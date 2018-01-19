// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "replymarkup.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

ReplyMarkup::ReplyMarkup(ReplyMarkupClassType classType, InboundPkt *in) :
    m_flags(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

ReplyMarkup::ReplyMarkup(InboundPkt *in) :
    m_flags(0),
    m_classType(typeReplyKeyboardHide)
{
    fetch(in);
}

ReplyMarkup::ReplyMarkup(const ReplyMarkup &another) :
    TelegramTypeObject(),
    m_flags(0),
    m_classType(typeReplyKeyboardHide)
{
    operator=(another);
}

ReplyMarkup::ReplyMarkup(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_classType(typeReplyKeyboardHide)
{
}

ReplyMarkup::~ReplyMarkup() {

}

void ReplyMarkup::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 ReplyMarkup::flags() const {
    return m_flags;
}

void ReplyMarkup::setResize(bool resize) {
    if(resize) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool ReplyMarkup::resize() const {
    return (m_flags & 1<<0);
}

void ReplyMarkup::setRows(const QList<KeyboardButtonRow> &rows) {
    m_rows = rows;
}

QList<KeyboardButtonRow> ReplyMarkup::rows() const {
    return m_rows;
}

void ReplyMarkup::setSelective(bool selective) {
    if(selective) m_flags = (m_flags | (1<<2));
    else m_flags = (m_flags & ~(1<<2));
}

bool ReplyMarkup::selective() const {
    return (m_flags & 1<<2);
}

void ReplyMarkup::setSingleUse(bool singleUse) {
    if(singleUse) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

bool ReplyMarkup::singleUse() const {
    return (m_flags & 1<<1);
}

bool ReplyMarkup::operator ==(const ReplyMarkup &b) const {
    return m_classType == b.m_classType &&
           m_flags == b.m_flags &&
           m_rows == b.m_rows;
}

ReplyMarkup &ReplyMarkup::operator =(const ReplyMarkup &b) {
    m_classType = b.m_classType;
    m_flags = b.m_flags;
    m_rows = b.m_rows;
    setNull(b.isNull());
    return *this;
}

void ReplyMarkup::setClassType(ReplyMarkup::ReplyMarkupClassType classType) {
    m_classType = classType;
}

ReplyMarkup::ReplyMarkupClassType ReplyMarkup::classType() const {
    return m_classType;
}

bool ReplyMarkup::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeReplyKeyboardHide: {
        m_flags = in->fetchInt();
        m_classType = static_cast<ReplyMarkupClassType>(x);
        return true;
    }
        break;

    case typeReplyKeyboardForceReply: {
        m_flags = in->fetchInt();
        m_classType = static_cast<ReplyMarkupClassType>(x);
        return true;
    }
        break;

    case typeReplyKeyboardMarkup: {
        m_flags = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_rows_length = in->fetchInt();
        m_rows.clear();
        for (qint32 i = 0; i < m_rows_length; i++) {
            KeyboardButtonRow type;
            type.fetch(in);
            m_rows.append(type);
        }
        m_classType = static_cast<ReplyMarkupClassType>(x);
        return true;
    }
        break;

    case typeReplyInlineMarkup: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_rows_length = in->fetchInt();
        m_rows.clear();
        for (qint32 i = 0; i < m_rows_length; i++) {
            KeyboardButtonRow type;
            type.fetch(in);
            m_rows.append(type);
        }
        m_classType = static_cast<ReplyMarkupClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool ReplyMarkup::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeReplyKeyboardHide: {
        out->appendInt(m_flags);
        return true;
    }
        break;

    case typeReplyKeyboardForceReply: {
        out->appendInt(m_flags);
        return true;
    }
        break;

    case typeReplyKeyboardMarkup: {
        out->appendInt(m_flags);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_rows.count());
        for (qint32 i = 0; i < m_rows.count(); i++) {
            m_rows[i].push(out);
        }
        return true;
    }
        break;

    case typeReplyInlineMarkup: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_rows.count());
        for (qint32 i = 0; i < m_rows.count(); i++) {
            m_rows[i].push(out);
        }
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> ReplyMarkup::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeReplyKeyboardHide: {
        result["classType"] = "ReplyMarkup::typeReplyKeyboardHide";
        if( selective() ) result["selective"] = QString::number(selective());
        return result;
    }
        break;

    case typeReplyKeyboardForceReply: {
        result["classType"] = "ReplyMarkup::typeReplyKeyboardForceReply";
        if( singleUse() ) result["singleUse"] = QString::number(singleUse());
        if( selective() ) result["selective"] = QString::number(selective());
        return result;
    }
        break;

    case typeReplyKeyboardMarkup: {
        result["classType"] = "ReplyMarkup::typeReplyKeyboardMarkup";
        if( resize() ) result["resize"] = QString::number(resize());
        if( singleUse() ) result["singleUse"] = QString::number(singleUse());
        if( selective() ) result["selective"] = QString::number(selective());
        QList<QVariant> _rows;
        //for(const KeyboardButtonRow &m__type: m_rows)
        for(int i = 0; i < m_rows.size(); ++i) {
            const KeyboardButtonRow &m__type = m_rows[i];
            if( !m__type.isNull() ) _rows << m__type.toMap();
        }
        result["rows"] = _rows;
        return result;
    }
        break;

    case typeReplyInlineMarkup: {
        result["classType"] = "ReplyMarkup::typeReplyInlineMarkup";
        QList<QVariant> _rows;
        //for(const KeyboardButtonRow &m__type: m_rows)
        for(int i = 0; i < m_rows.size(); ++i) {
            const KeyboardButtonRow &m__type = m_rows[i];
            if( !m__type.isNull() ) _rows << m__type.toMap();
        }
        result["rows"] = _rows;
        return result;
    }
        break;

    default:
        return result;
    }
}

ReplyMarkup ReplyMarkup::fromMap(const QMap<QString, QVariant> &map) {
    ReplyMarkup result;
    if(map.value("classType").toString() == "ReplyMarkup::typeReplyKeyboardHide") {
        result.setClassType(typeReplyKeyboardHide);
        QVariant _selective_var = map.value("selective");
        if( !_selective_var.isNull() ) {
            _selective_var.convert( QVariant::nameToType("bool") );
            result.setSelective( _selective_var.value<bool>() );
        }

        return result;
    }
    if(map.value("classType").toString() == "ReplyMarkup::typeReplyKeyboardForceReply") {
        result.setClassType(typeReplyKeyboardForceReply);
        QVariant _singleUse_var = map.value("singleUse");
        if( !_singleUse_var.isNull() ) {
            _singleUse_var.convert( QVariant::nameToType("bool") );
            result.setSingleUse( _singleUse_var.value<bool>() );
        }

        QVariant _selective_var = map.value("selective");
        if( !_selective_var.isNull() ) {
            _selective_var.convert( QVariant::nameToType("bool") );
            result.setSelective( _selective_var.value<bool>() );
        }

        return result;
    }
    if(map.value("classType").toString() == "ReplyMarkup::typeReplyKeyboardMarkup") {
        result.setClassType(typeReplyKeyboardMarkup);
        QVariant _resize_var = map.value("resize");
        if( !_resize_var.isNull() ) {
            _resize_var.convert( QVariant::nameToType("bool") );
            result.setResize( _resize_var.value<bool>() );
        }

        QVariant _singleUse_var = map.value("singleUse");
        if( !_singleUse_var.isNull() ) {
            _singleUse_var.convert( QVariant::nameToType("bool") );
            result.setSingleUse( _singleUse_var.value<bool>() );
        }

        QVariant _selective_var = map.value("selective");
        if( !_selective_var.isNull() ) {
            _selective_var.convert( QVariant::nameToType("bool") );
            result.setSelective( _selective_var.value<bool>() );
        }

        QList<QVariant> map_rows = map["rows"].toList();
        QList<KeyboardButtonRow> _rows;
        //for(const QVariant &var: map_rows)
        for(int i = 0; i < map_rows.size(); ++i) {
            const QVariant &var = map_rows[i];
            _rows << KeyboardButtonRow::fromMap(var.toMap());
        }
        result.setRows(_rows);
        return result;
    }
    if(map.value("classType").toString() == "ReplyMarkup::typeReplyInlineMarkup") {
        result.setClassType(typeReplyInlineMarkup);
        QList<QVariant> map_rows = map["rows"].toList();
        QList<KeyboardButtonRow> _rows;
        //for(const QVariant &var: map_rows)
        for(int i = 0; i < map_rows.size(); ++i) {
            const QVariant &var = map_rows[i];
            _rows << KeyboardButtonRow::fromMap(var.toMap());
        }
        result.setRows(_rows);
        return result;
    }
    return result;
}

ReplyMarkup ReplyMarkup::fromJson(const QString &json) {
    return ReplyMarkup::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray ReplyMarkup::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const ReplyMarkup &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case ReplyMarkup::typeReplyKeyboardHide:
        stream << item.flags();
        break;
    case ReplyMarkup::typeReplyKeyboardForceReply:
        stream << item.flags();
        break;
    case ReplyMarkup::typeReplyKeyboardMarkup:
        stream << item.flags();
        stream << item.rows();
        break;
    case ReplyMarkup::typeReplyInlineMarkup:
        stream << item.rows();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, ReplyMarkup &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<ReplyMarkup::ReplyMarkupClassType>(type));
    switch(type) {
    case ReplyMarkup::typeReplyKeyboardHide: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
    }
        break;
    case ReplyMarkup::typeReplyKeyboardForceReply: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
    }
        break;
    case ReplyMarkup::typeReplyKeyboardMarkup: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        QList<KeyboardButtonRow> m_rows;
        stream >> m_rows;
        item.setRows(m_rows);
    }
        break;
    case ReplyMarkup::typeReplyInlineMarkup: {
        QList<KeyboardButtonRow> m_rows;
        stream >> m_rows;
        item.setRows(m_rows);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const ReplyMarkup &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.ReplyMarkup(";
    switch(item.classType()) {
    case ReplyMarkup::typeReplyKeyboardHide:
        debug.nospace() << "classType: typeReplyKeyboardHide";
        debug.nospace() << ", flags: " << item.flags();
        break;
    case ReplyMarkup::typeReplyKeyboardForceReply:
        debug.nospace() << "classType: typeReplyKeyboardForceReply";
        debug.nospace() << ", flags: " << item.flags();
        break;
    case ReplyMarkup::typeReplyKeyboardMarkup:
        debug.nospace() << "classType: typeReplyKeyboardMarkup";
        debug.nospace() << ", flags: " << item.flags();
        debug.nospace() << ", rows: " << item.rows();
        break;
    case ReplyMarkup::typeReplyInlineMarkup:
        debug.nospace() << "classType: typeReplyInlineMarkup";
        debug.nospace() << ", rows: " << item.rows();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
