// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "webpage.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

WebPage::WebPage(WebPageClassType classType, InboundPkt *in) :
    m_date(0),
    m_duration(0),
    m_embedHeight(0),
    m_embedWidth(0),
    m_flags(0),
    m_hash(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

WebPage::WebPage(InboundPkt *in) :
    m_date(0),
    m_duration(0),
    m_embedHeight(0),
    m_embedWidth(0),
    m_flags(0),
    m_hash(0),
    m_id(0),
    m_classType(typeWebPageEmpty)
{
    fetch(in);
}

WebPage::WebPage(const WebPage &another) :
    TelegramTypeObject(),
    m_date(0),
    m_duration(0),
    m_embedHeight(0),
    m_embedWidth(0),
    m_flags(0),
    m_hash(0),
    m_id(0),
    m_classType(typeWebPageEmpty)
{
    operator=(another);
}

WebPage::WebPage(const Null &null) :
    TelegramTypeObject(null),
    m_date(0),
    m_duration(0),
    m_embedHeight(0),
    m_embedWidth(0),
    m_flags(0),
    m_hash(0),
    m_id(0),
    m_classType(typeWebPageEmpty)
{
}

WebPage::~WebPage() {

}

void WebPage::setAuthor(const QString &author) {
    if(!author.isNull()) m_flags = (m_flags | (1<<8));
    else m_flags = (m_flags & ~(1<<8));
    m_author = author;
}

QString WebPage::author() const {
    return m_author;
}

void WebPage::setCachedPage(const Page &cachedPage) {
    if(!cachedPage.isNull()) m_flags = (m_flags | (1<<10));
    else m_flags = (m_flags & ~(1<<10));
    m_cachedPage = cachedPage;
}

Page WebPage::cachedPage() const {
    return m_cachedPage;
}

void WebPage::setDate(qint32 date) {
    m_date = date;
}

qint32 WebPage::date() const {
    return m_date;
}

void WebPage::setDescription(const QString &description) {
    if(!description.isNull()) m_flags = (m_flags | (1<<3));
    else m_flags = (m_flags & ~(1<<3));
    m_description = description;
}

QString WebPage::description() const {
    return m_description;
}

void WebPage::setDisplayUrl(const QString &displayUrl) {
    m_displayUrl = displayUrl;
}

QString WebPage::displayUrl() const {
    return m_displayUrl;
}

void WebPage::setDocument(const Document &document) {
    if(!document.isNull()) m_flags = (m_flags | (1<<9));
    else m_flags = (m_flags & ~(1<<9));
    m_document = document;
}

Document WebPage::document() const {
    return m_document;
}

void WebPage::setDuration(qint32 duration) {
    if(duration) m_flags = (m_flags | (1<<7));
    else m_flags = (m_flags & ~(1<<7));
    m_duration = duration;
}

qint32 WebPage::duration() const {
    return m_duration;
}

void WebPage::setEmbedHeight(qint32 embedHeight) {
    if(embedHeight) m_flags = (m_flags | (1<<6));
    else m_flags = (m_flags & ~(1<<6));
    m_embedHeight = embedHeight;
}

qint32 WebPage::embedHeight() const {
    return m_embedHeight;
}

void WebPage::setEmbedType(const QString &embedType) {
    if(!embedType.isNull()) m_flags = (m_flags | (1<<5));
    else m_flags = (m_flags & ~(1<<5));
    m_embedType = embedType;
}

QString WebPage::embedType() const {
    return m_embedType;
}

void WebPage::setEmbedUrl(const QString &embedUrl) {
    if(!embedUrl.isNull()) m_flags = (m_flags | (1<<5));
    else m_flags = (m_flags & ~(1<<5));
    m_embedUrl = embedUrl;
}

QString WebPage::embedUrl() const {
    return m_embedUrl;
}

void WebPage::setEmbedWidth(qint32 embedWidth) {
    if(embedWidth) m_flags = (m_flags | (1<<6));
    else m_flags = (m_flags & ~(1<<6));
    m_embedWidth = embedWidth;
}

qint32 WebPage::embedWidth() const {
    return m_embedWidth;
}

void WebPage::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 WebPage::flags() const {
    return m_flags;
}

void WebPage::setHash(qint32 hash) {
    m_hash = hash;
}

qint32 WebPage::hash() const {
    return m_hash;
}

void WebPage::setId(qint64 id) {
    m_id = id;
}

qint64 WebPage::id() const {
    return m_id;
}

void WebPage::setPhoto(const Photo &photo) {
    if(!photo.isNull()) m_flags = (m_flags | (1<<4));
    else m_flags = (m_flags & ~(1<<4));
    m_photo = photo;
}

Photo WebPage::photo() const {
    return m_photo;
}

void WebPage::setSiteName(const QString &siteName) {
    if(!siteName.isNull()) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
    m_siteName = siteName;
}

QString WebPage::siteName() const {
    return m_siteName;
}

void WebPage::setTitle(const QString &title) {
    if(!title.isNull()) m_flags = (m_flags | (1<<2));
    else m_flags = (m_flags & ~(1<<2));
    m_title = title;
}

QString WebPage::title() const {
    return m_title;
}

void WebPage::setType(const QString &type) {
    if(!type.isNull()) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
    m_type = type;
}

QString WebPage::type() const {
    return m_type;
}

void WebPage::setUrl(const QString &url) {
    m_url = url;
}

QString WebPage::url() const {
    return m_url;
}

bool WebPage::operator ==(const WebPage &b) const {
    return m_classType == b.m_classType &&
           m_author == b.m_author &&
           m_cachedPage == b.m_cachedPage &&
           m_date == b.m_date &&
           m_description == b.m_description &&
           m_displayUrl == b.m_displayUrl &&
           m_document == b.m_document &&
           m_duration == b.m_duration &&
           m_embedHeight == b.m_embedHeight &&
           m_embedType == b.m_embedType &&
           m_embedUrl == b.m_embedUrl &&
           m_embedWidth == b.m_embedWidth &&
           m_flags == b.m_flags &&
           m_hash == b.m_hash &&
           m_id == b.m_id &&
           m_photo == b.m_photo &&
           m_siteName == b.m_siteName &&
           m_title == b.m_title &&
           m_type == b.m_type &&
           m_url == b.m_url;
}

WebPage &WebPage::operator =(const WebPage &b) {
    m_classType = b.m_classType;
    m_author = b.m_author;
    m_cachedPage = b.m_cachedPage;
    m_date = b.m_date;
    m_description = b.m_description;
    m_displayUrl = b.m_displayUrl;
    m_document = b.m_document;
    m_duration = b.m_duration;
    m_embedHeight = b.m_embedHeight;
    m_embedType = b.m_embedType;
    m_embedUrl = b.m_embedUrl;
    m_embedWidth = b.m_embedWidth;
    m_flags = b.m_flags;
    m_hash = b.m_hash;
    m_id = b.m_id;
    m_photo = b.m_photo;
    m_siteName = b.m_siteName;
    m_title = b.m_title;
    m_type = b.m_type;
    m_url = b.m_url;
    setNull(b.isNull());
    return *this;
}

void WebPage::setClassType(WebPage::WebPageClassType classType) {
    m_classType = classType;
}

WebPage::WebPageClassType WebPage::classType() const {
    return m_classType;
}

bool WebPage::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeWebPageEmpty: {
        m_id = in->fetchLong();
        m_classType = static_cast<WebPageClassType>(x);
        return true;
    }
        break;

    case typeWebPagePending: {
        m_id = in->fetchLong();
        m_date = in->fetchInt();
        m_classType = static_cast<WebPageClassType>(x);
        return true;
    }
        break;

    case typeWebPage: {
        m_flags = in->fetchInt();
        m_id = in->fetchLong();
        m_url = in->fetchQString();
        m_displayUrl = in->fetchQString();
        m_hash = in->fetchInt();
        if(m_flags & 1<<0) {
            m_type = in->fetchQString();
        }
        if(m_flags & 1<<1) {
            m_siteName = in->fetchQString();
        }
        if(m_flags & 1<<2) {
            m_title = in->fetchQString();
        }
        if(m_flags & 1<<3) {
            m_description = in->fetchQString();
        }
        if(m_flags & 1<<4) {
            m_photo.fetch(in);
        }
        if(m_flags & 1<<5) {
            m_embedUrl = in->fetchQString();
        }
        if(m_flags & 1<<5) {
            m_embedType = in->fetchQString();
        }
        if(m_flags & 1<<6) {
            m_embedWidth = in->fetchInt();
        }
        if(m_flags & 1<<6) {
            m_embedHeight = in->fetchInt();
        }
        if(m_flags & 1<<7) {
            m_duration = in->fetchInt();
        }
        if(m_flags & 1<<8) {
            m_author = in->fetchQString();
        }
        if(m_flags & 1<<9) {
            m_document.fetch(in);
        }
        if(m_flags & 1<<10) {
            m_cachedPage.fetch(in);
        }
        m_classType = static_cast<WebPageClassType>(x);
        return true;
    }
        break;

    case typeWebPageNotModified: {
        m_classType = static_cast<WebPageClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool WebPage::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeWebPageEmpty: {
        out->appendLong(m_id);
        return true;
    }
        break;

    case typeWebPagePending: {
        out->appendLong(m_id);
        out->appendInt(m_date);
        return true;
    }
        break;

    case typeWebPage: {
        out->appendInt(m_flags);
        out->appendLong(m_id);
        out->appendQString(m_url);
        out->appendQString(m_displayUrl);
        out->appendInt(m_hash);
        if(m_flags & 1<<0) {
            out->appendQString(m_type);
        }
        if(m_flags & 1<<1) {
            out->appendQString(m_siteName);
        }
        if(m_flags & 1<<2) {
            out->appendQString(m_title);
        }
        if(m_flags & 1<<3) {
            out->appendQString(m_description);
        }
        if(m_flags & 1<<4) {
            m_photo.push(out);
        }
        if(m_flags & 1<<5) {
            out->appendQString(m_embedUrl);
        }
        if(m_flags & 1<<5) {
            out->appendQString(m_embedType);
        }
        if(m_flags & 1<<6) {
            out->appendInt(m_embedWidth);
        }
        if(m_flags & 1<<6) {
            out->appendInt(m_embedHeight);
        }
        if(m_flags & 1<<7) {
            out->appendInt(m_duration);
        }
        if(m_flags & 1<<8) {
            out->appendQString(m_author);
        }
        if(m_flags & 1<<9) {
            m_document.push(out);
        }
        if(m_flags & 1<<10) {
            m_cachedPage.push(out);
        }
        return true;
    }
        break;

    case typeWebPageNotModified: {
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> WebPage::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeWebPageEmpty: {
        result["classType"] = "WebPage::typeWebPageEmpty";
        if( id() ) result["id"] = QString::number(id());
        return result;
    }
        break;

    case typeWebPagePending: {
        result["classType"] = "WebPage::typeWebPagePending";
        if( id() ) result["id"] = QString::number(id());
        if( date() ) result["date"] = QString::number(date());
        return result;
    }
        break;

    case typeWebPage: {
        result["classType"] = "WebPage::typeWebPage";
        if( id() ) result["id"] = QString::number(id());
        if( !m_url.isEmpty() ) result["url"] = QVariant::fromValue<QString>(m_url);
        if( !m_displayUrl.isEmpty() ) result["displayUrl"] = QVariant::fromValue<QString>(m_displayUrl);
        if( hash() ) result["hash"] = QString::number(hash());
        if( !m_type.isEmpty() ) result["type"] = QVariant::fromValue<QString>(m_type);
        if( !m_siteName.isEmpty() ) result["siteName"] = QVariant::fromValue<QString>(m_siteName);
        if( !m_title.isEmpty() ) result["title"] = QVariant::fromValue<QString>(m_title);
        if( !m_description.isEmpty() ) result["description"] = QVariant::fromValue<QString>(m_description);
        if( !m_photo.isNull() ) result["photo"] = m_photo.toMap();
        if( !m_embedUrl.isEmpty() ) result["embedUrl"] = QVariant::fromValue<QString>(m_embedUrl);
        if( !m_embedType.isEmpty() ) result["embedType"] = QVariant::fromValue<QString>(m_embedType);
        if( embedWidth() ) result["embedWidth"] = QString::number(embedWidth());
        if( embedHeight() ) result["embedHeight"] = QString::number(embedHeight());
        if( duration() ) result["duration"] = QString::number(duration());
        if( !m_author.isEmpty() ) result["author"] = QVariant::fromValue<QString>(m_author);
        if( !m_document.isNull() ) result["document"] = m_document.toMap();
        if( !m_cachedPage.isNull() ) result["cachedPage"] = m_cachedPage.toMap();
        return result;
    }
        break;

    case typeWebPageNotModified: {
        result["classType"] = "WebPage::typeWebPageNotModified";
        return result;
    }
        break;

    default:
        return result;
    }
}

WebPage WebPage::fromMap(const QMap<QString, QVariant> &map) {
    WebPage result;
    if(map.value("classType").toString() == "WebPage::typeWebPageEmpty") {
        result.setClassType(typeWebPageEmpty);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint64") );
            result.setId( _id_var.value<qint64>() );
        }

        return result;
    }
    if(map.value("classType").toString() == "WebPage::typeWebPagePending") {
        result.setClassType(typeWebPagePending);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint64") );
            result.setId( _id_var.value<qint64>() );
        }

        QVariant _date_var = map.value("date");
        if( !_date_var.isNull() ) {
            _date_var.convert( QVariant::nameToType("qint32") );
            result.setDate( _date_var.value<qint32>() );
        }

        return result;
    }
    if(map.value("classType").toString() == "WebPage::typeWebPage") {
        result.setClassType(typeWebPage);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint64") );
            result.setId( _id_var.value<qint64>() );
        }

        QVariant _url_var = map.value("url");
        if( !_url_var.isNull() ) {
            _url_var.convert( QVariant::nameToType("QString") );
            result.setUrl( _url_var.value<QString>() );
        }

        QVariant _displayUrl_var = map.value("displayUrl");
        if( !_displayUrl_var.isNull() ) {
            _displayUrl_var.convert( QVariant::nameToType("QString") );
            result.setDisplayUrl( _displayUrl_var.value<QString>() );
        }

        QVariant _hash_var = map.value("hash");
        if( !_hash_var.isNull() ) {
            _hash_var.convert( QVariant::nameToType("qint32") );
            result.setHash( _hash_var.value<qint32>() );
        }

        QVariant _type_var = map.value("type");
        if( !_type_var.isNull() ) {
            _type_var.convert( QVariant::nameToType("QString") );
            result.setType( _type_var.value<QString>() );
        }

        QVariant _siteName_var = map.value("siteName");
        if( !_siteName_var.isNull() ) {
            _siteName_var.convert( QVariant::nameToType("QString") );
            result.setSiteName( _siteName_var.value<QString>() );
        }

        QVariant _title_var = map.value("title");
        if( !_title_var.isNull() ) {
            _title_var.convert( QVariant::nameToType("QString") );
            result.setTitle( _title_var.value<QString>() );
        }

        QVariant _description_var = map.value("description");
        if( !_description_var.isNull() ) {
            _description_var.convert( QVariant::nameToType("QString") );
            result.setDescription( _description_var.value<QString>() );
        }

        QVariant _photo_var = map.value("photo");
        if( !_photo_var.isNull() )
            result.setPhoto( Photo::fromMap(_photo_var.toMap()) );

        QVariant _embedUrl_var = map.value("embedUrl");
        if( !_embedUrl_var.isNull() ) {
            _embedUrl_var.convert( QVariant::nameToType("QString") );
            result.setEmbedUrl( _embedUrl_var.value<QString>() );
        }

        QVariant _embedType_var = map.value("embedType");
        if( !_embedType_var.isNull() ) {
            _embedType_var.convert( QVariant::nameToType("QString") );
            result.setEmbedType( _embedType_var.value<QString>() );
        }

        QVariant _embedWidth_var = map.value("embedWidth");
        if( !_embedWidth_var.isNull() ) {
            _embedWidth_var.convert( QVariant::nameToType("qint32") );
            result.setEmbedWidth( _embedWidth_var.value<qint32>() );
        }

        QVariant _embedHeight_var = map.value("embedHeight");
        if( !_embedHeight_var.isNull() ) {
            _embedHeight_var.convert( QVariant::nameToType("qint32") );
            result.setEmbedHeight( _embedHeight_var.value<qint32>() );
        }

        QVariant _duration_var = map.value("duration");
        if( !_duration_var.isNull() ) {
            _duration_var.convert( QVariant::nameToType("qint32") );
            result.setDuration( _duration_var.value<qint32>() );
        }

        QVariant _author_var = map.value("author");
        if( !_author_var.isNull() ) {
            _author_var.convert( QVariant::nameToType("QString") );
            result.setAuthor( _author_var.value<QString>() );
        }

        QVariant _document_var = map.value("document");
        if( !_document_var.isNull() )
            result.setDocument( Document::fromMap(_document_var.toMap()) );

        QVariant _cachedPage_var = map.value("cachedPage");
        if( !_cachedPage_var.isNull() )
            result.setCachedPage( Page::fromMap(_cachedPage_var.toMap()) );

        return result;
    }
    if(map.value("classType").toString() == "WebPage::typeWebPageNotModified") {
        result.setClassType(typeWebPageNotModified);
        return result;
    }
    return result;
}

