// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACT
#define LQTG_TYPE_CONTACT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT Contact : public TelegramTypeObject
{
public:
    enum ContactClassType {
        typeContact = 0xf911c994
    };

    Contact(ContactClassType classType = typeContact, InboundPkt *in = 0);
    Contact(InboundPkt *in);
    Contact(const Null&);
    Contact(const Contact &another);
    virtual ~Contact();

    void setMutual(bool mutual);
    bool mutual() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ContactClassType classType);
    ContactClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static Contact fromMap(const QMap<QString, QVariant> &map);
    static Contact fromJson(const QString &json);

    bool operator ==(const Contact &b) const;
    Contact &operator =(const Contact &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    bool m_mutual;
    qint32 m_userId;
    ContactClassType m_classType;
};

Q_DECLARE_METATYPE(Contact)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Contact &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Contact &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const Contact &item);

#endif // LQTG_TYPE_CONTACT
