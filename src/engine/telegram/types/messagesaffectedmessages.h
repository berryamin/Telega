// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESAFFECTEDMESSAGES
#define LQTG_TYPE_MESSAGESAFFECTEDMESSAGES

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT MessagesAffectedMessages : public TelegramTypeObject
{
public:
    enum MessagesAffectedMessagesClassType {
        typeMessagesAffectedMessages = 0x84d19185
    };

    MessagesAffectedMessages(MessagesAffectedMessagesClassType classType = typeMessagesAffectedMessages, InboundPkt *in = 0);
    MessagesAffectedMessages(InboundPkt *in);
    MessagesAffectedMessages(const Null&);
    MessagesAffectedMessages(const MessagesAffectedMessages &another);
    virtual ~MessagesAffectedMessages();

    void setPts(qint32 pts);
    qint32 pts() const;

    void setPtsCount(qint32 ptsCount);
    qint32 ptsCount() const;

    void setClassType(MessagesAffectedMessagesClassType classType);
    MessagesAffectedMessagesClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static MessagesAffectedMessages fromMap(const QMap<QString, QVariant> &map);
    static MessagesAffectedMessages fromJson(const QString &json);

    bool operator ==(const MessagesAffectedMessages &b) const;
    MessagesAffectedMessages &operator =(const MessagesAffectedMessages &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_pts;
    qint32 m_ptsCount;
    MessagesAffectedMessagesClassType m_classType;
};

Q_DECLARE_METATYPE(MessagesAffectedMessages)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const MessagesAffectedMessages &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, MessagesAffectedMessages &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const MessagesAffectedMessages &item);

#endif // LQTG_TYPE_MESSAGESAFFECTEDMESSAGES
