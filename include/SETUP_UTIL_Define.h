

// Copyright (c) 16-Apr-07 - 2008 Motorola, Inc. All rights reserved.


#ifndef PUBLIC_API_SETUP_UTIL_DEFINE_H 
#define PUBLIC_API_SETUP_UTIL_DEFINE_H

#ifndef __cplusplus
#error "This is a C++ header file; it requires C++ to compile."
#endif

#define BROWSER_BLOCK_LEN	18   
#define SHORTCUT_MAX_LABEL_LENGTH 32 
#define SHORTCUT_MAX_URL_LENGTH   438 
typedef enum{
DL_DB_FEATURE_ID_GPRS_IDLE_TIMEOUT=0, 
DL_DB_FEATURE_ID_BROWSER_STATE_BYTE, 
DL_DB_FEATURE_ID_BROWSER_PERM_1, 
DL_DB_FEATURE_ID_WEB_ACCESS_LOCK, 
DL_DB_FEATURE_ID_BROWSER_UPDATE_PENDING, 
DL_DB_FEATURE_ID_SHORTCUT_NUMBER_MAX,
DL_DB_FEATURE_ID_MMS_SIZE_LIMIT,  
DL_DB_FEATURE_ID_SERVICE_LOAD_VALUE, 
}BROWSER_FEATURE_VALUE_T;

typedef enum{
DL_DB_FEATURE_ID_MULTIMEDIA_IMAGE_INFO_VALUE=0, 
DL_DB_FEATURE_ID_MULTIMEDIA_SOUND_INFO_VALUE, 
DL_DB_FEATURE_ID_BROWSER_SERVICE_STATE, 
DL_DB_FEATURE_ID_BROWSER_LOCK, 
DL_DB_FEATURE_ID_WTLS_CLASS_3_STATUS, 
DL_DB_FEATURE_ID_CURRENT_ANIMATION, 
DL_DB_FEATURE_ID_CURRENT_SCROLL,
DL_DB_FEATURE_ID_PHONE_NUMBER_DISPLAY_FORMAT, 
DL_DB_FEATURE_ID_CURRENT_ZOOM, 
DL_DB_FEATURE_ID_SIGN_TEXT_SELECT, 
DL_DB_FEATURE_ID_WEB_SESSION_LOCK,
DL_DB_FEATURE_ID_SHORTCUTS_LOCK, 
DL_DB_FEATURE_ID_BROWSER_2_2_BACKLIGHT_VALUE, 
DL_DB_FEATURE_ID_CURRENT_BACKLIGHT, 
}BROWSER_FEATURE_STATE_T;

typedef enum{
DL_DB_FEATURE_ID_USER_HOME_PAGE=0,
DL_DB_FEATURE_ID_BROWSER_OPERATOR_URL, 
}BROWSER_FEATURE_STRING_T;

typedef enum {
SHORTCUT_OK = 0, 
SHORTCUT_ERROR, 
SHORTCUT_ERROR_MEMORY_FULL, 
SHORTCUT_ERROR_URL_LENGTH_EXCEEDED, 
SHORTCUT_ERROR_LABEL_ALREADY_EXISTS, 
}SHORTCUT_STATUS_T;

typedef enum{
FIXED_DIAL_UNKNOWN=0,
FIXED_DIAL_OFF,
FIXED_DIAL_ON,
}FIXED_DIAL_STATUS_T;

typedef enum{
DURATION_1_SECOND=0,
DURATION_1_AND_HALF_SECOND,
DURATION_2_SECOND,
DURATION_MAX,
}SETUP_DURATION_TIME_T;

typedef enum{
SLEEP_30_SEC=0,
SLEEP_1_MIN,
SLEEP_5_MIN,
SLEEP_10_MIN,
LCD_SLEEP_TIME_MAX,
}SETUP_LCD_SLEEP_TIME_T;

typedef enum{
RING_LOUD=0,
RING_LOUD_THEN_VIB,
RING_SOFT,
RING_SOFT_THEN_VIB,
SILENTSTYLE,
VIBRATE,
}SETUP_ALERT_STYLE_T;

typedef enum{
ALARMS_ON=0,
ALARMS_OFF,
ALARMS_VIBRATE,
}SETUP_ALARMS_TYPE_T;

