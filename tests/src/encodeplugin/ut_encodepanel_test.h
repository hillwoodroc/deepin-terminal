// Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd
// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef UT_ENCODEPANEL_TEST_H
#define UT_ENCODEPANEL_TEST_H

#include "ut_defines.h"
#include "termproperties.h"

#include <gtest/gtest.h>

class MainWindow;
class UT_EncodePanel_Test : public ::testing::Test
{
public:
    UT_EncodePanel_Test();

public:
    //这里的几个函数都会自动调用

    //用于做一些初始化操作
    virtual void SetUp();

    //用于做一些清理操作
    virtual void TearDown();

public:
    //普通窗口
    MainWindow *m_normalWindow = nullptr;

    TermProperties m_normalTermProperty;
};

#endif // UT_ENCODEPANEL_TEST_H

