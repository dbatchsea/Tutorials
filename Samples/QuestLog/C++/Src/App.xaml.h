////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __QUESTLOG_APP_H__
#define __QUESTLOG_APP_H__


#include <NsCore/Noesis.h>
#include <NsCore/ReflectionDeclare.h>
#include <NsApp/Application.h>


namespace QuestLog
{

////////////////////////////////////////////////////////////////////////////////////////////////////
class App final: public NoesisApp::Application
{
private:
    const char* GetTitleOverride(Noesis::UIElement* root) const override;

    NS_DECLARE_REFLECTION(App, Application)
};

}


#endif