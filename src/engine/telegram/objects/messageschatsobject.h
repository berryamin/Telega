// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESCHATS_OBJECT
#define LQTG_TYPE_MESSAGESCHATS_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messageschats.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesChatsObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesChatsClassType)
    Q_PROPERTY(QList<Chat> chats READ chats WRITE setChats NOTIFY chatsChanged)
    Q_PROPERTY(qint32 count READ count WRITE setCount NOTIFY countChanged)
    Q_PROPERTY(MessagesChats core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesChatsClassType {
        TypeMessagesChats,
        TypeMessagesChatsSlice
    };

    MessagesChatsObject(const MessagesChats &core, QObject *parent = 0);
    MessagesChatsObject(QObject *parent = 0);
    virtual ~MessagesChatsObject();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setCount(qint32 count);
    qint32 count() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessagesChats &core);
    MessagesChats core() const;

    MessagesChatsObject &operator =(const MessagesChats &b);
    bool operator ==(const MessagesChats &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void chatsChanged();
    void countChanged();

private Q_SLOTS:

private:
    MessagesChats m_core;
};

#endif // LQTG_TYPE_MESSAGESCHATS_OBJECT
