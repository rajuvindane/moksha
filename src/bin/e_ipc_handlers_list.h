#define E_IPC_OP_MODULE_LOAD 1
#define E_IPC_OP_MODULE_UNLOAD 2
#define E_IPC_OP_MODULE_ENABLE 3
#define E_IPC_OP_MODULE_DISABLE 4
#define E_IPC_OP_MODULE_LIST 5
#define E_IPC_OP_MODULE_LIST_REPLY 6
#define E_IPC_OP_BG_SET 7
#define E_IPC_OP_BG_GET 8
#define E_IPC_OP_BG_GET_REPLY 9
#define E_IPC_OP_FONT_AVAILABLE_LIST 10
#define E_IPC_OP_FONT_AVAILABLE_LIST_REPLY 11
#define E_IPC_OP_FONT_APPLY 12
#define E_IPC_OP_FONT_FALLBACK_CLEAR 13
#define E_IPC_OP_FONT_FALLBACK_APPEND 14
#define E_IPC_OP_FONT_FALLBACK_PREPEND 15
#define E_IPC_OP_FONT_FALLBACK_LIST 16
#define E_IPC_OP_FONT_FALLBACK_LIST_REPLY 17
#define E_IPC_OP_FONT_FALLBACK_REMOVE 18
#define E_IPC_OP_FONT_DEFAULT_SET 19
#define E_IPC_OP_FONT_DEFAULT_GET 20
#define E_IPC_OP_FONT_DEFAULT_GET_REPLY 21
#define E_IPC_OP_FONT_DEFAULT_REMOVE 22
#define E_IPC_OP_FONT_DEFAULT_LIST 23
#define E_IPC_OP_FONT_DEFAULT_LIST_REPLY 24
#define E_IPC_OP_RESTART 25
#define E_IPC_OP_SHUTDOWN 26
#define E_IPC_OP_LANG_LIST 27
#define E_IPC_OP_LANG_LIST_REPLY 28
#define E_IPC_OP_LANG_SET 29
#define E_IPC_OP_LANG_GET 30
#define E_IPC_OP_LANG_GET_REPLY 31
#define E_IPC_OP_BINDING_MOUSE_LIST 32
#define E_IPC_OP_BINDING_MOUSE_LIST_REPLY 33
#define E_IPC_OP_BINDING_MOUSE_ADD 34
#define E_IPC_OP_BINDING_MOUSE_DEL 35
#define E_IPC_OP_BINDING_KEY_LIST 36
#define E_IPC_OP_BINDING_KEY_LIST_REPLY 37
#define E_IPC_OP_BINDING_KEY_ADD 38
#define E_IPC_OP_BINDING_KEY_DEL 39
#define E_IPC_OP_MENUS_SCROLL_SPEED_SET 40
#define E_IPC_OP_MENUS_SCROLL_SPEED_GET 41
#define E_IPC_OP_MENUS_SCROLL_SPEED_GET_REPLY 42
#define E_IPC_OP_MENUS_FAST_MOVE_THRESHOLD_SET 43
#define E_IPC_OP_MENUS_FAST_MOVE_THRESHOLD_GET 44
#define E_IPC_OP_MENUS_FAST_MOVE_THRESHOLD_GET_REPLY 45
#define E_IPC_OP_MENUS_CLICK_DRAG_TIMEOUT_SET 46
#define E_IPC_OP_MENUS_CLICK_DRAG_TIMEOUT_GET 47
#define E_IPC_OP_MENUS_CLICK_DRAG_TIMEOUT_GET_REPLY 48
#define E_IPC_OP_BORDER_SHADE_ANIMATE_SET 49
#define E_IPC_OP_BORDER_SHADE_ANIMATE_GET 50
#define E_IPC_OP_BORDER_SHADE_ANIMATE_GET_REPLY 51
#define E_IPC_OP_BORDER_SHADE_TRANSITION_SET 52
#define E_IPC_OP_BORDER_SHADE_TRANSITION_GET 53
#define E_IPC_OP_BORDER_SHADE_TRANSITION_GET_REPLY 54
#define E_IPC_OP_BORDER_SHADE_SPEED_SET 55
#define E_IPC_OP_BORDER_SHADE_SPEED_GET 56
#define E_IPC_OP_BORDER_SHADE_SPEED_GET_REPLY 57
#define E_IPC_OP_FRAMERATE_SET 58
#define E_IPC_OP_FRAMERATE_GET 59
#define E_IPC_OP_FRAMERATE_GET_REPLY 60
#define E_IPC_OP_IMAGE_CACHE_SET 61
#define E_IPC_OP_IMAGE_CACHE_GET 62
#define E_IPC_OP_IMAGE_CACHE_GET_REPLY 63
#define E_IPC_OP_FONT_CACHE_SET 64
#define E_IPC_OP_FONT_CACHE_GET 65
#define E_IPC_OP_FONT_CACHE_GET_REPLY 66
#define E_IPC_OP_EDGE_FLIP_MOVING_SET 67
#define E_IPC_OP_EDGE_FLIP_MOVING_GET 68
#define E_IPC_OP_EDGE_FLIP_MOVING_GET_REPLY 69
#define E_IPC_OP_EDGE_FLIP_TIMEOUT_SET 70
#define E_IPC_OP_EDGE_FLIP_TIMEOUT_GET 71
#define E_IPC_OP_EDGE_FLIP_TIMEOUT_GET_REPLY 72
#define E_IPC_OP_DIRS_LIST 73
#define E_IPC_OP_DIRS_LIST_REPLY 74
#define E_IPC_OP_DIRS_APPEND 75
#define E_IPC_OP_DIRS_PREPEND 76
#define E_IPC_OP_DIRS_REMOVE 77
#define E_IPC_OP_DESKS_SET 78
#define E_IPC_OP_DESKS_GET 79
#define E_IPC_OP_DESKS_GET_REPLY 80
#define E_IPC_OP_FOCUS_POLICY_SET 81
#define E_IPC_OP_FOCUS_POLICY_GET 82
#define E_IPC_OP_FOCUS_POLICY_GET_REPLY 83
#define E_IPC_OP_MAXIMIZE_POLICY_SET 84
#define E_IPC_OP_MAXIMIZE_POLICY_GET 85
#define E_IPC_OP_MAXIMIZE_POLICY_GET_REPLY 86
#define E_IPC_OP_ALWAYS_CLICK_TO_RAISE_SET 87
#define E_IPC_OP_ALWAYS_CLICK_TO_RAISE_GET 88
#define E_IPC_OP_ALWAYS_CLICK_TO_RAISE_GET_REPLY 89
#define E_IPC_OP_USE_AUTO_RAISE_SET 90 
#define E_IPC_OP_USE_AUTO_RAISE_GET 91
#define E_IPC_OP_USE_AUTO_RAISE_GET_REPLY 92
#define E_IPC_OP_PASS_CLICK_ON_SET 93
#define E_IPC_OP_PASS_CLICK_ON_GET 94
#define E_IPC_OP_PASS_CLICK_ON_GET_REPLY 95
#define E_IPC_OP_AUTO_RAISE_DELAY_SET 96
#define E_IPC_OP_AUTO_RAISE_DELAY_GET 97
#define E_IPC_OP_AUTO_RAISE_DELAY_GET_REPLY 98
#define E_IPC_OP_USE_RESIST_SET 99
#define E_IPC_OP_USE_RESIST_GET 100
#define E_IPC_OP_USE_RESIST_GET_REPLY 101
#define E_IPC_OP_DRAG_RESIST_SET 102
#define E_IPC_OP_DRAG_RESIST_GET 103
#define E_IPC_OP_DRAG_RESIST_GET_REPLY 104
#define E_IPC_OP_DESK_RESIST_SET 105
#define E_IPC_OP_DESK_RESIST_GET 106
#define E_IPC_OP_DESK_RESIST_GET_REPLY 107
#define E_IPC_OP_WINDOW_RESIST_SET 108
#define E_IPC_OP_WINDOW_RESIST_GET 109
#define E_IPC_OP_WINDOW_RESIST_GET_REPLY 110
#define E_IPC_OP_GADGET_RESIST_SET 111
#define E_IPC_OP_GADGET_RESIST_GET 112
#define E_IPC_OP_GADGET_RESIST_GET_REPLY 113
#define E_IPC_OP_DESKTOP_BG_ADD 114
#define E_IPC_OP_DESKTOP_BG_DEL 115
#define E_IPC_OP_DESKTOP_BG_LIST 116
#define E_IPC_OP_DESKTOP_BG_LIST_REPLY 117
#define E_IPC_OP_WINLIST_WARP_WHILE_SELECTING_SET 118
#define E_IPC_OP_WINLIST_WARP_WHILE_SELECTING_GET 119
#define E_IPC_OP_WINLIST_WARP_WHILE_SELECTING_GET_REPLY 120
#define E_IPC_OP_WINLIST_WARP_AT_END_SET 121
#define E_IPC_OP_WINLIST_WARP_AT_END_GET 122
#define E_IPC_OP_WINLIST_WARP_AT_END_GET_REPLY 123
#define E_IPC_OP_WINLIST_WARP_SPEED_SET 124
#define E_IPC_OP_WINLIST_WARP_SPEED_GET 125
#define E_IPC_OP_WINLIST_WARP_SPEED_GET_REPLY 126
#define E_IPC_OP_WINLIST_SCROLL_ANIMATE_SET 127
#define E_IPC_OP_WINLIST_SCROLL_ANIMATE_GET 128
#define E_IPC_OP_WINLIST_SCROLL_ANIMATE_GET_REPLY 129
#define E_IPC_OP_WINLIST_SCROLL_SPEED_SET 130
#define E_IPC_OP_WINLIST_SCROLL_SPEED_GET 131
#define E_IPC_OP_WINLIST_SCROLL_SPEED_GET_REPLY 132
#define E_IPC_OP_WINLIST_LIST_SHOW_ICONIFIED_SET 133
#define E_IPC_OP_WINLIST_LIST_SHOW_ICONIFIED_GET 134
#define E_IPC_OP_WINLIST_LIST_SHOW_ICONIFIED_GET_REPLY 135
#define E_IPC_OP_WINLIST_LIST_SHOW_OTHER_DESK_WINDOWS_SET 136
#define E_IPC_OP_WINLIST_LIST_SHOW_OTHER_DESK_WINDOWS_GET 137
#define E_IPC_OP_WINLIST_LIST_SHOW_OTHER_DESK_WINDOWS_GET_REPLY 138
#define E_IPC_OP_WINLIST_LIST_SHOW_OTHER_SCREEN_WINDOWS_SET 139
#define E_IPC_OP_WINLIST_LIST_SHOW_OTHER_SCREEN_WINDOWS_GET 140
#define E_IPC_OP_WINLIST_LIST_SHOW_OTHER_SCREEN_WINDOWS_GET_REPLY 141
#define E_IPC_OP_WINLIST_LIST_UNCOVER_WHILE_SELECTING_SET 142
#define E_IPC_OP_WINLIST_LIST_UNCOVER_WHILE_SELECTING_GET 143
#define E_IPC_OP_WINLIST_LIST_UNCOVER_WHILE_SELECTING_GET_REPLY 144
#define E_IPC_OP_WINLIST_LIST_JUMP_DESK_WHILE_SELECTING_SET 145
#define E_IPC_OP_WINLIST_LIST_JUMP_DESK_WHILE_SELECTING_GET 146
#define E_IPC_OP_WINLIST_LIST_JUMP_DESK_WHILE_SELECTING_GET_REPLY 147
#define E_IPC_OP_WINLIST_POS_ALIGN_X_SET 148
#define E_IPC_OP_WINLIST_POS_ALIGN_X_GET 149
#define E_IPC_OP_WINLIST_POS_ALIGN_X_GET_REPLY 150
#define E_IPC_OP_WINLIST_POS_ALIGN_Y_SET 151
#define E_IPC_OP_WINLIST_POS_ALIGN_Y_GET 152
#define E_IPC_OP_WINLIST_POS_ALIGN_Y_GET_REPLY 153
#define E_IPC_OP_WINLIST_POS_SIZE_W_SET 154
#define E_IPC_OP_WINLIST_POS_SIZE_W_GET 155
#define E_IPC_OP_WINLIST_POS_SIZE_W_GET_REPLY 156
#define E_IPC_OP_WINLIST_POS_SIZE_H_SET 157
#define E_IPC_OP_WINLIST_POS_SIZE_H_GET 158
#define E_IPC_OP_WINLIST_POS_SIZE_H_GET_REPLY 159
#define E_IPC_OP_WINLIST_POS_MIN_W_SET 160
#define E_IPC_OP_WINLIST_POS_MIN_W_GET 161
#define E_IPC_OP_WINLIST_POS_MIN_W_GET_REPLY 162
#define E_IPC_OP_WINLIST_POS_MIN_H_SET 163
#define E_IPC_OP_WINLIST_POS_MIN_H_GET 164
#define E_IPC_OP_WINLIST_POS_MIN_H_GET_REPLY 165
#define E_IPC_OP_WINLIST_POS_MAX_W_SET 166
#define E_IPC_OP_WINLIST_POS_MAX_W_GET 167
#define E_IPC_OP_WINLIST_POS_MAX_W_GET_REPLY 168
#define E_IPC_OP_WINLIST_POS_MAX_H_SET 169
#define E_IPC_OP_WINLIST_POS_MAX_H_GET 170
#define E_IPC_OP_WINLIST_POS_MAX_H_GET_REPLY 171
#define E_IPC_OP_KILL_IF_CLOSE_NOT_POSSIBLE_SET 172
#define E_IPC_OP_KILL_IF_CLOSE_NOT_POSSIBLE_GET 173
#define E_IPC_OP_KILL_IF_CLOSE_NOT_POSSIBLE_GET_REPLY 174
#define E_IPC_OP_KILL_PROCESS_SET 175
#define E_IPC_OP_KILL_PROCESS_GET 176
#define E_IPC_OP_KILL_PROCESS_GET_REPLY 177
#define E_IPC_OP_KILL_TIMER_WAIT_SET 178
#define E_IPC_OP_KILL_TIMER_WAIT_GET 179
#define E_IPC_OP_KILL_TIMER_WAIT_GET_REPLY 180
#define E_IPC_OP_PING_CLIENTS_SET 181
#define E_IPC_OP_PING_CLIENTS_GET 182
#define E_IPC_OP_PING_CLIENTS_GET_REPLY 183
#define E_IPC_OP_PING_CLIENTS_WAIT_SET 184
#define E_IPC_OP_PING_CLIENTS_WAIT_GET 185
#define E_IPC_OP_PING_CLIENTS_WAIT_GET_REPLY 186
#define E_IPC_OP_TRANSITION_START_SET 187
#define E_IPC_OP_TRANSITION_START_GET 188
#define E_IPC_OP_TRANSITION_START_GET_REPLY 189
#define E_IPC_OP_TRANSITION_DESK_SET 190
#define E_IPC_OP_TRANSITION_DESK_GET 191
#define E_IPC_OP_TRANSITION_DESK_GET_REPLY 192
#define E_IPC_OP_TRANSITION_CHANGE_SET 193
#define E_IPC_OP_TRANSITION_CHANGE_GET 194
#define E_IPC_OP_TRANSITION_CHANGE_GET_REPLY 195
#define E_IPC_OP_FOCUS_SETTING_SET 196
#define E_IPC_OP_FOCUS_SETTING_GET 197
#define E_IPC_OP_FOCUS_SETTING_GET_REPLY 198
#define E_IPC_OP_EXEC_ACTION 199
#define E_IPC_OP_THEME_LIST 200
#define E_IPC_OP_THEME_LIST_REPLY 201
#define E_IPC_OP_THEME_GET 202
#define E_IPC_OP_THEME_GET_REPLY 203
#define E_IPC_OP_THEME_REMOVE 204
#define E_IPC_OP_THEME_SET 205
#define E_IPC_OP_MOVE_INFO_FOLLOWS_SET 206
#define E_IPC_OP_MOVE_INFO_FOLLOWS_GET 207
#define E_IPC_OP_MOVE_INFO_FOLLOWS_GET_REPLY 208
#define E_IPC_OP_RESIZE_INFO_FOLLOWS_SET 209
#define E_IPC_OP_RESIZE_INFO_FOLLOWS_GET 210
#define E_IPC_OP_RESIZE_INFO_FOLLOWS_GET_REPLY 211
#define E_IPC_OP_FOCUS_LAST_FOCUSED_PER_DESKTOP_SET 212
#define E_IPC_OP_FOCUS_LAST_FOCUSED_PER_DESKTOP_GET 213
#define E_IPC_OP_FOCUS_LAST_FOCUSED_PER_DESKTOP_GET_REPLY 214
#define E_IPC_OP_FOCUS_REVERT_ON_HIDE_OR_CLOSE_SET 215
#define E_IPC_OP_FOCUS_REVERT_ON_HIDE_OR_CLOSE_GET 216
#define E_IPC_OP_FOCUS_REVERT_ON_HIDE_OR_CLOSE_GET_REPLY 217
#define E_IPC_OP_PROFILE_SET 218
#define E_IPC_OP_PROFILE_GET 219
#define E_IPC_OP_PROFILE_GET_REPLY 220
#define E_IPC_OP_DESKTOP_NAME_ADD 221
#define E_IPC_OP_DESKTOP_NAME_DEL 222
#define E_IPC_OP_DESKTOP_NAME_LIST 223
#define E_IPC_OP_DESKTOP_NAME_LIST_REPLY 224
#define E_IPC_OP_CURSOR_SIZE_SET 225
#define E_IPC_OP_CURSOR_SIZE_GET 226
#define E_IPC_OP_CURSOR_SIZE_GET_REPLY 227
#define E_IPC_OP_MENU_AUTOSCROLL_MARGIN_SET 228
#define E_IPC_OP_MENU_AUTOSCROLL_MARGIN_GET 229
#define E_IPC_OP_MENU_AUTOSCROLL_MARGIN_GET_REPLY 230
#define E_IPC_OP_MENU_AUTOSCROLL_CURSOR_MARGIN_SET 231
#define E_IPC_OP_MENU_AUTOSCROLL_CURSOR_MARGIN_GET 232
#define E_IPC_OP_MENU_AUTOSCROLL_CURSOR_MARGIN_GET_REPLY 233

