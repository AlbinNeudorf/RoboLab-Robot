Which functions to use: 

/* NXT servo motor API */
extern  S32 ecrobot_get_motor_rev(U8 port_id);
extern void ecrobot_set_motor_speed(U8 port_id, S8 speed);
extern void ecrobot_set_motor_mode_speed(U8 port_id, S32 mode, S8 speed);

/* NXT light sensor API */
extern  U16 ecrobot_get_light_sensor(U8 port_id);
extern void ecrobot_set_light_sensor_active(U8 port_id);
extern void ecrobot_set_light_sensor_inactive(U8 port_id);

/* NXT touch sensor API */
extern   U8 ecrobot_get_touch_sensor(U8 port_id);

/* LCD display command for system */
extern SINT ecrobot_bmp2lcd(const CHAR *file, U8 *lcd, S32 width, S32 height);
extern void ecrobot_show_int(S32 var);
extern void ecrobot_debug1(UINT var1, UINT var2, UINT var3);
extern void ecrobot_debug2(UINT var1, UINT var2, UINT var3);
extern void ecrobot_status_monitor(const CHAR *target_name);
extern void ecrobot_adc_data_monitor(const CHAR *target_name);
extern void ecrobot_bt_data_logger(S8 data1, S8 data2);
extern void ecrobot_bt_adc_data_logger(S8 data1, S8 data2, S16 adc1, S16 adc2, S16 adc3, S16 adc4);
extern void ecrobot_sint_var_monitor(SINT vars[16]);

/* NXT sound API */
extern SINT ecrobot_sound_tone(U32 freq, U32 ms, U32 vol);

/* system hook functions */
extern void ecrobot_device_initialize(void);
extern void ecrobot_device_terminate(void);

/* NXT internal status API */
extern  U16 ecrobot_get_battery_voltage(void);
extern  U32 ecrobot_get_systick_ms(void);
extern   U8 ecrobot_is_ENTER_button_pressed(void);
extern   U8 ecrobot_is_RUN_button_pressed(void);