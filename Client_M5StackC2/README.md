... square line project: steps to make compatible with m5stack core 2 ----

 -- Squareline Studio part ---
1. Select Arduino board group (any other with display resolution of 32x240)
2. LVGL version 8.3.6 is verified to work, other versions might be incompatible
3. Color depth should be 16 bit
4. Deign the UI project and select the UI export folder to the source/ui folder of m5stack project
 -- Platform IO part ---
5. Include the lvgl library of above specified version on the project (can be done from platform ide libraries page)
6. Add lv_conf.h file alongside the lvgl library folder (Should be inside .pio\libdeps\m5stack-core2 folder)
7. Add lv_setup.cpp and lv_setup.h files alongside main.cpp, these files are responsible for configuring the lvgl environment on the m5stack
8. create a ui_events.cpp file consisting of lvgl events callback functions (there is an option to generate this using squareline studio, but for frequent update on the callback        function, it is recommended to create your own file outside of UI fodler)
9. Include the lv_setup.h, ui/ui.h in main.cpp, call m5.begin(), lv_begin(), and ui_init() functions in setup part. Finally call lv_handler() inside the loop.
10. The project is ready to be compiled and uploaded. (If you are lucky enough, project should be able to build without errors)