#define E_IPC_OP_TRANSIENT_MOVE_SET 234
#define E_IPC_OP_TRANSIENT_MOVE_GET 235
#define E_IPC_OP_TRANSIENT_MOVE_GET_REPLY 236
#define E_IPC_OP_TRANSIENT_RESIZE_SET 237
#define E_IPC_OP_TRANSIENT_RESIZE_GET 238
#define E_IPC_OP_TRANSIENT_RESIZE_GET_REPLY 239
#define E_IPC_OP_TRANSIENT_RAISE_SET 240
#define E_IPC_OP_TRANSIENT_RAISE_GET 241
#define E_IPC_OP_TRANSIENT_RAISE_GET_REPLY 242
#define E_IPC_OP_TRANSIENT_LOWER_SET 243
#define E_IPC_OP_TRANSIENT_LOWER_GET 244
#define E_IPC_OP_TRANSIENT_LOWER_GET_REPLY 245
#define E_IPC_OP_TRANSIENT_LAYER_SET 246
#define E_IPC_OP_TRANSIENT_LAYER_GET 247
#define E_IPC_OP_TRANSIENT_LAYER_GET_REPLY 248
#define E_IPC_OP_TRANSIENT_DESKTOP_SET 249
#define E_IPC_OP_TRANSIENT_DESKTOP_GET 250
#define E_IPC_OP_TRANSIENT_DESKTOP_GET_REPLY 251
#define E_IPC_OP_TRANSIENT_ICONIFY_SET 252
#define E_IPC_OP_TRANSIENT_ICONIFY_GET 253
#define E_IPC_OP_TRANSIENT_ICONIFY_GET_REPLY 254

