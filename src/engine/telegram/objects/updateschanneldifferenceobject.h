// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_UPDATESCHANNELDIFFERENCE_OBJECT
#define LQTG_TYPE_UPDATESCHANNELDIFFERENCE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/updateschanneldifference.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT UpdatesChannelDifferenceObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(UpdatesChannelDifferenceClassType)
    Q_PROPERTY(QList<Chat> chats READ chats WRITE setChats NOTIFY chatsChanged)
    Q_PROPERTY(bool final READ final WRITE setFinal NOTIFY finalChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(QList<Message> messages READ messages WRITE setMessages NOTIFY messagesChanged)
    Q_PROPERTY(QList<Message> newMessages READ newMessages WRITE setNewMessages NOTIFY newMessagesChanged)
    Q_PROPERTY(QList<Update> otherUpdates READ otherUpdates WRITE setOtherUpdates NOTIFY otherUpdatesChanged)
    Q_PROPERTY(qint32 pts READ pts WRITE setPts NOTIFY ptsChanged)
    Q_PROPERTY(qint32 readInboxMaxId READ readInboxMaxId WRITE setReadInboxMaxId NOTIFY readInboxMaxIdChanged)
    Q_PROPERTY(qint32 readOutboxMaxId READ readOutboxMaxId WRITE setReadOutboxMaxId NOTIFY readOutboxMaxIdChanged)
    Q_PROPERTY(qint32 timeout READ timeout WRITE setTimeout NOTIFY timeoutChanged)
    Q_PROPERTY(qint32 topMessage READ topMessage WRITE setTopMessage NOTIFY topMessageChanged)
    Q_PROPERTY(qint32 unreadCount READ unreadCount WRITE setUnreadCount NOTIFY unreadCountChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(UpdatesChannelDifference core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum UpdatesChannelDifferenceClassType {
        TypeUpdatesChannelDifferenceEmpty,
        TypeUpdatesChannelDifferenceTooLong,
        TypeUpdatesChannelDifference
    };

    UpdatesChannelDifferenceObject(const UpdatesChannelDifference &core, QObject *parent = 0);
    UpdatesChannelDifferenceObject(QObject *parent = 0);
    virtual ~UpdatesChannelDifferenceObject();

    void setChats(const QList<Chat> &chats);
    QList<Chat> chats() const;

    void setFinal(bool final);
    bool final() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMessages(const QList<Message> &messages);
    QList<Message> messages() const;

    void setNewMessages(const QList<Message> &newMessages);
    QList<Message> newMessages() const;

    void setOtherUpdates(const QList<Update> &otherUpdates);
    QList<Update> otherUpdates() const;

    void setPts(qint32 pts);
    qint32 pts() const;

    void setReadInboxMaxId(qint32 readInboxMaxId);
    qint32 readInboxMaxId() const;

    void setReadOutboxMaxId(qint32 readOutboxMaxId);
    qint32 readOutboxMaxId() const;

    void setTimeout(qint32 timeout);
    qint32 timeout() const;

    void setTopMessage(qint32 topMessage);
    qint32 topMessage() const;

    void setUnreadCount(qint32 unreadCount);
    qint32 unreadCount() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const UpdatesChannelDifference &core);
    UpdatesChannelDifference core() const;

    UpdatesChannelDifferenceObject &operator =(const UpdatesChannelDifference &b);
    bool operator ==(const UpdatesChannelDifference &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void chatsChanged();
    void finalChanged();
    void flagsChanged();
    void messagesChanged();
    void newMessagesChanged();
    void otherUpdatesChanged();
    void ptsChanged();
    void readInboxMaxIdChanged();
    void readOutboxMaxIdChanged();
    void timeoutChanged();
    void topMessageChanged();
    void unreadCountChanged();
    void usersChanged();

private Q_SLOTS:

private:
    UpdatesChannelDifference m_core;
};

#endif // LQTG_TYPE_UPDATESCHANNELDIFFERENCE_OBJECT
