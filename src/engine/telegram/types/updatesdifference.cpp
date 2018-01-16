// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "updatesdifference.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

UpdatesDifference::UpdatesDifference(UpdatesDifferenceClassType classType, InboundPkt *in) :
    m_date(0),
    m_pts(0),
    m_seq(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

UpdatesDifference::UpdatesDifference(InboundPkt *in) :
    m_date(0),
    m_pts(0),
    m_seq(0),
    m_classType(typeUpdatesDifferenceEmpty)
{
    fetch(in);
}

UpdatesDifference::UpdatesDifference(const UpdatesDifference &another) :
    TelegramTypeObject(),
    m_date(0),
    m_pts(0),
    m_seq(0),
    m_classType(typeUpdatesDifferenceEmpty)
{
    operator=(another);
}

UpdatesDifference::UpdatesDifference(const Null &null) :
    TelegramTypeObject(null),
    m_date(0),
    m_pts(0),
    m_seq(0),
    m_classType(typeUpdatesDifferenceEmpty)
{
}

UpdatesDifference::~UpdatesDifference() {
    
}

void UpdatesDifference::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

QList<Chat> UpdatesDifference::chats() const {
    return m_chats;
}

void UpdatesDifference::setDate(qint32 date) {
    m_date = date;
}

qint32 UpdatesDifference::date() const {
    return m_date;
}

void UpdatesDifference::setIntermediateState(const UpdatesState &intermediateState) {
    m_intermediateState = intermediateState;
}

UpdatesState UpdatesDifference::intermediateState() const {
    return m_intermediateState;
}

void UpdatesDifference::setNewEncryptedMessages(const QList<EncryptedMessage> &newEncryptedMessages) {
    m_newEncryptedMessages = newEncryptedMessages;
}

QList<EncryptedMessage> UpdatesDifference::newEncryptedMessages() const {
    return m_newEncryptedMessages;
}

void UpdatesDifference::setNewMessages(const QList<Message> &newMessages) {
    m_newMessages = newMessages;
}

QList<Message> UpdatesDifference::newMessages() const {
    return m_newMessages;
}

void UpdatesDifference::setOtherUpdates(const QList<Update> &otherUpdates) {
    m_otherUpdates = otherUpdates;
}

QList<Update> UpdatesDifference::otherUpdates() const {
    return m_otherUpdates;
}

void UpdatesDifference::setPts(qint32 pts) {
    m_pts = pts;
}

qint32 UpdatesDifference::pts() const {
    return m_pts;
}

void UpdatesDifference::setSeq(qint32 seq) {
    m_seq = seq;
}

qint32 UpdatesDifference::seq() const {
    return m_seq;
}

void UpdatesDifference::setState(const UpdatesState &state) {
    m_state = state;
}

UpdatesState UpdatesDifference::state() const {
    return m_state;
}

void UpdatesDifference::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> UpdatesDifference::users() const {
    return m_users;
}

bool UpdatesDifference::operator ==(const UpdatesDifference &b) const {
    return m_classType == b.m_classType &&
           m_chats == b.m_chats &&
           m_date == b.m_date &&
           m_intermediateState == b.m_intermediateState &&
           m_newEncryptedMessages == b.m_newEncryptedMessages &&
           m_newMessages == b.m_newMessages &&
           m_otherUpdates == b.m_otherUpdates &&
           m_pts == b.m_pts &&
           m_seq == b.m_seq &&
           m_state == b.m_state &&
           m_users == b.m_users;
}

UpdatesDifference &UpdatesDifference::operator =(const UpdatesDifference &b) {
    m_classType = b.m_classType;
    m_chats = b.m_chats;
    m_date = b.m_date;
    m_intermediateState = b.m_intermediateState;
    m_newEncryptedMessages = b.m_newEncryptedMessages;
    m_newMessages = b.m_newMessages;
    m_otherUpdates = b.m_otherUpdates;
    m_pts = b.m_pts;
    m_seq = b.m_seq;
    m_state = b.m_state;
    m_users = b.m_users;
    setNull(b.isNull());
    return *this;
}

void UpdatesDifference::setClassType(UpdatesDifference::UpdatesDifferenceClassType classType) {
    m_classType = classType;
}

UpdatesDifference::UpdatesDifferenceClassType UpdatesDifference::classType() const {
    return m_classType;
}

bool UpdatesDifference::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeUpdatesDifferenceEmpty: {
        m_date = in->fetchInt();
        m_seq = in->fetchInt();
        m_classType = static_cast<UpdatesDifferenceClassType>(x);
        return true;
    }
        break;
    
    case typeUpdatesDifference: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_newMessages_length = in->fetchInt();
        m_newMessages.clear();
        for (qint32 i = 0; i < m_newMessages_length; i++) {
            Message type;
            type.fetch(in);
            m_newMessages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_newEncryptedMessages_length = in->fetchInt();
        m_newEncryptedMessages.clear();
        for (qint32 i = 0; i < m_newEncryptedMessages_length; i++) {
            EncryptedMessage type;
            type.fetch(in);
            m_newEncryptedMessages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_otherUpdates_length = in->fetchInt();
        m_otherUpdates.clear();
        for (qint32 i = 0; i < m_otherUpdates_length; i++) {
            Update type;
            type.fetch(in);
            m_otherUpdates.append(type);
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
        m_state.fetch(in);
        m_classType = static_cast<UpdatesDifferenceClassType>(x);
        return true;
    }
        break;
    
    case typeUpdatesDifferenceSlice: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_newMessages_length = in->fetchInt();
        m_newMessages.clear();
        for (qint32 i = 0; i < m_newMessages_length; i++) {
            Message type;
            type.fetch(in);
            m_newMessages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_newEncryptedMessages_length = in->fetchInt();
        m_newEncryptedMessages.clear();
        for (qint32 i = 0; i < m_newEncryptedMessages_length; i++) {
            EncryptedMessage type;
            type.fetch(in);
            m_newEncryptedMessages.append(type);
        }
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_otherUpdates_length = in->fetchInt();
        m_otherUpdates.clear();
        for (qint32 i = 0; i < m_otherUpdates_length; i++) {
            Update type;
            type.fetch(in);
            m_otherUpdates.append(type);
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
        m_intermediateState.fetch(in);
        m_classType = static_cast<UpdatesDifferenceClassType>(x);
        return true;
    }
        break;
    
    case typeUpdatesDifferenceTooLong: {
        m_pts = in->fetchInt();
        m_classType = static_cast<UpdatesDifferenceClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool UpdatesDifference::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeUpdatesDifferenceEmpty: {
        out->appendInt(m_date);
        out->appendInt(m_seq);
        return true;
    }
        break;
    
    case typeUpdatesDifference: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_newMessages.count());
        for (qint32 i = 0; i < m_newMessages.count(); i++) {
            m_newMessages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_newEncryptedMessages.count());
        for (qint32 i = 0; i < m_newEncryptedMessages.count(); i++) {
            m_newEncryptedMessages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_otherUpdates.count());
        for (qint32 i = 0; i < m_otherUpdates.count(); i++) {
            m_otherUpdates[i].push(out);
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
        m_state.push(out);
        return true;
    }
        break;
    
    case typeUpdatesDifferenceSlice: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_newMessages.count());
        for (qint32 i = 0; i < m_newMessages.count(); i++) {
            m_newMessages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_newEncryptedMessages.count());
        for (qint32 i = 0; i < m_newEncryptedMessages.count(); i++) {
            m_newEncryptedMessages[i].push(out);
        }
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_otherUpdates.count());
        for (qint32 i = 0; i < m_otherUpdates.count(); i++) {
            m_otherUpdates[i].push(out);
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
        m_intermediateState.push(out);
        return true;
    }
        break;
    
    case typeUpdatesDifferenceTooLong: {
        out->appendInt(m_pts);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> UpdatesDifference::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeUpdatesDifferenceEmpty: {
        result["classType"] = "UpdatesDifference::typeUpdatesDifferenceEmpty";
        if( date() ) result["date"] = QString::number(date());
        if( seq() ) result["seq"] = QString::number(seq());
        return result;
    }
        break;
    
    case typeUpdatesDifference: {
        result["classType"] = "UpdatesDifference::typeUpdatesDifference";
        QList<QVariant> _newMessages;
        for(const Message &m__type: m_newMessages)
            if( !m__type.isNull() ) _newMessages << m__type.toMap();
        result["newMessages"] = _newMessages;
        QList<QVariant> _newEncryptedMessages;
        for(const EncryptedMessage &m__type: m_newEncryptedMessages)
            if( !m__type.isNull() ) _newEncryptedMessages << m__type.toMap();
        result["newEncryptedMessages"] = _newEncryptedMessages;
        QList<QVariant> _otherUpdates;
        for(const Update &m__type: m_otherUpdates)
            if( !m__type.isNull() ) _otherUpdates << m__type.toMap();
        result["otherUpdates"] = _otherUpdates;
        QList<QVariant> _chats;
        for(const Chat &m__type: m_chats)
            if( !m__type.isNull() ) _chats << m__type.toMap();
        result["chats"] = _chats;
        QList<QVariant> _users;
        for(const User &m__type: m_users)
            if( !m__type.isNull() ) _users << m__type.toMap();
        result["users"] = _users;
        if( !m_state.isNull() ) result["state"] = m_state.toMap();
        return result;
    }
        break;
    
    case typeUpdatesDifferenceSlice: {
        result["classType"] = "UpdatesDifference::typeUpdatesDifferenceSlice";
        QList<QVariant> _newMessages;
        for(const Message &m__type: m_newMessages)
            if( !m__type.isNull() ) _newMessages << m__type.toMap();
        result["newMessages"] = _newMessages;
        QList<QVariant> _newEncryptedMessages;
        for(const EncryptedMessage &m__type: m_newEncryptedMessages)
            if( !m__type.isNull() ) _newEncryptedMessages << m__type.toMap();
        result["newEncryptedMessages"] = _newEncryptedMessages;
        QList<QVariant> _otherUpdates;
        for(const Update &m__type: m_otherUpdates)
            if( !m__type.isNull() ) _otherUpdates << m__type.toMap();
        result["otherUpdates"] = _otherUpdates;
        QList<QVariant> _chats;
        for(const Chat &m__type: m_chats)
            if( !m__type.isNull() ) _chats << m__type.toMap();
        result["chats"] = _chats;
        QList<QVariant> _users;
        for(const User &m__type: m_users)
            if( !m__type.isNull() ) _users << m__type.toMap();
        result["users"] = _users;
        if( !m_intermediateState.isNull() ) result["intermediateState"] = m_intermediateState.toMap();
        return result;
    }
        break;
    
    case typeUpdatesDifferenceTooLong: {
        result["classType"] = "UpdatesDifference::typeUpdatesDifferenceTooLong";
        if( pts() ) result["pts"] = QString::number(pts());
        return result;
    }
        break;
    
    default:
        return result;
    }
}

UpdatesDifference UpdatesDifference::fromMap(const QMap<QString, QVariant> &map) {
    UpdatesDifference result;
    if(map.value("classType").toString() == "UpdatesDifference::typeUpdatesDifferenceEmpty") {
        result.setClassType(typeUpdatesDifferenceEmpty);
        QVariant _date_var = map.value("date");
        if( !_date_var.isNull() ) {
            _date_var.convert( QVariant::nameToType("qint32") );
            result.setDate( _date_var.value<qint32>() );
        }
        
        QVariant _seq_var = map.value("seq");
        if( !_seq_var.isNull() ) {
            _seq_var.convert( QVariant::nameToType("qint32") );
            result.setSeq( _seq_var.value<qint32>() );
        }
        
        return result;
    }
    if(map.value("classType").toString() == "UpdatesDifference::typeUpdatesDifference") {
        result.setClassType(typeUpdatesDifference);
        QList<QVariant> map_newMessages = map["newMessages"].toList();
        QList<Message> _newMessages;
        for(const QVariant &var: map_newMessages)
            _newMessages << Message::fromMap(var.toMap());
        result.setNewMessages(_newMessages);
        QList<QVariant> map_newEncryptedMessages = map["newEncryptedMessages"].toList();
        QList<EncryptedMessage> _newEncryptedMessages;
        for(const QVariant &var: map_newEncryptedMessages)
            _newEncryptedMessages << EncryptedMessage::fromMap(var.toMap());
        result.setNewEncryptedMessages(_newEncryptedMessages);
        QList<QVariant> map_otherUpdates = map["otherUpdates"].toList();
        QList<Update> _otherUpdates;
        for(const QVariant &var: map_otherUpdates)
            _otherUpdates << Update::fromMap(var.toMap());
        result.setOtherUpdates(_otherUpdates);
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
        QVariant _state_var = map.value("state");
        if( !_state_var.isNull() )
            result.setState( UpdatesState::fromMap(_state_var.toMap()) );
        
        return result;
    }
    if(map.value("classType").toString() == "UpdatesDifference::typeUpdatesDifferenceSlice") {
        result.setClassType(typeUpdatesDifferenceSlice);
        QList<QVariant> map_newMessages = map["newMessages"].toList();
        QList<Message> _newMessages;
        for(const QVariant &var: map_newMessages)
            _newMessages << Message::fromMap(var.toMap());
        result.setNewMessages(_newMessages);
        QList<QVariant> map_newEncryptedMessages = map["newEncryptedMessages"].toList();
        QList<EncryptedMessage> _newEncryptedMessages;
        for(const QVariant &var: map_newEncryptedMessages)
            _newEncryptedMessages << EncryptedMessage::fromMap(var.toMap());
        result.setNewEncryptedMessages(_newEncryptedMessages);
        QList<QVariant> map_otherUpdates = map["otherUpdates"].toList();
        QList<Update> _otherUpdates;
        for(const QVariant &var: map_otherUpdates)
            _otherUpdates << Update::fromMap(var.toMap());
        result.setOtherUpdates(_otherUpdates);
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
        QVariant _intermediateState_var = map.value("intermediateState");
        if( !_intermediateState_var.isNull() )
            result.setIntermediateState( UpdatesState::fromMap(_intermediateState_var.toMap()) );
        
        return result;
    }
    if(map.value("classType").toString() == "UpdatesDifference::typeUpdatesDifferenceTooLong") {
        result.setClassType(typeUpdatesDifferenceTooLong);
        QVariant _pts_var = map.value("pts");
        if( !_pts_var.isNull() ) {
            _pts_var.convert( QVariant::nameToType("qint32") );
            result.setPts( _pts_var.value<qint32>() );
        }
        
        return result;
    }
    return result;
}

UpdatesDifference UpdatesDifference::fromJson(const QString &json) {
    return UpdatesDifference::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray UpdatesDifference::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const UpdatesDifference &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case UpdatesDifference::typeUpdatesDifferenceEmpty:
        stream << item.date();
        stream << item.seq();
        break;
    case UpdatesDifference::typeUpdatesDifference:
        stream << item.newMessages();
        stream << item.newEncryptedMessages();
        stream << item.otherUpdates();
        stream << item.chats();
        stream << item.users();
        stream << item.state();
        break;
    case UpdatesDifference::typeUpdatesDifferenceSlice:
        stream << item.newMessages();
        stream << item.newEncryptedMessages();
        stream << item.otherUpdates();
        stream << item.chats();
        stream << item.users();
        stream << item.intermediateState();
        break;
    case UpdatesDifference::typeUpdatesDifferenceTooLong:
        stream << item.pts();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, UpdatesDifference &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<UpdatesDifference::UpdatesDifferenceClassType>(type));
    switch(type) {
    case UpdatesDifference::typeUpdatesDifferenceEmpty: {
        qint32 m_date;
        stream >> m_date;
        item.setDate(m_date);
        qint32 m_seq;
        stream >> m_seq;
        item.setSeq(m_seq);
    }
        break;
    case UpdatesDifference::typeUpdatesDifference: {
        QList<Message> m_new_messages;
        stream >> m_new_messages;
        item.setNewMessages(m_new_messages);
        QList<EncryptedMessage> m_new_encrypted_messages;
        stream >> m_new_encrypted_messages;
        item.setNewEncryptedMessages(m_new_encrypted_messages);
        QList<Update> m_other_updates;
        stream >> m_other_updates;
        item.setOtherUpdates(m_other_updates);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
        UpdatesState m_state;
        stream >> m_state;
        item.setState(m_state);
    }
        break;
    case UpdatesDifference::typeUpdatesDifferenceSlice: {
        QList<Message> m_new_messages;
        stream >> m_new_messages;
        item.setNewMessages(m_new_messages);
        QList<EncryptedMessage> m_new_encrypted_messages;
        stream >> m_new_encrypted_messages;
        item.setNewEncryptedMessages(m_new_encrypted_messages);
        QList<Update> m_other_updates;
        stream >> m_other_updates;
        item.setOtherUpdates(m_other_updates);
        QList<Chat> m_chats;
        stream >> m_chats;
        item.setChats(m_chats);
        QList<User> m_users;
        stream >> m_users;
        item.setUsers(m_users);
        UpdatesState m_intermediate_state;
        stream >> m_intermediate_state;
        item.setIntermediateState(m_intermediate_state);
    }
        break;
    case UpdatesDifference::typeUpdatesDifferenceTooLong: {
        qint32 m_pts;
        stream >> m_pts;
        item.setPts(m_pts);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const UpdatesDifference &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.UpdatesDifference(";
    switch(item.classType()) {
    case UpdatesDifference::typeUpdatesDifferenceEmpty:
        debug.nospace() << "classType: typeUpdatesDifferenceEmpty";
        debug.nospace() << ", date: " << item.date();
        debug.nospace() << ", seq: " << item.seq();
        break;
    case UpdatesDifference::typeUpdatesDifference:
        debug.nospace() << "classType: typeUpdatesDifference";
        debug.nospace() << ", newMessages: " << item.newMessages();
        debug.nospace() << ", newEncryptedMessages: " << item.newEncryptedMessages();
        debug.nospace() << ", otherUpdates: " << item.otherUpdates();
        debug.nospace() << ", chats: " << item.chats();
        debug.nospace() << ", users: " << item.users();
        debug.nospace() << ", state: " << item.state();
        break;
    case UpdatesDifference::typeUpdatesDifferenceSlice:
        debug.nospace() << "classType: typeUpdatesDifferenceSlice";
        debug.nospace() << ", newMessages: " << item.newMessages();
        debug.nospace() << ", newEncryptedMessages: " << item.newEncryptedMessages();
        debug.nospace() << ", otherUpdates: " << item.otherUpdates();
        debug.nospace() << ", chats: " << item.chats();
        debug.nospace() << ", users: " << item.users();
        debug.nospace() << ", intermediateState: " << item.intermediateState();
        break;
    case UpdatesDifference::typeUpdatesDifferenceTooLong:
        debug.nospace() << "classType: typeUpdatesDifferenceTooLong";
        debug.nospace() << ", pts: " << item.pts();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

