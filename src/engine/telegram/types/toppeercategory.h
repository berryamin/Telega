// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_TOPPEERCATEGORY
#define LQTG_TYPE_TOPPEERCATEGORY

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>


class LIBQTELEGRAMSHARED_EXPORT TopPeerCategory : public TelegramTypeObject
{
public:
    enum TopPeerCategoryClassType {
        typeTopPeerCategoryBotsPM = 0xab661b5b,
        typeTopPeerCategoryBotsInline = 0x148677e2,
        typeTopPeerCategoryCorrespondents = 0x637b7ed,
        typeTopPeerCategoryGroups = 0xbd17a14a,
        typeTopPeerCategoryChannels = 0x161d9628,
        typeTopPeerCategoryPhoneCalls = 0x1e76a78c
    };

    TopPeerCategory(TopPeerCategoryClassType classType = typeTopPeerCategoryBotsPM, InboundPkt *in = 0);
    TopPeerCategory(InboundPkt *in);
    TopPeerCategory(const Null&);
    TopPeerCategory(const TopPeerCategory &another);
    virtual ~TopPeerCategory();

    void setClassType(TopPeerCategoryClassType classType);
    TopPeerCategoryClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static TopPeerCategory fromMap(const QMap<QString, QVariant> &map);
    static TopPeerCategory fromJson(const QString &json);

    bool operator ==(const TopPeerCategory &b) const;
    TopPeerCategory &operator =(const TopPeerCategory &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    TopPeerCategoryClassType m_classType;
};

Q_DECLARE_METATYPE(TopPeerCategory)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const TopPeerCategory &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, TopPeerCategory &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const TopPeerCategory &item);

#endif // LQTG_TYPE_TOPPEERCATEGORY
