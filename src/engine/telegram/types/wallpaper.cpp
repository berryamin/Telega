// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "wallpaper.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

WallPaper::WallPaper(WallPaperClassType classType, InboundPkt *in) :
    m_bgColor(0),
    m_color(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

WallPaper::WallPaper(InboundPkt *in) :
    m_bgColor(0),
    m_color(0),
    m_id(0),
    m_classType(typeWallPaper)
{
    fetch(in);
}

WallPaper::WallPaper(const WallPaper &another) :
    TelegramTypeObject(),
    m_bgColor(0),
    m_color(0),
    m_id(0),
    m_classType(typeWallPaper)
{
    operator=(another);
}

WallPaper::WallPaper(const Null &null) :
    TelegramTypeObject(null),
    m_bgColor(0),
    m_color(0),
    m_id(0),
    m_classType(typeWallPaper)
{
}

WallPaper::~WallPaper() {

}

void WallPaper::setBgColor(qint32 bgColor) {
    m_bgColor = bgColor;
}

qint32 WallPaper::bgColor() const {
    return m_bgColor;
}

void WallPaper::setColor(qint32 color) {
    m_color = color;
}

qint32 WallPaper::color() const {
    return m_color;
}

void WallPaper::setId(qint32 id) {
    m_id = id;
}

qint32 WallPaper::id() const {
    return m_id;
}

void WallPaper::setSizes(const QList<PhotoSize> &sizes) {
    m_sizes = sizes;
}

QList<PhotoSize> WallPaper::sizes() const {
    return m_sizes;
}

void WallPaper::setTitle(const QString &title) {
    m_title = title;
}

QString WallPaper::title() const {
    return m_title;
}

bool WallPaper::operator ==(const WallPaper &b) const {
    return m_classType == b.m_classType &&
           m_bgColor == b.m_bgColor &&
           m_color == b.m_color &&
           m_id == b.m_id &&
           m_sizes == b.m_sizes &&
           m_title == b.m_title;
}

WallPaper &WallPaper::operator =(const WallPaper &b) {
    m_classType = b.m_classType;
    m_bgColor = b.m_bgColor;
    m_color = b.m_color;
    m_id = b.m_id;
    m_sizes = b.m_sizes;
    m_title = b.m_title;
    setNull(b.isNull());
    return *this;
}

void WallPaper::setClassType(WallPaper::WallPaperClassType classType) {
    m_classType = classType;
}

WallPaper::WallPaperClassType WallPaper::classType() const {
    return m_classType;
}

bool WallPaper::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeWallPaper: {
        m_id = in->fetchInt();
        m_title = in->fetchQString();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_sizes_length = in->fetchInt();
        m_sizes.clear();
        for (qint32 i = 0; i < m_sizes_length; i++) {
            PhotoSize type;
            type.fetch(in);
            m_sizes.append(type);
        }
        m_color = in->fetchInt();
        m_classType = static_cast<WallPaperClassType>(x);
        return true;
    }
        break;

    case typeWallPaperSolid: {
        m_id = in->fetchInt();
        m_title = in->fetchQString();
        m_bgColor = in->fetchInt();
        m_color = in->fetchInt();
        m_classType = static_cast<WallPaperClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool WallPaper::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeWallPaper: {
        out->appendInt(m_id);
        out->appendQString(m_title);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_sizes.count());
        for (qint32 i = 0; i < m_sizes.count(); i++) {
            m_sizes[i].push(out);
        }
        out->appendInt(m_color);
        return true;
    }
        break;

    case typeWallPaperSolid: {
        out->appendInt(m_id);
        out->appendQString(m_title);
        out->appendInt(m_bgColor);
        out->appendInt(m_color);
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> WallPaper::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeWallPaper: {
        result["classType"] = "WallPaper::typeWallPaper";
        if( id() ) result["id"] = QString::number(id());
        if( !m_title.isEmpty() ) result["title"] = QVariant::fromValue<QString>(m_title);
        QList<QVariant> _sizes;
        //for(const PhotoSize &m__type: m_sizes)
        for(int i = 0; i < m_sizes.size(); ++i) {
            const PhotoSize &m__type = m_sizes[i];
            if( !m__type.isNull() ) _sizes << m__type.toMap();
        }
        result["sizes"] = _sizes;
        if( color() ) result["color"] = QString::number(color());
        return result;
    }
        break;

    case typeWallPaperSolid: {
        result["classType"] = "WallPaper::typeWallPaperSolid";
        if( id() ) result["id"] = QString::number(id());
        if( !m_title.isEmpty() ) result["title"] = QVariant::fromValue<QString>(m_title);
        if( bgColor() ) result["bgColor"] = QString::number(bgColor());
        if( color() ) result["color"] = QString::number(color());
        return result;
    }
        break;

    default:
        return result;
    }
}

