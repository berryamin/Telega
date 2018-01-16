// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CHANNELPARTICIPANT_OBJECT
#define LQTG_TYPE_CHANNELPARTICIPANT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/channelparticipant.h"

#include <QPointer>
#include "channeladminrightsobject.h"
#include "channelbannedrightsobject.h"

class LIBQTELEGRAMSHARED_EXPORT ChannelParticipantObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(ChannelParticipantClassType)
    Q_PROPERTY(ChannelAdminRightsObject* adminRights READ adminRights WRITE setAdminRights NOTIFY adminRightsChanged)
    Q_PROPERTY(ChannelBannedRightsObject* bannedRights READ bannedRights WRITE setBannedRights NOTIFY bannedRightsChanged)
    Q_PROPERTY(bool canEdit READ canEdit WRITE setCanEdit NOTIFY canEditChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint32 inviterId READ inviterId WRITE setInviterId NOTIFY inviterIdChanged)
    Q_PROPERTY(qint32 kickedBy READ kickedBy WRITE setKickedBy NOTIFY kickedByChanged)
    Q_PROPERTY(bool left READ left WRITE setLeft NOTIFY leftChanged)
    Q_PROPERTY(qint32 promotedBy READ promotedBy WRITE setPromotedBy NOTIFY promotedByChanged)
    Q_PROPERTY(qint32 userId READ userId WRITE setUserId NOTIFY userIdChanged)
    Q_PROPERTY(ChannelParticipant core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum ChannelParticipantClassType {
        TypeChannelParticipant,
        TypeChannelParticipantSelf,
        TypeChannelParticipantCreator,
        TypeChannelParticipantAdmin,
        TypeChannelParticipantBanned
    };

    ChannelParticipantObject(const ChannelParticipant &core, QObject *parent = 0);
    ChannelParticipantObject(QObject *parent = 0);
    virtual ~ChannelParticipantObject();

    void setAdminRights(ChannelAdminRightsObject* adminRights);
    ChannelAdminRightsObject* adminRights() const;

    void setBannedRights(ChannelBannedRightsObject* bannedRights);
    ChannelBannedRightsObject* bannedRights() const;

    void setCanEdit(bool canEdit);
    bool canEdit() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setInviterId(qint32 inviterId);
    qint32 inviterId() const;

    void setKickedBy(qint32 kickedBy);
    qint32 kickedBy() const;

    void setLeft(bool left);
    bool left() const;

    void setPromotedBy(qint32 promotedBy);
    qint32 promotedBy() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const ChannelParticipant &core);
    ChannelParticipant core() const;

    ChannelParticipantObject &operator =(const ChannelParticipant &b);
    bool operator ==(const ChannelParticipant &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void adminRightsChanged();
    void bannedRightsChanged();
    void canEditChanged();
    void dateChanged();
    void flagsChanged();
    void inviterIdChanged();
    void kickedByChanged();
    void leftChanged();
    void promotedByChanged();
    void userIdChanged();

private Q_SLOTS:
    void coreAdminRightsChanged();
    void coreBannedRightsChanged();

private:
    QPointer<ChannelAdminRightsObject> m_adminRights;
    QPointer<ChannelBannedRightsObject> m_bannedRights;
    ChannelParticipant m_core;
};

#endif // LQTG_TYPE_CHANNELPARTICIPANT_OBJECT