#define E_IPC_OP_MODAL_WINDOWS_SET 255
#define E_IPC_OP_MODAL_WINDOWS_GET 256
#define E_IPC_OP_MODAL_WINDOWS_GET_REPLY 257

#define E_IPC_OP_WINDOW_PLACEMENT_POLICY_SET 258
#define E_IPC_OP_WINDOW_PLACEMENT_POLICY_GET 259
#define E_IPC_OP_WINDOW_PLACEMENT_POLICY_GET_REPLY 260

#define E_IPC_OP_CONFIG_PANEL_SHOW 261

#define E_IPC_OP_BINDING_SIGNAL_LIST 262
#define E_IPC_OP_BINDING_SIGNAL_LIST_REPLY 263
#define E_IPC_OP_BINDING_SIGNAL_ADD 264
#define E_IPC_OP_BINDING_SIGNAL_DEL 265
#define E_IPC_OP_BINDING_WHEEL_LIST 266
#define E_IPC_OP_BINDING_WHEEL_LIST_REPLY 267
#define E_IPC_OP_BINDING_WHEEL_ADD 268
#define E_IPC_OP_BINDING_WHEEL_DEL 269

#define E_IPC_OP_USE_E_CURSOR_SET 270
#define E_IPC_OP_USE_E_CURSOR_GET 271
#define E_IPC_OP_USE_E_CURSOR_GET_REPLY 272

