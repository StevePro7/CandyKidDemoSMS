M:enemy_manager
F:G$engine_enemy_manager_load$0_0$0({2}DF,SV:S),Z,0,0,0,0,0
S:Lenemy_manager.engine_enemy_manager_load$ho$1_0$6({2}DG,STtag_struct_hack_object:S),R,0,0,[]
S:Lenemy_manager.engine_enemy_manager_load$delay$1_0$6({1}SC:U),R,0,0,[b]
S:Lenemy_manager.engine_enemy_manager_load$idx$1_0$6({1}SC:U),R,0,0,[b]
F:G$engine_enemy_manager_toggle_color$0_0$0({2}DF,SV:S),Z,0,0,0,0,0
S:Lenemy_manager.engine_enemy_manager_toggle_color$input$1_0$9({1}SC:U),R,0,0,[a]
F:G$engine_enemy_manager_toggle_frame$0_0$0({2}DF,SV:S),Z,0,0,0,0,0
S:Lenemy_manager.engine_enemy_manager_toggle_frame$ho$1_0$13({2}DG,STtag_struct_hack_object:S),R,0,0,[]
S:Lenemy_manager.engine_enemy_manager_toggle_frame$eo$1_0$13({2}DG,STtag_struct_enemy_object:S),B,1,-2
S:Lenemy_manager.engine_enemy_manager_toggle_frame$idx$1_0$13({1}SC:U),R,0,0,[c]
S:Lenemy_manager.engine_enemy_manager_toggle_frame$sloc0$0_1$0({2}DG,STtag_struct_enemy_object:S),B,1,-2
F:G$engine_enemy_manager_draw$0_0$0({2}DF,SV:S),Z,0,0,0,0,0
S:Lenemy_manager.engine_enemy_manager_draw$eo$1_0$18({2}DG,STtag_struct_enemy_object:S),R,0,0,[e,d]
S:Lenemy_manager.engine_enemy_manager_draw$idx$1_0$18({1}SC:U),R,0,0,[c]
F:Fenemy_manager$construction$0_0$0({2}DF,SV:S),Z,0,0,0,0,0
S:Lenemy_manager.construction$idx$1_0$21({1}SC:U),B,1,4
S:Lenemy_manager.construction$x$1_0$21({1}SC:U),B,1,5
S:Lenemy_manager.construction$y$1_0$21({1}SC:U),B,1,6
S:Lenemy_manager.construction$delay$1_0$21({1}SC:U),B,1,7
S:Lenemy_manager.construction$base$1_0$21({2}SI:U),B,1,8
S:Lenemy_manager.construction$eo$1_0$22({2}DG,STtag_struct_enemy_object:S),R,0,0,[e,d]
F:Fenemy_manager$toggle_color$0_0$0({2}DF,SV:S),Z,0,0,0,0,0
S:Lenemy_manager.toggle_color$idx$1_0$23({1}SC:U),B,1,4
S:Lenemy_manager.toggle_color$eo$1_0$24({2}DG,STtag_struct_enemy_object:S),R,0,0,[l,h]
F:Fenemy_manager$toggle_frame$0_0$0({2}DF,SV:S),Z,0,0,0,0,0
S:Lenemy_manager.toggle_frame$idx$1_0$25({1}SC:U),B,1,4
S:Lenemy_manager.toggle_frame$eo$1_0$26({2}DG,STtag_struct_enemy_object:S),R,0,0,[l,h]
F:Fenemy_manager$calculate_tile$0_0$0({2}DF,SV:S),Z,0,0,0,0,0
S:Lenemy_manager.calculate_tile$idx$1_0$27({1}SC:U),B,1,4
S:Lenemy_manager.calculate_tile$eo$1_0$28({2}DG,STtag_struct_enemy_object:S),R,0,0,[e,d]
S:Lenemy_manager.calculate_tile$sloc0$0_1$0({2}DG,SI:U),B,1,-4
S:Lenemy_manager.calculate_tile$sloc1$0_1$0({2}SI:S),B,1,-2
T:Fenemy_manager$tag_struct_hack_object[({0}S:S$hack_debug$0_0$0({1}SC:U),Z,0,0)({1}S:S$hack_start$0_0$0({1}SC:U),Z,0,0)({2}S:S$hack_steps$0_0$0({1}SC:U),Z,0,0)({3}S:S$hack_delay$0_0$0({1}SC:U),Z,0,0)({4}S:S$hack_hands$0_0$0({1}SC:U),Z,0,0)({5}S:S$hack_music$0_0$0({1}SC:U),Z,0,0)({6}S:S$hack_sound$0_0$0({1}SC:U),Z,0,0)({7}S:S$hack_paths$0_0$0({1}SC:U),Z,0,0)]
T:Fenemy_manager$tag_struct_enemy_object[({0}S:S$index$0_0$0({1}SC:U),Z,0,0)({1}S:S$enemyX$0_0$0({1}SC:U),Z,0,0)({2}S:S$enemyY$0_0$0({1}SC:U),Z,0,0)({3}S:S$color$0_0$0({1}SC:U),Z,0,0)({4}S:S$frame$0_0$0({1}SC:U),Z,0,0)({5}S:S$delay$0_0$0({1}SC:U),Z,0,0)({6}S:S$timer$0_0$0({1}SC:U),Z,0,0)({7}S:S$base$0_0$0({2}SI:U),Z,0,0)({9}S:S$tile$0_0$0({2}SI:U),Z,0,0)]
S:G$global_hack_object$0_0$0({8}STtag_struct_hack_object:S),E,0,0
S:G$global_enemy_objects$0_0$0({33}DA3d,STtag_struct_enemy_object:S),E,0,0
S:G$engine_hack_manager_init$0_0$0({2}DF,SV:S),C,0,0
S:G$engine_hack_manager_update$0_0$0({2}DF,SV:S),C,0,0
S:G$engine_input_manager_update$0_0$0({2}DF,SV:S),C,0,0
S:G$engine_input_manager_hold_up$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_hold_down$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_hold_left$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_hold_right$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_hold_fire1$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_hold_fire2$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_move_up$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_move_down$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_move_left$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_move_right$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_move_fire1$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_input_manager_move_fire2$0_0$0({2}DF,SC:U),C,0,0
S:G$engine_sprite_manager_draw$0_0$0({2}DF,SV:S),C,0,0
