// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESRECENTSTICKERS
#define LQTG_TYPE_MESSAGESRECENTSTICKERS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QList>
#include "document.h"

class LIBQTELEGRAMSHARED_EXPORT MessagesRecentStickers : public TelegramTypeObject
{
public:
    enum MessagesRecentStickersClassType {
        typeMessagesRecentStickersNotModified = 0xb17f890,
        typeMessagesRecentStickers = 0x5ce20970
    };

    MessagesRecentStickers(MessagesRecentStickersClassType classType = typeMessagesRecentStickersNotModified, InboundPkt *in = 0);
    MessagesRecentStickers(InboundPkt *in);
    MessagesRecentStickers(const Null&);
    MessagesRecentStickers(const MessagesRecentStickers &another);
    virtual ~MessagesRecentStickers();

    void setHash(qint32 hash);
    qint32 hash() const;

    void setStickers(const QList<Document> &stickers);
    QList<Document> stickers() const;

    void setClassType(MessagesRecentStickersClassType classType);
    MessagesRecentStickersClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static MessagesRecentStickers fromMap(const QMap<QString, QVariant> &map);
    static MessagesRecentStickers fromJson(const QString &json);

    bool operator ==(const MessagesRecentStickers &b) const;
    MessagesRecentStickers &operator =(const MessagesRecentStickers &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_hash;
    QList<Document> m_stickers;
    MessagesRecentStickersClassType m_classType;
};

Q_DECLARE_METATYPE(MessagesRecentStickers)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessagesRecentStickers &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessagesRecentStickers &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const MessagesRecentStickers &item);

#endif // LQTG_TYPE_MESSAGESRECENTSTICKERS