#define E_IPC_OP_MOVE_INFO_VISIBLE_SET 273
#define E_IPC_OP_MOVE_INFO_VISIBLE_GET 274
#define E_IPC_OP_MOVE_INFO_VISIBLE_GET_REPLY 275
#define E_IPC_OP_RESIZE_INFO_VISIBLE_SET 276
#define E_IPC_OP_RESIZE_INFO_VISIBLE_GET 277
#define E_IPC_OP_RESIZE_INFO_VISIBLE_GET_REPLY 278

#define E_IPC_OP_ALWAYS_CLICK_TO_FOCUS_SET 279
#define E_IPC_OP_ALWAYS_CLICK_TO_FOCUS_GET 280
#define E_IPC_OP_ALWAYS_CLICK_TO_FOCUS_GET_REPLY 281

#define E_IPC_OP_PROFILE_LIST 282
#define E_IPC_OP_PROFILE_LIST_REPLY 283
 
#define E_IPC_OP_WINLIST_LIST_FOCUS_WHILE_SELECTING_SET 284
#define E_IPC_OP_WINLIST_LIST_FOCUS_WHILE_SELECTING_GET 285
#define E_IPC_OP_WINLIST_LIST_FOCUS_WHILE_SELECTING_GET_REPLY 286
#define E_IPC_OP_WINLIST_LIST_RAISE_WHILE_SELECTING_SET 287
#define E_IPC_OP_WINLIST_LIST_RAISE_WHILE_SELECTING_GET 288
#define E_IPC_OP_WINLIST_LIST_RAISE_WHILE_SELECTING_GET_REPLY 289

