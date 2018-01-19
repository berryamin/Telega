// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_ACCOUNTTMPPASSWORD_OBJECT
#define LQTG_TYPE_ACCOUNTTMPPASSWORD_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/accounttmppassword.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT AccountTmpPasswordObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AccountTmpPasswordClassType)
    Q_PROPERTY(QByteArray tmpPassword READ tmpPassword WRITE setTmpPassword NOTIFY tmpPasswordChanged)
    Q_PROPERTY(qint32 validUntil READ validUntil WRITE setValidUntil NOTIFY validUntilChanged)
    Q_PROPERTY(AccountTmpPassword core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AccountTmpPasswordClassType {
        TypeAccountTmpPassword
    };

    AccountTmpPasswordObject(const AccountTmpPassword &core, QObject *parent = 0);
    AccountTmpPasswordObject(QObject *parent = 0);
    virtual ~AccountTmpPasswordObject();

    void setTmpPassword(const QByteArray &tmpPassword);
    QByteArray tmpPassword() const;

    void setValidUntil(qint32 validUntil);
    qint32 validUntil() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const AccountTmpPassword &core);
    AccountTmpPassword core() const;

    AccountTmpPasswordObject &operator =(const AccountTmpPassword &b);
    bool operator ==(const AccountTmpPassword &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void tmpPasswordChanged();
    void validUntilChanged();

private Q_SLOTS:

private:
    AccountTmpPassword m_core;
};

#endif // LQTG_TYPE_ACCOUNTTMPPASSWORD_OBJECT
