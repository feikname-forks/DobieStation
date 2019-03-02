#ifndef SETTINGS_H
#define SETTINGS_H

#include <QSettings>
#include <QString>

namespace Settings
{
    QSettings& get_instance();

    void set_bios_path(QString bios);
    void set_vu1_jit_enabled(bool enabled);

    QString get_bios_path();
    bool get_vu1_jit_enabled();

    void save();
};
#endif
