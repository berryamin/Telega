// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messageactionobject.h"

MessageActionObject::MessageActionObject(const MessageAction &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_charge(0),
    m_info(0),
    m_photo(0),
    m_reason(0),
    m_core(core)
{
    m_charge = new PaymentChargeObject(m_core.charge(), this);
    connect(m_charge.data(), SIGNAL(coreChanged()), this, SLOT(coreChargeChanged()));
    m_info = new PaymentRequestedInfoObject(m_core.info(), this);
    connect(m_info.data(), SIGNAL(coreChanged()), this, SLOT(coreInfoChanged()));
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), SIGNAL(coreChanged()), this, SLOT(corePhotoChanged()));
    m_reason = new PhoneCallDiscardReasonObject(m_core.reason(), this);
    connect(m_reason.data(), SIGNAL(coreChanged()), this, SLOT(coreReasonChanged()));
}

MessageActionObject::MessageActionObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_charge(0),
    m_info(0),
    m_photo(0),
    m_reason(0),
    m_core()
{
    m_charge = new PaymentChargeObject(m_core.charge(), this);
    connect(m_charge.data(), SIGNAL(coreChanged()), this, SLOT(coreChargeChanged()));
    m_info = new PaymentRequestedInfoObject(m_core.info(), this);
    connect(m_info.data(), SIGNAL(coreChanged()), this, SLOT(coreInfoChanged()));
    m_photo = new PhotoObject(m_core.photo(), this);
    connect(m_photo.data(), SIGNAL(coreChanged()), this, SLOT(corePhotoChanged()));
    m_reason = new PhoneCallDiscardReasonObject(m_core.reason(), this);
    connect(m_reason.data(), SIGNAL(coreChanged()), this, SLOT(coreReasonChanged()));
}

MessageActionObject::~MessageActionObject() {
}

void MessageActionObject::setCallId(qint64 callId) {
    if(m_core.callId() == callId) return;
    m_core.setCallId(callId);
    Q_EMIT callIdChanged();
    Q_EMIT coreChanged();
}

qint64 MessageActionObject::callId() const {
    return m_core.callId();
}

void MessageActionObject::setChannelId(qint32 channelId) {
    if(m_core.channelId() == channelId) return;
    m_core.setChannelId(channelId);
    Q_EMIT channelIdChanged();
    Q_EMIT coreChanged();
}

qint32 MessageActionObject::channelId() const {
    return m_core.channelId();
}

void MessageActionObject::setCharge(PaymentChargeObject* charge) {
    if(m_charge == charge) return;
    if(m_charge) delete m_charge;
    m_charge = charge;
    if(m_charge) {
        m_charge->setParent(this);
        m_core.setCharge(m_charge->core());
        connect(m_charge.data(), SIGNAL(coreChanged()), this, SLOT(coreChargeChanged()));
    }
    Q_EMIT chargeChanged();
    Q_EMIT coreChanged();
}

PaymentChargeObject*  MessageActionObject::charge() const {
    return m_charge;
}

void MessageActionObject::setChatId(qint32 chatId) {
    if(m_core.chatId() == chatId) return;
    m_core.setChatId(chatId);
    Q_EMIT chatIdChanged();
    Q_EMIT coreChanged();
}

qint32 MessageActionObject::chatId() const {
    return m_core.chatId();
}

void MessageActionObject::setCurrency(const QString &currency) {
    if(m_core.currency() == currency) return;
    m_core.setCurrency(currency);
    Q_EMIT currencyChanged();
    Q_EMIT coreChanged();
}

QString MessageActionObject::currency() const {
    return m_core.currency();
}

void MessageActionObject::setDuration(qint32 duration) {
    if(m_core.duration() == duration) return;
    m_core.setDuration(duration);
    Q_EMIT durationChanged();
    Q_EMIT coreChanged();
}

qint32 MessageActionObject::duration() const {
    return m_core.duration();
}

void MessageActionObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 MessageActionObject::flags() const {
    return m_core.flags();
}

void MessageActionObject::setGameId(qint64 gameId) {
    if(m_core.gameId() == gameId) return;
    m_core.setGameId(gameId);
    Q_EMIT gameIdChanged();
    Q_EMIT coreChanged();
}

qint64 MessageActionObject::gameId() const {
    return m_core.gameId();
}

void MessageActionObject::setInfo(PaymentRequestedInfoObject* info) {
    if(m_info == info) return;
    if(m_info) delete m_info;
    m_info = info;
    if(m_info) {
        m_info->setParent(this);
        m_core.setInfo(m_info->core());
        connect(m_info.data(), SIGNAL(coreChanged()), this, SLOT(coreInfoChanged()));
    }
    Q_EMIT infoChanged();
    Q_EMIT coreChanged();
}

PaymentRequestedInfoObject*  MessageActionObject::info() const {
    return m_info;
}