WebPage WebPage::fromJson(const QString &json) {
    return WebPage::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray WebPage::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const WebPage &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case WebPage::typeWebPageEmpty:
        stream << item.id();
        break;
    case WebPage::typeWebPagePending:
        stream << item.id();
        stream << item.date();
        break;
    case WebPage::typeWebPage:
        stream << item.flags();
        stream << item.id();
        stream << item.url();
        stream << item.displayUrl();
        stream << item.hash();
        stream << item.type();
        stream << item.siteName();
        stream << item.title();
        stream << item.description();
        stream << item.photo();
        stream << item.embedUrl();
        stream << item.embedType();
        stream << item.embedWidth();
        stream << item.embedHeight();
        stream << item.duration();
        stream << item.author();
        stream << item.document();
        stream << item.cachedPage();
        break;
    case WebPage::typeWebPageNotModified:

        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, WebPage &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<WebPage::WebPageClassType>(type));
    switch(type) {
    case WebPage::typeWebPageEmpty: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
    }
        break;
    case WebPage::typeWebPagePending: {
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
    }
        break;
    case WebPage::typeWebPage: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        QString m_url;
        stream >> m_url;
        item.setUrl(m_url);
        QString m_display_url;
        stream >> m_display_url;
        item.setDisplayUrl(m_display_url);
        qint32 m_hash;
        stream >> m_hash;
        item.setHash(m_hash);
        QString m_type;
        stream >> m_type;
        item.setType(m_type);
        QString m_site_name;
        stream >> m_site_name;
        item.setSiteName(m_site_name);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QString m_description;
        stream >> m_description;
        item.setDescription(m_description);
        Photo m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        QString m_embed_url;
        stream >> m_embed_url;
        item.setEmbedUrl(m_embed_url);
        QString m_embed_type;
        stream >> m_embed_type;
        item.setEmbedType(m_embed_type);
        qint32 m_embed_width;
        stream >> m_embed_width;
        item.setEmbedWidth(m_embed_width);
        qint32 m_embed_height;
        stream >> m_embed_height;
        item.setEmbedHeight(m_embed_height);
        qint32 m_duration;
        stream >> m_duration;
        item.setDuration(m_duration);
        QString m_author;
        stream >> m_author;
        item.setAuthor(m_author);
        Document m_document;
        stream >> m_document;
        item.setDocument(m_document);
        Page m_cached_page;
        stream >> m_cached_page;
        item.setCachedPage(m_cached_page);
    }
        break;
    case WebPage::typeWebPageNotModified: {

    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const WebPage &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.WebPage(";
    switch(item.classType()) {
    case WebPage::typeWebPageEmpty:
        debug.nospace() << "classType: typeWebPageEmpty";
        debug.nospace() << ", id: " << item.id();
        break;
    case WebPage::typeWebPagePending:
        debug.nospace() << "classType: typeWebPagePending";
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", date: " << item.date();
        break;
    case WebPage::typeWebPage:
        debug.nospace() << "classType: typeWebPage";
        debug.nospace() << ", flags: " << item.flags();
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", url: " << item.url();
        debug.nospace() << ", displayUrl: " << item.displayUrl();
        debug.nospace() << ", hash: " << item.hash();
        debug.nospace() << ", type: " << item.type();
        debug.nospace() << ", siteName: " << item.siteName();
        debug.nospace() << ", title: " << item.title();
        debug.nospace() << ", description: " << item.description();
        debug.nospace() << ", photo: " << item.photo();
        debug.nospace() << ", embedUrl: " << item.embedUrl();
        debug.nospace() << ", embedType: " << item.embedType();
        debug.nospace() << ", embedWidth: " << item.embedWidth();
        debug.nospace() << ", embedHeight: " << item.embedHeight();
        debug.nospace() << ", duration: " << item.duration();
        debug.nospace() << ", author: " << item.author();
        debug.nospace() << ", document: " << item.document();
        debug.nospace() << ", cachedPage: " << item.cachedPage();
        break;
    case WebPage::typeWebPageNotModified:
        debug.nospace() << "classType: typeWebPageNotModified";
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
