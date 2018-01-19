// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_GAME_OBJECT
#define LQTG_TYPE_GAME_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/game.h"

#include <QPointer>
#include "documentobject.h"
#include "photoobject.h"

class LIBQTELEGRAMSHARED_EXPORT GameObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(GameClassType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(DocumentObject* document READ document WRITE setDocument NOTIFY documentChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint64 id READ id WRITE setId NOTIFY idChanged)
    Q_PROPERTY(PhotoObject* photo READ photo WRITE setPhoto NOTIFY photoChanged)
    Q_PROPERTY(QString shortName READ shortName WRITE setShortName NOTIFY shortNameChanged)
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(Game core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum GameClassType {
        TypeGame
    };

    GameObject(const Game &core, QObject *parent = 0);
    GameObject(QObject *parent = 0);
    virtual ~GameObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setDescription(const QString &description);
    QString description() const;

    void setDocument(DocumentObject* document);
    DocumentObject* document() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint64 id);
    qint64 id() const;

    void setPhoto(PhotoObject* photo);
    PhotoObject* photo() const;

    void setShortName(const QString &shortName);
    QString shortName() const;

    void setTitle(const QString &title);
    QString title() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const Game &core);
    Game core() const;

    GameObject &operator =(const Game &b);
    bool operator ==(const Game &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void descriptionChanged();
    void documentChanged();
    void flagsChanged();
    void idChanged();
    void photoChanged();
    void shortNameChanged();
    void titleChanged();

private Q_SLOTS:
    void coreDocumentChanged();
    void corePhotoChanged();

private:
    QPointer<DocumentObject> m_document;
    QPointer<PhotoObject> m_photo;
    Game m_core;
};

#endif // LQTG_TYPE_GAME_OBJECT
