// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PAYMENTREQUESTEDINFO
#define LQTG_TYPE_PAYMENTREQUESTEDINFO

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QString>
#include <QtGlobal>
#include "postaddress.h"

class LIBQTELEGRAMSHARED_EXPORT PaymentRequestedInfo : public TelegramTypeObject
{
public:
    enum PaymentRequestedInfoClassType {
        typePaymentRequestedInfo = 0x909c3f94
    };

    PaymentRequestedInfo(PaymentRequestedInfoClassType classType = typePaymentRequestedInfo, InboundPkt *in = 0);
    PaymentRequestedInfo(InboundPkt *in);
    PaymentRequestedInfo(const Null&);
    PaymentRequestedInfo(const PaymentRequestedInfo &another);
    virtual ~PaymentRequestedInfo();

    void setEmail(const QString &email);
    QString email() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setName(const QString &name);
    QString name() const;

    void setPhone(const QString &phone);
    QString phone() const;

    void setShippingAddress(const PostAddress &shippingAddress);
    PostAddress shippingAddress() const;

    void setClassType(PaymentRequestedInfoClassType classType);
    PaymentRequestedInfoClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static PaymentRequestedInfo fromMap(const QMap<QString, QVariant> &map);
    static PaymentRequestedInfo fromJson(const QString &json);

    bool operator ==(const PaymentRequestedInfo &b) const;
    PaymentRequestedInfo &operator =(const PaymentRequestedInfo &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_email;
    qint32 m_flags;
    QString m_name;
    QString m_phone;
    PostAddress m_shippingAddress;
    PaymentRequestedInfoClassType m_classType;
};

Q_DECLARE_METATYPE(PaymentRequestedInfo)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const PaymentRequestedInfo &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, PaymentRequestedInfo &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const PaymentRequestedInfo &item);

#endif // LQTG_TYPE_PAYMENTREQUESTEDINFO
