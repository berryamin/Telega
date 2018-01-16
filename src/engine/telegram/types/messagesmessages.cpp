// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesmessages.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

MessagesMessages::MessagesMessages(MessagesMessagesClassType classType, InboundPkt *in) :
    m_count(0),
    m_flags(0),
    m_pts(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

MessagesMessages::MessagesMessages(InboundPkt *in) :
    m_count(0),
    m_flags(0),
    m_pts(0),
    m_classType(typeMessagesMessages)
{
    fetch(in);
}

MessagesMessages::MessagesMessages(const MessagesMessages &another) :
    TelegramTypeObject(),
    m_count(0),
    m_flags(0),
    m_pts(0),
    m_classType(typeMessagesMessages)
{
    operator=(another);
}

MessagesMessages::MessagesMessages(const Null &null) :
    TelegramTypeObject(null),
    m_count(0),
    m_flags(0),
    m_pts(0),
    m_classType(typeMessagesMessages)
{
}

MessagesMessages::~MessagesMessages() {
    
}

void MessagesMessages::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

QList<Chat> MessagesMessages::chats() const {
    return m_chats;
}

void MessagesMessages::setCount(qint32 count) {
    m_count = count;
}

qint32 MessagesMessages::count() const {
    return m_count;
}

void MessagesMessages::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 MessagesMessages::flags() const {
    return m_flags;
}

void MessagesMessages::setMessages(const QList<Message> &messages) {
    m_messages = messages;
}

QList<Message> MessagesMessages::messages() const {
    return m_messages;
}

void MessagesMessages::setPts(qint32 pts) {
    m_pts = pts;
}

qint32 MessagesMessages::pts() const {
    return m_pts;
}

void MessagesMessages::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> MessagesMessages::users() const {
    return m_users;
}

bool MessagesMessages::operator ==(const MessagesMessages &b) const {
    return m_classType == b.m_classType &&
           m_chats == b.m_chats &&
           m_count == b.m_count &&
           m_flags == b.m_flags &&
           m_messages == b.m_messages &&
           m_pts == b.m_pts &&
           m_users == b.m_users;
}

MessagesMessages &MessagesMessages::operator =(const MessagesMessages &b) {
    m_classType = b.m_classType;
    m_chats = b.m_chats;
    m_count = b.m_count;
    m_flags = b.m_flags;
    m_messages = b.m_messages;
    m_pts = b.m_pts;
    m_users = b.m_users;
    setNull(b.isNull());
    return *this;
}

void MessagesMessages::setClassType(MessagesMessages::MessagesMessagesClassType classType) {
    m_classType = classType;
}

MessagesMessages::MessagesMessagesClassType MessagesMessages::classType() const {
    return m_classType;
}

bool MessagesMessages::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesMessages: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            Message type;
            type.fetch(in);
            m_messages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<MessagesMessagesClassType>(x);
        return true;
    }
        break;
    
    case typeMessagesMessagesSlice: {
        m_count = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            Message type;
            type.fetch(in);
            m_messages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<MessagesMessagesClassType>(x);
        return true;
    }
        break;
    
    case typeMessagesChannelMessages: {
        m_flags = in->fetchInt();
        m_pts = in->fetchInt();
        m_count = in->fetchInt();
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_messages_length = in->fetchInt();
        m_messages.clear();
        for (qint32 i = 0; i < m_messages_length; i++) {
            Message type;
            type.fetch(in);
            m_messages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<MessagesMessagesClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool MessagesMessages::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesMessages: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_messages.count());
        for (qint32 i = 0; i < m_messages.count(); i++) {
            m_messages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    case typeMessagesMessagesSlice: {
        out->appendInt(m_count);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_messages.count());
        for (qint32 i = 0; i < m_messages.count(); i++) {
            m_messages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    case typeMessagesChannelMessages: {
        out->appendInt(m_flags);
        out->appendInt(m_pts);
        out->appendInt(m_count);
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_messages.count());
        for (qint32 i = 0; i < m_messages.count(); i++) {
            m_messages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
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

QMap<QString, QVariant> MessagesMessages::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeMessagesMessages: {
        result["classType"] = "MessagesMessages::typeMessagesMessages";
        QList<QVariant> _messages;
        for(const Message &m__type: m_messages)
            if( !m__type.isNull() ) _messages << m__type.toMap();
        result["messages"] = _messages;
        QList<QVariant> _chats;
        for(const Chat &m__type: m_chats)
            if( !m__type.isNull() ) _chats << m__type.toMap();
        result["chats"] = _chats;
        QList<QVariant> _users;
        for(const User &m__type: m_users)
            if( !m__type.isNull() ) _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    case typeMessagesMessagesSlice: {
        result["classType"] = "MessagesMessages::typeMessagesMessagesSlice";
        if( count() ) result["count"] = QString::number(count());
        QList<QVariant> _messages;
        for(const Message &m__type: m_messages)
            if( !m__type.isNull() ) _messages << m__type.toMap();
        result["messages"] = _messages;
        QList<QVariant> _chats;
        for(const Chat &m__type: m_chats)
            if( !m__type.isNull() ) _chats << m__type.toMap();
        result["chats"] = _chats;
        QList<QVariant> _users;
        for(const User &m__type: m_users)
            if( !m__type.isNull() ) _users << m__type.toMap();
        result["users"] = _users;
        return result;
    }
        break;
    
    case typeMessagesChannelMessages: {
        result["classType"] = "MessagesMessages::typeMessagesChannelMessages";
        if( pts() ) result["pts"] = QString::number(pts());
        if( count() ) result["count"] = QString::number(count());
        QList<QVariant> _messages;
        for(const Message &m__type: m_messages)
            if( !m__type.isNull() ) _messages << m__type.toMap();
        result["messages"] = _messages;
        QList<QVariant> _chats;
        for(const Chat &m__type: m_chats)
            if( !m__type.isNull() ) _chats << m__type.toMap();
        result["chats"] = _chats;
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

MessagesMessages MessagesMessages::fromMap(const QMap<QString, QVariant> &map) {
    MessagesMessages result;
    if(map.value("classType").toString() == "MessagesMessages::typeMessagesMessages") {
        result.setClassType(typeMessagesMessages);
        QList<QVariant> map_messages = map["messages"].toList();
        QList<Message> _messages;
        for(const QVariant &var: map_messages)
            _messages << Message::fromMap(var.toMap());
        result.setMessages(_messages);
        QList<QVariant> map_chats = map["chats"].toList();
        QList<Chat> _chats;
        for(const QVariant &var: map_chats)
            _chats << Chat::fromMap(var.toMap());
        result.setChats(_chats);
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        for(const QVariant &var: map_users)
            _users << User::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    if(map.value("classType").toString() == "MessagesMessages::typeMessagesMessagesSlice") {
        result.setClassType(typeMessagesMessagesSlice);
        QVariant _count_var = map.value("count");
        if( !_count_var.isNull() ) {
            _count_var.convert( QVariant::nameToType("qint32") );
            result.setCount( _count_var.value<qint32>() );
        }
        
        QList<QVariant> map_messages = map["messages"].toList();
        QList<Message> _messages;
        for(const QVariant &var: map_messages)
            _messages << Message::fromMap(var.toMap());
        result.setMessages(_messages);
        QList<QVariant> map_chats = map["chats"].toList();
        QList<Chat> _chats;
        for(const QVariant &var: map_chats)
            _chats << Chat::fromMap(var.toMap());
        result.setChats(_chats);
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        for(const QVariant &var: map_users)
            _users << User::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    if(map.value("classType").toString() == "MessagesMessages::typeMessagesChannelMessages") {
        result.setClassType(typeMessagesChannelMessages);
        QVariant _pts_var = map.value("pts");
        if( !_pts_var.isNull() ) {
            _pts_var.convert( QVariant::nameToType("qint32") );
            result.setPts( _pts_var.value<qint32>() );
        }
        
        QVariant _count_var = map.value("count");
        if( !_count_var.isNull() ) {
            _count_var.convert( QVariant::nameToType("qint32") );
            result.setCount( _count_var.value<qint32>() );
        }
        
        QList<QVariant> map_messages = map["messages"].toList();
        QList<Message> _messages;
        for(const QVariant &var: map_messages)
            _messages << Message::fromMap(var.toMap());
        result.setMessages(_messages);
        QList<QVariant> map_chats = map["chats"].toList();
        QList<Chat> _chats;
        for(const QVariant &var: map_chats)
            _chats << Chat::fromMap(var.toMap());
        result.setChats(_chats);
        QList<QVariant> map_users = map["users"].toList();
        QList<User> _users;
        for(const QVariant &var: map_users)
            _users << User::fromMap(var.toMap());
        result.setUsers(_users);
        return result;
    }
    return result;
}

MessagesMessages MessagesMessages::fromJson(const QString &json) {
    return MessagesMessages::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray MessagesMessages::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const MessagesMessages &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case MessagesMessages::typeMessagesMessages:
        stream << item.messages();
        stream << item.chats();
        stream << item.users();
        break;
    case MessagesMessages::typeMessagesMessagesSlice:
        stream << item.count();
        stream << item.messages();
        stream << item.chats();
        stream << item.users();
        break;
    case MessagesMessages::typeMessagesChannelMessages:
        stream << item.flags();
        stream << item.pts();
        stream << item.count();
        stream << item.messages();
        stream << item.chats();
        stream << item.users();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, MessagesMessages &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<MessagesMessages::MessagesMessagesClassType>(type));
    switch(type) {
    case MessagesMessages::typeMessagesMessages: {
        QList<Message> m_messages;
        stream >> m_messages;
        item.setMessages(m_messages);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case MessagesMessages::typeMessagesMessagesSlice: {
        qint32 m_count;
        stream >> m_count;
        item.setCount(m_count);
        QList<Message> m_messages;
        stream >> m_messages;
        item.setMessages(m_messages);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    case MessagesMessages::typeMessagesChannelMessages: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_pts;
        stream >> m_pts;
        item.setPts(m_pts);
        qint32 m_count;
        stream >> m_count;
        item.setCount(m_count);
        QList<Message> m_messages;
        stream >> m_messages;
        item.setMessages(m_messages);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const MessagesMessages &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.MessagesMessages(";
    switch(item.classType()) {
    case MessagesMessages::typeMessagesMessages:
        debug.nospace() << "classType: typeMessagesMessages";
        debug.nospace() << ", messages: " << item.messages();
        debug.nospace() << ", chats: " << item.chats();
        debug.nospace() << ", users: " << item.users();
        break;
    case MessagesMessages::typeMessagesMessagesSlice:
        debug.nospace() << "classType: typeMessagesMessagesSlice";
        debug.nospace() << ", count: " << item.count();
        debug.nospace() << ", messages: " << item.messages();
        debug.nospace() << ", chats: " << item.chats();
        debug.nospace() << ", users: " << item.users();
        break;
    case MessagesMessages::typeMessagesChannelMessages:
        debug.nospace() << "classType: typeMessagesChannelMessages";
        debug.nospace() << ", flags: " << item.flags();
        debug.nospace() << ", pts: " << item.pts();
        debug.nospace() << ", count: " << item.count();
        debug.nospace() << ", messages: " << item.messages();
        debug.nospace() << ", chats: " << item.chats();
        debug.nospace() << ", users: " << item.users();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

