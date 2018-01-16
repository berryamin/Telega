// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_UPLOADSENDENCRYPTED
#define LQTG_TYPE_UPLOADSENDENCRYPTED

#include "telegramcustomtypeobject.h"

#include <QMetaType>
#include "telegram/types/messagessentencryptedmessage.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT UploadSendEncrypted : public TelegramCustomTypeObject
{
public:
    enum UploadSendEncryptedClassType {
        typeUploadSendEncryptedEmpty = 0x312c140,
        typeUploadSendEncryptedFinished = 0x312c140,
        typeUploadSendEncryptedCanceled = 0x4de1fad,
        typeUploadSendEncryptedProgress = 0xb7bd8ce
    };

    UploadSendEncrypted(UploadSendEncryptedClassType classType = typeUploadSendEncryptedEmpty);
    UploadSendEncrypted(const Null&);
    virtual ~UploadSendEncrypted();

    void setMessage(const MessagesSentEncryptedMessage &message);
    MessagesSentEncryptedMessage message() const;

    void setPartId(qint32 partId);
    qint32 partId() const;

    void setTotalSize(qint32 totalSize);
    qint32 totalSize() const;

    void setUploaded(qint32 uploaded);
    qint32 uploaded() const;

    void setClassType(UploadSendEncryptedClassType classType);
    UploadSendEncryptedClassType classType() const;

    bool operator ==(const UploadSendEncrypted &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    MessagesSentEncryptedMessage m_message;
    qint32 m_partId;
    qint32 m_totalSize;
    qint32 m_uploaded;
    UploadSendEncryptedClassType m_classType;
};

Q_DECLARE_METATYPE(UploadSendEncrypted)

#endif // LQTG_TYPE_UPLOADSENDENCRYPTED
