////////////////////////////////////////////////////////////////////////////////
//      This file is part of Unraid USB Creator - https://github.com/limetech/usb-creator
//      Copyright (C) 2013-2015 RasPlex project
//      Copyright (C) 2016 Team LibreELEC
//      Copyright (C) 2018-2020 Lime Technology, Inc
//
//  Unraid USB Creator is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 2 of the License, or
//  (at your option) any later version.
//
//  Unraid USB Creator is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with Unraid USB Creator.  If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////////////

#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <QtWidgets/QApplication>
#include <QTranslator>
#include <QObject>
#include <QMenu>
#include <QPushButton>
#include <QSettings>

// useful macro
#define isFilled()  isEmpty() == false

class Translator : public QObject
{
    Q_OBJECT

public:
    Translator(QObject *parent = 0);
    ~Translator();
    void fillLanguages(QMenu *menuPtr, QPushButton *langBtnPtr);

private:
    QMenu *menu;
    QPushButton *langBtn;
    QTranslator *qtranslator;

protected slots:
    void languageAction(QAction *action);
};

#endif // TRANSLATOR_H
