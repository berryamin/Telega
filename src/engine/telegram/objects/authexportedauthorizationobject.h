// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_AUTHEXPORTEDAUTHORIZATION_OBJECT
#define LQTG_TYPE_AUTHEXPORTEDAUTHORIZATION_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/authexportedauthorization.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT AuthExportedAuthorizationObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(AuthExportedAuthorizationClassType)
    Q_PROPERTY(QByteArray bytes READ bytes WRITE setBytes NOTIFY bytesChanged)
    Q_PROPERTY(qint32 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(AuthExportedAuthorization core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum AuthExportedAuthorizationClassType {
        TypeAuthExportedAuthorization
    };

    AuthExportedAuthorizationObject(const AuthExportedAuthorization &core, QObject *parent = 0);
    AuthExportedAuthorizationObject(QObject *parent = 0);
    virtual ~AuthExportedAuthorizationObject();

    void setBytes(const QByteArray &bytes);
    QByteArray bytes() const;

    void setId(qint32 id);
    qint32 id() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const AuthExportedAuthorization &core);
    AuthExportedAuthorization core() const;

    AuthExportedAuthorizationObject &operator =(const AuthExportedAuthorization &b);
    bool operator ==(const AuthExportedAuthorization &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void bytesChanged();
    void idChanged();

private Q_SLOTS:

private:
    AuthExportedAuthorization m_core;
};

#endif // LQTG_TYPE_AUTHEXPORTEDAUTHORIZATION_OBJECT