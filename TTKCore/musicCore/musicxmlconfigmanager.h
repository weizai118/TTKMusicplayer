#ifndef MUSICXMLCONFIGMANAGER_H
#define MUSICXMLCONFIGMANAGER_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QPair>
#include <QColor>
#include "musicabstractxml.h"

/*! @brief The class of the XML Config Manager.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_CORE_EXPORT MusicXMLConfigManager : public MusicAbstractXml
{
public:
    explicit MusicXMLConfigManager(QObject *parent = 0);
    /*!
     * Object contsructor.
     */

    inline bool readXMLConfig() { return readConfig(COFIGPATH_AL); }
    /*!
     * Read config datas from xml file by given name.
     */
    inline bool readMusicXMLConfig(){ return readConfig(MUSICPATH_AL); }
    /*!
     * Read music datas from xml file by given name.
     */
    void writeXMLConfig();
    /*!
     * Write datas into xml file.
     */
    void writeMusicSongsConfig(const MusicSongsList &musics);
    /*!
     * Write music datas into xml file.
     */
    void readMusicSongsConfig(MusicSongsList &musics);
    /*!
     * Read music datas into xml file.
     */
    inline int readMusicPlayModeConfig() const
    { return readXmlAttributeByTagNameValue("playMode").toInt(); }
    /*!
     * Read Music Play Mode Config.
     */
    inline int readMusicPlayVolumeConfig() const
    { return readXmlAttributeByTagNameValue("playVolume").toInt(); }
    /*!
     * Read Music Play Volume Config.
     */
    inline QString readSystemCloseConfig() const
    { return readXmlAttributeByTagNameValue("closeEvent"); }
    /*!
     * Read System Close Config.
     */
    inline int readCloseNetworkConfig() const
    { return readXmlAttributeByTagNameValue("closeNetwork").toInt(); }
    /*!
     * Read Close Network Config.
     */
    inline QString readSystemAutoPlayConfig() const
    { return readXmlAttributeByTagNameValue("autoPlay"); }
    /*!
     * Read System Auto Play Config.
     */
    inline int readEnhancedMusicConfig() const
    { return readXmlAttributeByTagNameValue("enhancedMusic").toInt(); }
    /*!
     * Read Enhanced Music Config.
     */
    inline QString readBackgroundTheme() const
    { return readXmlAttributeByTagNameValue("bgTheme"); }
    /*!
     * Read Background Theme Config.
     */
    inline QString readBackgroundTransparent() const
    { return readXmlAttributeByTagNameValue("bgTransparent"); }
    /*!
     * Read Background Transparent Config.
     */
    inline QString readBackgroundListTransparent() const
    { return readXmlAttributeByTagNameValue("bgListTransparent"); }
    /*!
     * Read Background List Transparent Config.
     */
    inline QString readShowInlineLrc() const
    { return readXmlAttributeByTagNameValue("showInlineLrc"); }
    /*!
     * Read Show Inline Lrc Config.
     */
    inline QString readShowDesktopLrc() const
    { return readXmlAttributeByTagNameValue("showDesktopLrc"); }
    /*!
     * Read Music Show Desktop Lrc Config.
     */
    inline int readShowLrcColor() const
    { return readXmlAttributeByTagNameValue("lrcColor").toInt(); }
    /*!
     * Read Show Lrc Color Config.
     */
    inline int readShowLrcSize() const
    { return readXmlAttributeByTagNameValue("lrcSize").toInt(); }
    /*!
     * Read Show Lrc Size Config.
     */
    inline int readShowLrcFamily() const
    { return readXmlAttributeByTagNameValue("lrcFamily").toInt(); }
    /*!
     * Read Show Lrc Family Config.
     */
    inline int readShowLrcType() const
    { return readXmlAttributeByTagNameValue("lrcType").toInt(); }
    /*!
     * Read Show Lrc Type Config.
     */
    inline int readShowLrcTransparent() const
    { return readXmlAttributeByTagNameValue("lrcTransparent").toInt(); }
    /*!
     * Read Show Lrc Transparent Config.
     */
    inline int readShowDLrcColor() const
    { return readXmlAttributeByTagNameValue("lrcDColor").toInt(); }
    /*!
     * Read Show Desktop Lrc Color Config.
     */
    inline int readShowDLrcSize() const
    { return readXmlAttributeByTagNameValue("lrcDSize").toInt(); }
    /*!
     * Read Show Desktop Lrc Size Config.
     */
    inline int readShowDLrcFamily() const
    { return readXmlAttributeByTagNameValue("lrcDFamily").toInt(); }
    /*!
     * Read Show Desktop Lrc Family Config.
     */
    inline int readShowDLrcType() const
    { return readXmlAttributeByTagNameValue("lrcDType").toInt(); }
    /*!
     * Read Show Desktop Lrc Type Config.
     */
    inline int readShowDLrcTransparent() const
    { return readXmlAttributeByTagNameValue("lrcDTransparent").toInt(); }
    /*!
     * Read Show Desktop Lrc Family Transparent Config.
     */
    inline int readShowDLrcLocked() const
    { return readXmlAttributeByTagNameValue("lrcDLocked").toInt(); }
    /*!
     * Read Show Desktop Lrc Locked Config.
     */
    inline int readEqualizerIndex() const
    { return readXmlAttributeByTagNameValue("equalizerIndex").toInt(); }
    /*!
     * Read Equalizer Index Config.
     */
    inline int readEqualizerEnale() const
    { return readXmlAttributeByTagNameValue("equalizerEnale").toInt(); }
    /*!
     * Read Equalizer Enale Config.
     */
    inline QString readEqualizerValue() const
    { return readXmlAttributeByTagNameValue("equalizerValue"); }
    /*!
     * Read Equalizer Value Config.
     */
    inline int readLanguageIndex() const
    { return readXmlAttributeByTagNameValue("language").toInt(); }
    /*!
     * Read Language Index Config.
     */
    inline int readDownloadCacheLimit() const
    { return readXmlAttributeByTagNameValue("downloadCacheLimit").toInt(); }
    /*!
     * Read Download Cache Limit Config.
     */
    inline int readDownloadCacheSize() const
    { return readXmlAttributeByTagNameValue("downloadCacheSize").toInt(); }
    /*!
     * Read Download Cache Size Config.
     */

    inline QColor readShowLrcFgColor() const
    { return readColorConfig("lrcFgColor");}
    /*!
     * Read Show Lrc Fg Color Config.
     */
    inline QColor readShowLrcBgColor() const
    { return readColorConfig("lrcBgColor");}
    /*!
     * Read Show Lrc Bg Color Config.
     */
    inline QColor readShowDLrcFgColor() const
    { return readColorConfig("lrcDFgColor");}
    /*!
     * Read Show Desktop Lrc Fg Color Config.
     */
    inline QColor readShowDLrcBgColor() const
    { return readColorConfig("lrcDBgColor");}
    /*!
     * Read Show Desktop Lrc Bg Color Config.
     */

    void readSystemLastPlayIndexConfig(QStringList &key) const;
    /*!
     * Read System Last Play Index Config.
     */
    QRect readShowDLrcGeometry() const;
    /*!
     * Read Show Desktop Lrc Geometry Config.
     */
    void readOtherLoadConfig() const;
    /*!
     * Read Other Load Config.
     */

protected:
    MusicSongs readMusicFilePath(const QString &value) const;
    /*!
     * Read Music File Path.
     */
    QColor readColorConfig(const QString &value) const;
    /*!
     * Read Color Config base.
     */

};

#endif // MUSICXMLCONFIGMANAGER_H