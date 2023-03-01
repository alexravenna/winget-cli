// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once
#include <wil/result_macros.h>

#ifndef WINGET_DISABLE_FOR_FUZZING
#include <winrt/base.h>
#endif

#include <exception>
#include <string>


#define APPINSTALLER_CLI_ERROR_FACILITY 0xA15

#define APPINSTALLER_CLI_ERROR_INTERNAL_ERROR                   ((HRESULT)0x8A150001)
#define APPINSTALLER_CLI_ERROR_INVALID_CL_ARGUMENTS             ((HRESULT)0x8A150002)
#define APPINSTALLER_CLI_ERROR_COMMAND_FAILED                   ((HRESULT)0x8A150003)
#define APPINSTALLER_CLI_ERROR_MANIFEST_FAILED                  ((HRESULT)0x8A150004)
#define APPINSTALLER_CLI_ERROR_CTRL_SIGNAL_RECEIVED             ((HRESULT)0x8A150005)
#define APPINSTALLER_CLI_ERROR_SHELLEXEC_INSTALL_FAILED         ((HRESULT)0x8A150006)
#define APPINSTALLER_CLI_ERROR_UNSUPPORTED_MANIFESTVERSION      ((HRESULT)0x8A150007)
#define APPINSTALLER_CLI_ERROR_DOWNLOAD_FAILED                  ((HRESULT)0x8A150008)
#define APPINSTALLER_CLI_ERROR_CANNOT_WRITE_TO_UPLEVEL_INDEX    ((HRESULT)0x8A150009)
#define APPINSTALLER_CLI_ERROR_INDEX_INTEGRITY_COMPROMISED      ((HRESULT)0x8A15000A)
#define APPINSTALLER_CLI_ERROR_SOURCES_INVALID                  ((HRESULT)0x8A15000B)
#define APPINSTALLER_CLI_ERROR_SOURCE_NAME_ALREADY_EXISTS       ((HRESULT)0x8A15000C)
#define APPINSTALLER_CLI_ERROR_INVALID_SOURCE_TYPE              ((HRESULT)0x8A15000D)
#define APPINSTALLER_CLI_ERROR_PACKAGE_IS_BUNDLE                ((HRESULT)0x8A15000E)
#define APPINSTALLER_CLI_ERROR_SOURCE_DATA_MISSING              ((HRESULT)0x8A15000F)
#define APPINSTALLER_CLI_ERROR_NO_APPLICABLE_INSTALLER          ((HRESULT)0x8A150010)
#define APPINSTALLER_CLI_ERROR_INSTALLER_HASH_MISMATCH          ((HRESULT)0x8A150011)
#define APPINSTALLER_CLI_ERROR_SOURCE_NAME_DOES_NOT_EXIST       ((HRESULT)0x8A150012)
#define APPINSTALLER_CLI_ERROR_SOURCE_ARG_ALREADY_EXISTS        ((HRESULT)0x8A150013)
#define APPINSTALLER_CLI_ERROR_NO_APPLICATIONS_FOUND            ((HRESULT)0x8A150014)
#define APPINSTALLER_CLI_ERROR_NO_SOURCES_DEFINED               ((HRESULT)0x8A150015)
#define APPINSTALLER_CLI_ERROR_MULTIPLE_APPLICATIONS_FOUND      ((HRESULT)0x8A150016)
#define APPINSTALLER_CLI_ERROR_NO_MANIFEST_FOUND                ((HRESULT)0x8A150017)
#define APPINSTALLER_CLI_ERROR_EXTENSION_PUBLIC_FAILED          ((HRESULT)0x8A150018)
#define APPINSTALLER_CLI_ERROR_COMMAND_REQUIRES_ADMIN           ((HRESULT)0x8A150019)
#define APPINSTALLER_CLI_ERROR_SOURCE_NOT_SECURE                ((HRESULT)0x8A15001A)
#define APPINSTALLER_CLI_ERROR_MSSTORE_BLOCKED_BY_POLICY        ((HRESULT)0x8A15001B)
#define APPINSTALLER_CLI_ERROR_MSSTORE_APP_BLOCKED_BY_POLICY    ((HRESULT)0x8A15001C)
#define APPINSTALLER_CLI_ERROR_EXPERIMENTAL_FEATURE_DISABLED    ((HRESULT)0x8A15001D)
#define APPINSTALLER_CLI_ERROR_MSSTORE_INSTALL_FAILED           ((HRESULT)0x8A15001E)
#define APPINSTALLER_CLI_ERROR_COMPLETE_INPUT_BAD               ((HRESULT)0x8A15001F)
#define APPINSTALLER_CLI_ERROR_YAML_INIT_FAILED                 ((HRESULT)0x8A150020)
#define APPINSTALLER_CLI_ERROR_YAML_INVALID_MAPPING_KEY         ((HRESULT)0x8A150021)
#define APPINSTALLER_CLI_ERROR_YAML_DUPLICATE_MAPPING_KEY       ((HRESULT)0x8A150022)
#define APPINSTALLER_CLI_ERROR_YAML_INVALID_OPERATION           ((HRESULT)0x8A150023)
#define APPINSTALLER_CLI_ERROR_YAML_DOC_BUILD_FAILED            ((HRESULT)0x8A150024)
#define APPINSTALLER_CLI_ERROR_YAML_INVALID_EMITTER_STATE       ((HRESULT)0x8A150025)
#define APPINSTALLER_CLI_ERROR_YAML_INVALID_DATA                ((HRESULT)0x8A150026)
#define APPINSTALLER_CLI_ERROR_LIBYAML_ERROR                    ((HRESULT)0x8A150027)
#define APPINSTALLER_CLI_ERROR_MANIFEST_VALIDATION_WARNING      ((HRESULT)0x8A150028)
#define APPINSTALLER_CLI_ERROR_MANIFEST_VALIDATION_FAILURE      ((HRESULT)0x8A150029)
#define APPINSTALLER_CLI_ERROR_INVALID_MANIFEST                 ((HRESULT)0x8A15002A)
#define APPINSTALLER_CLI_ERROR_UPDATE_NOT_APPLICABLE            ((HRESULT)0x8A15002B)
#define APPINSTALLER_CLI_ERROR_UPDATE_ALL_HAS_FAILURE           ((HRESULT)0x8A15002C)
#define APPINSTALLER_CLI_ERROR_INSTALLER_SECURITY_CHECK_FAILED  ((HRESULT)0x8A15002D)
#define APPINSTALLER_CLI_ERROR_DOWNLOAD_SIZE_MISMATCH           ((HRESULT)0x8A15002E)
#define APPINSTALLER_CLI_ERROR_NO_UNINSTALL_INFO_FOUND          ((HRESULT)0x8A15002F)
#define APPINSTALLER_CLI_ERROR_EXEC_UNINSTALL_COMMAND_FAILED    ((HRESULT)0x8A150030)
#define APPINSTALLER_CLI_ERROR_ICU_BREAK_ITERATOR_ERROR         ((HRESULT)0x8A150031)
#define APPINSTALLER_CLI_ERROR_ICU_CASEMAP_ERROR                ((HRESULT)0x8A150032)
#define APPINSTALLER_CLI_ERROR_ICU_REGEX_ERROR                  ((HRESULT)0x8A150033)
#define APPINSTALLER_CLI_ERROR_IMPORT_INSTALL_FAILED            ((HRESULT)0x8A150034)
#define APPINSTALLER_CLI_ERROR_NOT_ALL_PACKAGES_FOUND           ((HRESULT)0x8A150035)
#define APPINSTALLER_CLI_ERROR_JSON_INVALID_FILE                ((HRESULT)0x8A150036)
#define APPINSTALLER_CLI_ERROR_SOURCE_NOT_REMOTE                ((HRESULT)0x8A150037)
#define APPINSTALLER_CLI_ERROR_UNSUPPORTED_RESTSOURCE           ((HRESULT)0x8A150038)
#define APPINSTALLER_CLI_ERROR_RESTSOURCE_INVALID_DATA          ((HRESULT)0x8A150039)
#define APPINSTALLER_CLI_ERROR_BLOCKED_BY_POLICY                ((HRESULT)0x8A15003A)
#define APPINSTALLER_CLI_ERROR_RESTSOURCE_INTERNAL_ERROR        ((HRESULT)0x8A15003B)
#define APPINSTALLER_CLI_ERROR_RESTSOURCE_INVALID_URL           ((HRESULT)0x8A15003C)
#define APPINSTALLER_CLI_ERROR_RESTSOURCE_UNSUPPORTED_MIME_TYPE ((HRESULT)0x8A15003D)
#define APPINSTALLER_CLI_ERROR_RESTSOURCE_INVALID_VERSION       ((HRESULT)0x8A15003E)
#define APPINSTALLER_CLI_ERROR_SOURCE_DATA_INTEGRITY_FAILURE    ((HRESULT)0x8A15003F)
#define APPINSTALLER_CLI_ERROR_STREAM_READ_FAILURE              ((HRESULT)0x8A150040)
#define APPINSTALLER_CLI_ERROR_PACKAGE_AGREEMENTS_NOT_ACCEPTED  ((HRESULT)0x8A150041)
#define APPINSTALLER_CLI_ERROR_PROMPT_INPUT_ERROR               ((HRESULT)0x8A150042)
#define APPINSTALLER_CLI_ERROR_UNSUPPORTED_SOURCE_REQUEST       ((HRESULT)0x8A150043)
#define APPINSTALLER_CLI_ERROR_RESTSOURCE_ENDPOINT_NOT_FOUND    ((HRESULT)0x8A150044)
#define APPINSTALLER_CLI_ERROR_SOURCE_OPEN_FAILED               ((HRESULT)0x8A150045)
#define APPINSTALLER_CLI_ERROR_SOURCE_AGREEMENTS_NOT_ACCEPTED   ((HRESULT)0x8A150046)
#define APPINSTALLER_CLI_ERROR_CUSTOMHEADER_EXCEEDS_MAXLENGTH   ((HRESULT)0x8A150047)
#define APPINSTALLER_CLI_ERROR_MISSING_RESOURCE_FILE            ((HRESULT)0x8A150048)
#define APPINSTALLER_CLI_ERROR_MSI_INSTALL_FAILED               ((HRESULT)0x8A150049)
#define APPINSTALLER_CLI_ERROR_INVALID_MSIEXEC_ARGUMENT         ((HRESULT)0x8A15004A)
#define APPINSTALLER_CLI_ERROR_FAILED_TO_OPEN_ALL_SOURCES       ((HRESULT)0x8A15004B)
#define APPINSTALLER_CLI_ERROR_DEPENDENCIES_VALIDATION_FAILED   ((HRESULT)0x8A15004C)
#define APPINSTALLER_CLI_ERROR_MISSING_PACKAGE                  ((HRESULT)0x8A15004D)
#define APPINSTALLER_CLI_ERROR_INVALID_TABLE_COLUMN             ((HRESULT)0x8A15004E)
#define APPINSTALLER_CLI_ERROR_UPGRADE_VERSION_NOT_NEWER        ((HRESULT)0x8A15004F)
#define APPINSTALLER_CLI_ERROR_UPGRADE_VERSION_UNKNOWN          ((HRESULT)0x8A150050)
#define APPINSTALLER_CLI_ERROR_ICU_CONVERSION_ERROR             ((HRESULT)0x8A150051)
#define APPINSTALLER_CLI_ERROR_PORTABLE_INSTALL_FAILED          ((HRESULT)0x8A150052)
#define APPINSTALLER_CLI_ERROR_PORTABLE_REPARSE_POINT_NOT_SUPPORTED ((HRESULT)0x8A150053)
#define APPINSTALLER_CLI_ERROR_PORTABLE_PACKAGE_ALREADY_EXISTS  ((HRESULT)0x8A150054)
#define APPINSTALLER_CLI_ERROR_PORTABLE_SYMLINK_PATH_IS_DIRECTORY ((HRESULT)0x8A150055)
#define APPINSTALLER_CLI_ERROR_INSTALLER_PROHIBITS_ELEVATION    ((HRESULT)0x8A150056)
#define APPINSTALLER_CLI_ERROR_PORTABLE_UNINSTALL_FAILED        ((HRESULT)0x8A150057)
#define APPINSTALLER_CLI_ERROR_ARP_VERSION_VALIDATION_FAILED    ((HRESULT)0x8A150058)
#define APPINSTALLER_CLI_ERROR_UNSUPPORTED_ARGUMENT             ((HRESULT)0x8A150059)
#define APPINSTALLER_CLI_ERROR_BIND_WITH_EMBEDDED_NULL          ((HRESULT)0x8A15005A)
#define APPINSTALLER_CLI_ERROR_NESTEDINSTALLER_NOT_FOUND        ((HRESULT)0x8A15005B)
#define APPINSTALLER_CLI_ERROR_EXTRACT_ARCHIVE_FAILED           ((HRESULT)0x8A15005C)
#define APPINSTALLER_CLI_ERROR_NESTEDINSTALLER_INVALID_PATH     ((HRESULT)0x8A15005D)
#define APPINSTALLER_CLI_ERROR_PINNED_CERTIFICATE_MISMATCH      ((HRESULT)0x8A15005E)
#define APPINSTALLER_CLI_ERROR_INSTALL_LOCATION_REQUIRED        ((HRESULT)0x8A15005F)
#define APPINSTALLER_CLI_ERROR_ARCHIVE_SCAN_FAILED              ((HRESULT)0x8A150060)
#define APPINSTALLER_CLI_ERROR_PACKAGE_ALREADY_INSTALLED        ((HRESULT)0x8A150061)
#define APPINSTALLER_CLI_ERROR_PIN_ALREADY_EXISTS               ((HRESULT)0x8A150062)
#define APPINSTALLER_CLI_ERROR_PIN_DOES_NOT_EXIST               ((HRESULT)0x8A150063)
#define APPINSTALLER_CLI_ERROR_CANNOT_OPEN_PINNING_INDEX        ((HRESULT)0x8A150064)
#define APPINSTALLER_CLI_ERROR_MULTIPLE_INSTALL_FAILED          ((HRESULT)0x8A150065)
#define APPINSTALLER_CLI_ERROR_MULTIPLE_UNINSTALL_FAILED        ((HRESULT)0x8A150066)
#define APPINSTALLER_CLI_ERROR_NOT_ALL_QUERIES_FOUND_SINGLE     ((HRESULT)0x8A150067)
#define APPINSTALLER_CLI_ERROR_PACKAGE_IS_PINNED                ((HRESULT)0x8A150068)

