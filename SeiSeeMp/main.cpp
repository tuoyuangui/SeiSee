#include "mainwindow.h"

#include <QApplication>
#include <QFontDatabase>
#include <QDebug>
#include <QStringList>

#include "gfxstyle.h"

bool setDefaultFont(QApplication *app)
{
    const int plotFontId =
        QFontDatabase::addApplicationFont(GfxStyle::LabelFontResource);
    if (plotFontId < 0) {
        qCritical() << "Unable to load plot font:"
                    << GfxStyle::LabelFontResource;
        return false;
    }

    QStringList plotFontFamilies =
        QFontDatabase::applicationFontFamilies(plotFontId);
    if (plotFontFamilies.isEmpty()) {
        qCritical() << "No font family found in plot font resource:"
                    << GfxStyle::LabelFontResource;
        return false;
    }

    int loadedFontId =
        QFontDatabase::addApplicationFont(GfxStyle::UiFontResource);
    if (loadedFontId < 0) {
        qCritical() << "Unable to load UI font:" << GfxStyle::UiFontResource;
        return false;
    }

    QStringList loadedFontFamilies =
        QFontDatabase::applicationFontFamilies(loadedFontId);
    if (loadedFontFamilies.isEmpty()) {
        qCritical() << "No font family found in UI font resource:"
                    << GfxStyle::UiFontResource;
        return false;
    }

    QFont defaultFont = app->font();
    defaultFont.setFamily(loadedFontFamilies.first());
    defaultFont.setPointSizeF(GfxStyle::UiFontPointSize);
    app->setFont(defaultFont);
    return true;
}

int main(int argc, char *argv[])
{
#if QT_VERSION >= QT_VERSION_CHECK(5, 6, 0)
    QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
#endif

    QApplication a(argc, argv);
    if (!setDefaultFont(&a))
        return 1;

    MainWindow w;
    w.show();

    return a.exec();
}