typedef enum{
SYSTEMALERT_ON=0,
SYSTEMALERT_OFF,
SYSTEMALERT_VIBRATE,
}SETUP_SYSTEMALERT_TYPE_T;

typedef enum{
RINGERIDS_ON=0,
RINGERIDS_OFF,
}SETUP_RINGERIDS_TYPE_T;

typedef enum{
TOUCHSCREEN_CLICK=0,
TOUCHSCREEN_TONE,
TOUCHSCREEN_OFF,
}SETUP_TOUCHSCREEN_TYPE_T;

typedef enum{
KEYPAD_ON=0,
KEYPAD_OFF,
}SETUP_KEYPAD_TYPE_T;

typedef enum{
JAVASOUND_ON=0,
JAVASOUND_OFF
}SETUP_JAVASOUND_TYPE_T;

typedef enum{
REMINDERS_ON=0,
REMINDERS_OFF,
REMINDERS_VIBRATE,
}SETUP_REMINDERS_TYPE_T;

typedef enum {
PHONE_LOCK_OFF = 0,
PHONE_LOCK_1_MIN,
PHONE_LOCK_5_MIN,
PHONE_LOCK_10_MIN,
PHONE_LOCK_30_MIN,
PHONE_LOCK_POWERON
} SETUP_PHONELOCK_TYPE_T;

typedef enum
{
        AP_FLEX_VERSION,
        BP_FLEX_VERSION,
        AP_SW_VERSION,
        BP_SW_VERSION,
        TECHNOLOGY,
        DSP_SW_VERSION,
        LANGUAGE_LIST,
        DATA_READY,
        SYNC_READY,
        BROWSER_READY,
        MP3_READY,
        SMS_READY,
        EMS_READY,
        FAX_READY,
        BROWSER_INFO,
        SOFTWARE_UPDATE_LOG
} PROPERTIES_E;
enum ENUM_ALERT_STYLE{
ALERT_STYLE_RING_ONLY_EV,
ALERT_STYLE_RING_AND_VIBRATE_EV,
ALERT_STYLE_VIBRATE_THEN_RING_EV,
ALERT_STYLE_VIBRATE_ONLY_EV,
ALERT_STYLE_SILENT_EV
};

enum ENUM_PRELOADED_ALERT_STYLE
{
    PRELOADED_RING_LOUD_EV = 1,
    PRELOADED_RING_SOFT_EV,
    PRELOADED_RING_AND_VIBRATE_EV,
    PRELOADED_VIBRATE_THEN_RING_EV,
    PRELOADED_VIBRATE_ONLY_EV,
    PRELOADED_SILENT_EV
};

enum ENUM_SOUND_TYPE_E
{
ALERT_SOUND_EV,
SYSTEM_SOUND_EV,
PLAYBACK_SOUND_EV,
SPEAKER_SOUND_EV
};

typedef enum
{
ALERT_TYPE_CALL_ALERT_LINE_1_EV,
ALERT_TYPE_CALL_ALERT_EV = ALERT_TYPE_CALL_ALERT_LINE_1_EV, 
ALERT_TYPE_MESSAGE_ALERT_EV,
ALERT_TYPE_EMAIL_ALERT_EV,
ALERT_TYPE_IM_ALERT_EV,
ALERT_TYPE_CALENDAR_ALERT_EV,
ALERT_TYPE_SLIDE_ALERT_EV,
ALERT_TYPE_REMINDER_ALERT_EV,
ALERT_TYPE_VOICE_MAIL_ALERT_EV,
ALERT_TYPE_POWER_UP_DOWN_ALERT_EV, 
ALERT_TYPE_RING_LIGHTS_ALERT_EV,
ALERT_TYPE_MESSAGE_LIGHTS_ALERT_EV,
ALERT_TYPE_VIDEO_CALL_ALERT_EV,    
ALERT_TYPE_PTT_CALL_ALERT_EV,
ALERT_TYPE_PTT_ALERT_EV,
ALERT_TYPE_PHONE_GENERAL_EV,  
ALERT_TYPE_CALL_ALERT_LINE_2_EV,
ALERT_TYPE_LIGHT_ALERT_EV 
} ENUM_ALERT_TYPE;

enum ENUM_VIBRATE_PATTERN_E
{
VIBRATE_PATTERN_DOT_EV = 1,
VIBRATE_PATTERN_DASH_EV,
VIBRATE_PATTERN_PUSH_EV
};

