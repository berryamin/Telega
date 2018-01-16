// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGESSTICKERSETINSTALLRESULT_OBJECT
#define LQTG_TYPE_MESSAGESSTICKERSETINSTALLRESULT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagesstickersetinstallresult.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessagesStickerSetInstallResultObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessagesStickerSetInstallResultClassType)
    Q_PROPERTY(QList<StickerSetCovered> sets READ sets WRITE setSets NOTIFY setsChanged)
    Q_PROPERTY(MessagesStickerSetInstallResult core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessagesStickerSetInstallResultClassType {
        TypeMessagesStickerSetInstallResultSuccess,
        TypeMessagesStickerSetInstallResultArchive
    };

    MessagesStickerSetInstallResultObject(const MessagesStickerSetInstallResult &core, QObject *parent = 0);
    MessagesStickerSetInstallResultObject(QObject *parent = 0);
    virtual ~MessagesStickerSetInstallResultObject();

    void setSets(const QList<StickerSetCovered> &sets);
    QList<StickerSetCovered> sets() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessagesStickerSetInstallResult &core);
    MessagesStickerSetInstallResult core() const;

    MessagesStickerSetInstallResultObject &operator =(const MessagesStickerSetInstallResult &b);
    bool operator ==(const MessagesStickerSetInstallResult &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void setsChanged();

private Q_SLOTS:

private:
    MessagesStickerSetInstallResult m_core;
};

#endif // LQTG_TYPE_MESSAGESSTICKERSETINSTALLRESULT_OBJECT
