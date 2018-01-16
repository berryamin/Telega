// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "game.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

Game::Game(GameClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_flags(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Game::Game(InboundPkt *in) :
    m_accessHash(0),
    m_flags(0),
    m_id(0),
    m_classType(typeGame)
{
    fetch(in);
}

Game::Game(const Game &another) :
    TelegramTypeObject(),
    m_accessHash(0),
    m_flags(0),
    m_id(0),
    m_classType(typeGame)
{
    operator=(another);
}

Game::Game(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_flags(0),
    m_id(0),
    m_classType(typeGame)
{
}

Game::~Game() {
    
}

void Game::setAccessHash(qint64 accessHash) {
    m_accessHash = accessHash;
}

qint64 Game::accessHash() const {
    return m_accessHash;
}

void Game::setDescription(const QString &description) {
    m_description = description;
}

QString Game::description() const {
    return m_description;
}

void Game::setDocument(const Document &document) {
    if(!document.isNull()) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
    m_document = document;
}

Document Game::document() const {
    return m_document;
}

void Game::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 Game::flags() const {
    return m_flags;
}

void Game::setId(qint64 id) {
    m_id = id;
}

qint64 Game::id() const {
    return m_id;
}

void Game::setPhoto(const Photo &photo) {
    m_photo = photo;
}

Photo Game::photo() const {
    return m_photo;
}

void Game::setShortName(const QString &shortName) {
    m_shortName = shortName;
}

QString Game::shortName() const {
    return m_shortName;
}

void Game::setTitle(const QString &title) {
    m_title = title;
}

QString Game::title() const {
    return m_title;
}

bool Game::operator ==(const Game &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_description == b.m_description &&
           m_document == b.m_document &&
           m_flags == b.m_flags &&
           m_id == b.m_id &&
           m_photo == b.m_photo &&
           m_shortName == b.m_shortName &&
           m_title == b.m_title;
}

Game &Game::operator =(const Game &b) {
    m_classType = b.m_classType;
    m_accessHash = b.m_accessHash;
    m_description = b.m_description;
    m_document = b.m_document;
    m_flags = b.m_flags;
    m_id = b.m_id;
    m_photo = b.m_photo;
    m_shortName = b.m_shortName;
    m_title = b.m_title;
    setNull(b.isNull());
    return *this;
}

void Game::setClassType(Game::GameClassType classType) {
    m_classType = classType;
}

Game::GameClassType Game::classType() const {
    return m_classType;
}

bool Game::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeGame: {
        m_flags = in->fetchInt();
        m_id = in->fetchLong();
        m_accessHash = in->fetchLong();
        m_shortName = in->fetchQString();
        m_title = in->fetchQString();
        m_description = in->fetchQString();
        m_photo.fetch(in);
        if(m_flags & 1<<0) {
            m_document.fetch(in);
        }
        m_classType = static_cast<GameClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Game::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeGame: {
        out->appendInt(m_flags);
        out->appendLong(m_id);
        out->appendLong(m_accessHash);
        out->appendQString(m_shortName);
        out->appendQString(m_title);
        out->appendQString(m_description);
        m_photo.push(out);
        if(m_flags & 1<<0) {
            m_document.push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> Game::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeGame: {
        result["classType"] = "Game::typeGame";
        if( id() ) result["id"] = QString::number(id());
        if( accessHash() ) result["accessHash"] = QString::number(accessHash());
        if( !m_shortName.isEmpty() ) result["shortName"] = QVariant::fromValue<QString>(m_shortName);
        if( !m_title.isEmpty() ) result["title"] = QVariant::fromValue<QString>(m_title);
        if( !m_description.isEmpty() ) result["description"] = QVariant::fromValue<QString>(m_description);
        if( !m_photo.isNull() ) result["photo"] = m_photo.toMap();
        if( !m_document.isNull() ) result["document"] = m_document.toMap();
        return result;
    }
        break;
    
    default:
        return result;
    }
}

Game Game::fromMap(const QMap<QString, QVariant> &map) {
    Game result;
    if(map.value("classType").toString() == "Game::typeGame") {
        result.setClassType(typeGame);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint64") );
            result.setId( _id_var.value<qint64>() );
        }
        
        QVariant _accessHash_var = map.value("accessHash");
        if( !_accessHash_var.isNull() ) {
            _accessHash_var.convert( QVariant::nameToType("qint64") );
            result.setAccessHash( _accessHash_var.value<qint64>() );
        }
        
        QVariant _shortName_var = map.value("shortName");
        if( !_shortName_var.isNull() ) {
            _shortName_var.convert( QVariant::nameToType("QString") );
            result.setShortName( _shortName_var.value<QString>() );
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
        
        QVariant _document_var = map.value("document");
        if( !_document_var.isNull() )
            result.setDocument( Document::fromMap(_document_var.toMap()) );
        
        return result;
    }
    return result;
}

Game Game::fromJson(const QString &json) {
    return Game::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray Game::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const Game &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case Game::typeGame:
        stream << item.flags();
        stream << item.id();
        stream << item.accessHash();
        stream << item.shortName();
        stream << item.title();
        stream << item.description();
        stream << item.photo();
        stream << item.document();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, Game &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<Game::GameClassType>(type));
    switch(type) {
    case Game::typeGame: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint64 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        QString m_short_name;
        stream >> m_short_name;
        item.setShortName(m_short_name);
        QString m_title;
        stream >> m_title;
        item.setTitle(m_title);
        QString m_description;
        stream >> m_description;
        item.setDescription(m_description);
        Photo m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        Document m_document;
        stream >> m_document;
        item.setDocument(m_document);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const Game &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.Game(";
    switch(item.classType()) {
    case Game::typeGame:
        debug.nospace() << "classType: typeGame";
        debug.nospace() << ", flags: " << item.flags();
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", accessHash: " << item.accessHash();
        debug.nospace() << ", shortName: " << item.shortName();
        debug.nospace() << ", title: " << item.title();
        debug.nospace() << ", description: " << item.description();
        debug.nospace() << ", photo: " << item.photo();
        debug.nospace() << ", document: " << item.document();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