// Install errors.
#define APPINSTALLER_CLI_ERROR_INSTALL_PACKAGE_IN_USE           ((HRESULT)0x8A150101)
#define APPINSTALLER_CLI_ERROR_INSTALL_INSTALL_IN_PROGRESS      ((HRESULT)0x8A150102)
#define APPINSTALLER_CLI_ERROR_INSTALL_FILE_IN_USE              ((HRESULT)0x8A150103)
#define APPINSTALLER_CLI_ERROR_INSTALL_MISSING_DEPENDENCY       ((HRESULT)0x8A150104)
#define APPINSTALLER_CLI_ERROR_INSTALL_DISK_FULL                ((HRESULT)0x8A150105)
#define APPINSTALLER_CLI_ERROR_INSTALL_INSUFFICIENT_MEMORY      ((HRESULT)0x8A150106)
#define APPINSTALLER_CLI_ERROR_INSTALL_NO_NETWORK               ((HRESULT)0x8A150107)
#define APPINSTALLER_CLI_ERROR_INSTALL_CONTACT_SUPPORT          ((HRESULT)0x8A150108)
#define APPINSTALLER_CLI_ERROR_INSTALL_REBOOT_REQUIRED_TO_FINISH  ((HRESULT)0x8A150109)
#define APPINSTALLER_CLI_ERROR_INSTALL_REBOOT_REQUIRED_TO_INSTALL ((HRESULT)0x8A15010A)
#define APPINSTALLER_CLI_ERROR_INSTALL_REBOOT_INITIATED         ((HRESULT)0x8A15010B)
#define APPINSTALLER_CLI_ERROR_INSTALL_CANCELLED_BY_USER        ((HRESULT)0x8A15010C)
#define APPINSTALLER_CLI_ERROR_INSTALL_ALREADY_INSTALLED        ((HRESULT)0x8A15010D)
#define APPINSTALLER_CLI_ERROR_INSTALL_DOWNGRADE                ((HRESULT)0x8A15010E)
#define APPINSTALLER_CLI_ERROR_INSTALL_BLOCKED_BY_POLICY        ((HRESULT)0x8A15010F)
#define APPINSTALLER_CLI_ERROR_INSTALL_DEPENDENCIES             ((HRESULT)0x8A150110)
#define APPINSTALLER_CLI_ERROR_INSTALL_PACKAGE_IN_USE_BY_APPLICATION ((HRESULT)0x8A150111)
#define APPINSTALLER_CLI_ERROR_INSTALL_INVALID_PARAMETER        ((HRESULT)0x8A150112)
#define APPINSTALLER_CLI_ERROR_INSTALL_SYSTEM_NOT_SUPPORTED     ((HRESULT)0x8A150113)

