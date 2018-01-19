// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "disabledfeatureobject.h"

DisabledFeatureObject::DisabledFeatureObject(const DisabledFeature &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

DisabledFeatureObject::DisabledFeatureObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

DisabledFeatureObject::~DisabledFeatureObject() {
}

void DisabledFeatureObject::setDescription(const QString &description) {
    if(m_core.description() == description) return;
    m_core.setDescription(description);
    Q_EMIT descriptionChanged();
    Q_EMIT coreChanged();
}

QString DisabledFeatureObject::description() const {
    return m_core.description();
}

void DisabledFeatureObject::setFeature(const QString &feature) {
    if(m_core.feature() == feature) return;
    m_core.setFeature(feature);
    Q_EMIT featureChanged();
    Q_EMIT coreChanged();
}

QString DisabledFeatureObject::feature() const {
    return m_core.feature();
}

DisabledFeatureObject &DisabledFeatureObject::operator =(const DisabledFeature &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT descriptionChanged();
    Q_EMIT featureChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool DisabledFeatureObject::operator ==(const DisabledFeature &b) const {
    return m_core == b;
}

void DisabledFeatureObject::setClassType(quint32 classType) {
    DisabledFeature::DisabledFeatureClassType result;
    switch(classType) {
    case TypeDisabledFeature:
        result = DisabledFeature::typeDisabledFeature;
        break;
    default:
        result = DisabledFeature::typeDisabledFeature;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 DisabledFeatureObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case DisabledFeature::typeDisabledFeature:
        result = TypeDisabledFeature;
        break;
    default:
        result = TypeDisabledFeature;
        break;
    }

    return result;
}

void DisabledFeatureObject::setCore(const DisabledFeature &core) {
    operator =(core);
}

DisabledFeature DisabledFeatureObject::core() const {
    return m_core;
}

