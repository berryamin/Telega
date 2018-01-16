// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTCHATPHOTO_OBJECT
#define LQTG_TYPE_INPUTCHATPHOTO_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/inputchatphoto.h"

#include <QPointer>
#include "inputfileobject.h"
#include "inputphotoobject.h"

class LIBQTELEGRAMSHARED_EXPORT InputChatPhotoObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(InputChatPhotoClassType)
    Q_PROPERTY(InputFileObject* file READ file WRITE setFile NOTIFY fileChanged)
    Q_PROPERTY(InputPhotoObject* id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(InputChatPhoto core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum InputChatPhotoClassType {
        TypeInputChatPhotoEmpty,
        TypeInputChatUploadedPhoto,
        TypeInputChatPhoto
    };

    InputChatPhotoObject(const InputChatPhoto &core, QObject *parent = 0);
    InputChatPhotoObject(QObject *parent = 0);
    virtual ~InputChatPhotoObject();

    void setFile(InputFileObject* file);
    InputFileObject* file() const;

    void setId(InputPhotoObject* id);
    InputPhotoObject* id() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const InputChatPhoto &core);
    InputChatPhoto core() const;

    InputChatPhotoObject &operator =(const InputChatPhoto &b);
    bool operator ==(const InputChatPhoto &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void fileChanged();
    void idChanged();

private Q_SLOTS:
    void coreFileChanged();
    void coreIdChanged();

private:
    QPointer<InputFileObject> m_file;
    QPointer<InputPhotoObject> m_id;
    InputChatPhoto m_core;
};

#endif // LQTG_TYPE_INPUTCHATPHOTO_OBJECT
