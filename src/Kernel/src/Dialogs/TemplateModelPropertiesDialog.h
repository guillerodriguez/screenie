/* This file is part of the Screenie project.
   Screenie is a fancy screenshot composer.

   Copyright (C) 2008 Ariya Hidayat <ariya.hidayat@gmail.com>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef TEMPLATEMODELPROPERTIESDIALOG_H
#define TEMPLATEMODELPROPERTIESDIALOG_H

class QWidget;

#include "ScreenieModelPropertiesDialog.h"

class ScreenieTemplateModel;
class TemplateModelPropertiesDialogPrivate;

class TemplateModelPropertiesDialog : public ScreenieModelPropertiesDialog
{
    Q_OBJECT
public:
    explicit TemplateModelPropertiesDialog(ScreenieTemplateModel &templateModel, QWidget *parent = 0, Qt::WindowFlags flags = 0);
    virtual ~TemplateModelPropertiesDialog();

protected:
    virtual void initializeUi();

private:
    TemplateModelPropertiesDialogPrivate *d;
};

#endif // TEMPLATEMODELPROPERTIESDIALOG_H