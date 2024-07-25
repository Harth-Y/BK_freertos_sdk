1, enable the macro CFG_ENABLE_DEMO_TEST at sys_config.h;
2, config demo item at demos_config.h;
3, set the macro CFG_BLE_ADV_NUM = 2 at sys_config.h;
4, replace cfg_flag to NULL at bk_ble_service_init();
5, compile and run;

thx

1. 在 sys_config.h 中启用宏定义 CFG_ENABLE_DEMO_TEST；
2. 在 demos_config.h 中配置演示项；
3. 在 sys_config.h 中设置宏定义 CFG_BLE_ADV_NUM 为 2；
4. 在 bk_ble_service_init() 中将 cfg_flag 替换为 NULL；
5. 编译并运行；

谢谢。

