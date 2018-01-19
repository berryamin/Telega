// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "keyboardbuttonobject.h"

KeyboardButtonObject::KeyboardButtonObject(const KeyboardButton &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

KeyboardButtonObject::KeyboardButtonObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

KeyboardButtonObject::~KeyboardButtonObject() {
}

void KeyboardButtonObject::setData(const QByteArray &data) {
    if(m_core.data() == data) return;
    m_core.setData(data);
    Q_EMIT dataChanged();
    Q_EMIT coreChanged();
}

QByteArray KeyboardButtonObject::data() const {
    return m_core.data();
}

void KeyboardButtonObject::setFlags(qint32 flags) {
    if(m_core.flags() == flags) return;
    m_core.setFlags(flags);
    Q_EMIT flagsChanged();
    Q_EMIT coreChanged();
}

qint32 KeyboardButtonObject::flags() const {
    return m_core.flags();
}

void KeyboardButtonObject::setQuery(const QString &query) {
    if(m_core.query() == query) return;
    m_core.setQuery(query);
    Q_EMIT queryChanged();
    Q_EMIT coreChanged();
}

QString KeyboardButtonObject::query() const {
    return m_core.query();
}

void KeyboardButtonObject::setSamePeer(bool samePeer) {
    if(m_core.samePeer() == samePeer) return;
    m_core.setSamePeer(samePeer);
    Q_EMIT samePeerChanged();
    Q_EMIT coreChanged();
}

bool KeyboardButtonObject::samePeer() const {
    return m_core.samePeer();
}

void KeyboardButtonObject::setText(const QString &text) {
    if(m_core.text() == text) return;
    m_core.setText(text);
    Q_EMIT textChanged();
    Q_EMIT coreChanged();
}

QString KeyboardButtonObject::text() const {
    return m_core.text();
}

void KeyboardButtonObject::setUrl(const QString &url) {
    if(m_core.url() == url) return;
    m_core.setUrl(url);
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
}

QString KeyboardButtonObject::url() const {
    return m_core.url();
}

KeyboardButtonObject &KeyboardButtonObject::operator =(const KeyboardButton &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT dataChanged();
    Q_EMIT flagsChanged();
    Q_EMIT queryChanged();
    Q_EMIT samePeerChanged();
    Q_EMIT textChanged();
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool KeyboardButtonObject::operator ==(const KeyboardButton &b) const {
    return m_core == b;
}

void KeyboardButtonObject::setClassType(quint32 classType) {
    KeyboardButton::KeyboardButtonClassType result;
    switch(classType) {
    case TypeKeyboardButton:
        result = KeyboardButton::typeKeyboardButton;
        break;
    case TypeKeyboardButtonUrl:
        result = KeyboardButton::typeKeyboardButtonUrl;
        break;
    case TypeKeyboardButtonCallback:
        result = KeyboardButton::typeKeyboardButtonCallback;
        break;
    case TypeKeyboardButtonRequestPhone:
        result = KeyboardButton::typeKeyboardButtonRequestPhone;
        break;
    case TypeKeyboardButtonRequestGeoLocation:
        result = KeyboardButton::typeKeyboardButtonRequestGeoLocation;
        break;
    case TypeKeyboardButtonSwitchInline:
        result = KeyboardButton::typeKeyboardButtonSwitchInline;
        break;
    case TypeKeyboardButtonGame:
        result = KeyboardButton::typeKeyboardButtonGame;
        break;
    case TypeKeyboardButtonBuy:
        result = KeyboardButton::typeKeyboardButtonBuy;
        break;
    default:
        result = KeyboardButton::typeKeyboardButton;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 KeyboardButtonObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case KeyboardButton::typeKeyboardButton:
        result = TypeKeyboardButton;
        break;
    case KeyboardButton::typeKeyboardButtonUrl:
        result = TypeKeyboardButtonUrl;
        break;
    case KeyboardButton::typeKeyboardButtonCallback:
        result = TypeKeyboardButtonCallback;
        break;
    case KeyboardButton::typeKeyboardButtonRequestPhone:
        result = TypeKeyboardButtonRequestPhone;
        break;
    case KeyboardButton::typeKeyboardButtonRequestGeoLocation:
        result = TypeKeyboardButtonRequestGeoLocation;
        break;
    case KeyboardButton::typeKeyboardButtonSwitchInline:
        result = TypeKeyboardButtonSwitchInline;
        break;
    case KeyboardButton::typeKeyboardButtonGame:
        result = TypeKeyboardButtonGame;
        break;
    case KeyboardButton::typeKeyboardButtonBuy:
        result = TypeKeyboardButtonBuy;
        break;
    default:
        result = TypeKeyboardButton;
        break;
    }

    return result;
}

void KeyboardButtonObject::setCore(const KeyboardButton &core) {
    operator =(core);
}

KeyboardButton KeyboardButtonObject::core() const {
    return m_core;
}

