// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "channeladminlogeventobject.h"

ChannelAdminLogEventObject::ChannelAdminLogEventObject(const ChannelAdminLogEvent &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_action(0),
    m_core(core)
{
    m_action = new ChannelAdminLogEventActionObject(m_core.action(), this);
    connect(m_action.data(), &ChannelAdminLogEventActionObject::coreChanged, this, &ChannelAdminLogEventObject::coreActionChanged);
}

ChannelAdminLogEventObject::ChannelAdminLogEventObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_action(0),
    m_core()
{
    m_action = new ChannelAdminLogEventActionObject(m_core.action(), this);
    connect(m_action.data(), &ChannelAdminLogEventActionObject::coreChanged, this, &ChannelAdminLogEventObject::coreActionChanged);
}

ChannelAdminLogEventObject::~ChannelAdminLogEventObject() {
}

void ChannelAdminLogEventObject::setAction(ChannelAdminLogEventActionObject* action) {
    if(m_action == action) return;
    if(m_action) delete m_action;
    m_action = action;
    if(m_action) {
        m_action->setParent(this);
        m_core.setAction(m_action->core());
        connect(m_action.data(), &ChannelAdminLogEventActionObject::coreChanged, this, &ChannelAdminLogEventObject::coreActionChanged);
    }
    Q_EMIT actionChanged();
    Q_EMIT coreChanged();
}

ChannelAdminLogEventActionObject*  ChannelAdminLogEventObject::action() const {
    return m_action;
}

void ChannelAdminLogEventObject::setDate(qint32 date) {
    if(m_core.date() == date) return;
    m_core.setDate(date);
    Q_EMIT dateChanged();
    Q_EMIT coreChanged();
}

qint32 ChannelAdminLogEventObject::date() const {
    return m_core.date();
}

void ChannelAdminLogEventObject::setId(qint64 id) {
    if(m_core.id() == id) return;
    m_core.setId(id);
    Q_EMIT idChanged();
    Q_EMIT coreChanged();
}

qint64 ChannelAdminLogEventObject::id() const {
    return m_core.id();
}

void ChannelAdminLogEventObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

qint32 ChannelAdminLogEventObject::userId() const {
    return m_core.userId();
}

ChannelAdminLogEventObject &ChannelAdminLogEventObject::operator =(const ChannelAdminLogEvent &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_action->setCore(b.action());

    Q_EMIT actionChanged();
    Q_EMIT dateChanged();
    Q_EMIT idChanged();
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool ChannelAdminLogEventObject::operator ==(const ChannelAdminLogEvent &b) const {
    return m_core == b;
}

void ChannelAdminLogEventObject::setClassType(quint32 classType) {
    ChannelAdminLogEvent::ChannelAdminLogEventClassType result;
    switch(classType) {
    case TypeChannelAdminLogEvent:
        result = ChannelAdminLogEvent::typeChannelAdminLogEvent;
        break;
    default:
        result = ChannelAdminLogEvent::typeChannelAdminLogEvent;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 ChannelAdminLogEventObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case ChannelAdminLogEvent::typeChannelAdminLogEvent:
        result = TypeChannelAdminLogEvent;
        break;
    default:
        result = TypeChannelAdminLogEvent;
        break;
    }

    return result;
}

void ChannelAdminLogEventObject::setCore(const ChannelAdminLogEvent &core) {
    operator =(core);
}

ChannelAdminLogEvent ChannelAdminLogEventObject::core() const {
    return m_core;
}

void ChannelAdminLogEventObject::coreActionChanged() {
    if(m_core.action() == m_action->core()) return;
    m_core.setAction(m_action->core());
    Q_EMIT actionChanged();
    Q_EMIT coreChanged();
}
