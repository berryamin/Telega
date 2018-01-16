// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CDNPUBLICKEY
#define LQTG_TYPE_CDNPUBLICKEY

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT CdnPublicKey : public TelegramTypeObject
{
public:
    enum CdnPublicKeyClassType {
        typeCdnPublicKey = 0xc982eaba
    };

    CdnPublicKey(CdnPublicKeyClassType classType = typeCdnPublicKey, InboundPkt *in = 0);
    CdnPublicKey(InboundPkt *in);
    CdnPublicKey(const Null&);
    CdnPublicKey(const CdnPublicKey &another);
    virtual ~CdnPublicKey();

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setPublicKey(const QString &publicKey);
    QString publicKey() const;

    void setClassType(CdnPublicKeyClassType classType);
    CdnPublicKeyClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static CdnPublicKey fromMap(const QMap<QString, QVariant> &map);
    static CdnPublicKey fromJson(const QString &json);

    bool operator ==(const CdnPublicKey &b) const;
    CdnPublicKey &operator =(const CdnPublicKey &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_dcId;
    QString m_publicKey;
    CdnPublicKeyClassType m_classType;
};

Q_DECLARE_METATYPE(CdnPublicKey)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const CdnPublicKey &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, CdnPublicKey &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const CdnPublicKey &item);

#endif // LQTG_TYPE_CDNPUBLICKEY