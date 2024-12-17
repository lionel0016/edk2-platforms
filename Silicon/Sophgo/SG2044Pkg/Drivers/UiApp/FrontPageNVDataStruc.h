/** @file
  Header file for vfr definition.

  Copyright (c) 2024, Sophgo. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#ifndef FRONT_PAGE_NV_DATA_STRUC_H_
#define FRONT_PAGE_NV_DATA_STRUC_H_

#define TIME_DATA_VARSTORE_NAME           L"DynamicTimeData"
#define DYNAMIC_TIME_QUESTION_ID          0x1002
#define FORMSET_GUID                      { 0xadf98142, 0x42c4, 0x429c, { 0x9f, 0xa4, 0x62, 0x3f, 0xf9, 0x94, 0xa1, 0x40 } }
#define TIME_SET_FORMSET_GUID             { 0x308a3744, 0x6aa6, 0x4f37, { 0xae, 0x9d, 0xfd, 0xc3, 0xc6, 0xb0, 0xd6, 0x86 } }
#define CONFIG_INI_FORMSET_GUID           { 0x4a618233, 0x07f9, 0x4d73, { 0x91, 0x53, 0x51, 0x1f, 0x28, 0x93, 0xa0, 0x1e } }
#define FRONT_PAGE_FORM_ID             0x1000
#define NEW_FORM_ID                    0x1000
#define TIME_SET_ID                    0x8000
#define LABEL_TIME_START               0xfffe
#define LABEL_LANGUAGE                 0x1004
#define LABEL_MANAGER                  0x1000
#define LABEL_END                      0xffff
#define CONFIG_FORM_ID                 0x1000
#define LABEL_CONFIG_START        0x1000
#define LABEL_CONFIG_END          0xffff


#endif

