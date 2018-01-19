// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "inputpeernotifysettings.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

InputPeerNotifySettings::InputPeerNotifySettings(InputPeerNotifySettingsClassType classType, InboundPkt *in) :
    m_flags(0),
    m_muteUntil(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

InputPeerNotifySettings::InputPeerNotifySettings(InboundPkt *in) :
    m_flags(0),
    m_muteUntil(0),
    m_classType(typeInputPeerNotifySettings)
{
    fetch(in);
}

InputPeerNotifySettings::InputPeerNotifySettings(const InputPeerNotifySettings &another) :
    TelegramTypeObject(),
    m_flags(0),
    m_muteUntil(0),
    m_classType(typeInputPeerNotifySettings)
{
    operator=(another);
}

InputPeerNotifySettings::InputPeerNotifySettings(const Null &null) :
    TelegramTypeObject(null),
    m_flags(0),
    m_muteUntil(0),
    m_classType(typeInputPeerNotifySettings)
{
}

InputPeerNotifySettings::~InputPeerNotifySettings() {

}

void InputPeerNotifySettings::setFlags(qint32 flags) {
    m_flags = flags;
}

qint32 InputPeerNotifySettings::flags() const {
    return m_flags;
}

void InputPeerNotifySettings::setMuteUntil(qint32 muteUntil) {
    m_muteUntil = muteUntil;
}

qint32 InputPeerNotifySettings::muteUntil() const {
    return m_muteUntil;
}

void InputPeerNotifySettings::setShowPreviews(bool showPreviews) {
    if(showPreviews) m_flags = (m_flags | (1<<0));
    else m_flags = (m_flags & ~(1<<0));
}

bool InputPeerNotifySettings::showPreviews() const {
    return (m_flags & 1<<0);
}

void InputPeerNotifySettings::setSilent(bool silent) {
    if(silent) m_flags = (m_flags | (1<<1));
    else m_flags = (m_flags & ~(1<<1));
}

bool InputPeerNotifySettings::silent() const {
    return (m_flags & 1<<1);
}

void InputPeerNotifySettings::setSound(const QString &sound) {
    m_sound = sound;
}

QString InputPeerNotifySettings::sound() const {
    return m_sound;
}

bool InputPeerNotifySettings::operator ==(const InputPeerNotifySettings &b) const {
    return m_classType == b.m_classType &&
           m_flags == b.m_flags &&
           m_muteUntil == b.m_muteUntil &&
           m_sound == b.m_sound;
}

InputPeerNotifySettings &InputPeerNotifySettings::operator =(const InputPeerNotifySettings &b) {
    m_classType = b.m_classType;
    m_flags = b.m_flags;
    m_muteUntil = b.m_muteUntil;
    m_sound = b.m_sound;
    setNull(b.isNull());
    return *this;
}

void InputPeerNotifySettings::setClassType(InputPeerNotifySettings::InputPeerNotifySettingsClassType classType) {
    m_classType = classType;
}

InputPeerNotifySettings::InputPeerNotifySettingsClassType InputPeerNotifySettings::classType() const {
    return m_classType;
}

bool InputPeerNotifySettings::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeInputPeerNotifySettings: {
        m_flags = in->fetchInt();
        m_muteUntil = in->fetchInt();
        m_sound = in->fetchQString();
        m_classType = static_cast<InputPeerNotifySettingsClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool InputPeerNotifySettings::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeInputPeerNotifySettings: {
        out->appendInt(m_flags);
        out->appendInt(m_muteUntil);
        out->appendQString(m_sound);
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> InputPeerNotifySettings::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeInputPeerNotifySettings: {
        result["classType"] = "InputPeerNotifySettings::typeInputPeerNotifySettings";
        if( showPreviews() ) result["showPreviews"] = QString::number(showPreviews());
        if( silent() ) result["silent"] = QString::number(silent());
        if( muteUntil() ) result["muteUntil"] = QString::number(muteUntil());
        if( !m_sound.isEmpty() ) result["sound"] = QVariant::fromValue<QString>(m_sound);
        return result;
    }
        break;

    default:
        return result;
    }
}

InputPeerNotifySettings InputPeerNotifySettings::fromMap(const QMap<QString, QVariant> &map) {
    InputPeerNotifySettings result;
    if(map.value("classType").toString() == "InputPeerNotifySettings::typeInputPeerNotifySettings") {
        result.setClassType(typeInputPeerNotifySettings);
        QVariant _showPreviews_var = map.value("showPreviews");
        if( !_showPreviews_var.isNull() ) {
            _showPreviews_var.convert( QVariant::nameToType("bool") );
            result.setShowPreviews( _showPreviews_var.value<bool>() );
        }

        QVariant _silent_var = map.value("silent");
        if( !_silent_var.isNull() ) {
            _silent_var.convert( QVariant::nameToType("bool") );
            result.setSilent( _silent_var.value<bool>() );
        }

        QVariant _muteUntil_var = map.value("muteUntil");
        if( !_muteUntil_var.isNull() ) {
            _muteUntil_var.convert( QVariant::nameToType("qint32") );
            result.setMuteUntil( _muteUntil_var.value<qint32>() );
        }

        QVariant _sound_var = map.value("sound");
        if( !_sound_var.isNull() ) {
            _sound_var.convert( QVariant::nameToType("QString") );
            result.setSound( _sound_var.value<QString>() );
        }

        return result;
    }
    return result;
}

InputPeerNotifySettings InputPeerNotifySettings::fromJson(const QString &json) {
    return InputPeerNotifySettings::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray InputPeerNotifySettings::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const InputPeerNotifySettings &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case InputPeerNotifySettings::typeInputPeerNotifySettings:
        stream << item.flags();
        stream << item.muteUntil();
        stream << item.sound();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, InputPeerNotifySettings &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<InputPeerNotifySettings::InputPeerNotifySettingsClassType>(type));
    switch(type) {
    case InputPeerNotifySettings::typeInputPeerNotifySettings: {
        qint32 m_flags;
        stream >> m_flags;
        item.setFlags(m_flags);
        qint32 m_mute_until;
        stream >> m_mute_until;
        item.setMuteUntil(m_mute_until);
        QString m_sound;
        stream >> m_sound;
        item.setSound(m_sound);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const InputPeerNotifySettings &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.InputPeerNotifySettings(";
    switch(item.classType()) {
    case InputPeerNotifySettings::typeInputPeerNotifySettings:
        debug.nospace() << "classType: typeInputPeerNotifySettings";
        debug.nospace() << ", flags: " << item.flags();
        debug.nospace() << ", muteUntil: " << item.muteUntil();
        debug.nospace() << ", sound: " << item.sound();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