#define E_IPC_OP_THEME_CATEGORY_LIST 290
#define E_IPC_OP_THEME_CATEGORY_LIST_REPLY 291

#define E_IPC_OP_TRANSITION_LIST 292
#define E_IPC_OP_TRANSITION_LIST_REPLY 293

#define E_IPC_OP_ACTION_LIST 294
#define E_IPC_OP_ACTION_LIST_REPLY 295

#define E_IPC_OP_PROFILE_ADD 296
#define E_IPC_OP_PROFILE_DEL 297

#define E_IPC_OP_DEFAULT_ENGINE_SET 298
#define E_IPC_OP_DEFAULT_ENGINE_GET 299
#define E_IPC_OP_DEFAULT_ENGINE_GET_REPLY 300
#define E_IPC_OP_ENGINE_LIST 301
#define E_IPC_OP_ENGINE_LIST_REPLY 302
#define E_IPC_OP_ENGINE_SET 303
#define E_IPC_OP_ENGINE_GET 304
#define E_IPC_OP_ENGINE_GET_REPLY 305

#define E_IPC_OP_MENU_EAP_NAME_SHOW_SET 306
#define E_IPC_OP_MENU_EAP_NAME_SHOW_GET 307
#define E_IPC_OP_MENU_EAP_NAME_SHOW_GET_REPLY 308
#define E_IPC_OP_MENU_EAP_GENERIC_SHOW_SET 309
#define E_IPC_OP_MENU_EAP_GENERIC_SHOW_GET 310
#define E_IPC_OP_MENU_EAP_GENERIC_SHOW_GET_REPLY 311
#define E_IPC_OP_MENU_EAP_COMMENT_SHOW_SET 312
#define E_IPC_OP_MENU_EAP_COMMENT_SHOW_GET 313
#define E_IPC_OP_MENU_EAP_COMMENT_SHOW_GET_REPLY 314
  
