#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "fldeff.h"
#include "item_use.h"
#include "overworld.h"
#include "party_menu.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/field_effects.h"
#include "constants/songs.h"

static void FieldCallback_Headbutt(void);
static void FieldMove_Headbutt(void);

// Called when Headbutt is used from the party menu
// For interacting with a headbuttble tree in the field, see EventScript_Headbutt
bool32 SetUpFieldMove_Headbutt(void)
{
    
    if (CheckObjectGraphicsInFrontOfPlayer(OBJ_EVENT_GFX_POLIWRATH) == TRUE)
    {
        gSpecialVar_Result = GetCursorSelectionMonId();
        gFieldCallback2 = FieldCallback_PrepareFadeInFromMenu;
        gPostMenuFieldCallback = FieldCallback_Headbutt;
        return TRUE;
    }
    return FALSE;
}

static void FieldCallback_Headbutt(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext_SetupScript(EventScript_UseHeadbutt);
}

bool8 FldEff_UseHeadbutt(void)
{
    u8 taskId = CreateFieldMoveTask();
    gTasks[taskId].data[8] = (u32)FieldMove_Headbutt >> 16;
    gTasks[taskId].data[9] = (u32)FieldMove_Headbutt;
    IncrementGameStat(GAME_STAT_USED_HEADBUTT);
    return FALSE;
}

static void FieldMove_Headbutt(void)
{
    PlaySE(SE_M_HEADBUTT);
    FieldEffectActiveListRemove(FLDEFF_USE_HEADBUTT);
    ScriptContext_Enable();
}