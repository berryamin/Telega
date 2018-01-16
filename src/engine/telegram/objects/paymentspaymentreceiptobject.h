// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PAYMENTSPAYMENTRECEIPT_OBJECT
#define LQTG_TYPE_PAYMENTSPAYMENTRECEIPT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/paymentspaymentreceipt.h"

#include <QPointer>
#include "paymentrequestedinfoobject.h"
#include "invoiceobject.h"
#include "shippingoptionobject.h"

class LIBQTELEGRAMSHARED_EXPORT PaymentsPaymentReceiptObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(PaymentsPaymentReceiptClassType)
    Q_PROPERTY(qint32 botId READ botId WRITE setBotId NOTIFY botIdChanged)
    Q_PROPERTY(QString credentialsTitle READ credentialsTitle WRITE setCredentialsTitle NOTIFY credentialsTitleChanged)
    Q_PROPERTY(QString currency READ currency WRITE setCurrency NOTIFY currencyChanged)
    Q_PROPERTY(qint32 date READ date WRITE setDate NOTIFY dateChanged)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(PaymentRequestedInfoObject* info READ info WRITE setInfo NOTIFY infoChanged)
    Q_PROPERTY(InvoiceObject* invoice READ invoice WRITE setInvoice NOTIFY invoiceChanged)
    Q_PROPERTY(qint32 providerId READ providerId WRITE setProviderId NOTIFY providerIdChanged)
    Q_PROPERTY(ShippingOptionObject* shipping READ shipping WRITE setShipping NOTIFY shippingChanged)
    Q_PROPERTY(qint64 totalAmount READ totalAmount WRITE setTotalAmount NOTIFY totalAmountChanged)
    Q_PROPERTY(QList<User> users READ users WRITE setUsers NOTIFY usersChanged)
    Q_PROPERTY(PaymentsPaymentReceipt core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum PaymentsPaymentReceiptClassType {
        TypePaymentsPaymentReceipt
    };

    PaymentsPaymentReceiptObject(const PaymentsPaymentReceipt &core, QObject *parent = 0);
    PaymentsPaymentReceiptObject(QObject *parent = 0);
    virtual ~PaymentsPaymentReceiptObject();

    void setBotId(qint32 botId);
    qint32 botId() const;

    void setCredentialsTitle(const QString &credentialsTitle);
    QString credentialsTitle() const;

    void setCurrency(const QString &currency);
    QString currency() const;

    void setDate(qint32 date);
    qint32 date() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setInfo(PaymentRequestedInfoObject* info);
    PaymentRequestedInfoObject* info() const;

    void setInvoice(InvoiceObject* invoice);
    InvoiceObject* invoice() const;

    void setProviderId(qint32 providerId);
    qint32 providerId() const;

    void setShipping(ShippingOptionObject* shipping);
    ShippingOptionObject* shipping() const;

    void setTotalAmount(qint64 totalAmount);
    qint64 totalAmount() const;

    void setUsers(const QList<User> &users);
    QList<User> users() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const PaymentsPaymentReceipt &core);
    PaymentsPaymentReceipt core() const;

    PaymentsPaymentReceiptObject &operator =(const PaymentsPaymentReceipt &b);
    bool operator ==(const PaymentsPaymentReceipt &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void botIdChanged();
    void credentialsTitleChanged();
    void currencyChanged();
    void dateChanged();
    void flagsChanged();
    void infoChanged();
    void invoiceChanged();
    void providerIdChanged();
    void shippingChanged();
    void totalAmountChanged();
    void usersChanged();

private Q_SLOTS:
    void coreInfoChanged();
    void coreInvoiceChanged();
    void coreShippingChanged();

private:
    QPointer<PaymentRequestedInfoObject> m_info;
    QPointer<InvoiceObject> m_invoice;
    QPointer<ShippingOptionObject> m_shipping;
    PaymentsPaymentReceipt m_core;
};

#endif // LQTG_TYPE_PAYMENTSPAYMENTRECEIPT_OBJECT
