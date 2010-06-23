/*=========================================================================

  Library:   CTK
 
  Copyright (c) 2010  Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.commontk.org/LICENSE

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 
=========================================================================*/

// CTK includes
#include "ctkTransferFunctionWidgetPlugin.h"
#include "ctkTransferFunctionWidget.h"

//-----------------------------------------------------------------------------
ctkTransferFunctionWidgetPlugin::ctkTransferFunctionWidgetPlugin(QObject *_parent)
        : QObject(_parent)
{

}

//-----------------------------------------------------------------------------
QWidget *ctkTransferFunctionWidgetPlugin::createWidget(QWidget *_parent)
{
  ctkTransferFunctionWidget* _widget = new ctkTransferFunctionWidget(_parent);
  return _widget;
}

//-----------------------------------------------------------------------------
QString ctkTransferFunctionWidgetPlugin::domXml() const
{
  return "<widget class=\"ctkTransferFunctionWidget\" \
          name=\"TransferFunctionWidget\">\n"
          "</widget>\n";
}

// --------------------------------------------------------------------------
QIcon ctkTransferFunctionWidgetPlugin::icon() const
{
  return QIcon();
}

//-----------------------------------------------------------------------------
QString ctkTransferFunctionWidgetPlugin::includeFile() const
{
  return "ctkTransferFunctionWidget.h";
}

//-----------------------------------------------------------------------------
bool ctkTransferFunctionWidgetPlugin::isContainer() const
{
  return false;
}

//-----------------------------------------------------------------------------
QString ctkTransferFunctionWidgetPlugin::name() const
{
  return "ctkTransferFunctionWidget";
}
