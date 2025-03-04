// Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd
// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

/*******************************************************************************
 1. @类名:    CustomCommandTopPanel
 2. @作者:    ut000125 孙成熙
 3. @日期:    2020-08-05
 4. @说明:    自定义命令显示管理类，控制显示面板和搜索面板的显示
*******************************************************************************/

#ifndef CUSTOMCOMMANDTOPPANEL_H
#define CUSTOMCOMMANDTOPPANEL_H

#include "rightpanel.h"
#include "customcommandpanel.h"
#include "customcommandsearchrstpanel.h"

#include <QWidget>

class CustomCommandTopPanel : public RightPanel
{
    Q_OBJECT
public:
    explicit CustomCommandTopPanel(QWidget *parent = nullptr);
    /**
     * @brief 显示自定义列表面板，隐藏搜索面板
     * @author sunchengxi
     * @param bSetFocus 自定义面板是否显示时是否带有焦点
     */
    void show(bool bSetFocus = false);

signals:
    void focusOut();
    void handleCustomCurCommand(const QString &strCommand);

public slots:
    /**
     * @brief 显示自定义命令面板的槽函数,从自定义搜索面板切换到自定义命令面板
     * @author sunchengxi
     */
    void showCustomCommandPanel();
    /**
     * @brief 根据搜索条件显示搜索面板的槽函数
     * @author sunchengxi
     * @param strFilter 搜索条件
     */
    void showCustomCommandSearchPanel(const QString &strFilter);
    /**
     * @brief 刷新自定义列表数据的槽函数
     * @author sunchengxi
     */
    void slotsRefreshCommandPanel();

private:
    CustomCommandPanel *m_customCommandPanel = nullptr;
    CustomCommandSearchRstPanel *m_customCommandSearchPanel = nullptr;
    bool m_bSetFocus;   //打开自定义命令插件时，是否获得焦点
};

#endif  // CUSTOMCOMMANDTOPPANEL_H