// Status values for check package installed status results.
// Partial success has the success bit(first bit) set to 0.
#define WINGET_INSTALLED_STATUS_ARP_ENTRY_FOUND                             S_OK
#define WINGET_INSTALLED_STATUS_ARP_ENTRY_NOT_FOUND                         ((HRESULT)0x8A150201)
#define WINGET_INSTALLED_STATUS_INSTALL_LOCATION_FOUND                      S_OK
#define WINGET_INSTALLED_STATUS_INSTALL_LOCATION_NOT_APPLICABLE             ((HRESULT)0x0A150202)
#define WINGET_INSTALLED_STATUS_INSTALL_LOCATION_NOT_FOUND                  ((HRESULT)0x8A150203)
#define WINGET_INSTALLED_STATUS_FILE_HASH_MATCH                             S_OK
#define WINGET_INSTALLED_STATUS_FILE_HASH_MISMATCH                          ((HRESULT)0x8A150204)
#define WINGET_INSTALLED_STATUS_FILE_NOT_FOUND                              ((HRESULT)0x8A150205)
#define WINGET_INSTALLED_STATUS_FILE_FOUND_WITHOUT_HASH_CHECK               ((HRESULT)0x0A150206)
#define WINGET_INSTALLED_STATUS_FILE_ACCESS_ERROR                           ((HRESULT)0x8A150207)

