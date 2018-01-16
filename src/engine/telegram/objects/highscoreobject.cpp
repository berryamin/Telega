// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "highscoreobject.h"

HighScoreObject::HighScoreObject(const HighScore &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

HighScoreObject::HighScoreObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

HighScoreObject::~HighScoreObject() {
}

void HighScoreObject::setPos(qint32 pos) {
    if(m_core.pos() == pos) return;
    m_core.setPos(pos);
    Q_EMIT posChanged();
    Q_EMIT coreChanged();
}

qint32 HighScoreObject::pos() const {
    return m_core.pos();
}

void HighScoreObject::setScore(qint32 score) {
    if(m_core.score() == score) return;
    m_core.setScore(score);
    Q_EMIT scoreChanged();
    Q_EMIT coreChanged();
}

qint32 HighScoreObject::score() const {
    return m_core.score();
}

void HighScoreObject::setUserId(qint32 userId) {
    if(m_core.userId() == userId) return;
    m_core.setUserId(userId);
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
}

qint32 HighScoreObject::userId() const {
    return m_core.userId();
}

HighScoreObject &HighScoreObject::operator =(const HighScore &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT posChanged();
    Q_EMIT scoreChanged();
    Q_EMIT userIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool HighScoreObject::operator ==(const HighScore &b) const {
    return m_core == b;
}

void HighScoreObject::setClassType(quint32 classType) {
    HighScore::HighScoreClassType result;
    switch(classType) {
    case TypeHighScore:
        result = HighScore::typeHighScore;
        break;
    default:
        result = HighScore::typeHighScore;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 HighScoreObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case HighScore::typeHighScore:
        result = TypeHighScore;
        break;
    default:
        result = TypeHighScore;
        break;
    }

    return result;
}

void HighScoreObject::setCore(const HighScore &core) {
    operator =(core);
}

HighScore HighScoreObject::core() const {
    return m_core;
}

