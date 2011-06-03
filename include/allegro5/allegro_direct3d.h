/*         ______   ___    ___
 *        /\  _  \ /\_ \  /\_ \
 *        \ \ \L\ \\//\ \ \//\ \      __     __   _ __   ___
 *         \ \  __ \ \ \ \  \ \ \   /'__`\ /'_ `\/\`'__\/ __`\
 *          \ \ \/\ \ \_\ \_ \_\ \_/\  __//\ \L\ \ \ \//\ \L\ \
 *           \ \_\ \_\/\____\/\____\ \____\ \____ \ \_\\ \____/
 *            \/_/\/_/\/____/\/____/\/____/\/___L\ \/_/ \/___/
 *                                           /\____/
 *                                           \_/__/
 *
 *      Header file for Direct3D specific API.
 *
 *      By Milan Mimica.
 *
 */

#ifndef __al_included_allegro5_allegro_direct3d_h
#define __al_included_allegro5_allegro_direct3d_h

#include <d3d9.h>
#if defined ALLEGRO_CFG_HLSL_SHADERS && defined __cplusplus
#include <d3dx9.h>
#endif
#include "allegro5/platform/alplatf.h"
#include "allegro5/platform/ald3d.h"

#ifdef __cplusplus
   extern "C" {
#endif

/*
 *  Public Direct3D-related API
 */

AL_FUNC(LPDIRECT3DDEVICE9,  al_get_d3d_device,         (ALLEGRO_DISPLAY *));
AL_FUNC(LPDIRECT3DTEXTURE9, al_get_d3d_system_texture, (ALLEGRO_BITMAP *));
AL_FUNC(LPDIRECT3DTEXTURE9, al_get_d3d_video_texture,  (ALLEGRO_BITMAP *));
AL_FUNC(bool,               al_have_d3d_non_pow2_texture_support,   (void));
AL_FUNC(bool,               al_have_d3d_non_square_texture_support, (void));
AL_FUNC(void,               al_get_d3d_texture_position, (ALLEGRO_BITMAP *bitmap, int *u, int *v));
AL_FUNC(bool,               al_is_d3d_device_lost, (ALLEGRO_DISPLAY *display));
AL_FUNC(void,               al_get_d3d_texture_size, (ALLEGRO_BITMAP *bitmap, int *width, int *height));
AL_FUNC(void,               al_d3d_set_release_callback, (void (*callback)(void)));
AL_FUNC(void,               al_d3d_set_restore_callback, (void (*callback)(void)));

#if defined ALLEGRO_CFG_HLSL_SHADERS && defined __cplusplus
AL_FUNC(void,               al_set_direct3d_effect,     (ALLEGRO_DISPLAY *display, LPD3DXEFFECT effect));
#endif

#ifdef __cplusplus
   }
#endif

#endif

/* vim: set ts=8 sts=3 sw=3 et: */