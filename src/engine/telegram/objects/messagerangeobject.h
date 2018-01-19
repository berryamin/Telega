// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_MESSAGERANGE_OBJECT
#define LQTG_TYPE_MESSAGERANGE_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/messagerange.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT MessageRangeObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(MessageRangeClassType)
    Q_PROPERTY(qint32 maxId READ maxId WRITE setMaxId NOTIFY maxIdChanged)
    Q_PROPERTY(qint32 minId READ minId WRITE setMinId NOTIFY minIdChanged)
    Q_PROPERTY(MessageRange core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum MessageRangeClassType {
        TypeMessageRange
    };

    MessageRangeObject(const MessageRange &core, QObject *parent = 0);
    MessageRangeObject(QObject *parent = 0);
    virtual ~MessageRangeObject();

    void setMaxId(qint32 maxId);
    qint32 maxId() const;

    void setMinId(qint32 minId);
    qint32 minId() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const MessageRange &core);
    MessageRange core() const;

    MessageRangeObject &operator =(const MessageRange &b);
    bool operator ==(const MessageRange &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void maxIdChanged();
    void minIdChanged();

private Q_SLOTS:

private:
    MessageRange m_core;
};

#endif // LQTG_TYPE_MESSAGERANGE_OBJECT