void MessageActionObject::setInviterId(qint32 inviterId) {
    if(m_core.inviterId() == inviterId) return;
    m_core.setInviterId(inviterId);
    Q_EMIT inviterIdChanged();
    Q_EMIT coreChanged();
}

qint32 MessageActionObject::inviterId() const {
    return m_core.inviterId();
}

void MessageActionObject::setPayload(const QByteArray &payload) {
    if(m_core.payload() == payload) return;
    m_core.setPayload(payload);
    Q_EMIT payloadChanged();
    Q_EMIT coreChanged();
}

QByteArray MessageActionObject::payload() const {
    return m_core.payload();
}

void MessageActionObject::setPhoto(PhotoObject* photo) {
    if(m_photo == photo) return;
    if(m_photo) delete m_photo;
    m_photo = photo;
    if(m_photo) {
        m_photo->setParent(this);
        m_core.setPhoto(m_photo->core());
        connect(m_photo.data(), SIGNAL(coreChanged()), this, SLOT(corePhotoChanged()));
    }
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

PhotoObject*  MessageActionObject::photo() const {
    return m_photo;
}

void MessageActionObject::setReason(PhoneCallDiscardReasonObject* reason) {
    if(m_reason == reason) return;
    if(m_reason) delete m_reason;
    m_reason = reason;
    if(m_reason) {
        m_reason->setParent(this);
        m_core.setReason(m_reason->core());
        connect(m_reason.data(), SIGNAL(coreChanged()), this, SLOT(coreReasonChanged()));
    }
    Q_EMIT reasonChanged();
    Q_EMIT coreChanged();
}

PhoneCallDiscardReasonObject*  MessageActionObject::reason() const {
    return m_reason;
}

void MessageActionObject::setScore(qint32 score) {
    if(m_core.score() == score) return;
    m_core.setScore(score);
    Q_EMIT scoreChanged();
    Q_EMIT coreChanged();
}

qint32 MessageActionObject::score() const {
    return m_core.score();
}

void MessageActionObject::setShippingOptionId(const QString &shippingOptionId) {
    if(m_core.shippingOptionId() == shippingOptionId) return;
    m_core.setShippingOptionId(shippingOptionId);
    Q_EMIT shippingOptionIdChanged();
    Q_EMIT coreChanged();
}

QString MessageActionObject::shippingOptionId() const {
    return m_core.shippingOptionId();
}

void MessageActionObject::setTitle(const QString &title) {
    if(m_core.title() == title) return;
    m_core.setTitle(title);
    Q_EMIT titleChanged();
    Q_EMIT coreChanged();
}

QString MessageActionObject::title() const {
    return m_core.title();
}

void MessageActionObject::setTotalAmount(qint64 totalAmount) {
    if(m_core.totalAmount() == totalAmount) return;
    m_core.setTotalAmount(totalAmount);
    Q_EMIT totalAmountChanged();
    Q_EMIT coreChanged();
}

qint64 MessageActionObject::totalAmount() const {
    return m_core.totalAmount();
}

void MessageActionObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

qint32 MessageActionObject::userId() const {
    return m_core.userId();
}

void MessageActionObject::setUsers(const QList<qint32> &users) {
    if(m_core.users() == users) return;
    m_core.setUsers(users);
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
}

QList<qint32> MessageActionObject::users() const {
    return m_core.users();
}

MessageActionObject &MessageActionObject::operator =(const MessageAction &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_charge->setCore(b.charge());
    m_info->setCore(b.info());
    m_photo->setCore(b.photo());
    m_reason->setCore(b.reason());

    Q_EMIT callIdChanged();
    Q_EMIT channelIdChanged();
    Q_EMIT chargeChanged();
    Q_EMIT chatIdChanged();
    Q_EMIT currencyChanged();
    Q_EMIT durationChanged();
    Q_EMIT flagsChanged();
    Q_EMIT gameIdChanged();
    Q_EMIT infoChanged();
    Q_EMIT inviterIdChanged();
    Q_EMIT payloadChanged();
    Q_EMIT photoChanged();
    Q_EMIT reasonChanged();
    Q_EMIT scoreChanged();
    Q_EMIT shippingOptionIdChanged();
    Q_EMIT titleChanged();
    Q_EMIT totalAmountChanged();
    Q_EMIT userIdChanged();
    Q_EMIT usersChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool MessageActionObject::operator ==(const MessageAction &b) const {
    return m_core == b;
}

void MessageActionObject::setClassType(quint32 classType) {
    MessageAction::MessageActionClassType result;
    switch(classType) {
    case TypeMessageActionEmpty:
        result = MessageAction::typeMessageActionEmpty;
        break;
    case TypeMessageActionChatCreate:
        result = MessageAction::typeMessageActionChatCreate;
        break;
    case TypeMessageActionChatEditTitle:
        result = MessageAction::typeMessageActionChatEditTitle;
        break;
    case TypeMessageActionChatEditPhoto:
        result = MessageAction::typeMessageActionChatEditPhoto;
        break;
    case TypeMessageActionChatDeletePhoto:
        result = MessageAction::typeMessageActionChatDeletePhoto;
        break;
    case TypeMessageActionChatAddUser:
        result = MessageAction::typeMessageActionChatAddUser;
        break;
    case TypeMessageActionChatDeleteUser:
        result = MessageAction::typeMessageActionChatDeleteUser;
        break;
    case TypeMessageActionChatJoinedByLink:
        result = MessageAction::typeMessageActionChatJoinedByLink;
        break;
    case TypeMessageActionChannelCreate:
        result = MessageAction::typeMessageActionChannelCreate;
        break;
    case TypeMessageActionChatMigrateTo:
        result = MessageAction::typeMessageActionChatMigrateTo;
        break;
    case TypeMessageActionChannelMigrateFrom:
        result = MessageAction::typeMessageActionChannelMigrateFrom;
        break;
    case TypeMessageActionPinMessage:
        result = MessageAction::typeMessageActionPinMessage;
        break;
    case TypeMessageActionHistoryClear:
        result = MessageAction::typeMessageActionHistoryClear;
        break;
    case TypeMessageActionGameScore:
        result = MessageAction::typeMessageActionGameScore;
        break;
    case TypeMessageActionPaymentSentMe:
        result = MessageAction::typeMessageActionPaymentSentMe;
        break;
    case TypeMessageActionPaymentSent:
        result = MessageAction::typeMessageActionPaymentSent;
        break;
    case TypeMessageActionPhoneCall:
        result = MessageAction::typeMessageActionPhoneCall;
        break;
    default:
        result = MessageAction::typeMessageActionEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 MessageActionObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case MessageAction::typeMessageActionEmpty:
        result = TypeMessageActionEmpty;
        break;
    case MessageAction::typeMessageActionChatCreate:
        result = TypeMessageActionChatCreate;
        break;
    case MessageAction::typeMessageActionChatEditTitle:
        result = TypeMessageActionChatEditTitle;
        break;
    case MessageAction::typeMessageActionChatEditPhoto:
        result = TypeMessageActionChatEditPhoto;
        break;
    case MessageAction::typeMessageActionChatDeletePhoto:
        result = TypeMessageActionChatDeletePhoto;
        break;
    case MessageAction::typeMessageActionChatAddUser:
        result = TypeMessageActionChatAddUser;
        break;
    case MessageAction::typeMessageActionChatDeleteUser:
        result = TypeMessageActionChatDeleteUser;
        break;
    case MessageAction::typeMessageActionChatJoinedByLink:
        result = TypeMessageActionChatJoinedByLink;
        break;
    case MessageAction::typeMessageActionChannelCreate:
        result = TypeMessageActionChannelCreate;
        break;
    case MessageAction::typeMessageActionChatMigrateTo:
        result = TypeMessageActionChatMigrateTo;
        break;
    case MessageAction::typeMessageActionChannelMigrateFrom:
        result = TypeMessageActionChannelMigrateFrom;
        break;
    case MessageAction::typeMessageActionPinMessage:
        result = TypeMessageActionPinMessage;
        break;
    case MessageAction::typeMessageActionHistoryClear:
        result = TypeMessageActionHistoryClear;
        break;
    case MessageAction::typeMessageActionGameScore:
        result = TypeMessageActionGameScore;
        break;
    case MessageAction::typeMessageActionPaymentSentMe:
        result = TypeMessageActionPaymentSentMe;
        break;
    case MessageAction::typeMessageActionPaymentSent:
        result = TypeMessageActionPaymentSent;
        break;
    case MessageAction::typeMessageActionPhoneCall:
        result = TypeMessageActionPhoneCall;
        break;
    default:
        result = TypeMessageActionEmpty;
        break;
    }

    return result;
}

void MessageActionObject::setCore(const MessageAction &core) {
    operator =(core);
}

MessageAction MessageActionObject::core() const {
    return m_core;
}

void MessageActionObject::coreChargeChanged() {
    if(m_core.charge() == m_charge->core()) return;
    m_core.setCharge(m_charge->core());
    Q_EMIT chargeChanged();
    Q_EMIT coreChanged();
}

void MessageActionObject::coreInfoChanged() {
    if(m_core.info() == m_info->core()) return;
    m_core.setInfo(m_info->core());
    Q_EMIT infoChanged();
    Q_EMIT coreChanged();
}

void MessageActionObject::corePhotoChanged() {
    if(m_core.photo() == m_photo->core()) return;
    m_core.setPhoto(m_photo->core());
    Q_EMIT photoChanged();
    Q_EMIT coreChanged();
}

void MessageActionObject::coreReasonChanged() {
    if(m_core.reason() == m_reason->core()) return;
    m_core.setReason(m_reason->core());
    Q_EMIT reasonChanged();
    Q_EMIT coreChanged();
}

