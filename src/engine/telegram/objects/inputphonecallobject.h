// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTPHONECALL_OBJECT
#define LQTG_TYPE_INPUTPHONECALL_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputphonecall.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT InputPhoneCallObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputPhoneCallClassType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(InputPhoneCall core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputPhoneCallClassType {
        TypeInputPhoneCall
    };

    InputPhoneCallObject(const InputPhoneCall &core, QObject *parent = 0);
    InputPhoneCallObject(QObject *parent = 0);
    virtual ~InputPhoneCallObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputPhoneCall &core);
    InputPhoneCall core() const;

    InputPhoneCallObject &operator =(const InputPhoneCall &b);
    bool operator ==(const InputPhoneCall &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void idChanged();

private Q_SLOTS:

private:
    InputPhoneCall m_core;
};

#endif // LQTG_TYPE_INPUTPHONECALL_OBJECT
