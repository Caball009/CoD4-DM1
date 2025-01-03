#include "NetFields.hpp"
#include "Demo/DemoData.hpp"

// clang-format off
namespace CoD4::DM1
{
	netField_t NetFields::EntityStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(lerp.u.anonymous.buffer[0]), 32, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(lerp.apos.trTime), 32, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(fWaistPitch), 0, 0 },
		{ NETF(fTorsoPitch), 0, 0 },
		{ NETF(iHeadIcon), 4, 0 },
		{ NETF(iHeadIconTeam), 2, 0 },
		{ NETF(lerp.apos.trDuration), 32, 0 },
		{ NETF(torsoAnim), 10, 0 },
		{ NETF(legsAnim), 10, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(lerp.u.anonymous.buffer[1]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 0 },
		{ NETF(partBits[0]), 32, 0 },
		{ NETF(partBits[1]), 32, 0 },
		{ NETF(partBits[2]), 32, 0 },
		{ NETF(partBits[3]), 32, 0 }
	};

	netField_t NetFields::PlayerEntityStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 1 },
		{ NETF(lerp.pos.trBase[0]), -92, 2 },
		{ NETF(lerp.pos.trBase[1]), -91, 2 },
		{ NETF(lerp.u.player.movementDir), -8, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(legsAnim), 10, 0 },
		{ NETF(torsoAnim), 10, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(fTorsoPitch), 0, 0 },
		{ NETF(fWaistPitch), 0, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(iHeadIcon), 4, 0 },
		{ NETF(iHeadIconTeam), 2, 0 },
		{ NETF(lerp.u.player.leanf), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 1 },
		{ NETF(lerp.pos.trDelta[0]), 0, 1 },
		{ NETF(lerp.pos.trDuration), 32, 1 },
		{ NETF(lerp.pos.trTime), -97, 1 },
		{ NETF(lerp.pos.trDelta[2]), 0, 1 },
		{ NETF(surfType), 8, 1 },
		{ NETF(un1), 8, 1 },
		{ NETF(index), 10, 1 },
		{ NETF(lerp.apos.trDelta[0]), 0, 1 },
		{ NETF(lerp.apos.trDelta[1]), 0, 1 },
		{ NETF(lerp.apos.trDelta[2]), 0, 1 },
		{ NETF(time2), -97, 1 },
		{ NETF(loopSound), 8, 1 },
		{ NETF(attackerEntityNum), 10, 1 },
		{ NETF(lerp.apos.trTime), 32, 1 },
		{ NETF(lerp.apos.trDuration), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 1 },
		{ NETF(un2), 32, 1 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::CorpseEntityStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 1 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(legsAnim), 10, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(torsoAnim), 10, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(lerp.u.player.movementDir), -8, 1 },
		{ NETF(eventSequence), 8, 1 },
		{ NETF(events[0]), -94, 1 },
		{ NETF(events[1]), -94, 1 },
		{ NETF(events[2]), -94, 1 },
		{ NETF(events[3]), -94, 1 },
		{ NETF(fTorsoPitch), 0, 1 },
		{ NETF(eventParms[1]), -93, 1 },
		{ NETF(eventParms[0]), -93, 1 },
		{ NETF(eventParms[2]), -93, 1 },
		{ NETF(weapon), 7, 1 },
		{ NETF(weaponModel), 4, 1 },
		{ NETF(eventParms[3]), -93, 1 },
		{ NETF(solid), 24, 1 },
		{ NETF(lerp.pos.trDuration), 32, 1 },
		{ NETF(fWaistPitch), 0, 1 },
		{ NETF(eventParm), -93, 1 },
		{ NETF(iHeadIcon), 4, 1 },
		{ NETF(iHeadIconTeam), 2, 1 },
		{ NETF(surfType), 8, 1 },
		{ NETF(un1), 8, 1 },
		{ NETF(otherEntityNum), 10, 1 },
		{ NETF(index), 10, 1 },
		{ NETF(lerp.apos.trDelta[0]), 0, 1 },
		{ NETF(lerp.apos.trDelta[1]), 0, 1 },
		{ NETF(lerp.apos.trDelta[2]), 0, 1 },
		{ NETF(time2), -97, 1 },
		{ NETF(loopSound), 8, 1 },
		{ NETF(attackerEntityNum), 10, 1 },
		{ NETF(lerp.apos.trTime), 32, 1 },
		{ NETF(lerp.u.player.leanf), 0, 1 },
		{ NETF(lerp.apos.trDuration), 32, 1 },
		{ NETF(un2), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 1 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::ItemEntityStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(lerp.pos.trType), 8, 2 },
		{ NETF(lerp.pos.trDelta[2]), 0, 2 },
		{ NETF(lerp.pos.trDelta[0]), 0, 2 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(ClientNum), 7, 2 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.apos.trType), 8, 2 },
		{ NETF(lerp.apos.trTime), -97, 2 },
		{ NETF(lerp.apos.trDelta[0]), 0, 2 },
		{ NETF(lerp.apos.trDelta[1]), 0, 2 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(lerp.u.anonymous.buffer[0]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[1]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(legsAnim), 10, 1 },
		{ NETF(torsoAnim), 10, 1 },
		{ NETF(fTorsoPitch), 0, 1 },
		{ NETF(fWaistPitch), 0, 1 },
		{ NETF(iHeadIcon), 4, 1 },
		{ NETF(iHeadIconTeam), 2, 1 },
		{ NETF(lerp.apos.trDuration), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 1 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::MissleEntityStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(lerp.apos.trTime), -97, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(lerp.u.missile.launchTime), -97, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(un2), 1, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(lerp.u.anonymous.buffer[1]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(legsAnim), 10, 1 },
		{ NETF(torsoAnim), 10, 1 },
		{ NETF(fTorsoPitch), 0, 1 },
		{ NETF(fWaistPitch), 0, 1 },
		{ NETF(iHeadIcon), 4, 1 },
		{ NETF(iHeadIconTeam), 2, 1 },
		{ NETF(lerp.apos.trDuration), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 1 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::ScriptMoverStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(partBits[0]), 32, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(lerp.apos.trTime), 32, 0 },
		{ NETF(partBits[1]), 32, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(lerp.apos.trDuration), 32, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(lerp.u.anonymous.buffer[0]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[1]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(fWaistPitch), 0, 0 },
		{ NETF(fTorsoPitch), 0, 0 },
		{ NETF(iHeadIcon), 4, 0 },
		{ NETF(iHeadIconTeam), 2, 0 },
		{ NETF(torsoAnim), 10, 0 },
		{ NETF(legsAnim), 10, 0 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 0 },
		{ NETF(partBits[2]), 32, 0 },
		{ NETF(partBits[3]), 32, 0 }
	};

	netField_t NetFields::SoundBlendEntityStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 1 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(legsAnim), 10, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(lerp.apos.trTime), 32, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(torsoAnim), 10, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(fWaistPitch), 0, 0 },
		{ NETF(fTorsoPitch), 0, 0 },
		{ NETF(iHeadIcon), 4, 0 },
		{ NETF(iHeadIconTeam), 2, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(lerp.u.soundBlend.lerp), 0, 0 },
		{ NETF(lerp.apos.trDuration), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[1]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 1 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::FxStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(lerp.apos.trTime), -97, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(lerp.u.anonymous.buffer[0]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[1]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(legsAnim), 10, 1 },
		{ NETF(torsoAnim), 10, 1 },
		{ NETF(fTorsoPitch), 0, 1 },
		{ NETF(fWaistPitch), 0, 1 },
		{ NETF(iHeadIcon), 4, 1 },
		{ NETF(iHeadIconTeam), 2, 1 },
		{ NETF(lerp.apos.trDuration), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 1 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::LoopFxEntityStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 1 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(lerp.u.loopFx.cullDist), 0, 0 },
		{ NETF(lerp.u.loopFx.period), 32, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(legsAnim), 10, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(lerp.apos.trTime), 32, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(torsoAnim), 10, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(fWaistPitch), 0, 0 },
		{ NETF(fTorsoPitch), 0, 0 },
		{ NETF(iHeadIcon), 4, 0 },
		{ NETF(iHeadIconTeam), 2, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(lerp.apos.trDuration), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 1 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::HelicopterEntityStateFields[HELICOPTER_ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 1 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(lerp.u.vehicle.gunPitch), 0, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(lerp.u.vehicle.gunYaw), 0, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(un1.helicopterStage), 3, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(lerp.u.vehicle.team), 8, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(legsAnim), 10, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(lerp.u.vehicle.materialTime), -97, 0 },
		{ NETF(lerp.apos.trTime), 32, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(torsoAnim), 10, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(fWaistPitch), 0, 0 },
		{ NETF(fTorsoPitch), 0, 0 },
		{ NETF(lerp.u.vehicle.bodyPitch), -100, 0 },
		{ NETF(lerp.u.vehicle.bodyRoll), -100, 0 },
		{ NETF(iHeadIcon), 4, 0 },
		{ NETF(iHeadIconTeam), 2, 0 },
		{ NETF(lerp.apos.trDuration), 32, 0 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::PlaneStateFields[PLANE_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 1 },
		{ NETF(lerp.pos.trBase[0]), 0, 2 },
		{ NETF(lerp.pos.trBase[1]), 0, 2 },
		{ NETF(lerp.pos.trBase[2]), 0, 2 },
		{ NETF(index), 10, 2 },
		{ NETF(lerp.pos.trDelta[0]), 0, 2 },
		{ NETF(lerp.pos.trDelta[1]), 0, 2 },
		{ NETF(lerp.pos.trTime), -97, 2 },
		{ NETF(lerp.pos.trType), 8, 2 },
		{ NETF(lerp.pos.trDuration), 32, 2 },
		{ NETF(lerp.u.vehicle.team), 8, 2 },
		{ NETF(lerp.apos.trBase[1]), -100, 2 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(lerp.u.anonymous.buffer[0]), 32, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(lerp.apos.trTime), 32, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(fWaistPitch), 0, 0 },
		{ NETF(fTorsoPitch), 0, 0 },
		{ NETF(iHeadIcon), 4, 0 },
		{ NETF(iHeadIconTeam), 2, 0 },
		{ NETF(lerp.apos.trDuration), 32, 0 },
		{ NETF(torsoAnim), 10, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(legsAnim), 10, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(lerp.u.anonymous.buffer[1]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 1 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 1 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::VehicleEntityStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 1 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(lerp.u.vehicle.gunYaw), 0, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(legsAnim), 10, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(lerp.u.vehicle.materialTime), -97, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(lerp.apos.trTime), 32, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(torsoAnim), 10, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(lerp.u.vehicle.gunPitch), 0, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(fWaistPitch), 0, 0 },
		{ NETF(fTorsoPitch), 0, 0 },
		{ NETF(lerp.u.vehicle.bodyPitch), -100, 0 },
		{ NETF(lerp.u.vehicle.bodyRoll), -100, 0 },
		{ NETF(iHeadIcon), 4, 0 },
		{ NETF(iHeadIconTeam), 2, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(lerp.u.vehicle.steerYaw), 0, 0 },
		{ NETF(lerp.apos.trDuration), 32, 0 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netField_t NetFields::EventEntityStateFields[ENTITY_STATE_FIELDS_COUNT] =
	{
		{ NETF(eType), 8, 0 },
		{ NETF(lerp.pos.trBase[0]), -92, 0 },
		{ NETF(lerp.pos.trBase[1]), -91, 0 },
		{ NETF(lerp.pos.trBase[2]), -90, 0 },
		{ NETF(eventParm), -93, 0 },
		{ NETF(surfType), 8, 0 },
		{ NETF(otherEntityNum), 10, 0 },
		{ NETF(un1), 8, 0 },
		{ NETF(lerp.u.anonymous.buffer[0]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[1]), 32, 0 },
		{ NETF(attackerEntityNum), 10, 0 },
		{ NETF(lerp.apos.trBase[0]), -100, 0 },
		{ NETF(ClientNum), 7, 0 },
		{ NETF(weapon), 7, 0 },
		{ NETF(weaponModel), 4, 0 },
		{ NETF(lerp.u.anonymous.buffer[2]), 32, 0 },
		{ NETF(index), 10, 0 },
		{ NETF(solid), 24, 0 },
		{ NETF(lerp.apos.trBase[1]), -100, 0 },
		{ NETF(lerp.apos.trBase[2]), -100, 0 },
		{ NETF(groundEntityNum), -96, 0 },
		{ NETF(lerp.u.anonymous.buffer[4]), 32, 0 },
		{ NETF(lerp.u.anonymous.buffer[5]), 32, 0 },
		{ NETF(iHeadIcon), 4, 0 },
		{ NETF(iHeadIconTeam), 2, 0 },
		{ NETF(events[0]), -94, 0 },
		{ NETF(eventParms[0]), -93, 0 },
		{ NETF(lerp.pos.trType), 8, 0 },
		{ NETF(lerp.apos.trType), 8, 0 },
		{ NETF(lerp.apos.trTime), 32, 0 },
		{ NETF(lerp.apos.trDelta[0]), 0, 0 },
		{ NETF(lerp.apos.trDelta[2]), 0, 0 },
		{ NETF(lerp.pos.trDelta[0]), 0, 0 },
		{ NETF(lerp.pos.trDelta[1]), 0, 0 },
		{ NETF(lerp.pos.trDelta[2]), 0, 0 },
		{ NETF(eventSequence), 8, 0 },
		{ NETF(lerp.pos.trTime), -97, 0 },
		{ NETF(events[1]), -94, 0 },
		{ NETF(events[2]), -94, 0 },
		{ NETF(eventParms[1]), -93, 0 },
		{ NETF(eventParms[2]), -93, 0 },
		{ NETF(events[3]), -94, 0 },
		{ NETF(eventParms[3]), -93, 0 },
		{ NETF(lerp.eFlags), -98, 0 },
		{ NETF(lerp.pos.trDuration), 32, 0 },
		{ NETF(lerp.apos.trDelta[1]), 0, 0 },
		{ NETF(time2), -97, 0 },
		{ NETF(loopSound), 8, 0 },
		{ NETF(un2), 32, 0 },
		{ NETF(torsoAnim), 10, 1 },
		{ NETF(legsAnim), 10, 1 },
		{ NETF(fWaistPitch), 0, 1 },
		{ NETF(fTorsoPitch), 0, 1 },
		{ NETF(lerp.u.anonymous.buffer[3]), 32, 1 },
		{ NETF(lerp.apos.trDuration), 32, 1 },
		{ NETF(partBits[0]), 32, 1 },
		{ NETF(partBits[1]), 32, 1 },
		{ NETF(partBits[2]), 32, 1 },
		{ NETF(partBits[3]), 32, 1 }
	};

	netFieldList_t NetFields::List[NET_FIELDS_COUNT] =
	{
		{ NETFE(EntityStateFields) },
		{ NETFE(PlayerEntityStateFields) },
		{ NETFE(CorpseEntityStateFields) },
		{ NETFE(ItemEntityStateFields) },
		{ NETFE(MissleEntityStateFields) },
		{ NETFE(EntityStateFields) },
		{ NETFE(ScriptMoverStateFields) },
		{ NETFE(SoundBlendEntityStateFields) },
		{ NETFE(FxStateFields) },
		{ NETFE(LoopFxEntityStateFields) },
		{ NETFE(EntityStateFields) },
		{ NETFE(EntityStateFields) },
		{ NETFE(HelicopterEntityStateFields) },
		{ NETFE(PlaneStateFields) },
		{ NETFE(VehicleEntityStateFields) },
		{ NETFE(EntityStateFields) },
		{ NETFE(EntityStateFields) },
		{ NETFE(EventEntityStateFields) }
	};

	netField_t NetFields::PlayerStateFields[PLAYER_STATE_FIELDS_COUNT] =
	{
		{ PSF(commandTime), -97, 0 },
		{ PSF(viewangles[1]), -87, 0 },
		{ PSF(viewangles[0]), -87, 0 },
		{ PSF(viewangles[2]), -87, 0 },
		{ PSF(origin[0]), -88, 3 },
		{ PSF(origin[1]), -88, 3 },
		{ PSF(bobCycle), 8, 3 },
		{ PSF(velocity[1]), -88, 3 },
		{ PSF(velocity[0]), -88, 3 },
		{ PSF(movementDir), -8, 3 },
		{ PSF(eventSequence), 8, 0 },
		{ PSF(legsAnim), 10, 0 },
		{ PSF(origin[2]), -88, 3 },
		{ PSF(weaponTime), -16, 0 },
		{ PSF(aimSpreadScale), -88, 0 },
		{ PSF(torsoTimer), 16, 0 },
		{ PSF(pm_flags), 21, 0 },
		{ PSF(weapAnim), 10, 0 },
		{ PSF(weaponstate), 5, 0 },
		{ PSF(velocity[2]), -88, 3 },
		{ PSF(events[0]), 8, 0 },
		{ PSF(events[1]), 8, 0 },
		{ PSF(events[2]), 8, 0 },
		{ PSF(events[3]), 8, 0 },
		{ PSF(eventParms[0]), 8, 0 },
		{ PSF(eventParms[1]), 8, 0 },
		{ PSF(eventParms[2]), 8, 0 },
		{ PSF(eventParms[3]), 8, 0 },
		{ PSF(torsoAnim), 10, 0 },
		{ PSF(holdBreathScale), -88, 0 },
		{ PSF(eFlags), -98, 0 },
		{ PSF(viewHeightCurrent), -88, 0 },
		{ PSF(fWeaponPosFrac), -88, 0 },
		{ PSF(legsTimer), 16, 0 },
		{ PSF(viewHeightTarget), -8, 0 },
		{ PSF(sprintState.lastSprintStart), -97, 0 },
		{ PSF(sprintState.lastSprintEnd), -97, 0 },
		{ PSF(weapon), 7, 0 },
		{ PSF(weaponDelay), -16, 0 },
		{ PSF(sprintState.sprintStartMaxLength), 14, 0 },
		{ PSF(weapFlags), 9, 0 },
		{ PSF(groundEntityNum), 10, 0 },
		{ PSF(damageTimer), 10, 0 },
		{ PSF(weapons[0]), 32, 0 },
		{ PSF(weapons[1]), 32, 0 },
		{ PSF(weaponold[0]), 32, 0 },
		{ PSF(delta_angles[1]), -100, 0 },
		{ PSF(offHandIndex), 7, 0 },
		{ PSF(pm_time), -16, 0 },
		{ PSF(otherFlags), 5, 0 },
		{ PSF(moveSpeedScaleMultiplier), 0, 0 },
		{ PSF(perks), 32, 0 },
		{ PSF(killCamEntity), 10, 0 },
		{ PSF(throwBackGrenadeOwner), 10, 0 },
		{ PSF(actionSlotType[2]), 2, 0 },
		{ PSF(delta_angles[0]), -100, 0 },
		{ PSF(speed), 16, 0 },
		{ PSF(viewlocked_entNum), 16, 0 },
		{ PSF(gravity), 16, 0 },
		{ PSF(actionSlotType[0]), 2, 0 },
		{ PSF(dofNearBlur), 0, 0 },
		{ PSF(dofFarBlur), 0, 0 },
		{ PSF(ClientNum), 8, 0 },
		{ PSF(damageEvent), 8, 0 },
		{ PSF(viewHeightLerpTarget), -8, 0 },
		{ PSF(damageYaw), 8, 0 },
		{ PSF(viewmodelIndex), 9, 0 },
		{ PSF(damageDuration), 16, 0 },
		{ PSF(damagePitch), 8, 0 },
		{ PSF(flinchYawAnim), 2, 0 },
		{ PSF(weaponShotCount), 3, 0 },
		{ PSF(viewHeightLerpDown), 1, 2 },
		{ PSF(cursorHint), 8, 0 },
		{ PSF(cursorHintString), -8, 0 },
		{ PSF(cursorHintEntIndex), 10, 0 },
		{ PSF(viewHeightLerpTime), 32, 0 },
		{ PSF(offhandSecondary), 1, 2 },
		{ PSF(radarEnabled), 1, 2 },
		{ PSF(pm_type), 8, 0 },
		{ PSF(fTorsoPitch), 0, 0 },
		{ PSF(holdBreathTimer), 16, 0 },
		{ PSF(actionSlotParam[2]), 7, 0 },
		{ PSF(jumpTime), 32, 0 },
		{ PSF(mantleState.flags), 5, 0 },
		{ PSF(fWaistPitch), 0, 0 },
		{ PSF(grenadeTimeLeft), -16, 0 },
		{ PSF(proneDirection), 0, 0 },
		{ PSF(mantleState.timer), 32, 0 },
		{ PSF(damageCount), 7, 0 },
		{ PSF(shellshockTime), -97, 0 },
		{ PSF(shellshockDuration), 16, 2 },
		{ PSF(sprintState.sprintButtonUpRequired), 1, 2 },
		{ PSF(shellshockIndex), 4, 0 },
		{ PSF(proneTorsoPitch), 0, 0 },
		{ PSF(sprintState.sprintDelay), 1, 2 },
		{ PSF(actionSlotParam[3]), 7, 0 },
		{ PSF(weapons[3]), 32, 0 },
		{ PSF(actionSlotType[3]), 2, 0 },
		{ PSF(proneDirectionPitch), 0, 0 },
		{ PSF(jumpOriginZ), 0, 0 },
		{ PSF(mantleState.yaw), 0, 0 },
		{ PSF(mantleState.transIndex), 4, 0 },
		{ PSF(weaponrechamber[0]), 32, 0 },
		{ PSF(throwBackGrenadeTimeLeft), -16, 0 },
		{ PSF(weaponold[3]), 32, 0 },
		{ PSF(weaponold[1]), 32, 0 },
		{ PSF(foliageSoundTime), -97, 0 },
		{ PSF(vLadderVec[0]), 0, 0 },
		{ PSF(viewlocked), 2, 0 },
		{ PSF(deltaTime), 32, 0 },
		{ PSF(viewAngleClampRange[1]), 0, 0 },
		{ PSF(viewAngleClampBase[1]), 0, 0 },
		{ PSF(viewAngleClampRange[0]), 0, 0 },
		{ PSF(vLadderVec[1]), 0, 0 },
		{ PSF(locationSelectionInfo), 8, 0 },
		{ PSF(meleeChargeTime), -97, 0 },
		{ PSF(meleeChargeYaw), -100, 0 },
		{ PSF(meleeChargeDist), 8, 0 },
		{ PSF(iCompassPlayerInfo), 32, 0 },
		{ PSF(weapons[2]), 32, 0 },
		{ PSF(actionSlotType[1]), 2, 0 },
		{ PSF(weaponold[2]), 32, 0 },
		{ PSF(vLadderVec[2]), 0, 0 },
		{ PSF(weaponRestrictKickTime), -16, 0 },
		{ PSF(delta_angles[2]), -100, 0 },
		{ PSF(spreadOverride), 6, 0 },
		{ PSF(spreadOverrideState), 2, 0 },
		{ PSF(actionSlotParam[0]), 7, 0 },
		{ PSF(actionSlotParam[1]), 7, 0 },
		{ PSF(dofNearStart), 0, 0 },
		{ PSF(dofNearEnd), 0, 0 },
		{ PSF(dofFarStart), 0, 0 },
		{ PSF(dofFarEnd), 0, 0 },
		{ PSF(dofViewmodelStart), 0, 0 },
		{ PSF(dofViewmodelEnd), 0, 0 },
		{ PSF(viewAngleClampBase[0]), 0, 0 },
		{ PSF(weaponrechamber[1]), 32, 0 },
		{ PSF(weaponrechamber[2]), 32, 0 },
		{ PSF(weaponrechamber[3]), 32, 0 },
		{ PSF(leanf), 0, 0 },
		{ PSF(adsDelayTime), 32, 1 }
	};

	netField_t NetFields::HudElemFields[HUD_ELEM_FIELDS_COUNT] =
	{
		{ HEF(color.rgba), -85, 0 },
		{ HEF(fadeStartTime), -97, 0 },
		{ HEF(fromColor.rgba), -85, 0 },
		{ HEF(y), -91, 0 },
		{ HEF(type), 4, 0 },
		{ HEF(materialIndex), 8, 0 },
		{ HEF(height), 10, 0 },
		{ HEF(width), 10, 0 },
		{ HEF(x), -92, 0 },
		{ HEF(fadeTime), 16, 0 },
		{ HEF(z), -90, 0 },
		{ HEF(value), 0, 0 },
		{ HEF(alignScreen), 6, 0 },
		{ HEF(sort), 0, 0 },
		{ HEF(alignOrg), 4, 0 },
		{ HEF(offscreenMaterialIdx), 8, 0 },
		{ HEF(fontScale), -86, 0 },
		{ HEF(text), 9, 0 },
		{ HEF(font), 4, 0 },
		{ HEF(scaleStartTime), -97, 0 },
		{ HEF(scaleTime), 16, 0 },
		{ HEF(fromWidth), 10, 0 },
		{ HEF(fromHeight), 10, 0 },
		{ HEF(targetEntNum), 10, 0 },
		{ HEF(glowColor.rgba), -85, 0 },
		{ HEF(fxBirthTime), -97, 0 },
		{ HEF(soundID), 5, 0 },
		{ HEF(fxLetterTime), 12, 0 },
		{ HEF(fxDecayStartTime), 16, 0 },
		{ HEF(fxDecayDuration), 16, 0 },
		{ HEF(flags), 3, 0 },
		{ HEF(label), 9, 0 },
		{ HEF(time), -97, 0 },
		{ HEF(moveStartTime), -97, 0 },
		{ HEF(moveTime), 16, 0 },
		{ HEF(fromX), -99, 0 },
		{ HEF(fromY), -99, 0 },
		{ HEF(fromAlignScreen), 6, 0 },
		{ HEF(fromAlignOrg), 4, 0 },
		{ HEF(duration), 32, 0 }
	};

	netField_t NetFields::ClientStateFields[CLIENT_STATE_FIELDS_COUNT] =
	{
		{ CSF(modelindex), 9, 0 },
		{ CSF(netname[0]), 32, 0 },
		{ CSF(rank), 8, 0 },
		{ CSF(prestige), 8, 0 },
		{ CSF(team), 2, 0 },
		{ CSF(attachedVehEntNum), 10, 0 },
		{ CSF(netname[4]), 32, 0 },
		{ CSF(attachModelIndex[0]), 9, 0 },
		{ CSF(netname[8]), 32, 0 },
		{ CSF(perks), 32, 0 },
		{ CSF(netname[12]), 32, 0 },
		{ CSF(attachModelIndex[1]), 9, 0 },
		{ CSF(maxSprintTimeMultiplier), 0, 0 },
		{ CSF(attachedVehSlotIndex), 2, 0 },
		{ CSF(attachTagIndex[5]), 5, 0 },
		{ CSF(attachTagIndex[0]), 5, 0 },
		{ CSF(attachTagIndex[1]), 5, 0 },
		{ CSF(attachTagIndex[2]), 5, 0 },
		{ CSF(attachTagIndex[3]), 5, 0 },
		{ CSF(attachTagIndex[4]), 5, 0 },
		{ CSF(attachModelIndex[2]), 9, 0 },
		{ CSF(attachModelIndex[3]), 9, 0 },
		{ CSF(attachModelIndex[4]), 9, 0 },
		{ CSF(attachModelIndex[5]), 9, 0 }
	};

	netField_t NetFields::ArchivedEntityFields[ARCHIVED_ENTITY_FIELDS_COUNT] =
	{
		{ AEF(r.absmin[1]), 0, 0 },
		{ AEF(r.absmax[1]), 0, 0 },
		{ AEF(r.absmin[0]), 0, 0 },
		{ AEF(r.absmax[0]), 0, 0 },
		{ AEF(s.lerp.pos.trBase[1]), 0, 0 },
		{ AEF(s.lerp.pos.trBase[0]), 0, 0 },
		{ AEF(r.absmax[2]), 0, 0 },
		{ AEF(s.lerp.pos.trBase[2]), 0, 0 },
		{ AEF(r.absmin[2]), 0, 0 },
		{ AEF(s.groundEntityNum), 10, 0 },
		{ AEF(s.lerp.apos.trBase[1]), 0, 0 },
		{ AEF(s.eType), 8, 0 },
		{ AEF(s.lerp.apos.trBase[0]), 0, 0 },
		{ AEF(s.ClientNum), 7, 0 },
		{ AEF(s.lerp.apos.trBase[2]), 0, 0 },
		{ AEF(s.lerp.eFlags), -98, 0 },
		{ AEF(r.svFlags), 32, 0 },
		{ AEF(s.events[0]), 8, 0 },
		{ AEF(s.eventSequence), 8, 0 },
		{ AEF(s.index), 10, 0 },
		{ AEF(s.legsAnim), 10, 0 },
		{ AEF(s.events[1]), -94, 0 },
		{ AEF(s.events[2]), -94, 0 },
		{ AEF(s.events[3]), -94, 0 },
		{ AEF(s.weapon), 7, 0 },
		{ AEF(s.weaponModel), 4, 0 },
		{ AEF(s.lerp.pos.trType), 8, 0 },
		{ AEF(s.lerp.apos.trType), 8, 0 },
		{ AEF(s.iHeadIcon), 4, 0 },
		{ AEF(s.iHeadIconTeam), 2, 0 },
		{ AEF(s.solid), 24, 0 },
		{ AEF(s.eventParms[0]), -93, 0 },
		{ AEF(s.torsoAnim), 10, 0 },
		{ AEF(s.lerp.pos.trTime), -97, 0 },
		{ AEF(s.lerp.pos.trDelta[0]), 0, 0 },
		{ AEF(s.lerp.pos.trDelta[1]), 0, 0 },
		{ AEF(s.lerp.pos.trDelta[2]), 0, 0 },
		{ AEF(s.otherEntityNum), 10, 0 },
		{ AEF(s.eventParms[1]), -93, 0 },
		{ AEF(s.surfType), 8, 0 },
		{ AEF(s.eventParm), -93, 0 },
		{ AEF(s.eventParms[2]), -93, 0 },
		{ AEF(s.un1), 8, 0 },
		{ AEF(s.eventParms[3]), 8, 0 },
		{ AEF(s.lerp.pos.trDuration), 32, 0 },
		{ AEF(s.fWaistPitch), 0, 0 },
		{ AEF(s.fTorsoPitch), 0, 0 },
		{ AEF(s.lerp.apos.trTime), -97, 0 },
		{ AEF(s.lerp.apos.trDelta[0]), 0, 0 },
		{ AEF(s.lerp.apos.trDelta[2]), 0, 0 },
		{ AEF(r.clientMask[0]), 32, 0 },
		{ AEF(r.clientMask[1]), 32, 0 },
		{ AEF(s.lerp.apos.trDelta[1]), 0, 0 },
		{ AEF(s.attackerEntityNum), 10, 0 },
		{ AEF(s.time2), -97, 0 },
		{ AEF(s.un2), 32, 0 },
		{ AEF(s.lerp.apos.trDuration), 32, 0 },
		{ AEF(s.loopSound), 8, 0 },
		{ AEF(s.lerp.u.anonymous.buffer[0]), 32, 0 },
		{ AEF(s.lerp.u.anonymous.buffer[1]), 32, 0 },
		{ AEF(s.lerp.u.anonymous.buffer[2]), 32, 0 },
		{ AEF(s.lerp.u.anonymous.buffer[3]), 32, 0 },
		{ AEF(s.lerp.u.anonymous.buffer[4]), 32, 0 },
		{ AEF(s.lerp.u.anonymous.buffer[5]), 32, 0 },
		{ AEF(s.lerp.u.anonymous.buffer[6]), 32, 0 },
		{ AEF(s.partBits[0]), 32, 0 },
		{ AEF(s.partBits[1]), 32, 0 },
		{ AEF(s.partBits[2]), 32, 0 },
		{ AEF(s.partBits[3]), 32, 0 }
	};

	netField_t NetFields::ObjectiveFields[OBJECTIVE_FIELDS_COUNT] =
	{
		{ OBJF(origin[0]), 0, 0 },
		{ OBJF(origin[1]), 0, 0 },
		{ OBJF(origin[2]), 0, 0 },
		{ OBJF(icon), 12, 0 },
		{ OBJF(entNum), 10, 0 },
		{ OBJF(teamNum), 4, 0 }
	};

	int NetFields::GetMinBitCount(int x)
	{
		return 32 - __clz(x);
	}
}
// clang-format on
