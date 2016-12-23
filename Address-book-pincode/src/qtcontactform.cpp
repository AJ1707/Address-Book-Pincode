#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        pincodeField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{
    addRow("<font color = 'blue'>First Name</font><font color = 'red'>*</font>",firstNameField);

    addRow("<font color = 'blue'>Last Name</font><font color = 'red'>*</font>", lastNameField);
    addRow("<font color = 'blue'>Address</font>", addressField);
     addRow("Pincode", pincodeField);
    addRow("Phone Number", phoneNumberField);
    addRow("Email", emailField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    pincodeField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}