#define E_IPC_OP_IM_LIST 315
#define E_IPC_OP_IM_LIST_REPLY 316
#define E_IPC_OP_IM_SET 317
#define E_IPC_OP_IM_GET 318
#define E_IPC_OP_IM_GET_REPLY 319

#define E_IPC_OP_FULLSCREEN_POLICY_SET 320
#define E_IPC_OP_FULLSCREEN_POLICY_GET 321
#define E_IPC_OP_FULLSCREEN_POLICY_GET_REPLY 322

#define E_IPC_OP_EDJE_CACHE_SET 324
#define E_IPC_OP_EDJE_CACHE_GET 325
#define E_IPC_OP_EDJE_CACHE_GET_REPLY 326

#define E_IPC_OP_EDJE_COLLECTION_CACHE_SET 327
#define E_IPC_OP_EDJE_COLLECTION_CACHE_GET 328
#define E_IPC_OP_EDJE_COLLECTION_CACHE_GET_REPLY 329

#define E_IPC_OP_CACHE_FLUSH_INTERVAL_SET 330
#define E_IPC_OP_CACHE_FLUSH_INTERVAL_GET 331
#define E_IPC_OP_CACHE_FLUSH_INTERVAL_GET_REPLY 332

#define E_IPC_EAP_EDIT_START 333

