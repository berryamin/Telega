// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "peerobject.h"

PeerObject::PeerObject(const Peer &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

PeerObject::PeerObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

PeerObject::~PeerObject() {
}

void PeerObject::setChannelId(qint32 channelId) {
    if(m_core.channelId() == channelId) return;
    m_core.setChannelId(channelId);
    Q_EMIT channelIdChanged();
    Q_EMIT coreChanged();
}

qint32 PeerObject::channelId() const {
    return m_core.channelId();
}

void PeerObject::setChatId(qint32 chatId) {
    if(m_core.chatId() == chatId) return;
    m_core.setChatId(chatId);
    Q_EMIT chatIdChanged();
    Q_EMIT coreChanged();
}

qint32 PeerObject::chatId() const {
    return m_core.chatId();
}

void PeerObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

qint32 PeerObject::userId() const {
    return m_core.userId();
}

PeerObject &PeerObject::operator =(const Peer &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT channelIdChanged();
    Q_EMIT chatIdChanged();
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool PeerObject::operator ==(const Peer &b) const {
    return m_core == b;
}

void PeerObject::setClassType(quint32 classType) {
    Peer::PeerClassType result;
    switch(classType) {
    case TypePeerUser:
        result = Peer::typePeerUser;
        break;
    case TypePeerChat:
        result = Peer::typePeerChat;
        break;
    case TypePeerChannel:
        result = Peer::typePeerChannel;
        break;
    default:
        result = Peer::typePeerUser;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 PeerObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case Peer::typePeerUser:
        result = TypePeerUser;
        break;
    case Peer::typePeerChat:
        result = TypePeerChat;
        break;
    case Peer::typePeerChannel:
        result = TypePeerChannel;
        break;
    default:
        result = TypePeerUser;
        break;
    }

    return result;
}

void PeerObject::setCore(const Peer &core) {
    operator =(core);
}

Peer PeerObject::core() const {
    return m_core;
}

