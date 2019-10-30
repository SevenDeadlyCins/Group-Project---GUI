#ifndef GUIBUTTON_H
#define GUIBUTTON_H

#include <QToolButton>

//! [0]
class guiButton : public QToolButton
{
    Q_OBJECT

public:
    explicit guiButton(const QString &text, QWidget *parent = nullptr);

    QSize sizeHint() const override;
};
//! [0]

#endif