// Configuration Errors
#define WINGET_CONFIG_ERROR_INVALID_CONFIGURATION_FILE          ((HRESULT)0x8A15C001)
#define WINGET_CONFIG_ERROR_INVALID_YAML                        ((HRESULT)0x8A15C002)
#define WINGET_CONFIG_ERROR_INVALID_FIELD                       ((HRESULT)0x8A15C003)
#define WINGET_CONFIG_ERROR_UNKNOWN_CONFIGURATION_FILE_VERSION  ((HRESULT)0x8A15C004)
#define WINGET_CONFIG_ERROR_SET_APPLY_FAILED                    ((HRESULT)0x8A15C005)
#define WINGET_CONFIG_ERROR_DUPLICATE_IDENTIFIER                ((HRESULT)0x8A15C006)
#define WINGET_CONFIG_ERROR_MISSING_DEPENDENCY                  ((HRESULT)0x8A15C007)
#define WINGET_CONFIG_ERROR_DEPENDENCY_UNSATISFIED              ((HRESULT)0x8A15C008)
#define WINGET_CONFIG_ERROR_ASSERTION_FAILED                    ((HRESULT)0x8A15C009)
#define WINGET_CONFIG_ERROR_MANUALLY_SKIPPED                    ((HRESULT)0x8A15C00A)

// Configuration Processor Errors
#define WINGET_CONFIG_ERROR_UNIT_NOT_INSTALLED        ((HRESULT)0x8A15C101)
#define WINGET_CONFIG_ERROR_UNIT_NOT_FOUND_REPOSITORY ((HRESULT)0x8A15C102)
#define WINGET_CONFIG_ERROR_UNIT_MULTIPLE_MATCHES     ((HRESULT)0x8A15C103)
#define WINGET_CONFIG_ERROR_UNIT_INVOKE_GET           ((HRESULT)0x8A15C104)
#define WINGET_CONFIG_ERROR_UNIT_INVOKE_TEST          ((HRESULT)0x8A15C105)
#define WINGET_CONFIG_ERROR_UNIT_INVOKE_SET           ((HRESULT)0x8A15C106)


namespace AppInstaller
{
    // Gets error messages that are presentable to the user.
    std::string GetUserPresentableMessage(const wil::ResultException& re);
    std::string GetUserPresentableMessage(const std::exception& e);
    std::string GetUserPresentableMessage(HRESULT hr);

#ifndef WINGET_DISABLE_FOR_FUZZING
    std::string GetUserPresentableMessage(const winrt::hresult_error& hre);
#endif
}