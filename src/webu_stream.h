/*   This file is part of Motion.
 *
 *   Motion is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   Motion is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Motion.  If not, see <https://www.gnu.org/licenses/>.
 */

/*
 *  webu_stream.h
 *    Headers associated with functions in the webu_stream.c module.
 */

#ifndef _INCLUDE_WEBU_STREAM_H_
#define _INCLUDE_WEBU_STREAM_H_


mymhd_retcd webu_stream_mjpeg(struct webui_ctx *webui);
mymhd_retcd webu_stream_static(struct webui_ctx *webui);
void webu_stream_deinit(struct webui_ctx *webui, struct stream_data *stream);

#endif
