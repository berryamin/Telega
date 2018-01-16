// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "channelbannedrightsobject.h"

ChannelBannedRightsObject::ChannelBannedRightsObject(const ChannelBannedRights &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

ChannelBannedRightsObject::ChannelBannedRightsObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

ChannelBannedRightsObject::~ChannelBannedRightsObject() {
}

void ChannelBannedRightsObject::setEmbedLinks(bool embedLinks) {
    if(m_core.embedLinks() == embedLinks) return;
    m_core.setEmbedLinks(embedLinks);
    Q_EMIT embedLinksChanged();
    Q_EMIT coreChanged();
}

bool ChannelBannedRightsObject::embedLinks() const {
    return m_core.embedLinks();
}

void ChannelBannedRightsObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 ChannelBannedRightsObject::flags() const {
    return m_core.flags();
}

void ChannelBannedRightsObject::setSendGames(bool sendGames) {
    if(m_core.sendGames() == sendGames) return;
    m_core.setSendGames(sendGames);
    Q_EMIT sendGamesChanged();
    Q_EMIT coreChanged();
}

bool ChannelBannedRightsObject::sendGames() const {
    return m_core.sendGames();
}

void ChannelBannedRightsObject::setSendGifs(bool sendGifs) {
    if(m_core.sendGifs() == sendGifs) return;
    m_core.setSendGifs(sendGifs);
    Q_EMIT sendGifsChanged();
    Q_EMIT coreChanged();
}

bool ChannelBannedRightsObject::sendGifs() const {
    return m_core.sendGifs();
}

void ChannelBannedRightsObject::setSendInline(bool sendInline) {
    if(m_core.sendInline() == sendInline) return;
    m_core.setSendInline(sendInline);
    Q_EMIT sendInlineChanged();
    Q_EMIT coreChanged();
}

bool ChannelBannedRightsObject::sendInline() const {
    return m_core.sendInline();
}

void ChannelBannedRightsObject::setSendMedia(bool sendMedia) {
    if(m_core.sendMedia() == sendMedia) return;
    m_core.setSendMedia(sendMedia);
    Q_EMIT sendMediaChanged();
    Q_EMIT coreChanged();
}

bool ChannelBannedRightsObject::sendMedia() const {
    return m_core.sendMedia();
}

void ChannelBannedRightsObject::setSendMessages(bool sendMessages) {
    if(m_core.sendMessages() == sendMessages) return;
    m_core.setSendMessages(sendMessages);
    Q_EMIT sendMessagesChanged();
    Q_EMIT coreChanged();
}

bool ChannelBannedRightsObject::sendMessages() const {
    return m_core.sendMessages();
}

void ChannelBannedRightsObject::setSendStickers(bool sendStickers) {
    if(m_core.sendStickers() == sendStickers) return;
    m_core.setSendStickers(sendStickers);
    Q_EMIT sendStickersChanged();
    Q_EMIT coreChanged();
}

bool ChannelBannedRightsObject::sendStickers() const {
    return m_core.sendStickers();
}

void ChannelBannedRightsObject::setUntilDate(qint32 untilDate) {
    if(m_core.untilDate() == untilDate) return;
    m_core.setUntilDate(untilDate);
    Q_EMIT untilDateChanged();
    Q_EMIT coreChanged();
}

qint32 ChannelBannedRightsObject::untilDate() const {
    return m_core.untilDate();
}

void ChannelBannedRightsObject::setViewMessages(bool viewMessages) {
    if(m_core.viewMessages() == viewMessages) return;
    m_core.setViewMessages(viewMessages);
    Q_EMIT viewMessagesChanged();
    Q_EMIT coreChanged();
}

bool ChannelBannedRightsObject::viewMessages() const {
    return m_core.viewMessages();
}

ChannelBannedRightsObject &ChannelBannedRightsObject::operator =(const ChannelBannedRights &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT embedLinksChanged();
    Q_EMIT flagsChanged();
    Q_EMIT sendGamesChanged();
    Q_EMIT sendGifsChanged();
    Q_EMIT sendInlineChanged();
    Q_EMIT sendMediaChanged();
    Q_EMIT sendMessagesChanged();
    Q_EMIT sendStickersChanged();
    Q_EMIT untilDateChanged();
    Q_EMIT viewMessagesChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ChannelBannedRightsObject::operator ==(const ChannelBannedRights &b) const {
    return m_core == b;
}

void ChannelBannedRightsObject::setClassType(quint32 classType) {
    ChannelBannedRights::ChannelBannedRightsClassType result;
    switch(classType) {
    case TypeChannelBannedRights:
        result = ChannelBannedRights::typeChannelBannedRights;
        break;
    default:
        result = ChannelBannedRights::typeChannelBannedRights;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ChannelBannedRightsObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ChannelBannedRights::typeChannelBannedRights:
        result = TypeChannelBannedRights;
        break;
    default:
        result = TypeChannelBannedRights;
        break;
    }

    return result;
}

void ChannelBannedRightsObject::setCore(const ChannelBannedRights &core) {
    operator =(core);
}

ChannelBannedRights ChannelBannedRightsObject::core() const {
    return m_core;
}

