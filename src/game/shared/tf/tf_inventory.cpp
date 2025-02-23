//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: Simple Inventory
// by MrModez
// $NoKeywords: $
//=============================================================================//


#include "cbase.h"
#include "tf_shareddefs.h"
#include "tf_inventory.h"
#include "econ_item_system.h"
#include "tf_gamerules.h"
#include "filesystem.h"
#ifdef CLIENT_DLL
#include "clientsteamcontext.h"
#include "c_baseplayer.h"
#endif

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"