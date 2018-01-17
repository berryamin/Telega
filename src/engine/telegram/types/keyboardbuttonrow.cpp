// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "keyboardbuttonrow.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

KeyboardButtonRow::KeyboardButtonRow(KeyboardButtonRowClassType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

KeyboardButtonRow::KeyboardButtonRow(InboundPkt *in) :
    m_classType(typeKeyboardButtonRow)
{
    fetch(in);
}

KeyboardButtonRow::KeyboardButtonRow(const KeyboardButtonRow &another) :
    TelegramTypeObject(),
    m_classType(typeKeyboardButtonRow)
{
    operator=(another);
}

KeyboardButtonRow::KeyboardButtonRow(const Null &null) :
    TelegramTypeObject(null),
    m_classType(typeKeyboardButtonRow)
{
}

KeyboardButtonRow::~KeyboardButtonRow() {

}

void KeyboardButtonRow::setButtons(const QList<KeyboardButton> &buttons) {
    m_buttons = buttons;
}

QList<KeyboardButton> KeyboardButtonRow::buttons() const {
    return m_buttons;
}

bool KeyboardButtonRow::operator ==(const KeyboardButtonRow &b) const {
    return m_classType == b.m_classType &&
           m_buttons == b.m_buttons;
}

KeyboardButtonRow &KeyboardButtonRow::operator =(const KeyboardButtonRow &b) {
    m_classType = b.m_classType;
    m_buttons = b.m_buttons;
    setNull(b.isNull());
    return *this;
}

void KeyboardButtonRow::setClassType(KeyboardButtonRow::KeyboardButtonRowClassType classType) {
    m_classType = classType;
}

KeyboardButtonRow::KeyboardButtonRowClassType KeyboardButtonRow::classType() const {
    return m_classType;
}

bool KeyboardButtonRow::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeKeyboardButtonRow: {
        if(in->fetchInt() != (qint32)CoreTypes::typeVector) return false;
        qint32 m_buttons_length = in->fetchInt();
        m_buttons.clear();
        for (qint32 i = 0; i < m_buttons_length; i++) {
            KeyboardButton type;
            type.fetch(in);
            m_buttons.append(type);
        }
        m_classType = static_cast<KeyboardButtonRowClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool KeyboardButtonRow::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeKeyboardButtonRow: {
        out->appendInt(CoreTypes::typeVector);
        out->appendInt(m_buttons.count());
        for (qint32 i = 0; i < m_buttons.count(); i++) {
            m_buttons[i].push(out);
        }
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> KeyboardButtonRow::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeKeyboardButtonRow: {
        result["classType"] = "KeyboardButtonRow::typeKeyboardButtonRow";
        QList<QVariant> _buttons;
        //for(const KeyboardButton &m__type: m_buttons)
        for(int i = 0; i < m_buttons.size(); ++i) {
            const KeyboardButton &m__type = m_buttons[i];
            if( !m__type.isNull() ) _buttons << m__type.toMap();
        }
        result["buttons"] = _buttons;
        return result;
    }
        break;

    default:
        return result;
    }
}

KeyboardButtonRow KeyboardButtonRow::fromMap(const QMap<QString, QVariant> &map) {
    KeyboardButtonRow result;
    if(map.value("classType").toString() == "KeyboardButtonRow::typeKeyboardButtonRow") {
        result.setClassType(typeKeyboardButtonRow);
        QList<QVariant> map_buttons = map["buttons"].toList();
        QList<KeyboardButton> _buttons;
        //for(const QVariant &var: map_buttons)
        for(int i = 0; i < map_buttons.size(); ++i) {
            const QVariant &var = map_buttons[i];
            _buttons << KeyboardButton::fromMap(var.toMap());
        }
        result.setButtons(_buttons);
        return result;
    }
    return result;
}

KeyboardButtonRow KeyboardButtonRow::fromJson(const QString &json) {
    return KeyboardButtonRow::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray KeyboardButtonRow::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const KeyboardButtonRow &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case KeyboardButtonRow::typeKeyboardButtonRow:
        stream << item.buttons();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, KeyboardButtonRow &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<KeyboardButtonRow::KeyboardButtonRowClassType>(type));
    switch(type) {
    case KeyboardButtonRow::typeKeyboardButtonRow: {
        QList<KeyboardButton> m_buttons;
        stream >> m_buttons;
        item.setButtons(m_buttons);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const KeyboardButtonRow &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.KeyboardButtonRow(";
    switch(item.classType()) {
    case KeyboardButtonRow::typeKeyboardButtonRow:
        debug.nospace() << "classType: typeKeyboardButtonRow";
        debug.nospace() << ", buttons: " << item.buttons();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
