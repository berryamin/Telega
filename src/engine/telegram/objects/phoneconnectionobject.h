// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PHONECONNECTION_OBJECT
#define LQTG_TYPE_PHONECONNECTION_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/phoneconnection.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT PhoneConnectionObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(PhoneConnectionClassType)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(QString ip READ ip WRITE setIp NOTIFY ipChanged)
    Q_PROPERTY(QString ipv6 READ ipv6 WRITE setIpv6 NOTIFY ipv6Changed)
    Q_PROPERTY(QByteArray peerTag READ peerTag WRITE setPeerTag NOTIFY peerTagChanged)
    Q_PROPERTY(qint32 port READ port WRITE setPort NOTIFY portChanged)
    Q_PROPERTY(PhoneConnection core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum PhoneConnectionClassType {
        TypePhoneConnection
    };

    PhoneConnectionObject(const PhoneConnection &core, QObject *parent = 0);
    PhoneConnectionObject(QObject *parent = 0);
    virtual ~PhoneConnectionObject();

    void setId(qint64 id);
    qint64 id() const;

    void setIp(const QString &ip);
    QString ip() const;

    void setIpv6(const QString &ipv6);
    QString ipv6() const;

    void setPeerTag(const QByteArray &peerTag);
    QByteArray peerTag() const;

    void setPort(qint32 port);
    qint32 port() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const PhoneConnection &core);
    PhoneConnection core() const;

    PhoneConnectionObject &operator =(const PhoneConnection &b);
    bool operator ==(const PhoneConnection &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void idChanged();
    void ipChanged();
    void ipv6Changed();
    void peerTagChanged();
    void portChanged();

private Q_SLOTS:

private:
    PhoneConnection m_core;
};

#endif // LQTG_TYPE_PHONECONNECTION_OBJECT
