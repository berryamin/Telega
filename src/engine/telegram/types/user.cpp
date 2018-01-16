// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "user.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

User::User(UserClassType classType, InboundPkt *in) :
    m_accessHash(0),
    m_botInfoVersion(0),
    m_flags(0),
    m_id(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

User::User(InboundPkt *in) :
    m_accessHash(0),
    m_botInfoVersion(0),
    m_flags(0),
    m_id(0),
    m_classType(typeUserEmpty)
{
    fetch(in);
}

User::User(const User &another) :
    TelegramTypeObject(),
    m_accessHash(0),
    m_botInfoVersion(0),
    m_flags(0),
    m_id(0),
    m_classType(typeUserEmpty)
{
    operator=(another);
}

User::User(const Null &null) :
    TelegramTypeObject(null),
    m_accessHash(0),
    m_botInfoVersion(0),
    m_flags(0),
    m_id(0),
    m_classType(typeUserEmpty)
{
}

User::~User() {
    
}

void User::setAccessHash(qint64 accessHash) {
    if(accessHash) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
    m_accessHash = accessHash;
}

qint64 User::accessHash() const {
    return m_accessHash;
}

void User::setBot(bool bot) {
    if(bot) m_flags = (m_flags | (1<<14));
    else m_flags = (m_flags & ~(1<<14));
}

bool User::bot() const {
    return (m_flags & 1<<14);
}

void User::setBotChatHistory(bool botChatHistory) {
    if(botChatHistory) m_flags = (m_flags | (1<<15));
    else m_flags = (m_flags & ~(1<<15));
}

bool User::botChatHistory() const {
    return (m_flags & 1<<15);
}

void User::setBotInfoVersion(qint32 botInfoVersion) {
    if(botInfoVersion) m_flags = (m_flags | (1<<14));
    else m_flags = (m_flags & ~(1<<14));
    m_botInfoVersion = botInfoVersion;
}

qint32 User::botInfoVersion() const {
    return m_botInfoVersion;
}

void User::setBotInlineGeo(bool botInlineGeo) {
    if(botInlineGeo) m_flags = (m_flags | (1<<21));
    else m_flags = (m_flags & ~(1<<21));
}

bool User::botInlineGeo() const {
    return (m_flags & 1<<21);
}

void User::setBotInlinePlaceholder(const QString &botInlinePlaceholder) {
    if(!botInlinePlaceholder.isNull()) m_flags = (m_flags | (1<<19));
    else m_flags = (m_flags & ~(1<<19));
    m_botInlinePlaceholder = botInlinePlaceholder;
}

QString User::botInlinePlaceholder() const {
    return m_botInlinePlaceholder;
}

void User::setBotNochats(bool botNochats) {
    if(botNochats) m_flags = (m_flags | (1<<16));
    else m_flags = (m_flags & ~(1<<16));
}

bool User::botNochats() const {
    return (m_flags & 1<<16);
}

void User::setContact(bool contact) {
    if(contact) m_flags = (m_flags | (1<<11));
    else m_flags = (m_flags & ~(1<<11));
}

bool User::contact() const {
    return (m_flags & 1<<11);
}

void User::setDeleted(bool deleted) {
    if(deleted) m_flags = (m_flags | (1<<13));
    else m_flags = (m_flags & ~(1<<13));
}

bool User::deleted() const {
    return (m_flags & 1<<13);
}

void User::setFirstName(const QString &firstName) {
    if(!firstName.isNull()) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
    m_firstName = firstName;
}

QString User::firstName() const {
    return m_firstName;
}

void User::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 User::flags() const {
    return m_flags;
}

void User::setId(qint32 id) {
    m_id = id;
}

qint32 User::id() const {
    return m_id;
}

void User::setLangCode(const QString &langCode) {
    if(!langCode.isNull()) m_flags = (m_flags | (1<<22));
    else m_flags = (m_flags & ~(1<<22));
    m_langCode = langCode;
}

QString User::langCode() const {
    return m_langCode;
}

void User::setLastName(const QString &lastName) {
    if(!lastName.isNull()) m_flags = (m_flags | (1<<2));
    else m_flags = (m_flags & ~(1<<2));
    m_lastName = lastName;
}

QString User::lastName() const {
    return m_lastName;
}

void User::setMin(bool min) {
    if(min) m_flags = (m_flags | (1<<20));
    else m_flags = (m_flags & ~(1<<20));
}

bool User::min() const {
    return (m_flags & 1<<20);
}

void User::setMutualContact(bool mutualContact) {
    if(mutualContact) m_flags = (m_flags | (1<<12));
    else m_flags = (m_flags & ~(1<<12));
}

bool User::mutualContact() const {
    return (m_flags & 1<<12);
}

void User::setPhone(const QString &phone) {
    if(!phone.isNull()) m_flags = (m_flags | (1<<4));
    else m_flags = (m_flags & ~(1<<4));
    m_phone = phone;
}

QString User::phone() const {
    return m_phone;
}

void User::setPhoto(const UserProfilePhoto &photo) {
    if(!photo.isNull()) m_flags = (m_flags | (1<<5));
    else m_flags = (m_flags & ~(1<<5));
    m_photo = photo;
}

UserProfilePhoto User::photo() const {
    return m_photo;
}

void User::setRestricted(bool restricted) {
    if(restricted) m_flags = (m_flags | (1<<18));
    else m_flags = (m_flags & ~(1<<18));
}

bool User::restricted() const {
    return (m_flags & 1<<18);
}

void User::setRestrictionReason(const QString &restrictionReason) {
    if(!restrictionReason.isNull()) m_flags = (m_flags | (1<<18));
    else m_flags = (m_flags & ~(1<<18));
    m_restrictionReason = restrictionReason;
}

QString User::restrictionReason() const {
    return m_restrictionReason;
}

void User::setSelf(bool self) {
    if(self) m_flags = (m_flags | (1<<10));
    else m_flags = (m_flags & ~(1<<10));
}

bool User::self() const {
    return (m_flags & 1<<10);
}

void User::setStatus(const UserStatus &status) {
    if(!status.isNull()) m_flags = (m_flags | (1<<6));
    else m_flags = (m_flags & ~(1<<6));
    m_status = status;
}

UserStatus User::status() const {
    return m_status;
}

void User::setUsername(const QString &username) {
    if(!username.isNull()) m_flags = (m_flags | (1<<3));
    else m_flags = (m_flags & ~(1<<3));
    m_username = username;
}

QString User::username() const {
    return m_username;
}

void User::setVerified(bool verified) {
    if(verified) m_flags = (m_flags | (1<<17));
    else m_flags = (m_flags & ~(1<<17));
}

bool User::verified() const {
    return (m_flags & 1<<17);
}

bool User::operator ==(const User &b) const {
    return m_classType == b.m_classType &&
           m_accessHash == b.m_accessHash &&
           m_botInfoVersion == b.m_botInfoVersion &&
           m_botInlinePlaceholder == b.m_botInlinePlaceholder &&
           m_firstName == b.m_firstName &&
           m_flags == b.m_flags &&
           m_id == b.m_id &&
           m_langCode == b.m_langCode &&
           m_lastName == b.m_lastName &&
           m_phone == b.m_phone &&
           m_photo == b.m_photo &&
           m_restrictionReason == b.m_restrictionReason &&
           m_status == b.m_status &&
           m_username == b.m_username;
}

User &User::operator =(const User &b) {
    m_classType = b.m_classType;
    m_accessHash = b.m_accessHash;
    m_botInfoVersion = b.m_botInfoVersion;
    m_botInlinePlaceholder = b.m_botInlinePlaceholder;
    m_firstName = b.m_firstName;
    m_flags = b.m_flags;
    m_id = b.m_id;
    m_langCode = b.m_langCode;
    m_lastName = b.m_lastName;
    m_phone = b.m_phone;
    m_photo = b.m_photo;
    m_restrictionReason = b.m_restrictionReason;
    m_status = b.m_status;
    m_username = b.m_username;
    setNull(b.isNull());
    return *this;
}

void User::setClassType(User::UserClassType classType) {
    m_classType = classType;
}

User::UserClassType User::classType() const {
    return m_classType;
}

bool User::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeUserEmpty: {
        m_id = in->fetchInt();
        m_classType = static_cast<UserClassType>(x);
        return true;
    }
        break;
    
    case typeUser: {
        m_flags = in->fetchInt();
        m_id = in->fetchInt();
        if(m_flags & 1<<0) {
            m_accessHash = in->fetchLong();
        }
        if(m_flags & 1<<1) {
            m_firstName = in->fetchQString();
        }
        if(m_flags & 1<<2) {
            m_lastName = in->fetchQString();
        }
        if(m_flags & 1<<3) {
            m_username = in->fetchQString();
        }
        if(m_flags & 1<<4) {
            m_phone = in->fetchQString();
        }
        if(m_flags & 1<<5) {
            m_photo.fetch(in);
        }
        if(m_flags & 1<<6) {
            m_status.fetch(in);
        }
        if(m_flags & 1<<14) {
            m_botInfoVersion = in->fetchInt();
        }
        if(m_flags & 1<<18) {
            m_restrictionReason = in->fetchQString();
        }
        if(m_flags & 1<<19) {
            m_botInlinePlaceholder = in->fetchQString();
        }
        if(m_flags & 1<<22) {
            m_langCode = in->fetchQString();
        }
        m_classType = static_cast<UserClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool User::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeUserEmpty: {
        out->appendInt(m_id);
        return true;
    }
        break;
    
    case typeUser: {
        out->appendInt(m_flags);
        out->appendInt(m_id);
        if(m_flags & 1<<0) {
            out->appendLong(m_accessHash);
        }
        if(m_flags & 1<<1) {
            out->appendQString(m_firstName);
        }
        if(m_flags & 1<<2) {
            out->appendQString(m_lastName);
        }
        if(m_flags & 1<<3) {
            out->appendQString(m_username);
        }
        if(m_flags & 1<<4) {
            out->appendQString(m_phone);
        }
        if(m_flags & 1<<5) {
            m_photo.push(out);
        }
        if(m_flags & 1<<6) {
            m_status.push(out);
        }
        if(m_flags & 1<<14) {
            out->appendInt(m_botInfoVersion);
        }
        if(m_flags & 1<<18) {
            out->appendQString(m_restrictionReason);
        }
        if(m_flags & 1<<19) {
            out->appendQString(m_botInlinePlaceholder);
        }
        if(m_flags & 1<<22) {
            out->appendQString(m_langCode);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> User::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeUserEmpty: {
        result["classType"] = "User::typeUserEmpty";
        if( id() ) result["id"] = QString::number(id());
        return result;
    }
        break;
    
    case typeUser: {
        result["classType"] = "User::typeUser";
        if( self() ) result["self"] = QString::number(self());
        if( contact() ) result["contact"] = QString::number(contact());
        if( mutualContact() ) result["mutualContact"] = QString::number(mutualContact());
        if( deleted() ) result["deleted"] = QString::number(deleted());
        if( bot() ) result["bot"] = QString::number(bot());
        if( botChatHistory() ) result["botChatHistory"] = QString::number(botChatHistory());
        if( botNochats() ) result["botNochats"] = QString::number(botNochats());
        if( verified() ) result["verified"] = QString::number(verified());
        if( restricted() ) result["restricted"] = QString::number(restricted());
        if( min() ) result["min"] = QString::number(min());
        if( botInlineGeo() ) result["botInlineGeo"] = QString::number(botInlineGeo());
        if( id() ) result["id"] = QString::number(id());
        if( accessHash() ) result["accessHash"] = QString::number(accessHash());
        if( !m_firstName.isEmpty() ) result["firstName"] = QVariant::fromValue<QString>(m_firstName);
        if( !m_lastName.isEmpty() ) result["lastName"] = QVariant::fromValue<QString>(m_lastName);
        if( !m_username.isEmpty() ) result["username"] = QVariant::fromValue<QString>(m_username);
        if( !m_phone.isEmpty() ) result["phone"] = QVariant::fromValue<QString>(m_phone);
        if( !m_photo.isNull() ) result["photo"] = m_photo.toMap();
        if( !m_status.isNull() ) result["status"] = m_status.toMap();
        if( botInfoVersion() ) result["botInfoVersion"] = QString::number(botInfoVersion());
        if( !m_restrictionReason.isEmpty() ) result["restrictionReason"] = QVariant::fromValue<QString>(m_restrictionReason);
        if( !m_botInlinePlaceholder.isEmpty() ) result["botInlinePlaceholder"] = QVariant::fromValue<QString>(m_botInlinePlaceholder);
        if( !m_langCode.isEmpty() ) result["langCode"] = QVariant::fromValue<QString>(m_langCode);
        return result;
    }
        break;
    
    default:
        return result;
    }
}

User User::fromMap(const QMap<QString, QVariant> &map) {
    User result;
    if(map.value("classType").toString() == "User::typeUserEmpty") {
        result.setClassType(typeUserEmpty);
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "User::typeUser") {
        result.setClassType(typeUser);
        QVariant _self_var = map.value("self");
        if( !_self_var.isNull() ) {
            _self_var.convert( QVariant::nameToType("bool") );
            result.setSelf( _self_var.value<bool>() );
        }
        
        QVariant _contact_var = map.value("contact");
        if( !_contact_var.isNull() ) {
            _contact_var.convert( QVariant::nameToType("bool") );
            result.setContact( _contact_var.value<bool>() );
        }
        
        QVariant _mutualContact_var = map.value("mutualContact");
        if( !_mutualContact_var.isNull() ) {
            _mutualContact_var.convert( QVariant::nameToType("bool") );
            result.setMutualContact( _mutualContact_var.value<bool>() );
        }
        
        QVariant _deleted_var = map.value("deleted");
        if( !_deleted_var.isNull() ) {
            _deleted_var.convert( QVariant::nameToType("bool") );
            result.setDeleted( _deleted_var.value<bool>() );
        }
        
        QVariant _bot_var = map.value("bot");
        if( !_bot_var.isNull() ) {
            _bot_var.convert( QVariant::nameToType("bool") );
            result.setBot( _bot_var.value<bool>() );
        }
        
        QVariant _botChatHistory_var = map.value("botChatHistory");
        if( !_botChatHistory_var.isNull() ) {
            _botChatHistory_var.convert( QVariant::nameToType("bool") );
            result.setBotChatHistory( _botChatHistory_var.value<bool>() );
        }
        
        QVariant _botNochats_var = map.value("botNochats");
        if( !_botNochats_var.isNull() ) {
            _botNochats_var.convert( QVariant::nameToType("bool") );
            result.setBotNochats( _botNochats_var.value<bool>() );
        }
        
        QVariant _verified_var = map.value("verified");
        if( !_verified_var.isNull() ) {
            _verified_var.convert( QVariant::nameToType("bool") );
            result.setVerified( _verified_var.value<bool>() );
        }
        
        QVariant _restricted_var = map.value("restricted");
        if( !_restricted_var.isNull() ) {
            _restricted_var.convert( QVariant::nameToType("bool") );
            result.setRestricted( _restricted_var.value<bool>() );
        }
        
        QVariant _min_var = map.value("min");
        if( !_min_var.isNull() ) {
            _min_var.convert( QVariant::nameToType("bool") );
            result.setMin( _min_var.value<bool>() );
        }
        
        QVariant _botInlineGeo_var = map.value("botInlineGeo");
        if( !_botInlineGeo_var.isNull() ) {
            _botInlineGeo_var.convert( QVariant::nameToType("bool") );
            result.setBotInlineGeo( _botInlineGeo_var.value<bool>() );
        }
        
        QVariant _id_var = map.value("id");
        if( !_id_var.isNull() ) {
            _id_var.convert( QVariant::nameToType("qint32") );
            result.setId( _id_var.value<qint32>() );
        }
        
        QVariant _accessHash_var = map.value("accessHash");
        if( !_accessHash_var.isNull() ) {
            _accessHash_var.convert( QVariant::nameToType("qint64") );
            result.setAccessHash( _accessHash_var.value<qint64>() );
        }
        
        QVariant _firstName_var = map.value("firstName");
        if( !_firstName_var.isNull() ) {
            _firstName_var.convert( QVariant::nameToType("QString") );
            result.setFirstName( _firstName_var.value<QString>() );
        }
        
        QVariant _lastName_var = map.value("lastName");
        if( !_lastName_var.isNull() ) {
            _lastName_var.convert( QVariant::nameToType("QString") );
            result.setLastName( _lastName_var.value<QString>() );
        }
        
        QVariant _username_var = map.value("username");
        if( !_username_var.isNull() ) {
            _username_var.convert( QVariant::nameToType("QString") );
            result.setUsername( _username_var.value<QString>() );
        }
        
        QVariant _phone_var = map.value("phone");
        if( !_phone_var.isNull() ) {
            _phone_var.convert( QVariant::nameToType("QString") );
            result.setPhone( _phone_var.value<QString>() );
        }
        
        QVariant _photo_var = map.value("photo");
        if( !_photo_var.isNull() )
            result.setPhoto( UserProfilePhoto::fromMap(_photo_var.toMap()) );
        
        QVariant _status_var = map.value("status");
        if( !_status_var.isNull() )
            result.setStatus( UserStatus::fromMap(_status_var.toMap()) );
        
        QVariant _botInfoVersion_var = map.value("botInfoVersion");
        if( !_botInfoVersion_var.isNull() ) {
            _botInfoVersion_var.convert( QVariant::nameToType("qint32") );
            result.setBotInfoVersion( _botInfoVersion_var.value<qint32>() );
        }
        
        QVariant _restrictionReason_var = map.value("restrictionReason");
        if( !_restrictionReason_var.isNull() ) {
            _restrictionReason_var.convert( QVariant::nameToType("QString") );
            result.setRestrictionReason( _restrictionReason_var.value<QString>() );
        }
        
        QVariant _botInlinePlaceholder_var = map.value("botInlinePlaceholder");
        if( !_botInlinePlaceholder_var.isNull() ) {
            _botInlinePlaceholder_var.convert( QVariant::nameToType("QString") );
            result.setBotInlinePlaceholder( _botInlinePlaceholder_var.value<QString>() );
        }
        
        QVariant _langCode_var = map.value("langCode");
        if( !_langCode_var.isNull() ) {
            _langCode_var.convert( QVariant::nameToType("QString") );
            result.setLangCode( _langCode_var.value<QString>() );
        }
        
        return result;
    }
    return result;
}

User User::fromJson(const QString &json) {
    return User::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray User::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const User &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case User::typeUserEmpty:
        stream << item.id();
        break;
    case User::typeUser:
        stream << item.flags();
        stream << item.id();
        stream << item.accessHash();
        stream << item.firstName();
        stream << item.lastName();
        stream << item.username();
        stream << item.phone();
        stream << item.photo();
        stream << item.status();
        stream << item.botInfoVersion();
        stream << item.restrictionReason();
        stream << item.botInlinePlaceholder();
        stream << item.langCode();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, User &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<User::UserClassType>(type));
    switch(type) {
    case User::typeUserEmpty: {
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
    }
        break;
    case User::typeUser: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_id;
        stream >> m_id;
        item.setId(m_id);
        qint64 m_access_hash;
        stream >> m_access_hash;
        item.setAccessHash(m_access_hash);
        QString m_first_name;
        stream >> m_first_name;
        item.setFirstName(m_first_name);
        QString m_last_name;
        stream >> m_last_name;
        item.setLastName(m_last_name);
        QString m_username;
        stream >> m_username;
        item.setUsername(m_username);
        QString m_phone;
        stream >> m_phone;
        item.setPhone(m_phone);
        UserProfilePhoto m_photo;
        stream >> m_photo;
        item.setPhoto(m_photo);
        UserStatus m_status;
        stream >> m_status;
        item.setStatus(m_status);
        qint32 m_bot_info_version;
        stream >> m_bot_info_version;
        item.setBotInfoVersion(m_bot_info_version);
        QString m_restriction_reason;
        stream >> m_restriction_reason;
        item.setRestrictionReason(m_restriction_reason);
        QString m_bot_inline_placeholder;
        stream >> m_bot_inline_placeholder;
        item.setBotInlinePlaceholder(m_bot_inline_placeholder);
        QString m_lang_code;
        stream >> m_lang_code;
        item.setLangCode(m_lang_code);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const User &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.User(";
    switch(item.classType()) {
    case User::typeUserEmpty:
        debug.nospace() << "classType: typeUserEmpty";
        debug.nospace() << ", id: " << item.id();
        break;
    case User::typeUser:
        debug.nospace() << "classType: typeUser";
        debug.nospace() << ", flags: " << item.flags();
        debug.nospace() << ", id: " << item.id();
        debug.nospace() << ", accessHash: " << item.accessHash();
        debug.nospace() << ", firstName: " << item.firstName();
        debug.nospace() << ", lastName: " << item.lastName();
        debug.nospace() << ", username: " << item.username();
        debug.nospace() << ", phone: " << item.phone();
        debug.nospace() << ", photo: " << item.photo();
        debug.nospace() << ", status: " << item.status();
        debug.nospace() << ", botInfoVersion: " << item.botInfoVersion();
        debug.nospace() << ", restrictionReason: " << item.restrictionReason();
        debug.nospace() << ", botInlinePlaceholder: " << item.botInlinePlaceholder();
        debug.nospace() << ", langCode: " << item.langCode();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