#ifdef FEAT_SYNC_ISYNC_AT_COMMAND_ENABLE
typedef enum
{
ISYNC_PROFILE_SUCCESS,
ISYNC_PROFILE_INVALIDE_RINGTONE, 
ISYNC_PROFILE_NONE_DRM_RINGTONE, 
ISYNC_PROFILE_NONE_RING_PROFILE, 
ISYNC_PROFILE_UNMODIFIED_ALERT,  
ISYNC_PROFILE_UNMODIFIED_PROFILE,  
ISYNC_PROFILE_WRONG_ALERT,       
ISYNC_PROFILE_FILE_WRITE_ERROR   
} ENUM_ISYNC_PROFILE_RETCODE_E;
#endif

typedef enum
{
IATC_PROFILE_SUCCESS,
IATC_PROFILE_INVALIDE_RINGTONE, 
IATC_PROFILE_NONE_DRM_RINGTONE, 
IATC_PROFILE_NONE_RING_PROFILE, 
IATC_PROFILE_UNMODIFIED_ALERT,  
IATC_PROFILE_UNMODIFIED_PROFILE,  
IATC_PROFILE_WRONG_ALERT,       
IATC_PROFILE_FILE_WRITE_ERROR,   
IATC_PROFILE_VOLUME_INVAILD_VALUE,    
IATC_PROFILE_FILE_READ_ERROR,   
IATC_PROFILE_FAILED_TO_SET_PROFILE,  
IATC_PROFILE_CANNOT_CHANGE_PROFILE   
} ENUM_IATC_PROFILE_RETCODE_E;

typedef enum
{
IATC_THEME_ELEMENT_SUCCESS,
IATC_THEME_ELEMENT_FILE_NO_EXIST,
IATC_THEME_ELEMENT_FILENAME_TOOLONG,
IATC_THEME_ELEMENT_NONE_DRM_FILE,
IATC_THEME_ELEMENT_NULL_VALUE,
IATC_THEME_ELEMENT_WRITE_ERR
} ENUM_IATC_THEME_ELEMENT_RETCODE_E;

enum ENUM_INVL_T
{
    ENUM_INVL_BLOG,  
    ENUM_INVL_PIC,   
    ENUM_INVL_AUD,   
    ENUM_INVL_VID,   
    ENUM_INVL_GAME   
};

enum INVL_STATUS_T
{
    INVL_STATUS_SUCCESS, 
    INVL_STATUS_NOMEM,
    INVL_STATUS_ALREADY_EXIST,
    INVL_STATUS_FAIL
};

enum ENUM_TIMER_TYPE
{
    BACKLIGHT_TIMEOUT_EV,
    KEYPAD_BACKLIGHT_TIMEOUT_EV,
    DISPLAY_TIMEOUT_EV,
    SCREENSAVER_TIMEOUT_EV
};

enum ENUM_THEME_PROFILE_ELEMENT_TYPE
{
    RINGTONE_ELEMENT,
    WALLPAPER_ELEMENT,
    SCRSAVER_ELEMENT
};

enum ENUM_TALKINGPHONE_READOUT_TYPE
{
    CALLER_ID_EV,
    MENU_EV,
    CONTACTS_EV,
    DIGITS_EV,
    EMAIL_EV,
    MESSAGE_EV
}; 

enum UI_LCD_COLOR_E
{
    LCD_BACKLIGHT_COLOR_RED_EV,
    LCD_BACKLIGHT_COLOR_GREEN_EV,
    LCD_BACKLIGHT_COLOR_ORANGE_EV
};

#ifdef FEAT_SYNC_ISYNC_AT_COMMAND_ENABLE
struct STRU_ISYNC_PROFILE_ALERT_RING_TONE_D
{
ENUM_ALERT_TYPE alert_type;  
char* ring_tone_file;	       
};
struct STRU_ISYNC_PROFILE_RING_TONE_D
{
int   profile_id;            
int   profile_alert_num;     
struct STRU_ISYNC_PROFILE_ALERT_RING_TONE_D** profile_alert_ringtone;
};
struct STRU_ISYNC_RING_TONE_D
{
int profile_num;             
struct STRU_ISYNC_PROFILE_RING_TONE_D** profile_ringtone;
};
#endif 

#endif  

