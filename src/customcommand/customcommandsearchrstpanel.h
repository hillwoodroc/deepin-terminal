// Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd
// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

/*******************************************************************************
 1. @类名:    CustomCommandSearchRstPanel
 2. @作者:    ut000125 孙成熙
 3. @日期:    2020-08-05
 4. @说明:    自定义明星搜索显示面板类
*******************************************************************************/

#ifndef CUSTOMCOMMANDSEARCHRSTPANEL_H
#define CUSTOMCOMMANDSEARCHRSTPANEL_H

#include "rightpanel.h"
#include "commonpanel.h"

#include <DPushButton>
#include <DIconButton>
#include <DGuiApplicationHelper>

#include <QWidget>

DGUI_USE_NAMESPACE
DWIDGET_USE_NAMESPACE

class CustomCommandItem;
class ListView;
class CustomCommandSearchRstPanel : public CommonPanel
{
    Q_OBJECT
public:
    explicit CustomCommandSearchRstPanel(QWidget *parent = nullptr);
    /**
     * @brief 根据 strFilter 刷新搜索面板自定义列表
     * @author sunchengxi
     * @param strFilter
     */
    void refreshData(const QString &strFilter);
    /**
     * @brief 根据 m_strFilter 刷新搜索面板自定义列表
     * @author sunchengxi
     */
    void refreshData();
signals:
    void handleCustomCurCommand(const QString &strCommand);
    void showCustomCommandPanel();

public slots:
    /**
     * @brief 执行当前搜索面板自定义命令列表中itemData 中的自定义命令
     * @author sunchengxi
     * @param strKey 自定义命令
     */
    void doCustomCommand(const QString &strKey);
    void handleThemeTypeChanged(DGuiApplicationHelper::ColorType themeType);
    void handleListViewFocusOut(Qt::FocusReason type);
    void handleIconButtonFocusOut(Qt::FocusReason type);

private:
    /**
     * @brief 初始化自定义搜索面板界面
     * @author sunchengxi
     */
    void initUI();
    /**
     * @brief 设置搜索过滤条件及显示文本
     * @author sunchengxi
     * @param filter 搜索过滤条件
     */
    void setSearchFilter(const QString &filter);
    void showPreviousPanel();

    ListView *m_cmdListWidget = nullptr;
    QString m_strFilter;
};

#endif  // CUSTOMCOMMANDSEARCHRSTPANEL_H
