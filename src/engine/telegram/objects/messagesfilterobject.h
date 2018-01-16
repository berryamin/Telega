// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESFILTER_OBJECT
#define LQTG_TYPE_MESSAGESFILTER_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesfilter.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesFilterObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesFilterClassType)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(bool missed READ missed WRITE setMissed NOTIFY missedChanged)
    Q_PROPERTY(MessagesFilter core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesFilterClassType {
        TypeInputMessagesFilterEmpty,
        TypeInputMessagesFilterPhotos,
        TypeInputMessagesFilterVideo,
        TypeInputMessagesFilterPhotoVideo,
        TypeInputMessagesFilterPhotoVideoDocuments,
        TypeInputMessagesFilterDocument,
        TypeInputMessagesFilterUrl,
        TypeInputMessagesFilterGif,
        TypeInputMessagesFilterVoice,
        TypeInputMessagesFilterMusic,
        TypeInputMessagesFilterChatPhotos,
        TypeInputMessagesFilterPhoneCalls,
        TypeInputMessagesFilterRoundVoice,
        TypeInputMessagesFilterRoundVideo
    };

    MessagesFilterObject(const MessagesFilter &core, QObject *parent = 0);
    MessagesFilterObject(QObject *parent = 0);
    virtual ~MessagesFilterObject();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMissed(bool missed);
    bool missed() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessagesFilter &core);
    MessagesFilter core() const;

    MessagesFilterObject &operator =(const MessagesFilter &b);
    bool operator ==(const MessagesFilter &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void flagsChanged();
    void missedChanged();

private Q_SLOTS:

private:
    MessagesFilter m_core;
};

#endif // LQTG_TYPE_MESSAGESFILTER_OBJECT
