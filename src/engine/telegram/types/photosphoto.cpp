// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "photosphoto.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

PhotosPhoto::PhotosPhoto(PhotosPhotoClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

PhotosPhoto::PhotosPhoto(InboundPkt *in) :
    m_classType(typePhotosPhoto)
{
    fetch(in);
}

PhotosPhoto::PhotosPhoto(const PhotosPhoto &another) :
    TelegramTypeObject(),
    m_classType(typePhotosPhoto)
{
    operator=(another);
}

PhotosPhoto::PhotosPhoto(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typePhotosPhoto)
{
}

PhotosPhoto::~PhotosPhoto() {
    
}

void PhotosPhoto::setPhoto(const Photo &photo) {
    m_photo = photo;
}

Photo PhotosPhoto::photo() const {
    return m_photo;
}

void PhotosPhoto::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> PhotosPhoto::users() const {
    return m_users;
}

bool PhotosPhoto::operator ==(const PhotosPhoto &b) const {
    return m_classType == b.m_classType &&
           m_photo == b.m_photo &&
           m_users == b.m_users;
}

PhotosPhoto &PhotosPhoto::operator =(const PhotosPhoto &b) {
    m_classType = b.m_classType;
    m_photo = b.m_photo;
    m_users = b.m_users;
    setNull(b.isNull());
    return *this;
}

void PhotosPhoto::setClassType(PhotosPhoto::PhotosPhotoClassType classType) {
    m_classType = classType;
}

PhotosPhoto::PhotosPhotoClassType PhotosPhoto::classType() const {
    return m_classType;
}

bool PhotosPhoto::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePhotosPhoto: {
        m_photo.fetch(in);
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<PhotosPhotoClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool PhotosPhoto::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePhotosPhoto: {
        m_photo.push(out);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> PhotosPhoto::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typePhotosPhoto: {
        result["classType"] = "PhotosPhoto::typePhotosPhoto";
        if( !m_photo.isNull() ) result["photo"] = m_photo.toMap();
        QList<QVariant> _users;
        for(const User &m__type: m_users)
            if( !m__type.isNull() ) _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    default:
        return result;
    }
}

PhotosPhoto PhotosPhoto::fromMap(const QMap<QString, QVariant> &map) {
    PhotosPhoto result;
    if(map.value("classType").toString() == "PhotosPhoto::typePhotosPhoto") {
        result.setClassType(typePhotosPhoto);
        QVariant _photo_var = map.value("photo");
        if( !_photo_var.isNull() )
            result.setPhoto( Photo::fromMap(_photo_var.toMap()) );
        
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        for(const QVariant &var: map_users)
            _users << User::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    return result;
}

PhotosPhoto PhotosPhoto::fromJson(const QString &json) {
    return PhotosPhoto::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray PhotosPhoto::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const PhotosPhoto &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case PhotosPhoto::typePhotosPhoto:
        stream << item.photo();
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, PhotosPhoto &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<PhotosPhoto::PhotosPhotoClassType>(type));
    switch(type) {
    case PhotosPhoto::typePhotosPhoto: {
        Photo m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const PhotosPhoto &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.PhotosPhoto(";
    switch(item.classType()) {
    case PhotosPhoto::typePhotosPhoto:
        debug.nospace() << "classType: typePhotosPhoto";
        debug.nospace() << ", photo: " << item.photo();
        debug.nospace() << ", users: " << item.users();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
