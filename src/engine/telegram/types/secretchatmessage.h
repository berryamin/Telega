// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_SECRETCHATMESSAGE
#define LQTG_TYPE_SECRETCHATMESSAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include "encryptedfile.h"
#include <QtGlobal>
#include "decryptedmessage.h"

class LIBQTELEGRAMSHARED_EXPORT SecretChatMessage : public TelegramTypeObject
{
public:
    enum SecretChatMessageClassType {
        typeSecretChatMessage = 0x187dd9f4
    };

    SecretChatMessage(SecretChatMessageClassType classType = typeSecretChatMessage, InboundPkt *in = 0);
    SecretChatMessage(InboundPkt *in);
    SecretChatMessage(const Null&);
    SecretChatMessage(const SecretChatMessage &another);
    virtual ~SecretChatMessage();

    void setAttachment(const EncryptedFile &attachment);
    EncryptedFile attachment() const;

    void setChatId(qint32 chatId);
    qint32 chatId() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setDecryptedMessage(const DecryptedMessage &decryptedMessage);
    DecryptedMessage decryptedMessage() const;

    void setTtl(qint32 ttl);
    qint32 ttl() const;

    void setClassType(SecretChatMessageClassType classType);
    SecretChatMessageClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static SecretChatMessage fromMap(const QMap<QString, QVariant> &map);
    static SecretChatMessage fromJson(const QString &json);

    bool operator ==(const SecretChatMessage &b) const;
    SecretChatMessage &operator =(const SecretChatMessage &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    EncryptedFile m_attachment;
    qint32 m_chatId;
    qint32 m_date;
    DecryptedMessage m_decryptedMessage;
    qint32 m_ttl;
    SecretChatMessageClassType m_classType;
};

Q_DECLARE_METATYPE(SecretChatMessage)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const SecretChatMessage &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, SecretChatMessage &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const SecretChatMessage &item);

#endif // LQTG_TYPE_SECRETCHATMESSAGE
