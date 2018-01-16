// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_ACCOUNTPASSWORD_OBJECT
#define LQTG_TYPE_ACCOUNTPASSWORD_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/accountpassword.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT AccountPasswordObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AccountPasswordClassType)
    Q_PROPERTY(QByteArray currentSalt READ currentSalt WRITE setCurrentSalt NOTIFY currentSaltChanged)
    Q_PROPERTY(QString emailUnconfirmedPattern READ emailUnconfirmedPattern WRITE setEmailUnconfirmedPattern NOTIFY emailUnconfirmedPatternChanged)
    Q_PROPERTY(bool hasRecovery READ hasRecovery WRITE setHasRecovery NOTIFY hasRecoveryChanged)
    Q_PROPERTY(QString hint READ hint WRITE setHint NOTIFY hintChanged)
    Q_PROPERTY(QByteArray newSalt READ newSalt WRITE setNewSalt NOTIFY newSaltChanged)
    Q_PROPERTY(AccountPassword core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AccountPasswordClassType {
        TypeAccountNoPassword,
        TypeAccountPassword
    };

    AccountPasswordObject(const AccountPassword &core, QObject *parent = 0);
    AccountPasswordObject(QObject *parent = 0);
    virtual ~AccountPasswordObject();

    void setCurrentSalt(const QByteArray &currentSalt);
    QByteArray currentSalt() const;

    void setEmailUnconfirmedPattern(const QString &emailUnconfirmedPattern);
    QString emailUnconfirmedPattern() const;

    void setHasRecovery(bool hasRecovery);
    bool hasRecovery() const;

    void setHint(const QString &hint);
    QString hint() const;

    void setNewSalt(const QByteArray &newSalt);
    QByteArray newSalt() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const AccountPassword &core);
    AccountPassword core() const;

    AccountPasswordObject &operator =(const AccountPassword &b);
    bool operator ==(const AccountPassword &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void currentSaltChanged();
    void emailUnconfirmedPatternChanged();
    void hasRecoveryChanged();
    void hintChanged();
    void newSaltChanged();

private Q_SLOTS:

private:
    AccountPassword m_core;
};

#endif // LQTG_TYPE_ACCOUNTPASSWORD_OBJECT