WallPaper WallPaper::fromMap(const QMap<QString, QVariant> &map) {
    WallPaper result;
    if(map.value("classType").toString() == "WallPaper::typeWallPaper") {
        result.setClassType(typeWallPaper);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }

        QVariant _title_var = map.value("title");
        if( !_title_var.isNull() ) {
            _title_var.convert( QVariant::nameToType("QString") );
            result.setTitle( _title_var.value<QString>() );
        }

        QList<QVariant> map_sizes = map["sizes"].toList();
        QList<PhotoSize> _sizes;
        //for(const QVariant &var: map_sizes)
        for(int i = 0; i < map_sizes.size(); ++i) {
            const QVariant &var = map_sizes[i];
            _sizes << PhotoSize::fromMap(var.toMap());
        }
        result.setSizes(_sizes);
        QVariant _color_var = map.value("color");
        if( !_color_var.isNull() ) {
            _color_var.convert( QVariant::nameToType("qint32") );
            result.setColor( _color_var.value<qint32>() );
        }

        return result;
    }
    if(map.value("classType").toString() == "WallPaper::typeWallPaperSolid") {
        result.setClassType(typeWallPaperSolid);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }

        QVariant _title_var = map.value("title");
        if( !_title_var.isNull() ) {
            _title_var.convert( QVariant::nameToType("QString") );
            result.setTitle( _title_var.value<QString>() );
        }

        QVariant _bgColor_var = map.value("bgColor");
        if( !_bgColor_var.isNull() ) {
            _bgColor_var.convert( QVariant::nameToType("qint32") );
            result.setBgColor( _bgColor_var.value<qint32>() );
        }

        QVariant _color_var = map.value("color");
        if( !_color_var.isNull() ) {
            _color_var.convert( QVariant::nameToType("qint32") );
            result.setColor( _color_var.value<qint32>() );
        }

        return result;
    }
    return result;
}

WallPaper WallPaper::fromJson(const QString &json) {
    return WallPaper::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray WallPaper::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const WallPaper &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case WallPaper::typeWallPaper:
        stream << item.id();
        stream << item.title();
        stream << item.sizes();
        stream << item.color();
        break;
    case WallPaper::typeWallPaperSolid:
        stream << item.id();
        stream << item.title();
        stream << item.bgColor();
        stream << item.color();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, WallPaper &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<WallPaper::WallPaperClassType>(type));
    switch(type) {
    case WallPaper::typeWallPaper: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QList<PhotoSize> m_sizes;
        stream >> m_sizes;
        item.setSizes(m_sizes);
        qint32 m_color;
        stream >> m_color;
        item.setColor(m_color);
    }
        break;
    case WallPaper::typeWallPaperSolid: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        qint32 m_bg_color;
        stream >> m_bg_color;
        item.setBgColor(m_bg_color);
        qint32 m_color;
        stream >> m_color;
        item.setColor(m_color);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const WallPaper &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.WallPaper(";
    switch(item.classType()) {
    case WallPaper::typeWallPaper:
        debug.nospace() << "classType: typeWallPaper";
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", title: " << item.title();
        debug.nospace() << ", sizes: " << item.sizes();
        debug.nospace() << ", color: " << item.color();
        break;
    case WallPaper::typeWallPaperSolid:
        debug.nospace() << "classType: typeWallPaperSolid";
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", title: " << item.title();
        debug.nospace() << ", bgColor: " << item.bgColor();
        debug.nospace() << ", color: " << item.color();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
