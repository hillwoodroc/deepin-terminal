// Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd
// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef UT_UTILS_TEST_H
#define UT_UTILS_TEST_H

#include "ut_defines.h"

#include <gtest/gtest.h>

class QWidget;
class UT_Utils_Test : public ::testing::Test
{
public:
    UT_Utils_Test();

public:
    //这里的几个函数都会自动调用

    //用于做一些初始化操作
    virtual void SetUp();

    //用于做一些清理操作
    virtual void TearDown();

    QWidget *parentWidget = nullptr;
};

#endif // UT_UTILS_TEST_H

