// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using namespace switch_;
using namespace binary_sensor;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
StartupTrigger *startuptrigger;
Automation<> *automation;
wifi_signal::WiFiSignalSensor *WiFiSignal;
remote_transmitter::RemoteTransmitterComponent *remote_transmitter_remotetransmittercomponent;
template_::TemplateSwitch *hdmi_5;
Automation<> *automation_2;
template_::TemplateSwitch *hdmi_4;
Automation<> *automation_3;
template_::TemplateSwitch *hdmi_3;
Automation<> *automation_4;
template_::TemplateSwitch *hdmi_2;
Automation<> *automation_5;
template_::TemplateSwitch *hdmi_1;
Automation<> *automation_6;
switch_::SwitchPublishAction<> *switch__switchpublishaction_21;
switch_::SwitchPublishAction<> *switch__switchpublishaction_22;
switch_::SwitchPublishAction<> *switch__switchpublishaction_23;
switch_::SwitchPublishAction<> *switch__switchpublishaction_24;
switch_::SwitchPublishAction<> *switch__switchpublishaction_25;
remote_base::RawAction<> *remote_base_rawaction_5;
switch_::TurnOnAction<> *switch__turnonaction;
switch_::SwitchPublishAction<> *switch__switchpublishaction;
switch_::SwitchPublishAction<> *switch__switchpublishaction_2;
switch_::SwitchPublishAction<> *switch__switchpublishaction_3;
switch_::SwitchPublishAction<> *switch__switchpublishaction_4;
switch_::SwitchPublishAction<> *switch__switchpublishaction_5;
remote_base::RawAction<> *remote_base_rawaction;
switch_::SwitchPublishAction<> *switch__switchpublishaction_6;
switch_::SwitchPublishAction<> *switch__switchpublishaction_7;
switch_::SwitchPublishAction<> *switch__switchpublishaction_8;
switch_::SwitchPublishAction<> *switch__switchpublishaction_9;
switch_::SwitchPublishAction<> *switch__switchpublishaction_10;
remote_base::RawAction<> *remote_base_rawaction_2;
switch_::SwitchPublishAction<> *switch__switchpublishaction_11;
switch_::SwitchPublishAction<> *switch__switchpublishaction_12;
switch_::SwitchPublishAction<> *switch__switchpublishaction_13;
switch_::SwitchPublishAction<> *switch__switchpublishaction_14;
switch_::SwitchPublishAction<> *switch__switchpublishaction_15;
remote_base::RawAction<> *remote_base_rawaction_3;
switch_::SwitchPublishAction<> *switch__switchpublishaction_16;
switch_::SwitchPublishAction<> *switch__switchpublishaction_17;
switch_::SwitchPublishAction<> *switch__switchpublishaction_18;
switch_::SwitchPublishAction<> *switch__switchpublishaction_19;
switch_::SwitchPublishAction<> *switch__switchpublishaction_20;
remote_base::RawAction<> *remote_base_rawaction_4;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: hdmi-switch
  //   platform: ESP8266
  //   board: esp01_1m
  //   on_boot:
  //   - then:
  //     - switch.turn_on:
  //         id: hdmi_1
  //       type_id: switch__turnonaction
  //     automation_id: automation
  //     trigger_id: startuptrigger
  //     priority: 600.0
  //   arduino_version: platformio/espressif8266@2.6.2
  //   build_path: hdmi-switch
  //   platformio_options: {}
  //   esp8266_restore_from_flash: false
  //   board_flash_mode: dout
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("hdmi-switch", __DATE__ ", " __TIME__, false);
  // switch:
  // binary_sensor:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  web_server_base_webserverbase->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  captive_portal_captiveportal->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   ap:
  //     ssid: Hdmi-Switch Fallback Hotspot
  //     password: vhfUwpj4JcaD
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   enable_mdns: true
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: NONE
  //   fast_connect: false
  //   output_power: 20.0
  //   networks:
  //   - ssid: DeadlyKitten_IoT
  //     password: Skippy98!
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: hdmi-switch.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("hdmi-switch.local");
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("DeadlyKitten_IoT");
  wifi_wifiap_2.set_password("Skippy98!");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Hdmi-Switch Fallback Hotspot");
  wifi_wifiap.set_password("vhfUwpj4JcaD");
  wifi_wificomponent->set_ap(wifi_wifiap);
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // ota:
  //   password: b3eb1b6d04e8f88de117aeeeb5d3b4af
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("b3eb1b6d04e8f88de117aeeeb5d3b4af");
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  api_apiserver->set_component_source("api");
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  // sensor:
  startuptrigger = new StartupTrigger(600.0f);
  startuptrigger->set_component_source("esphome.coroutine");
  App.register_component(startuptrigger);
  automation = new Automation<>(startuptrigger);
  // substitutions:
  //   hostname: hdmi-switch
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: hdmi-switch WiFiSignal
  //   icon: mdi:wifi-arrow-up-down
  //   id: WiFiSignal
  //   update_interval: 60s
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  WiFiSignal = new wifi_signal::WiFiSignalSensor();
  WiFiSignal->set_update_interval(60000);
  WiFiSignal->set_component_source("wifi_signal.sensor");
  App.register_component(WiFiSignal);
  App.register_sensor(WiFiSignal);
  WiFiSignal->set_name("hdmi-switch WiFiSignal");
  WiFiSignal->set_disabled_by_default(false);
  WiFiSignal->set_device_class("signal_strength");
  WiFiSignal->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  WiFiSignal->set_unit_of_measurement("dBm");
  WiFiSignal->set_icon("mdi:wifi-arrow-up-down");
  WiFiSignal->set_accuracy_decimals(0);
  WiFiSignal->set_force_update(false);
  // remote_transmitter:
  //   pin:
  //     number: 4
  //     mode: OUTPUT
  //     inverted: false
  //   carrier_duty_percent: 50
  //   id: remote_transmitter_remotetransmittercomponent
  remote_transmitter_remotetransmittercomponent = new remote_transmitter::RemoteTransmitterComponent(new GPIOPin(4, OUTPUT, false));
  remote_transmitter_remotetransmittercomponent->set_component_source("remote_transmitter");
  App.register_component(remote_transmitter_remotetransmittercomponent);
  remote_transmitter_remotetransmittercomponent->set_carrier_duty_percent(50);
  // switch.template:
  //   platform: template
  //   id: hdmi_5
  //   name: HDMI 5
  //   icon: mdi:video-input-hdmi
  //   turn_on_action:
  //     then:
  //     - switch.template.publish:
  //         id: hdmi_1
  //         state: false
  //       type_id: switch__switchpublishaction
  //     - switch.template.publish:
  //         id: hdmi_2
  //         state: false
  //       type_id: switch__switchpublishaction_2
  //     - switch.template.publish:
  //         id: hdmi_3
  //         state: false
  //       type_id: switch__switchpublishaction_3
  //     - switch.template.publish:
  //         id: hdmi_4
  //         state: false
  //       type_id: switch__switchpublishaction_4
  //     - switch.template.publish:
  //         id: hdmi_5
  //         state: true
  //       type_id: switch__switchpublishaction_5
  //     - remote_transmitter.transmit_raw:
  //         carrier_frequency: 38000
  //         code:
  //         - 8949
  //         - -4438
  //         - 541
  //         - -573
  //         - 540
  //         - -1685
  //         - 540
  //         - -576
  //         - 538
  //         - -580
  //         - 533
  //         - -576
  //         - 538
  //         - -1690
  //         - 537
  //         - -575
  //         - 538
  //         - -576
  //         - 536
  //         - -1694
  //         - 533
  //         - -575
  //         - 538
  //         - -1686
  //         - 538
  //         - -1689
  //         - 537
  //         - -1687
  //         - 538
  //         - -579
  //         - 535
  //         - -1688
  //         - 536
  //         - -1699
  //         - 535
  //         - -576
  //         - 537
  //         - -1690
  //         - 538
  //         - -1688
  //         - 536
  //         - -1689
  //         - 537
  //         - -1692
  //         - 533
  //         - -575
  //         - 540
  //         - -573
  //         - 541
  //         - -581
  //         - 539
  //         - -1687
  //         - 540
  //         - -578
  //         - 534
  //         - -578
  //         - 534
  //         - -576
  //         - 539
  //         - -573
  //         - 539
  //         - -1686
  //         - 540
  //         - -1685
  //         - 541
  //         - -1684
  //         - 542
  //         code_storage_id: int32_t_2
  //         transmitter_id: remote_transmitter_remotetransmittercomponent
  //       type_id: remote_base_rawaction
  //     trigger_id: trigger
  //     automation_id: automation_2
  //   disabled_by_default: false
  //   optimistic: false
  //   assumed_state: false
  //   restore_state: false
  hdmi_5 = new template_::TemplateSwitch();
  hdmi_5->set_component_source("template.switch");
  App.register_component(hdmi_5);
  App.register_switch(hdmi_5);
  hdmi_5->set_name("HDMI 5");
  hdmi_5->set_disabled_by_default(false);
  hdmi_5->set_icon("mdi:video-input-hdmi");
  automation_2 = new Automation<>(hdmi_5->get_turn_on_trigger());
  // switch.template:
  //   platform: template
  //   id: hdmi_4
  //   name: HDMI 4
  //   icon: mdi:video-input-hdmi
  //   turn_on_action:
  //     then:
  //     - switch.template.publish:
  //         id: hdmi_1
  //         state: false
  //       type_id: switch__switchpublishaction_6
  //     - switch.template.publish:
  //         id: hdmi_2
  //         state: false
  //       type_id: switch__switchpublishaction_7
  //     - switch.template.publish:
  //         id: hdmi_3
  //         state: false
  //       type_id: switch__switchpublishaction_8
  //     - switch.template.publish:
  //         id: hdmi_4
  //         state: true
  //       type_id: switch__switchpublishaction_9
  //     - switch.template.publish:
  //         id: hdmi_5
  //         state: false
  //       type_id: switch__switchpublishaction_10
  //     - remote_transmitter.transmit_raw:
  //         carrier_frequency: 38000
  //         code:
  //         - 8949
  //         - -4438
  //         - 541
  //         - -574
  //         - 540
  //         - -1685
  //         - 540
  //         - -578
  //         - 537
  //         - -573
  //         - 539
  //         - -576
  //         - 538
  //         - -1689
  //         - 537
  //         - -574
  //         - 539
  //         - -576
  //         - 539
  //         - -1684
  //         - 542
  //         - -574
  //         - 540
  //         - -1685
  //         - 539
  //         - -1686
  //         - 541
  //         - -1688
  //         - 538
  //         - -572
  //         - 541
  //         - -1689
  //         - 537
  //         - -1695
  //         - 541
  //         - -1687
  //         - 538
  //         - -573
  //         - 539
  //         - -574
  //         - 540
  //         - -1687
  //         - 539
  //         - -1689
  //         - 537
  //         - -575
  //         - 539
  //         - -573
  //         - 539
  //         - -590
  //         - 533
  //         - -574
  //         - 540
  //         - -1686
  //         - 539
  //         - -1687
  //         - 538
  //         - -577
  //         - 538
  //         - -572
  //         - 542
  //         - -1684
  //         - 542
  //         - -1684
  //         - 544
  //         - -1683
  //         - 541
  //         code_storage_id: int32_t_3
  //         transmitter_id: remote_transmitter_remotetransmittercomponent
  //       type_id: remote_base_rawaction_2
  //     trigger_id: trigger_2
  //     automation_id: automation_3
  //   disabled_by_default: false
  //   optimistic: false
  //   assumed_state: false
  //   restore_state: false
  hdmi_4 = new template_::TemplateSwitch();
  hdmi_4->set_component_source("template.switch");
  App.register_component(hdmi_4);
  App.register_switch(hdmi_4);
  hdmi_4->set_name("HDMI 4");
  hdmi_4->set_disabled_by_default(false);
  hdmi_4->set_icon("mdi:video-input-hdmi");
  automation_3 = new Automation<>(hdmi_4->get_turn_on_trigger());
  // switch.template:
  //   platform: template
  //   id: hdmi_3
  //   name: HDMI 3
  //   icon: mdi:video-input-hdmi
  //   turn_on_action:
  //     then:
  //     - switch.template.publish:
  //         id: hdmi_1
  //         state: false
  //       type_id: switch__switchpublishaction_11
  //     - switch.template.publish:
  //         id: hdmi_2
  //         state: false
  //       type_id: switch__switchpublishaction_12
  //     - switch.template.publish:
  //         id: hdmi_3
  //         state: true
  //       type_id: switch__switchpublishaction_13
  //     - switch.template.publish:
  //         id: hdmi_4
  //         state: false
  //       type_id: switch__switchpublishaction_14
  //     - switch.template.publish:
  //         id: hdmi_5
  //         state: false
  //       type_id: switch__switchpublishaction_15
  //     - remote_transmitter.transmit_raw:
  //         carrier_frequency: 38000
  //         code:
  //         - 8991
  //         - -4388
  //         - 563
  //         - -550
  //         - 563
  //         - -1664
  //         - 562
  //         - -556
  //         - 557
  //         - -552
  //         - 562
  //         - -551
  //         - 562
  //         - -1663
  //         - 563
  //         - -550
  //         - 563
  //         - -553
  //         - 560
  //         - -1627
  //         - 599
  //         - -551
  //         - 563
  //         - -1661
  //         - 564
  //         - -1662
  //         - 563
  //         - -1664
  //         - 564
  //         - -550
  //         - 561
  //         - -1671
  //         - 556
  //         - -1671
  //         - 561
  //         - -1666
  //         - 560
  //         - -1665
  //         - 559
  //         - -1666
  //         - 560
  //         - -551
  //         - 563
  //         - -1662
  //         - 560
  //         - -553
  //         - 560
  //         - -554
  //         - 560
  //         - -558
  //         - 562
  //         - -553
  //         - 562
  //         - -549
  //         - 563
  //         - -550
  //         - 562
  //         - -1664
  //         - 562
  //         - -550
  //         - 561
  //         - -1665
  //         - 562
  //         - -1666
  //         - 556
  //         - -1667
  //         - 533
  //         code_storage_id: int32_t_4
  //         transmitter_id: remote_transmitter_remotetransmittercomponent
  //       type_id: remote_base_rawaction_3
  //     trigger_id: trigger_3
  //     automation_id: automation_4
  //   disabled_by_default: false
  //   optimistic: false
  //   assumed_state: false
  //   restore_state: false
  hdmi_3 = new template_::TemplateSwitch();
  hdmi_3->set_component_source("template.switch");
  App.register_component(hdmi_3);
  App.register_switch(hdmi_3);
  hdmi_3->set_name("HDMI 3");
  hdmi_3->set_disabled_by_default(false);
  hdmi_3->set_icon("mdi:video-input-hdmi");
  automation_4 = new Automation<>(hdmi_3->get_turn_on_trigger());
  // switch.template:
  //   platform: template
  //   id: hdmi_2
  //   name: HDMI 2
  //   icon: mdi:video-input-hdmi
  //   turn_on_action:
  //     then:
  //     - switch.template.publish:
  //         id: hdmi_1
  //         state: false
  //       type_id: switch__switchpublishaction_16
  //     - switch.template.publish:
  //         id: hdmi_2
  //         state: true
  //       type_id: switch__switchpublishaction_17
  //     - switch.template.publish:
  //         id: hdmi_3
  //         state: false
  //       type_id: switch__switchpublishaction_18
  //     - switch.template.publish:
  //         id: hdmi_4
  //         state: false
  //       type_id: switch__switchpublishaction_19
  //     - switch.template.publish:
  //         id: hdmi_5
  //         state: false
  //       type_id: switch__switchpublishaction_20
  //     - remote_transmitter.transmit_raw:
  //         carrier_frequency: 38000
  //         code:
  //         - 8949
  //         - -4434
  //         - 542
  //         - -573
  //         - 539
  //         - -1685
  //         - 541
  //         - -574
  //         - 538
  //         - -579
  //         - 534
  //         - -578
  //         - 535
  //         - -1688
  //         - 538
  //         - -574
  //         - 540
  //         - -578
  //         - 536
  //         - -1684
  //         - 540
  //         - -576
  //         - 537
  //         - -1687
  //         - 538
  //         - -1687
  //         - 539
  //         - -1688
  //         - 541
  //         - -571
  //         - 538
  //         - -1688
  //         - 538
  //         - -1695
  //         - 538
  //         - -576
  //         - 538
  //         - -1685
  //         - 540
  //         - -575
  //         - 538
  //         - -578
  //         - 538
  //         - -1683
  //         - 540
  //         - -577
  //         - 538
  //         - -574
  //         - 539
  //         - -581
  //         - 542
  //         - -1686
  //         - 539
  //         - -576
  //         - 538
  //         - -1685
  //         - 540
  //         - -1685
  //         - 541
  //         - -572
  //         - 541
  //         - -1684
  //         - 540
  //         - -1687
  //         - 540
  //         - -1684
  //         - 541
  //         code_storage_id: int32_t_5
  //         transmitter_id: remote_transmitter_remotetransmittercomponent
  //       type_id: remote_base_rawaction_4
  //     trigger_id: trigger_4
  //     automation_id: automation_5
  //   disabled_by_default: false
  //   optimistic: false
  //   assumed_state: false
  //   restore_state: false
  hdmi_2 = new template_::TemplateSwitch();
  hdmi_2->set_component_source("template.switch");
  App.register_component(hdmi_2);
  App.register_switch(hdmi_2);
  hdmi_2->set_name("HDMI 2");
  hdmi_2->set_disabled_by_default(false);
  hdmi_2->set_icon("mdi:video-input-hdmi");
  automation_5 = new Automation<>(hdmi_2->get_turn_on_trigger());
  // switch.template:
  //   platform: template
  //   id: hdmi_1
  //   name: HDMI 1
  //   icon: mdi:video-input-hdmi
  //   turn_on_action:
  //     then:
  //     - switch.template.publish:
  //         id: hdmi_1
  //         state: true
  //       type_id: switch__switchpublishaction_21
  //     - switch.template.publish:
  //         id: hdmi_2
  //         state: false
  //       type_id: switch__switchpublishaction_22
  //     - switch.template.publish:
  //         id: hdmi_3
  //         state: false
  //       type_id: switch__switchpublishaction_23
  //     - switch.template.publish:
  //         id: hdmi_4
  //         state: false
  //       type_id: switch__switchpublishaction_24
  //     - switch.template.publish:
  //         id: hdmi_5
  //         state: false
  //       type_id: switch__switchpublishaction_25
  //     - remote_transmitter.transmit_raw:
  //         carrier_frequency: 38000
  //         code:
  //         - 8946
  //         - -4443
  //         - 537
  //         - -578
  //         - 536
  //         - -1691
  //         - 536
  //         - -544
  //         - 568
  //         - -580
  //         - 535
  //         - -577
  //         - 559
  //         - -1670
  //         - 535
  //         - -575
  //         - 538
  //         - -577
  //         - 537
  //         - -1690
  //         - 537
  //         - -580
  //         - 533
  //         - -1691
  //         - 537
  //         - -1692
  //         - 535
  //         - -1691
  //         - 537
  //         - -577
  //         - 536
  //         - -1694
  //         - 534
  //         - -1701
  //         - 534
  //         - -1693
  //         - 535
  //         - -1694
  //         - 534
  //         - -1691
  //         - 535
  //         - -1689
  //         - 538
  //         - -578
  //         - 536
  //         - -579
  //         - 535
  //         - -576
  //         - 538
  //         - -587
  //         - 536
  //         - -578
  //         - 535
  //         - -578
  //         - 536
  //         - -577
  //         - 537
  //         - -577
  //         - 536
  //         - -1689
  //         - 538
  //         - -1689
  //         - 539
  //         - -1689
  //         - 537
  //         - -1694
  //         - 533
  //         code_storage_id: int32_t_6
  //         transmitter_id: remote_transmitter_remotetransmittercomponent
  //       type_id: remote_base_rawaction_5
  //     trigger_id: trigger_5
  //     automation_id: automation_6
  //   disabled_by_default: false
  //   optimistic: false
  //   assumed_state: false
  //   restore_state: false
  hdmi_1 = new template_::TemplateSwitch();
  hdmi_1->set_component_source("template.switch");
  App.register_component(hdmi_1);
  App.register_switch(hdmi_1);
  hdmi_1->set_name("HDMI 1");
  hdmi_1->set_disabled_by_default(false);
  hdmi_1->set_icon("mdi:video-input-hdmi");
  automation_6 = new Automation<>(hdmi_1->get_turn_on_trigger());
  switch__switchpublishaction_21 = new switch_::SwitchPublishAction<>(hdmi_1);
  switch__switchpublishaction_21->set_state(true);
  switch__switchpublishaction_22 = new switch_::SwitchPublishAction<>(hdmi_2);
  switch__switchpublishaction_22->set_state(false);
  switch__switchpublishaction_23 = new switch_::SwitchPublishAction<>(hdmi_3);
  switch__switchpublishaction_23->set_state(false);
  switch__switchpublishaction_24 = new switch_::SwitchPublishAction<>(hdmi_4);
  switch__switchpublishaction_24->set_state(false);
  switch__switchpublishaction_25 = new switch_::SwitchPublishAction<>(hdmi_5);
  switch__switchpublishaction_25->set_state(false);
  remote_base_rawaction_5 = new remote_base::RawAction<>();
  remote_base_rawaction_5->set_parent(remote_transmitter_remotetransmittercomponent);
  static const int32_t int32_t_6[] PROGMEM = {8946, -4443, 537, -578, 536, -1691, 536, -544, 568, -580, 535, -577, 559, -1670, 535, -575, 538, -577, 537, -1690, 537, -580, 533, -1691, 537, -1692, 535, -1691, 537, -577, 536, -1694, 534, -1701, 534, -1693, 535, -1694, 534, -1691, 535, -1689, 538, -578, 536, -579, 535, -576, 538, -587, 536, -578, 535, -578, 536, -577, 537, -577, 536, -1689, 538, -1689, 539, -1689, 537, -1694, 533};
  remote_base_rawaction_5->set_code_static(int32_t_6, 67);
  remote_base_rawaction_5->set_carrier_frequency(38000);
  automation_6->add_actions({switch__switchpublishaction_21, switch__switchpublishaction_22, switch__switchpublishaction_23, switch__switchpublishaction_24, switch__switchpublishaction_25, remote_base_rawaction_5});
  hdmi_1->set_optimistic(false);
  hdmi_1->set_assumed_state(false);
  hdmi_1->set_restore_state(false);
  // socket:
  //   implementation: lwip_tcp
  switch__turnonaction = new switch_::TurnOnAction<>(hdmi_1);
  automation->add_actions({switch__turnonaction});
  switch__switchpublishaction = new switch_::SwitchPublishAction<>(hdmi_1);
  switch__switchpublishaction->set_state(false);
  switch__switchpublishaction_2 = new switch_::SwitchPublishAction<>(hdmi_2);
  switch__switchpublishaction_2->set_state(false);
  switch__switchpublishaction_3 = new switch_::SwitchPublishAction<>(hdmi_3);
  switch__switchpublishaction_3->set_state(false);
  switch__switchpublishaction_4 = new switch_::SwitchPublishAction<>(hdmi_4);
  switch__switchpublishaction_4->set_state(false);
  switch__switchpublishaction_5 = new switch_::SwitchPublishAction<>(hdmi_5);
  switch__switchpublishaction_5->set_state(true);
  remote_base_rawaction = new remote_base::RawAction<>();
  remote_base_rawaction->set_parent(remote_transmitter_remotetransmittercomponent);
  static const int32_t int32_t_2[] PROGMEM = {8949, -4438, 541, -573, 540, -1685, 540, -576, 538, -580, 533, -576, 538, -1690, 537, -575, 538, -576, 536, -1694, 533, -575, 538, -1686, 538, -1689, 537, -1687, 538, -579, 535, -1688, 536, -1699, 535, -576, 537, -1690, 538, -1688, 536, -1689, 537, -1692, 533, -575, 540, -573, 541, -581, 539, -1687, 540, -578, 534, -578, 534, -576, 539, -573, 539, -1686, 540, -1685, 541, -1684, 542};
  remote_base_rawaction->set_code_static(int32_t_2, 67);
  remote_base_rawaction->set_carrier_frequency(38000);
  automation_2->add_actions({switch__switchpublishaction, switch__switchpublishaction_2, switch__switchpublishaction_3, switch__switchpublishaction_4, switch__switchpublishaction_5, remote_base_rawaction});
  hdmi_5->set_optimistic(false);
  hdmi_5->set_assumed_state(false);
  hdmi_5->set_restore_state(false);
  switch__switchpublishaction_6 = new switch_::SwitchPublishAction<>(hdmi_1);
  switch__switchpublishaction_6->set_state(false);
  switch__switchpublishaction_7 = new switch_::SwitchPublishAction<>(hdmi_2);
  switch__switchpublishaction_7->set_state(false);
  switch__switchpublishaction_8 = new switch_::SwitchPublishAction<>(hdmi_3);
  switch__switchpublishaction_8->set_state(false);
  switch__switchpublishaction_9 = new switch_::SwitchPublishAction<>(hdmi_4);
  switch__switchpublishaction_9->set_state(true);
  switch__switchpublishaction_10 = new switch_::SwitchPublishAction<>(hdmi_5);
  switch__switchpublishaction_10->set_state(false);
  remote_base_rawaction_2 = new remote_base::RawAction<>();
  remote_base_rawaction_2->set_parent(remote_transmitter_remotetransmittercomponent);
  static const int32_t int32_t_3[] PROGMEM = {8949, -4438, 541, -574, 540, -1685, 540, -578, 537, -573, 539, -576, 538, -1689, 537, -574, 539, -576, 539, -1684, 542, -574, 540, -1685, 539, -1686, 541, -1688, 538, -572, 541, -1689, 537, -1695, 541, -1687, 538, -573, 539, -574, 540, -1687, 539, -1689, 537, -575, 539, -573, 539, -590, 533, -574, 540, -1686, 539, -1687, 538, -577, 538, -572, 542, -1684, 542, -1684, 544, -1683, 541};
  remote_base_rawaction_2->set_code_static(int32_t_3, 67);
  remote_base_rawaction_2->set_carrier_frequency(38000);
  automation_3->add_actions({switch__switchpublishaction_6, switch__switchpublishaction_7, switch__switchpublishaction_8, switch__switchpublishaction_9, switch__switchpublishaction_10, remote_base_rawaction_2});
  hdmi_4->set_optimistic(false);
  hdmi_4->set_assumed_state(false);
  hdmi_4->set_restore_state(false);
  switch__switchpublishaction_11 = new switch_::SwitchPublishAction<>(hdmi_1);
  switch__switchpublishaction_11->set_state(false);
  switch__switchpublishaction_12 = new switch_::SwitchPublishAction<>(hdmi_2);
  switch__switchpublishaction_12->set_state(false);
  switch__switchpublishaction_13 = new switch_::SwitchPublishAction<>(hdmi_3);
  switch__switchpublishaction_13->set_state(true);
  switch__switchpublishaction_14 = new switch_::SwitchPublishAction<>(hdmi_4);
  switch__switchpublishaction_14->set_state(false);
  switch__switchpublishaction_15 = new switch_::SwitchPublishAction<>(hdmi_5);
  switch__switchpublishaction_15->set_state(false);
  remote_base_rawaction_3 = new remote_base::RawAction<>();
  remote_base_rawaction_3->set_parent(remote_transmitter_remotetransmittercomponent);
  static const int32_t int32_t_4[] PROGMEM = {8991, -4388, 563, -550, 563, -1664, 562, -556, 557, -552, 562, -551, 562, -1663, 563, -550, 563, -553, 560, -1627, 599, -551, 563, -1661, 564, -1662, 563, -1664, 564, -550, 561, -1671, 556, -1671, 561, -1666, 560, -1665, 559, -1666, 560, -551, 563, -1662, 560, -553, 560, -554, 560, -558, 562, -553, 562, -549, 563, -550, 562, -1664, 562, -550, 561, -1665, 562, -1666, 556, -1667, 533};
  remote_base_rawaction_3->set_code_static(int32_t_4, 67);
  remote_base_rawaction_3->set_carrier_frequency(38000);
  automation_4->add_actions({switch__switchpublishaction_11, switch__switchpublishaction_12, switch__switchpublishaction_13, switch__switchpublishaction_14, switch__switchpublishaction_15, remote_base_rawaction_3});
  hdmi_3->set_optimistic(false);
  hdmi_3->set_assumed_state(false);
  hdmi_3->set_restore_state(false);
  switch__switchpublishaction_16 = new switch_::SwitchPublishAction<>(hdmi_1);
  switch__switchpublishaction_16->set_state(false);
  switch__switchpublishaction_17 = new switch_::SwitchPublishAction<>(hdmi_2);
  switch__switchpublishaction_17->set_state(true);
  switch__switchpublishaction_18 = new switch_::SwitchPublishAction<>(hdmi_3);
  switch__switchpublishaction_18->set_state(false);
  switch__switchpublishaction_19 = new switch_::SwitchPublishAction<>(hdmi_4);
  switch__switchpublishaction_19->set_state(false);
  switch__switchpublishaction_20 = new switch_::SwitchPublishAction<>(hdmi_5);
  switch__switchpublishaction_20->set_state(false);
  remote_base_rawaction_4 = new remote_base::RawAction<>();
  remote_base_rawaction_4->set_parent(remote_transmitter_remotetransmittercomponent);
  static const int32_t int32_t_5[] PROGMEM = {8949, -4434, 542, -573, 539, -1685, 541, -574, 538, -579, 534, -578, 535, -1688, 538, -574, 540, -578, 536, -1684, 540, -576, 537, -1687, 538, -1687, 539, -1688, 541, -571, 538, -1688, 538, -1695, 538, -576, 538, -1685, 540, -575, 538, -578, 538, -1683, 540, -577, 538, -574, 539, -581, 542, -1686, 539, -576, 538, -1685, 540, -1685, 541, -572, 541, -1684, 540, -1687, 540, -1684, 541};
  remote_base_rawaction_4->set_code_static(int32_t_5, 67);
  remote_base_rawaction_4->set_carrier_frequency(38000);
  automation_5->add_actions({switch__switchpublishaction_16, switch__switchpublishaction_17, switch__switchpublishaction_18, switch__switchpublishaction_19, switch__switchpublishaction_20, remote_base_rawaction_4});
  hdmi_2->set_optimistic(false);
  hdmi_2->set_assumed_state(false);
  hdmi_2->set_restore_state(false);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