#define E_IPC_OP_COLOR_CLASS_COLOR_SET 334
#define E_IPC_OP_COLOR_CLASS_COLOR2_SET 335
#define E_IPC_OP_COLOR_CLASS_COLOR3_SET 336
#define E_IPC_OP_COLOR_CLASS_COLOR_LIST 337
#define E_IPC_OP_COLOR_CLASS_COLOR2_LIST 338
#define E_IPC_OP_COLOR_CLASS_COLOR3_LIST 339
#define E_IPC_OP_COLOR_CLASS_COLOR_LIST_REPLY 340
#define E_IPC_OP_COLOR_CLASS_DEL 341
#define E_IPC_OP_COLOR_CLASS_LIST 342
#define E_IPC_OP_COLOR_CLASS_LIST_REPLY 343

#define E_IPC_OP_CFGDLG_AUTO_APPLY_SET 344 
#define E_IPC_OP_CFGDLG_AUTO_APPLY_GET 345
#define E_IPC_OP_CFGDLG_AUTO_APPLY_GET_REPLY 346

#define E_IPC_OP_CFGDLG_DEFAULT_MODE_SET 347
#define E_IPC_OP_CFGDLG_DEFAULT_MODE_GET 348
#define E_IPC_OP_CFGDLG_DEFAULT_MODE_GET_REPLY 349

#define E_IPC_OP_MAXIMIZE_MANIPULATION_SET 350
#define E_IPC_OP_MAXIMIZE_MANIPULATION_GET 351
#define E_IPC_OP_MAXIMIZE_MANIPULATION_GET_REPLY 352

#define E_IPC_OP_DESKTOP_LOCK 353

#define E_IPC_OP_INIT_SET 354
#define E_IPC_OP_INIT_GET 355
#define E_IPC_OP_INIT_GET_REPLY 356

#define E_IPC_OP_FONT_HINTING_SET 357
#define E_IPC_OP_FONT_HINTING_GET 358
#define E_IPC_OP_FONT_HINTING_GET_REPLY 359

#define E_IPC_OP_EDGE_FLIP_DRAGGING_SET 360
#define E_IPC_OP_EDGE_FLIP_DRAGGING_GET 361
#define E_IPC_OP_EDGE_FLIP_DRAGGING_GET_REPLY 362

#define E_IPC_OP_USE_COMPOSITE_SET 363
#define E_IPC_OP_USE_COMPOSITE_GET 364
#define E_IPC_OP_USE_COMPOSITE_GET_REPLY 365
