
#include <QDebug>
#include "HelloWorldPlugin.h"

// HelloWorldPlugin::~HelloWorldPlugin() {}

void HelloWorldPlugin::onLoad() { qDebug() << "HelloWorld OnLoad"; }

QString HelloWorldPlugin::getName() const { return "Hello World from Plugin!"; }

// QWidget HelloWorldPlugin::getConfigPage() { return new HelloWorldConfigForm(); }

void HelloWorldPlugin::showSettings(QWidget *parent) { Q_UNUSED(parent) }

/*bool HelloWorldPlugin::saveSettings(Settings::SettingsManager *settings)
{
    m_settings = settings;
    return true;
}

bool HelloWorldPlugin::loadDefaultSettings(Settings::SettingsManager *settings)
{
    m_settings = settings;
    return true;
}*/
