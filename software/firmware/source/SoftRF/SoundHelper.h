/*
 * SoundHelper.h
 * Copyright (C) 2016-2020 Linar Yusupov
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SOUNDHELPER_H
#define SOUNDHELPER_H

#include "SoftRF.h"

enum
{
	BUZZER_VOLUME_FULL,
	BUZZER_VOLUME_LOW,
	BUZZER_OFF
};

void Sound_setup(void);
#if 0
void Sound_test(int var);
#endif

#endif /* SOUNDHELPER_H */