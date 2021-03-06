#ifndef EDITUSERS_H
#define EDITUSERS_H

#include <QWidget> /* For Gui */
#include "userattrib.h" /* The ADprogram API */
#include "userViewGUI.h"

/* Calling Program for GUI */
class ImportUsers;

/* User edit class */
class EditUsers : public UserViewGUI {
    Q_OBJECT
public:
    EditUsers(ImportUsers * prog, QWidget *parent = 0);
public slots:
    /* The child class's methods for the editing of attributes */
    void nextPerson();
    void prevPerson();
    void deletePerson();
    void editPerson();
    void submitChange();
    void cancelChange();
    void processChanges();
    void updateInterface(int mode);
private:
    QPushButton *cancelEdit;
    QPushButton *submitEdit;
    QPushButton *delUser;
    QPushButton *editUser;
    QPushButton *prevRecord;
    QPushButton *nextRecord;
    QHBoxLayout *navLayout;
};
#endif // EDITUSERS_H