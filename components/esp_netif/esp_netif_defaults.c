// Copyright 2015-2019 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "esp_netif.h"
#include "esp_wifi_default.h"
#if CONFIG_ETH_ENABLED
#include "esp_eth.h"
#endif

//
// Purpose of this module is to provide
//  - general esp-netif definitions of default objects for STA, AP, ETH
//  - default init / create functions for basic default interfaces
//


//
// Default configuration of common interfaces, such as STA, AP, ETH
//
const esp_netif_inherent_config_t _g_esp_netif_inherent_sta_config = ESP_NETIF_INHERENT_DEFAULT_WIFI_STA ();

const esp_netif_inherent_config_t _g_esp_netif_inherent_ap_config = ESP_NETIF_INHERENT_DEFAULT_WIFI_AP ();

const esp_netif_inherent_config_t _g_esp_netif_inherent_eth_config = ESP_NETIF_INHERENT_DEFAULT_ETH ();

const esp_netif_inherent_config_t _g_esp_netif_inherent_ppp_config = ESP_NETIF_INHERENT_DEFAULT_PPP ();

const esp_netif_ip_info_t _g_esp_netif_soft_ap_ip = {
    .ip      = { .addr = ESP_IP4TOADDR ( 10,
                                    0,
                                    0,
                                    10 ) }, // Default IP Address 10.0.0.10  <<< Comment will be easier to search for in case someone wishes to change it....
    .gw      = { .addr = ESP_IP4TOADDR ( 10,
                                    0,
                                    0,
                                    10 ) }, // Default IP Address 10.0.0.10  <<< Comment will be easier to search for in case someone wishes to change it....
    .netmask = { .addr =
                     ESP_IP4TOADDR ( 255,
                                     255,
                                     255,
                                     0 ) }, // Default Netmask 255.255.255.0  <<< Comment will be easier to search for in case someone wishes to change it....
};
