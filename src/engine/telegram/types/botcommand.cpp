// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "botcommand.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

BotCommand::BotCommand(BotCommandClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

BotCommand::BotCommand(InboundPkt *in) :
    m_classType(typeBotCommand)
{
    fetch(in);
}

BotCommand::BotCommand(const BotCommand &another) :
    TelegramTypeObject(),
    m_classType(typeBotCommand)
{
    operator=(another);
}

BotCommand::BotCommand(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeBotCommand)
{
}

BotCommand::~BotCommand() {
    
}

void BotCommand::setCommand(const QString &command) {
    m_command = command;
}

QString BotCommand::command() const {
    return m_command;
}

void BotCommand::setDescription(const QString &description) {
    m_description = description;
}

QString BotCommand::description() const {
    return m_description;
}

bool BotCommand::operator ==(const BotCommand &b) const {
    return m_classType == b.m_classType &&
           m_command == b.m_command &&
           m_description == b.m_description;
}

BotCommand &BotCommand::operator =(const BotCommand &b) {
    m_classType = b.m_classType;
    m_command = b.m_command;
    m_description = b.m_description;
    setNull(b.isNull());
    return *this;
}

void BotCommand::setClassType(BotCommand::BotCommandClassType classType) {
    m_classType = classType;
}

BotCommand::BotCommandClassType BotCommand::classType() const {
    return m_classType;
}

bool BotCommand::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeBotCommand: {
        m_command = in->fetchQString();
        m_description = in->fetchQString();
        m_classType = static_cast<BotCommandClassType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool BotCommand::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeBotCommand: {
        out->appendQString(m_command);
        out->appendQString(m_description);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

QMap<QString, QVariant> BotCommand::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeBotCommand: {
        result["classType"] = "BotCommand::typeBotCommand";
        if( !m_command.isEmpty() ) result["command"] = QVariant::fromValue<QString>(m_command);
        if( !m_description.isEmpty() ) result["description"] = QVariant::fromValue<QString>(m_description);
        return result;
    }
        break;
    
    default:
        return result;
    }
}

BotCommand BotCommand::fromMap(const QMap<QString, QVariant> &map) {
    BotCommand result;
    if(map.value("classType").toString() == "BotCommand::typeBotCommand") {
        result.setClassType(typeBotCommand);
        QVariant _command_var = map.value("command");
        if( !_command_var.isNull() ) {
            _command_var.convert( QVariant::nameToType("QString") );
            result.setCommand( _command_var.value<QString>() );
        }
        
        QVariant _description_var = map.value("description");
        if( !_description_var.isNull() ) {
            _description_var.convert( QVariant::nameToType("QString") );
            result.setDescription( _description_var.value<QString>() );
        }
        
        return result;
    }
    return result;
}

BotCommand BotCommand::fromJson(const QString &json) {
    return BotCommand::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray BotCommand::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const BotCommand &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case BotCommand::typeBotCommand:
        stream << item.command();
        stream << item.description();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, BotCommand &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<BotCommand::BotCommandClassType>(type));
    switch(type) {
    case BotCommand::typeBotCommand: {
        QString m_command;
        stream >> m_command;
        item.setCommand(m_command);
        QString m_description;
        stream >> m_description;
        item.setDescription(m_description);
    }
        break;
    }
    return stream;
}

QDebug operator<<(QDebug debug,  const BotCommand &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.BotCommand(";
    switch(item.classType()) {
    case BotCommand::typeBotCommand:
        debug.nospace() << "classType: typeBotCommand";
        debug.nospace() << ", command: " << item.command();
        debug.nospace() << ", description: " << item.description();
        break;
    }
    debug.nospace() << ")";
    return debug;
}

