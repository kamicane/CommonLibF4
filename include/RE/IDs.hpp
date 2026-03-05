#pragma once

namespace RE::ID
{
	namespace ActiveEffect
	{
		inline constexpr REL::ID CheckDisplacementSpellOnTarget{ 0 };  // 1415178 - inlined
	}

	namespace Actor
	{
		inline constexpr REL::RelocationID AddPerk{ 187096, 2230121, 2230121 };
		inline constexpr REL::RelocationID CanUseIdle{ 1223707, 2229592, 2229592 };
		inline constexpr REL::RelocationID ClearAttackStates{ 1525555, 2229773, 2229773 };
		inline constexpr REL::RelocationID EndInterruptPackage{ 575188, 2229892, 2229892 };
		inline constexpr REL::RelocationID ExitCover{ 770035, 2231166, 2231166 };
		inline constexpr REL::RelocationID GetAimVector{ 554863, 2230378, 2230378 };
		inline constexpr REL::RelocationID GetClosestBone{ 1180004, 2230051, 2230051 };
		inline constexpr REL::RelocationID GetCollisionFilter{ 1474995, 0, 2277949 };
		inline constexpr REL::RelocationID GetCombatStyle{ 1270929, 2231053, 2231053 };
		inline constexpr REL::RelocationID SetCurrentAmmoCount{ 0, 0, 2229952 };
		inline constexpr REL::RelocationID GetCurrentCollisionGroup{ 410500, 0, 2229993 };
		inline constexpr REL::RelocationID GetCurrentFireLocation{ 663107, 2231167, 2231167 };
		inline constexpr REL::RelocationID GetDesiredSpeed{ 106892, 2230410, 2230410 };
		inline constexpr REL::RelocationID GetGhost{ 0, 0, 2229668 };
		inline constexpr REL::RelocationID GetHostileToActor{ 1148686, 2229968, 2229968 };
		inline constexpr REL::RelocationID GetMountHandle{ 313362, 2231230, 2231230 };
		inline constexpr REL::RelocationID GetLevel{ 661617, 2229734, 2229734 };
		inline constexpr REL::RelocationID GetPerkRank{ 1368313, 2230125, 2230125 };
		inline constexpr REL::RelocationID GetSex{ 0, 0, 2229674 };
		inline constexpr REL::RelocationID HandleDefaultAnimationSwitch{ 1163130, 2229780, 2229780 };
		inline constexpr REL::RelocationID HandleItemEquip{ 164912, 2229781, 2229781 };
		inline constexpr REL::RelocationID HasObjects{ 0, 0, 2229961 };
		inline constexpr REL::RelocationID InitiateDoNothingPackage{ 89993, 2229807, 2229807 };
		inline constexpr REL::RelocationID IsCrippled{ 1238666, 0, 2230998 };
		inline constexpr REL::RelocationID IsFollowing{ 629579, 2230013, 2230013 };
		inline constexpr REL::RelocationID IsJumping{ 1041558, 2229640, 2229640 };
		inline constexpr REL::RelocationID IsPathValid{ 1522194, 2230279, 2230279 };
		inline constexpr REL::RelocationID IsPathing{ 989661, 2234312, 2234312 };
		inline constexpr REL::RelocationID IsPathingComplete{ 817283, 2230274, 2230274 };
		inline constexpr REL::RelocationID IsQuadruped{ 1552322, 2229614, 2229614 };
		inline constexpr REL::RelocationID IsSneaking{ 1173627, 2207655, 2207655 };
		inline constexpr REL::RelocationID Move{ 737625, 2229934, 2229934 };
		inline constexpr REL::RelocationID PerformAction{ 1057231, 2231177, 2231177 };
		inline constexpr REL::RelocationID RemovePerk{ 1316475, 2230122, 2230122 };
		inline constexpr REL::RelocationID Reset3D{ 302888, 2229913, 2229913 };
		inline constexpr REL::RelocationID RewardExperience{ 262786, 2230428, 2230428 };
		inline constexpr REL::RelocationID SetGunState{ 977675, 2231175, 2231175 };
		inline constexpr REL::RelocationID SetHeading{ 353571, 2229625, 2229625 };
		inline constexpr REL::RelocationID TrespassAlarm{ 1109888, 2229834, 2229834 };
		inline constexpr REL::RelocationID UpdateVoiceTimer{ 0, 0, 2230178 };
		inline constexpr REL::RelocationID GetBodyPartData{ 0, 0, 2229571 };
		inline constexpr REL::RelocationID GetEquippedItem{ 0, 0, 2231089 };
		inline constexpr REL::RelocationID GetCrimeTrackingFaction{ 0, 0, 2229787 };
		inline constexpr REL::RelocationID ForceDetect{ 0, 0, 2230194 };
		inline constexpr REL::RelocationID GetDesirability{ 0, 0, 2229946 };
		inline constexpr REL::RelocationID CalcArmorRating1{ 0, 0, 2230008 };
		inline constexpr REL::RelocationID CalcArmorRating2{ 0, 0, 2230009 };
		inline constexpr REL::RelocationID UnequipObject{ 0, 0, 2230479 };
		inline constexpr REL::RelocationID UpdateSoundCallBack{ 0, 0, 2229974 };
		inline constexpr REL::RelocationID GetFactionRank{ 0, 0, 2230100 };
		inline constexpr REL::RelocationID IsAngryWithPlayer{ 0, 0, 2229998 };
		inline constexpr REL::RelocationID RedressIfNeeded{ 0, 0, 2230394 };
		inline constexpr REL::RelocationID UpdateSprinting{ 0, 0, 2230498 };
		inline constexpr REL::RelocationID Jump{ 0, 0, 2229650 };
		inline constexpr REL::RelocationID GetMobilityCrippled{ 0, 0, 2230996 };
		inline constexpr REL::RelocationID SPECIALModifiedCallback{ 0, 0, 2231020 };
		inline constexpr REL::RelocationID StopInteractingQuick{ 0, 0, 2231227 };
	}

	namespace ActorEquipManager
	{
		inline constexpr REL::RelocationID Singleton{ 1174340, 2690994, 2690994 };
		inline constexpr REL::RelocationID EquipObject{ 988029, 2231392, 2231392 };
		inline constexpr REL::RelocationID UnequipObject{ 1292493, 2231395, 2231395 };
		inline constexpr REL::RelocationID UnequipItem{ 0, 0, 2231399 };
	}

	namespace ActorUtils
	{
		namespace ArmorRatingVisitorBase
		{
			inline constexpr REL::RelocationID _operator{ 0, 0, 2227206 };
			inline constexpr REL::RelocationID ctor{ 0, 0, 2227205 };
		}

		inline constexpr REL::RelocationID GetEquippedArmorDamageResistance{ 0, 0, 2227189 };
	}

	namespace ActorValue
	{
		inline constexpr REL::RelocationID Singleton{ 405390, 2189587, 2189587 };
	}

	namespace AIFormulas
	{
		inline constexpr REL::RelocationID GetBarterValue{ 0, 0, 2208969 };
	}

	namespace AIProcess
	{
		inline constexpr REL::RelocationID GetCurrentAmmo{ 1154936, 2232300, 2232300 };
		inline constexpr REL::RelocationID GetCommandType{ 678523, 2231825, 2231825 };
		inline constexpr REL::RelocationID GetOccupiedFurniture{ 1162965, 2232401, 2232401 };
		inline constexpr REL::RelocationID IsWeaponSubgraphFinishedLoading{ 320183, 2231757, 2231757 };
		inline constexpr REL::RelocationID KnockExplosion{ 533106, 2232384, 2232384 };
		inline constexpr REL::RelocationID ProcessGreet{ 1174935, 2231808, 2231808 };
		inline constexpr REL::RelocationID RequestLoadAnimationsForWeaponChange{ 666002, 2231758, 2231758 };
		inline constexpr REL::RelocationID SetActorsDetectionEvent{ 1376336, 2231738, 2231738 };
		inline constexpr REL::RelocationID SetCurrentAmmo{ 795983, 2232302, 2232302 };
		inline constexpr REL::RelocationID SetCommandType{ 1555789, 2231826, 2231826 };
		inline constexpr REL::RelocationID SetEquippedItem{ 1200276, 2231627, 2231627 };
		inline constexpr REL::RelocationID SetupSpecialIdle{ 1446774, 2231704, 2231704 };
		inline constexpr REL::RelocationID SetWeaponBonesCulled{ 397172, 2232535, 2232535 };
		inline constexpr REL::RelocationID StopCurrentIdle{ 434460, 2231705, 2231705 };
		inline constexpr REL::RelocationID SetRunOncePackage{ 0, 0, 2232344 };
		inline constexpr REL::RelocationID AddToProcedureIndexRunning{ 0, 0, 2718412 };
		inline constexpr REL::RelocationID ComputeLastTimeProcessed{ 0, 0, 2231541 };
	}

	namespace AITimer
	{
		inline constexpr REL::RelocationID fTimer{ 0, 0, 2698609 };
	}

	namespace AnimationSystemUtils
	{
		inline constexpr REL::RelocationID WillEventChangeState{ 35074, 0, 2214271 };
	}

	namespace ApplyChangesFunctor
	{
		inline constexpr REL::RelocationID WriteDataImpl{ 1291190, 2223194, 2223194 };
	}

	namespace ApplyColorUpdateEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 421543, 0, 2707340 };
	}

	namespace BarterMenu
	{
		inline constexpr REL::RelocationID ClearTradingData{ 1112285, 0, 2222700 };
		inline constexpr REL::RelocationID CompleteTrade{ 379932, 0, 2222701 };
		inline constexpr REL::RelocationID GetCapsOwedByPlayer{ 672405, 0, 2222714 };
	}

	namespace BGSAnimationSystemUtils
	{
		inline constexpr REL::RelocationID GetActiveSyncInfo{ 1349978, 0, 2214289 };
		inline constexpr REL::RelocationID InitializeActorInstant{ 672857, 0, 2236393 };
		inline constexpr REL::RelocationID IsActiveGraphInTransition{ 839650, 0, 2214305 };
	}

	namespace BGSAttachParentArray
	{
		inline constexpr REL::RelocationID SetParentGroupNumber{ 1412266, 0, 2189125 };
	}

	namespace BGSConstructibleObject
	{
		inline constexpr REL::RelocationID PlayerPassesConditions{ 0, 0, 2197318 };
	}

	namespace BGSCraftItemEvent
	{
		inline constexpr REL::RelocationID EventIndex{ 1382765, 2663409, 2663409 };
	}

	namespace BGSCreatedObjectManager
	{
		inline constexpr REL::RelocationID Singleton{ 1000678, 0, 2697789 };
		inline constexpr REL::RelocationID DecrementRef{ 230928, 0, 2228455 };
		inline constexpr REL::RelocationID IncrementRef{ 1042515, 0, 2228454 };
	}

	namespace BGSDefaultObject
	{
		inline constexpr REL::RelocationID Singleton{ 561749, 2690473, 4797762 };
		inline constexpr REL::RelocationID ctor{ 1144014, 2197003, 2197003 };
	}

	namespace BGSDefaultObjectManager
	{
		inline constexpr REL::RelocationID Singleton{ 484974, 0, 2192850 };
	}

	namespace BGSDynamicPersistenceManager
	{
		inline constexpr REL::RelocationID Singleton{ 109630, 0, 4796312 };
		inline constexpr REL::RelocationID PromoteReference{ 1300345, 0, 2193819 };
		inline constexpr REL::RelocationID DemoteReference{ 222813, 0, 2193820 };
	}

	namespace BGSEntryPoint
	{
		inline constexpr REL::RelocationID HandleEntryPoint{ 714336, 2206243, 2206243 };
	}

	namespace BGSHackTerminal
	{
		inline constexpr REL::RelocationID EventIndex{ 1186942, 0, 2663434 };
	}

	namespace BGSInventoryInterface
	{
		inline constexpr REL::RelocationID Singleton{ 501899, 2689299, 4796586 };
		inline constexpr REL::RelocationID RequestInventoryItem{ 1200959, 2194009, 2194009 };
		inline constexpr REL::RelocationID ForceMergeStacks{ 0, 0, 2194032 };
	}

	namespace BGSInventoryItem
	{
		inline constexpr REL::RelocationID FindAndWriteStackData{ 770140, 2194123, 2194123 };
		inline constexpr REL::RelocationID GetDisplayFullName1{ 277641, 2194079, 2194079 };
		inline constexpr REL::RelocationID GetDisplayFullName2{ 0, 0, 2194080 };
		inline constexpr REL::RelocationID GetInstanceData{ 491493, 2194072, 2194072 };
		inline constexpr REL::RelocationID GetInventoryValue{ 430292, 2194099, 2194099 };
		inline constexpr REL::RelocationID GetExtraDataAt{ 0, 0, 2194092 };
		inline constexpr REL::RelocationID MergeStacks{ 0, 0, 2194109 };
		inline constexpr REL::RelocationID IsEquipped{ 0, 0, 2194086 };
		inline constexpr REL::RelocationID GetStackCount{ 82050, 0, 2194107 };
		inline constexpr REL::RelocationID IsQuestObject{ 823447, 0, 2194076 };
		inline constexpr REL::RelocationID GetTotalWeight{ 0, 0, 2194074 };
	}

	namespace BGSInventoryItemUtils
	{
		inline constexpr REL::RelocationID GetInventoryValue{ 0, 0, 2194127 };
	}

	namespace BGSInventoryList
	{
		inline constexpr REL::RelocationID FindAndWriteStackDataForItem{ 1354005, 2194179, 2194179 };
		inline constexpr REL::RelocationID BuildFromContainer{ 551792, 2194158, 2194158 };
		inline constexpr REL::RelocationID ctor{ 845050, 0, 2194153 };
		inline constexpr REL::RelocationID AddItem{ 0, 0, 2194159 };
	}

	namespace BGSKeyword
	{
		inline constexpr REL::RelocationID TypedKeywords{ 1095775, 4799330, 4799330 };
	}

	namespace BGSKeywordForm
	{
		inline constexpr REL::RelocationID AddKeyword{ 0, 0, 2192766 };
		inline constexpr REL::RelocationID RemoveKeyword{ 0, 0, 2192767 };
	}

	namespace BGSListForm
	{
		inline constexpr REL::RelocationID AddScriptAddedForm{ 0, 0, 2203262 };
	}

	namespace BGSLoadGameBuffer
	{
		inline constexpr REL::RelocationID LoadDataEndian{ 0, 0, 2228270 };
	}

	namespace BGSLocalizedStringDL
	{
		inline constexpr REL::RelocationID GetDescription{ 523613, 0, 2194237 };
		inline constexpr REL::RelocationID GetText{ 472297, 0, 2194238 };
	}

	namespace BGSMessage
	{
		inline constexpr REL::RelocationID AddButton{ 236744, 0, 0 };
		inline constexpr REL::RelocationID GetConvertedDescription{ 8331, 0, 2203353 };
	}

	namespace BGSMod
	{
		namespace Attachment
		{
			namespace Mod
			{
				inline constexpr REL::RelocationID FindModsForLooseMod{ 410363, 0, 2197524 };
				inline constexpr REL::RelocationID GetData{ 33658, 0, 0 };  // 33658 - inlined?
				inline constexpr REL::RelocationID GetLooseMod{ 1359613, 2197514, 2197514 };
				inline constexpr REL::RelocationID SetLooseMod{ 123132, 0, 2197558 };
			}

			inline constexpr REL::RelocationID GetAllLooseMods{ 1108112, 0, 2661620 };
		}

		namespace Container
		{
			inline constexpr REL::RelocationID GetData{ 0, 0, 2189206 };
		}

		namespace Template
		{
			namespace Items
			{
				inline constexpr REL::RelocationID CreateInstanceDataForObjectAndExtra{ 147297, 0, 2189244 };
			}
		}
	}

	namespace BGSNumericIDIndex
	{
		inline constexpr REL::RelocationID GetNumericID{ 0, 0, 2228199 };
		inline constexpr REL::RelocationID SetNumericID{ 0, 0, 2228200 };
	}

	namespace BGSObjectInstance
	{
		inline constexpr REL::RelocationID ctor{ 1095748, 0, 2197563 };
	}

	namespace BGSObjectInstanceExtra
	{
		inline constexpr REL::RelocationID ctor{ 1222521, 0, 2189015 };
		inline constexpr REL::RelocationID AttachModToReference{ 3303, 2189033, 2189033 };
		inline constexpr REL::RelocationID HasMod{ 963890, 2189026, 2189026 };
		inline constexpr REL::RelocationID AddMod{ 1191757, 2189025, 2189025 };
		inline constexpr REL::RelocationID RemoveInvalidMods{ 1548060, 2189028, 2189028 };
		inline constexpr REL::RelocationID RemoveMod{ 1136607, 2189027, 2189027 };
		inline constexpr REL::RelocationID GetNumMods{ 0, 0, 2189019 };
	}

	namespace BGSOpenCloseForm
	{
		inline constexpr REL::RelocationID AutoCloseRef{ 0, 0, 2192797 };
		inline constexpr REL::RelocationID GetOpenState{ 0, 0, 2192799 };
		inline constexpr REL::RelocationID HasOnlyOpenCloseAnims{ 0, 0, 2192796 };
		inline constexpr REL::RelocationID IsAnimating{ 0, 0, 2192801 };
		inline constexpr REL::RelocationID IsOpenCloseEvent{ 0, 0, 2192795 };
		inline constexpr REL::RelocationID IsOpenCloseForm{ 0, 0, 2192790 };
		inline constexpr REL::RelocationID SetOpenState{ 0, 0, 2192798 };
	}

	namespace BGSPerkRankArray
	{
		inline constexpr REL::RelocationID AllocatePerkRankArray{ 888419, 0, 2192837 };
		inline constexpr REL::RelocationID ClearPerks{ 1247917, 0, 2192836 };
	}

	namespace BGSPickLockEvent
	{
		inline constexpr REL::RelocationID EventIndex{ 701969, 0, 2663410 };
		inline constexpr REL::RelocationID ctor{ 193329, 0, 2214021 };
	}

	namespace BGSProjectile
	{
		inline constexpr REL::RelocationID CollidesWithSmallTransparentLayer{ 1115694, 2197620, 2197620 };
	}

	namespace BGSQuestInstanceText
	{
		inline constexpr REL::RelocationID ParseString{ 141681, 2206630, 2206630 };
	}

	namespace BGSSaveLoadFileEntry
	{
		inline constexpr REL::RelocationID DeleteGame{ 0, 0, 2227855 };
		inline constexpr REL::RelocationID LoadData{ 0, 0, 2227871 };
	}

	namespace BGSSaveGameBuffer
	{
		inline constexpr REL::RelocationID SaveDataEndian{ 0, 0, 2228319 };
	}

	namespace BGSSaveLoadManager
	{
		inline constexpr REL::RelocationID Singleton{ 1247320, 2697802, 2697802 };
		inline constexpr REL::RelocationID BuildSaveGameList{ 0, 0, 2228053 };
		inline constexpr REL::RelocationID GetSaveDirectoryPath{ 0, 0, 2228028 };
		inline constexpr REL::RelocationID QueueSaveLoadTask{ 1487308, 2228080, 2228080 };
		inline constexpr REL::RelocationID SaveGame{ 954817, 2228036, 2228036 };
		inline constexpr REL::RelocationID LoadGame{ 1245410, 2228039, 2228039 };
		inline constexpr REL::RelocationID BufferSceneScreenShot{ 1234898, 2228079, 2228079 };
	}

	namespace BGSScene
	{
		inline constexpr REL::RelocationID ResetAllSceneActions{ 0, 0, 2206864 };
		inline constexpr REL::RelocationID SetSceneActive{ 0, 0, 2206845 };
	}

	namespace BGSSceneActionNPCResponseDialogue
	{
		inline constexpr REL::RelocationID GetCurrentTopicInfo{ 0, 0, 2196825 };
		inline constexpr REL::RelocationID UpdateAction1{ 0, 0, 2196817 };
		inline constexpr REL::RelocationID UpdateAction2{ 0, 0, 2196800 };
	}

	namespace BGSSceneActionPlayerDialogue
	{
		inline constexpr REL::RelocationID GetCurrentTopicInfo{ 0, 0, 2196825 };
	}

	namespace BGSStoryEventManager
	{
		inline constexpr REL::RelocationID Singleton{ 1160067, 2693504, 4800796 };
		inline constexpr REL::RelocationID AddEvent{ 312533, 2214088, 2214088 };
	}

	namespace BGSSynchronizedAnimationManager
	{
		inline constexpr REL::RelocationID Singleton{ 1346879, 2690996, 4798289 };
		inline constexpr REL::RelocationID IsReferenceInSynchronizedScene{ 915329, 2214437, 2214437 };
	}

	namespace BGSTerminal
	{
		inline constexpr REL::RelocationID GetHackDifficultyLockLevel{ 537273, 2197777, 2197777 };
		inline constexpr REL::RelocationID IsTerminalRefInUse{ 1093565, 2197779, 2197779 };
		inline constexpr REL::RelocationID Show{ 1069012, 2197776, 2197776 };
		inline constexpr REL::RelocationID Activate{ 0, 0, 2197778 };
	}

	namespace bhkCharacterController
	{
		inline constexpr REL::RelocationID Jump{ 0, 0, 2278191 };
	}

	namespace bhkNPCollisionObject
	{
		inline constexpr REL::RelocationID CopyMembers{ 1558409, 0, 2277907 };
		inline constexpr REL::RelocationID GetBody{ 0, 0, 2277926 };
		inline constexpr REL::RelocationID GetBodyId{ 0, 0, 2277928 };
		inline constexpr REL::RelocationID GetShape{ 315427, 0, 2277929 };
		inline constexpr REL::RelocationID GetTransform{ 1508189, 0, 2277944 };
		inline constexpr REL::RelocationID SetMotionType{ 200912, 0, 2277913 };
		inline constexpr REL::RelocationID SetTransform{ 178085, 0, 2277945 };
		inline constexpr REL::RelocationID Getbhk{ 730034, 0, 2277919 };
	}

	namespace bhkPhysicsSystem
	{
		inline constexpr REL::RelocationID ctor{ 0, 0, 2278008 };
		inline constexpr REL::RelocationID AddToWorld{ 0, 0, 2278019 };
		inline constexpr REL::RelocationID CopyMembers{ 0, 0, 2278007 };
	}

	namespace bhkPickData
	{
		inline constexpr REL::RelocationID ctor{ 526783, 0, 2230668 };
		inline constexpr REL::RelocationID SetStartEnd{ 747470, 0, 2236622 };
		inline constexpr REL::RelocationID Reset{ 438299, 0, 2277761 };
		inline constexpr REL::RelocationID HasHit{ 1181584, 0, 2277770 };
		inline constexpr REL::RelocationID GetHitFraction{ 476687, 0, 2277772 };
		inline constexpr REL::RelocationID GetAllCollectorRayHitSize{ 1288513, 0, 2277765 };
		inline constexpr REL::RelocationID GetAllCollectorRayHitAt{ 583997, 0, 2277766 };
		inline constexpr REL::RelocationID SortAllCollectorHits{ 1274842, 0, 2277767 };
		inline constexpr REL::RelocationID GetNiAVObject{ 863406, 0, 2277764 };
		inline constexpr REL::RelocationID GetBody{ 1223055, 0, 2277762 };
	}

	namespace bhkUtilFunctions
	{
		inline constexpr REL::RelocationID FindFirstCollisionObject{ 0, 0, 2278093 };
	}

	namespace bhkWorld
	{
		inline constexpr REL::RelocationID AddPhysicsSystem{ 0, 0, 2277752 };
		inline constexpr REL::RelocationID RemovePhysicsSystem{ 0, 0, 2277753 };
		inline constexpr REL::RelocationID RemoveObjects{ 1514984, 2277721, 2277721 };
	}

	namespace BIPOBJECT
	{
		inline constexpr REL::RelocationID Dtor{ 765242, 0, 2194330 };
	}

	namespace BSAudioManager
	{
		inline constexpr REL::RelocationID Singleton{ 1321158, 0, 2703058 };
		inline constexpr REL::RelocationID GetSoundHandleByName{ 196484, 0, 2267105 };
		inline constexpr REL::RelocationID GetSoundHandleByFile{ 0, 0, 2267103 };
	}

	namespace BSAwardsSystemUtility
	{
		inline constexpr REL::RelocationID Singleton{ 1569384, 0, 2255115 };
	}

	namespace BSGFxDisplayObject
	{
		inline constexpr REL::RelocationID RemoveChild{ 1229383, 2287327, 2287327 };
	}

	namespace BSGFxObject
	{
		inline constexpr REL::RelocationID AcquireFlashObjectByMemberName{ 1172680, 2287014, 2287014 };
		inline constexpr REL::RelocationID AcquireFlashObjectByPath{ 1065592, 0, 2287015 };
	}

	namespace BSGFxShaderFXTarget
	{
		inline constexpr REL::RelocationID ProcessEvent{ 848563, 0, 2287033 };
		inline constexpr REL::RelocationID AppendShaderFXInfos{ 544646, 2287021, 2287021 };
		inline constexpr REL::RelocationID CreateAndSetFiltersToColor1{ 1487925, 2287028, 2287028 };
		inline constexpr REL::RelocationID CreateAndSetFiltersToColor2{ 783104, 0, 2287029 };
		inline constexpr REL::RelocationID CreateAndSetFiltersToHUD{ 876001, 2287027, 2287027 };
		inline constexpr REL::RelocationID EnableShadedBackground{ 278402, 2287022, 2287022 };
	}

	namespace BSGraphics
	{
		namespace Renderer
		{
			inline constexpr REL::RelocationID IncRef{ 1337764, 0, 2276869 };
			inline constexpr REL::RelocationID DecRef{ 194808, 0, 2276870 };
			inline constexpr REL::RelocationID Begin{ 0, 0, 2276833 };
			inline constexpr REL::RelocationID End{ 0, 0, 2276834 };
			inline constexpr REL::RelocationID Lock{ 0, 0, 2276828 };
			inline constexpr REL::RelocationID Unlock{ 0, 0, 2276829 };
		}

		namespace RenderTargetManager
		{
			inline constexpr REL::RelocationID Singleton{ 1508457, 2666735, 2666735 };
			inline constexpr REL::RelocationID SetEnableDynamicResolution{ 116947, 0, 2277197 };
		}

		namespace State
		{
			inline constexpr REL::RelocationID Singleton{ 600795, 2704621, 2704621 };
		}

		namespace Utility
		{
			inline constexpr REL::RelocationID ConvertHALFToNiPoint3Stream{ 463129, 2277113, 2277113 };
			inline constexpr REL::RelocationID ConvertNiPoint3ToHALFStream{ 0, 2277114, 2277114 };
			inline constexpr REL::RelocationID PackVertexData{ 156126, 2277106, 2277106 };
			inline constexpr REL::RelocationID UnpackVertexData{ 990748, 2277129, 2277129 };
		}

		inline constexpr REL::RelocationID GetRendererData{ 1235449, 2704429, 2704429 };
		inline constexpr REL::RelocationID GetCurrentRendererWindow{ 0, 0, 2704431 };
	}

	namespace BSIdleInputWatcher
	{
		inline constexpr REL::RelocationID Singleton{ 0, 0, 4801008 };
	}

	namespace BSInputDeviceManager
	{
		inline constexpr REL::RelocationID Singleton{ 1284221, 0, 4807767 };
	}

	namespace BSInputEnableLayer
	{
		inline constexpr REL::RelocationID DecRef{ 659989, 2268272, 2268272 };
	}

	namespace BSInputEnableManager
	{
		inline constexpr REL::RelocationID Singleton{ 781703, 2689007, 4796297 };
		inline constexpr REL::RelocationID AllocateNewLayer{ 537494, 2268244, 2268244 };
		inline constexpr REL::RelocationID EnableUserEvent{ 1432984, 2268263, 2268263 };
		inline constexpr REL::RelocationID EnableOtherEvent{ 1419268, 2268265, 2268265 };
	}

	namespace BSModelDB
	{
		inline constexpr REL::RelocationID Demand1{ 1066398, 0, 2275153 };
		inline constexpr REL::RelocationID Demand2{ 1225688, 0, 2275154 };
	}

	namespace BSPointerHandle
	{
		namespace BSPointerHandleManagerInterface
		{
			inline constexpr REL::RelocationID CreateHandle{ 224532, 2188375, 2188375 };
			inline constexpr REL::RelocationID GetHandle{ 901626, 2188676, 2188676 };
			inline constexpr REL::RelocationID GetSmartPointer{ 967277, 2188681, 2188681 };
		}
	}

	namespace BSRandom
	{
		inline constexpr REL::RelocationID UnsignedInt{ 694400, 2267950, 2267950 };
		inline constexpr REL::RelocationID Float{ 0, 0, 2267953 };
		inline constexpr REL::RelocationID Float0To1{ 0, 0, 2267954 };
		inline constexpr REL::RelocationID Int{ 0, 0, 2267952 };
	}

	namespace BSResource_Archive2_AsyncReaderStream
	{
		inline constexpr REL::RelocationID DoOpen{ 1401160, 0, 2269387 };
		inline constexpr REL::RelocationID DoClose{ 883012, 0, 2269380 };
		inline constexpr REL::RelocationID DoClone{ 803750, 0, 2269379 };
		inline constexpr REL::RelocationID DoStartRead{ 1215072, 0, 2269395 };
		inline constexpr REL::RelocationID DoStartPacketAlignedBufferedRead{ 603387, 0, 2269394 };
		inline constexpr REL::RelocationID DoWait{ 244066, 2269399, 2269399 };
	}

	namespace BSResource_Archive2_ReaderStream
	{
		inline constexpr REL::RelocationID DoOpen{ 762048, 0, 2269280 };
		inline constexpr REL::RelocationID DoClose{ 109149, 0, 2269285 };
		inline constexpr REL::RelocationID DoGetKey{ 772817, 0, 2269288 };
		inline constexpr REL::RelocationID DoClone{ 855081, 0, 2269279 };
		inline constexpr REL::RelocationID DoRead{ 1359347, 0, 2269281 };
		inline constexpr REL::RelocationID DoSeek{ 1000164, 0, 2269282 };
		inline constexpr REL::RelocationID DoPrefetchAll{ 1518821, 0, 2269390 };
		inline constexpr REL::RelocationID DoCreateAsync{ 893405, 0, 2269287 };
	}

	namespace BSResource_EntryDBBaseUtil
	{
		inline constexpr REL::RelocationID ReleaseEntryAction{ 777279, 0, 2269463 };
	}

	namespace BSResource_GlobalLocations
	{
		inline constexpr REL::RelocationID Singleton{ 1573818, 0, 2703394 };
	}

	namespace BSResource_GlobalPaths
	{
		inline constexpr REL::RelocationID Singleton{ 210868, 0, 2703393 };
	}

	namespace BSResource
	{
		inline constexpr REL::RelocationID RegisterLocation{ 918408, 0, 2269481 };
		inline constexpr REL::RelocationID GetOrCreateStream{ 1143155, 2269490, 2269490 };

		namespace ID
		{
			inline constexpr REL::RelocationID GenerateFromPath{ 0, 0, 2269259 };
		}
	}

	namespace BSResourceNiBinaryStream
	{
		inline constexpr REL::RelocationID Seek{ 358512, 2269834, 2269834 };
		inline constexpr REL::RelocationID DoRead{ 424286, 2269839, 2269839 };
		inline constexpr REL::RelocationID DoWrite{ 1208863, 2269840, 2269840 };
		inline constexpr REL::RelocationID GetBufferInfo{ 265501, 2269836, 2269836 };
		inline constexpr REL::RelocationID Ctor{ 1198116, 2269830, 2269830 };
		inline constexpr REL::RelocationID Dtor{ 1516202, 2269832, 2269832 };
		inline constexpr REL::RelocationID BinaryStreamWithRescan{ 543595, 2205871, 2205871 };
	}

	namespace BSScaleformManager
	{
		inline constexpr REL::RelocationID Singleton{ 106578, 2689600, 4796889 };
		inline constexpr REL::RelocationID LoadMovie{ 1526234, 0, 2287422 };
		inline constexpr REL::RelocationID GetMovieFilename{ 1191277, 0, 2287428 };
		inline constexpr REL::RelocationID InitMovieViewport{ 206895, 0, 4494254 };
		inline constexpr REL::RelocationID FileUncacheOnMenuOpen{ 454316, 0, 2667999 };
		inline constexpr REL::RelocationID IsNameValid{ 0, 0, 2287425 };
	}

	namespace BSScaleformRenderer
	{
		inline constexpr REL::RelocationID Initialize{ 1403529, 0, 2284938 };
	}

	namespace BSScaleformTranslator
	{
		inline constexpr REL::RelocationID AddTranslations{ 0, 0, 2295298 };
	}

	namespace BSScript_Array
	{
		inline constexpr REL::RelocationID ctor{ 0, 0, 2314915 };
	}

	namespace BSScript_ArrayWrapper
	{
		inline constexpr REL::RelocationID ReplaceArray{ 445184, 0, 2250435 };
	}

	namespace BSScript_Internal_NativeFunctionBase
	{
		inline constexpr REL::RelocationID Call{ 571037, 2314780, 2314780 };
	}

	namespace BSScript_Internal_Stack
	{
		inline constexpr REL::RelocationID GetPageForFrame{ 1429302, 0, 2314680 };
		inline constexpr REL::RelocationID GetStackFrameVariable{ 897539, 2314681, 2314681 };
	}

	namespace BSScript_Object
	{
		inline constexpr REL::RelocationID DecRef{ 541793, 2314437, 2314437 };
		inline constexpr REL::RelocationID GetHandle{ 0, 0, 2314431 };
		inline constexpr REL::RelocationID IncRef{ 461710, 2314436, 2314436 };
	}

	namespace BSScript_ObjectTypeInfo
	{
		inline constexpr REL::RelocationID dtor{ 1047917, 2314513, 2314513 };
	}

	namespace BSScript_ObjectBindPolicy
	{
		inline constexpr REL::RelocationID BindObject{ 0, 0, 2314370 };
		inline constexpr REL::RelocationID UnbindObject{ 0, 0, 2314372 };
	}

	namespace BSScriptUtil
	{
		inline constexpr REL::RelocationID BaseObjectName{ 0, 0, 2702269 };
	}

	namespace BSShaderProperty
	{
		inline constexpr REL::RelocationID SetMaterial{ 706318, 0, 2316285 };
	}

	namespace BSShaderTextureSet
	{
		inline constexpr REL::RelocationID CreateObject{ 0, 2316324, 2316324 };
	}

	namespace BSSoundHandle
	{
		inline constexpr REL::RelocationID FadeInPlay{ 353528, 2267075, 2267075 };
		inline constexpr REL::RelocationID FadeOutAndRelease{ 260328, 2267076, 2267076 };
		inline constexpr REL::RelocationID IsPlaying{ 0, 0, 2267046 };
		inline constexpr REL::RelocationID Play{ 0, 0, 2276042 };
		inline constexpr REL::RelocationID SetOutputModel{ 0, 0, 2267053 };
		inline constexpr REL::RelocationID Stop{ 0, 0, 2267045 };
	}

	namespace BSSpinLock
	{
		namespace BSReadWriteLock
		{
			inline constexpr REL::RelocationID lock_read{ 1573164, 2267897, 2267897 };
			inline constexpr REL::RelocationID lock_write{ 336186, 2267898, 2267898 };
			inline constexpr REL::RelocationID try_lock_read{ 1372435, 2267901, 2267901 };
			inline constexpr REL::RelocationID try_lock_write{ 1279453, 2267902, 2267902 };
		}

		inline constexpr REL::RelocationID lock{ 1425657, 2192245, 2192245 };
		inline constexpr REL::RelocationID try_lock{ 267930, 2267902, 2267902 };
	}

	namespace BSStringPool
	{
		namespace Entry
		{
			inline constexpr REL::RelocationID Release{ 1204430, 2268720, 2268720 };
		}

		inline constexpr REL::RelocationID GetEntry_char{ 507142, 2268729, 2268729 };
		inline constexpr REL::RelocationID GetEntry_wchar{ 345043, 2268730, 2268730 };
	}

	namespace BSStringT
	{
		inline constexpr REL::RelocationID Set{ 0, 0, 4471693 };
	}

	namespace BSSystemFileStreamer
	{
		inline constexpr REL::RelocationID UncacheAll{ 40925, 0, 2268797 };
	}

	namespace BSTempEffectDebris
	{
		inline constexpr REL::RelocationID ctor{ 1075623, 2212059, 2212059 };
	}

	namespace BSTempEffectWeaponBlood
	{
		inline constexpr REL::RelocationID ClearEffectForWeapon{ 0, 0, 2212158 };
	}

	namespace BSTEvent
	{
		namespace BSTGlobalEvent
		{
			inline constexpr REL::RelocationID Singleton{ 1424022, 2688814, 4796078 };
		}
	}

	namespace BSThreadEvent
	{
		inline constexpr REL::RelocationID InitSDM{ 1425097, 0, 2268180 };
	}

	namespace BSTimer
	{
		inline constexpr REL::RelocationID Singleton{ 0, 0, 2703179 };
		inline constexpr REL::RelocationID QGlobalTimeMultiplier{ 0, 0, 2666307 };
		inline constexpr REL::RelocationID QGlobalTimeMultiplierTarget{ 0, 0, 2666308 };
		inline constexpr REL::RelocationID SetGlobalTimeMultiplier{ 1419977, 2267970, 2267970 };
	}

	namespace BSUIMessageData
	{
		inline constexpr REL::RelocationID SendUIBoolMessage{ 1388308, 0, 2284981 };
		inline constexpr REL::RelocationID SendUIStringMessage{ 1270833, 0, 2284977 };
		inline constexpr REL::RelocationID SendUIPtrMessage{ 1374542, 0, 2284982 };
		inline constexpr REL::RelocationID SendUIStringUIntMessage{ 99795, 0, 2284979 };
	}

	namespace BSUtilities
	{
		inline constexpr REL::RelocationID ConvertFloatToHalf{ 10414, 2212098, 2212098 };
		inline constexpr REL::RelocationID ConvertHalfToFloat{ 1502141, 2195843, 2195843 };
		inline constexpr REL::RelocationID GetObjectByName{ 843650, 2274841, 2274841 };
		inline constexpr REL::RelocationID GetFlattenedBoneTree{ 0, 0, 2274858 };
	}

	namespace Calendar
	{
		inline constexpr REL::RelocationID Singleton{ 1444952, 2689092, 4796378 };
		inline constexpr REL::RelocationID GetDaysPassed{ 0, 0, 2228563 };
	}

	namespace CanDisplayNextHUDMessage
	{
		inline constexpr REL::RelocationID GetEventSource{ 344866, 0, 4802332 };
	}

	namespace CellAttachDetachEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 0, 2192250 };
		namespace CellAttachDetachEventSourceSingleton
		{
			inline constexpr REL::RelocationID GetSingleton{ 862142, 2192250, 2192250 };
		}
	}

	namespace ColorUpdateEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 1226590, 0, 4802831 };
	}

	namespace CombatBehaviorFindObject
	{
		inline constexpr REL::RelocationID EvaluateArmor{ 0, 0, 2241004 };
	}

	namespace CombatFormulas
	{
		inline constexpr REL::RelocationID GetWeaponDisplayAccuracy{ 1137654, 0, 2209049 };
		inline constexpr REL::RelocationID GetWeaponDisplayDamage{ 1431014, 0, 2209046 };
		inline constexpr REL::RelocationID GetWeaponDisplayRange{ 1324037, 0, 2209047 };
		inline constexpr REL::RelocationID GetWeaponDisplayRateOfFire{ 1403591, 0, 2209048 };
		inline constexpr REL::RelocationID CalcTargetedLimbDamage{ 0, 0, 2209033 };
		inline constexpr REL::RelocationID CalcWeaponDamage{ 0, 0, 2209001 };
		inline constexpr REL::RelocationID GetNumCrippledAttackConditions{ 0, 0, 2209041 };
		inline constexpr REL::RelocationID CalcScopeSteadyActionPointDrain{ 0, 0, 2209045 };
	}

	namespace CombatUtilities
	{
		inline constexpr REL::RelocationID CalculateProjectileLOS1{ 798616, 0, 2240617 };
		inline constexpr REL::RelocationID CalculateProjectileLOS2{ 55339, 0, 2240616 };
		inline constexpr REL::RelocationID CalculateProjectileTrajectory{ 1575156, 0, 2240611 };
		inline constexpr REL::RelocationID WorldGravity{ 1378547, 0, 2700340 };
		inline constexpr REL::RelocationID IsActorUsingMelee{ 0, 0, 2240626 };
		inline constexpr REL::RelocationID IsActorUsingUnarmed{ 0, 0, 2240625 };
	}

	namespace ComparisonQualifiers
	{
		inline constexpr REL::RelocationID ContainerQualifier{ 0, 0, 2190674 };
		inline constexpr REL::RelocationID UIQualifier{ 0, 0, 2190675 };
	}

	namespace Console
	{
		inline constexpr REL::RelocationID ExecuteCommand{ 1061864, 2248537, 2248537 };
		inline constexpr REL::RelocationID GetCurrentPickIndex{ 1407033, 2701382, 2701382 };
		inline constexpr REL::RelocationID GetPickRef{ 170742, 2701395, 2701395 };
		inline constexpr REL::RelocationID GetPickRefs{ 875116, 2701391, 2701391 };
		inline constexpr REL::RelocationID SetCurrentPickREFR{ 79066, 2248551, 2248551 };
	}

	namespace ConsoleLog
	{
		inline constexpr REL::RelocationID Singleton{ 689441, 2690148, 4797437 };
		inline constexpr REL::RelocationID AddString{ 764, 2248593, 2248593 };
		inline constexpr REL::RelocationID Print{ 799546, 2248591, 2248591 };
	}

	namespace ContainerMenu
	{
		inline constexpr REL::RelocationID TakeAllItems{ 1323703, 0, 2248619 };
	}

	namespace ContainerMenuBase
	{
		namespace ItemSorter
		{
			inline constexpr REL::RelocationID IncrementSort{ 1307263, 0, 2222848 };
		}
	}

	namespace ControlMap
	{
		inline constexpr REL::RelocationID Singleton{ 325206, 2692014, 4799307 };
		inline constexpr REL::RelocationID PopInputContext{ 74587, 2268336, 2268336 };
		inline constexpr REL::RelocationID PushInputContext{ 1404410, 2268335, 2268335 };
		inline constexpr REL::RelocationID RemapButton{ 11351, 0, 2268330 };
		inline constexpr REL::RelocationID SaveRemappings{ 1141541, 0, 2268331 };
		inline constexpr REL::RelocationID SetTextEntryMode{ 1270079, 2268339, 4491359 };
	}

	namespace CurrentRadiationSourceCount
	{
		inline constexpr REL::RelocationID GetEventSource{ 696410, 2696196, 4803487 };
	}

	namespace DEFAULT_OBJECT_DATA
	{
		inline constexpr REL::RelocationID GetDefaultObjectData{ 838886, 0, 838886 };
	}

	namespace DialogueCameraState
	{
		inline constexpr REL::RelocationID UpdateActorsAndAction{ 0, 0, 2214898 };
	}

	namespace DialogueMenuUtils
	{
		inline constexpr REL::RelocationID OpenMenu{ 0, 0, 2249658 };
		inline constexpr REL::RelocationID CloseMenu{ 0, 0, 2249659 };
		inline constexpr REL::RelocationID ShowSpeechChallengeAnim{ 0, 0, 2249665 };
	}

	namespace DoBeforeNewOrLoadCompletedEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 787908, 0, 4802833 };
	}

	namespace EffectItem
	{
		inline constexpr REL::RelocationID GetDescription{ 949839, 2189612, 2189612 };
	}

	namespace EquippedWeaponData
	{
		inline constexpr REL::RelocationID SetupFireSounds{ 1468462, 2232275, 2232275 };
	}

	namespace ExamineMenu
	{
		inline constexpr REL::RelocationID BuildWeaponScrappingArray{ 646841, 0, 2223077 };
		inline constexpr REL::RelocationID GetSelectedIndex{ 776503, 2223022, 2223022 };
		inline constexpr REL::RelocationID ShowConfirmMenu{ 443081, 2223081, 2223081 };
		inline constexpr REL::RelocationID ConsumeSelectedItems{ 0, 0, 2223052 };
		inline constexpr REL::RelocationID BuildConfirmed{ 0, 0, 2223013 };
		inline constexpr REL::RelocationID GetBuildConfirmQuestion{ 0, 0, 2223057 };
	}

	namespace ExteriorCellSingleton
	{
		inline constexpr REL::RelocationID Singleton{ 0, 0, 4796370 };
	}

	namespace ExtraDataList
	{
		inline constexpr REL::RelocationID CreateInstanceData{ 1280130, 2190185, 2190185 };
		inline constexpr REL::RelocationID GetLegendaryMod{ 178075, 2190180, 2190180 };
		inline constexpr REL::RelocationID SetBendableSplineInfo{ 894306, 2190623, 2190623 };
		inline constexpr REL::RelocationID SetDisplayNameFromInstanceData{ 457340, 2190179, 2190179 };
		inline constexpr REL::RelocationID SetOverrideName{ 222303, 2190167, 2190167 };
		inline constexpr REL::RelocationID SetStartingWorldOrCell{ 603621, 2191213, 2191213 };
		inline constexpr REL::RelocationID GetHealthPerc{ 196530, 2190226, 2190226 };
		inline constexpr REL::RelocationID SetHealthPerc{ 1208294, 2190124, 2190124 };
		inline constexpr REL::RelocationID ClearFavorite{ 254434, 2190191, 2190191 };
		inline constexpr REL::RelocationID IsFavorite{ 786568, 2190189, 2190189 };
		inline constexpr REL::RelocationID IsDamaged{ 0, 0, 2190224 };
		inline constexpr REL::RelocationID CompareList{ 0, 0, 2190098 };
		inline constexpr REL::RelocationID SetFavorite{ 0, 0, 2190188 };
		inline constexpr REL::RelocationID GetPrimitive{ 0, 0, 2190427 };
	}

	namespace ExtraTextDisplayData
	{
		inline constexpr REL::RelocationID GetDisplayName{ 1523343, 0, 2191318 };
	}

	namespace FavoritesManager
	{
		inline constexpr REL::RelocationID Singleton{ 198281, 2694399, 4801690 };
		inline constexpr REL::RelocationID IsComponentFavorite{ 352046, 2248752, 2248752 };
		inline constexpr REL::RelocationID UseQuickkeyItem{ 0, 0, 2248744 };
		inline constexpr REL::RelocationID HandleEvent{ 0, 0, 2248740 };
		inline constexpr REL::RelocationID Call{ 0, 0, 2248766 };
		inline constexpr REL::RelocationID ClearCurrentAmmoCount{ 0, 0, 2248745 };
	}

	namespace FlatScreenModel
	{
		inline constexpr REL::RelocationID Singleton{ 847741, 0, 4801718 };
	}

	namespace GameMenuBase
	{
		inline constexpr REL::RelocationID SetIsTopButtonBar{ 1367353, 0, 2223204 };
		inline constexpr REL::RelocationID OnMenuDisplayStateChanged{ 1274450, 0, 2223205 };
		inline constexpr REL::RelocationID CacheShaderFXQuadsForRenderer_Impl{ 863029, 0, 2223200 };
		inline constexpr REL::RelocationID TransferCachedShaderFXQuadsForRenderer{ 65166, 0, 2223201 };
		inline constexpr REL::RelocationID SetViewportRect{ 1554334, 0, 2223202 };
		inline constexpr REL::RelocationID AppendShaderFXInfos{ 583584, 0, 2223203 };
		inline constexpr REL::RelocationID SetUpButtonBar{ 531584, 0, 2223197 };
	}

	namespace GamePlayFormulas
	{
		inline constexpr REL::RelocationID CanHackGateCheck{ 269668, 0, 2209069 };
		inline constexpr REL::RelocationID CanPickLockGateCheck{ 1160841, 0, 2209066 };
		inline constexpr REL::RelocationID GetExperienceReward{ 853500, 0, 2209076 };
		inline constexpr REL::RelocationID GetLockXPReward{ 880926, 0, 2209070 };
		inline constexpr REL::RelocationID CalculateItemHealthDamageBonus{ 0, 0, 2209087 };
		inline constexpr REL::RelocationID CalcSpringingActionPoints{ 0, 0, 2209071 };
		inline constexpr REL::RelocationID GetSweetSpotAngle{ 0, 0, 2209082 };
		inline constexpr REL::RelocationID GetPartialPickAngle{ 0, 0, 2209083 };
		inline constexpr REL::RelocationID GetPickBreakSeconds{ 0, 0, 2209084 };
		inline constexpr REL::RelocationID GetHackingWordCount{ 0, 0, 2209067 };
		inline constexpr REL::RelocationID CalculateItemValue{ 0, 0, 2209074 };
		inline constexpr REL::RelocationID GetForceLockChance{ 0, 0, 2209065 };
	}

	namespace GameScript
	{
		namespace HandlePolicy
		{
			inline constexpr REL::RelocationID DropSaveLoadRemapData{ 647657, 2249995, 2249995 };
			inline constexpr REL::RelocationID GetInventoryObjFromHandle{ 66597, 2249989, 2249989 };
			inline constexpr REL::RelocationID UpdatePersistence{ 11020, 2249991, 2249991 };
		}

		namespace ObjectBindPolicy
		{
			inline constexpr REL::RelocationID EndSaveLoad{ 1558837, 2250482, 2250482 };
		}

		namespace GameVM
		{
			inline constexpr REL::RelocationID Singleton{ 996227, 2689134, 4796420 };
			inline constexpr REL::RelocationID QueuePostRenderCall{ 34412, 2251314, 2251314 };
			inline constexpr REL::RelocationID RegisterForAllGameEvents{ 680454, 2251353, 2251353 };
			inline constexpr REL::RelocationID SendEventToObjectAndRelated{ 367992, 0, 2251344 };
		}

		inline constexpr REL::RelocationID LogFormError{ 1081933, 2251028, 2251028 };
		inline constexpr REL::RelocationID BindCObject{ 81787, 0, 2249771 };
	}

	namespace GameUIModel
	{
		inline constexpr REL::RelocationID Singleton{ 17419, 0, 4802814 };
		inline constexpr REL::RelocationID SetGameColors{ 0, 0, 2220911 };
		inline constexpr REL::RelocationID UpdateDataModels{ 1269653, 2220905, 2220905 };
	}

	namespace GridCellArray
	{
		inline constexpr REL::RelocationID Get{ 0, 0, 2194566 };
	}

	namespace HolotapeMenu
	{
		inline constexpr REL::RelocationID ShowHolotapeInPipboy{ 217953, 0, 2224028 };
		inline constexpr REL::RelocationID ShowHolotapeInTerminal{ 390509, 0, 2224029 };
	}

	namespace HUDExperienceMeter
	{
		inline constexpr REL::RelocationID UpdateDisplayObject{ 0, 0, 2220382 };
	}

	namespace HUDMenu
	{
		inline constexpr REL::RelocationID SetHUDColor{ 0, 0, 2248918 };
	}

	namespace HUDMenuUtils
	{
		inline constexpr REL::RelocationID GetGameplayHUDColor{ 0, 0, 2248840 };
		inline constexpr REL::RelocationID GetGameplayHUDBackgroundColor{ 0, 0, 2248845 };
		inline constexpr REL::RelocationID WorldPtToScreenPt3{ 0, 0, 2222464 };
	}

	namespace HUDModeEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 683142, 0, 4801988 };
	}

	namespace IAnimationGraphManagerHolder
	{
		inline constexpr REL::RelocationID SetGraphVariableBool{ 1437197, 2214543, 2214543 };
		inline constexpr REL::RelocationID SetGraphVariableFloat{ 27400, 0, 2214545 };
		inline constexpr REL::RelocationID SetGraphVariableInt{ 732926, 0, 2214544 };
		inline constexpr REL::RelocationID RevertAnimationGraphManager{ 41382, 2214541, 2214541 };
	}

	namespace IFormFactory
	{
		inline constexpr REL::RelocationID Factories{ 228366, 2689177, 4796464 };
	}

	namespace ImageSpaceEffectFullScreenBlur
	{
		inline constexpr REL::RelocationID Disable{ 372489, 2713225, 2713225 };
	}

	namespace ImageSpaceEffectGetHit
	{
		inline constexpr REL::RelocationID Disable{ 1523708, 2713237, 2713237 };
	}

	namespace ImageSpaceEffectHDR
	{
		inline constexpr REL::RelocationID UsePipboyScreenMask{ 0, 0, 4784697 };
	}

	namespace ImageSpaceEffectPipboyScreen
	{
		inline constexpr REL::RelocationID PowerArmorPipboy{ 1065542, 0, 2713203 };
	}

	namespace ImageSpaceEffectRadialBlur
	{
		inline constexpr REL::RelocationID Disable{ 1500590, 2713225, 2713225 };
	}

	namespace ImageSpaceEffectTemporalAA
	{
		inline constexpr REL::RelocationID MaskS{ 775377, 0, 2713052 };
	}

	namespace ImageSpaceManager
	{
		inline constexpr REL::RelocationID Singleton{ 161743, 2712627, 2712627 };
	}

	namespace ImageSpaceModifierInstance
	{
		inline constexpr REL::RelocationID Stop{ 0, 0, 2199897 };
	}

	namespace ImageSpaceModifierInstanceDOF
	{
		inline constexpr REL::RelocationID Trigger{ 0, 0, 2199922 };
	}

	namespace ImageSpaceModifierInstanceForm
	{
		inline constexpr REL::RelocationID Trigger1{ 179769, 2199906, 2199906 };
		inline constexpr REL::RelocationID Trigger2{ 1216312, 2199907, 2199907 };
		inline constexpr REL::RelocationID Stop1{ 217873, 2199909, 2199909 };
		inline constexpr REL::RelocationID Stop2{ 549773, 2199910, 2199910 };
	}

	namespace IMenu
	{
		inline constexpr REL::RelocationID ShouldHandleEvent{ 1241790, 0, 2287392 };
		inline constexpr REL::RelocationID PassesRenderConditionText{ 937304, 2287379, 2287379 };
		inline constexpr REL::RelocationID OnSetSafeRect{ 964859, 0, 2287375 };
		inline constexpr REL::RelocationID ProcessScaleformEvent{ 150211, 0, 2287395 };
		inline constexpr REL::RelocationID RefreshPlatform{ 1071829, 0, 2287374 };
	}

	namespace Interface3D
	{
		inline constexpr REL::RelocationID Create{ 88488, 0, 2222519 };
		inline constexpr REL::RelocationID GetByName{ 140387, 0, 2222524 };
		inline constexpr REL::RelocationID MainScreen_AddPointLight{ 1335675, 0, 2222531 };
		inline constexpr REL::RelocationID MainScreen_AddSpotLight{ 1056093, 0, 2222532 };
		inline constexpr REL::RelocationID MainScreen_ClearLights{ 683530, 0, 2222533 };
		inline constexpr REL::RelocationID MainScreen_SetScreenAttached3D{ 817727, 0, 2222528 };
		inline constexpr REL::RelocationID MainScreen_SetWorldAttached3D{ 724778, 0, 2222529 };
		inline constexpr REL::RelocationID Offscreen_AddLight{ 1267198, 0, 2222543 };
		inline constexpr REL::RelocationID Offscreen_Clear3D{ 1533262, 0, 2222542 };
		inline constexpr REL::RelocationID Offscreen_ClearLights{ 1039253, 0, 2222545 };
		inline constexpr REL::RelocationID Offscreen_GetRenderTargetHeight{ 1280897, 0, 2222538 };
		inline constexpr REL::RelocationID Offscreen_GetRenderTargetWidth{ 403273, 0, 2222537 };
		inline constexpr REL::RelocationID Offscreen_Set3D{ 43983, 0, 2222541 };
		inline constexpr REL::RelocationID Offscreen_SetDebugMode{ 1277879, 0, 2222549 };
		inline constexpr REL::RelocationID Offscreen_SetDirectionalLight{ 987144, 0, 2222544 };
		inline constexpr REL::RelocationID Enable{ 326895, 0, 2222522 };
		inline constexpr REL::RelocationID Disable{ 938370, 0, 2222523 };
		inline constexpr REL::RelocationID DisableAll{ 0, 0, 2222521 };
		inline constexpr REL::RelocationID Release{ 74749, 0, 2222520 };
		inline constexpr REL::RelocationID SetViewport{ 825410, 0, 2222552 };
	}

	namespace Inventory3DManager
	{
		inline constexpr REL::RelocationID Begin3D{ 662659, 0, 2249084 };
		inline constexpr REL::RelocationID ClearModel{ 63218, 0, 2249113 };
		inline constexpr REL::RelocationID DisableRendering{ 255893, 0, 2249099 };
		inline constexpr REL::RelocationID EnableRendering{ 176578, 0, 2249098 };
		inline constexpr REL::RelocationID End3D{ 1512675, 0, 2249086 };
		inline constexpr REL::RelocationID SetModelScale{ 1319701, 0, 2249097 };
		inline constexpr REL::RelocationID SetModelScreenPosition{ 2967, 0, 2249096 };
	}

	namespace InventoryItemDisplayData
	{
		inline constexpr REL::RelocationID ctor{ 679373, 0, 2222612 };
	}

	namespace InventoryUserUIUtils
	{
		inline constexpr REL::RelocationID AddItemCardInfoEntry{ 489521, 0, 2222648 };
		inline constexpr REL::RelocationID PopulateItemCardInfo_Helper{ 0, 0, 2222625 };
	}

	namespace ItemCrafted
	{
		inline constexpr REL::RelocationID NotifyOfItemCrafted{ 788895, 2232809, 2232809 };
		inline constexpr REL::RelocationID RegisterSink{ 1320496, 2232807, 2232807 };
		inline constexpr REL::RelocationID UnregisterSink{ 1054567, 2232808, 2232808 };
	}

	namespace LevelIncrease
	{
		inline constexpr REL::RelocationID GetEventSource{ 349120, 0, 2233736 };
	}

	namespace LoadingMenu
	{
		inline constexpr REL::RelocationID StartTestingLoadMenu{ 0, 0, 2249224 };
		inline constexpr REL::RelocationID PopulateLoadScreens{ 0, 0, 2249232 };
	}

	namespace LockpickingMenu
	{
		inline constexpr REL::RelocationID OpenLockpickingMenu{ 129892, 0, 2249263 };
	}

	namespace LocksPicked
	{
		inline constexpr REL::RelocationID GetEventSource{ 594991, 0, 2249292 };
	}

	namespace MagicTarget
	{
		inline constexpr REL::RelocationID IsTakingHealthDamageFromActiveEffect{ 999442, 2226397, 2226397 };
		inline constexpr REL::RelocationID IsTakingRadDamageFromActiveEffect{ 1079111, 2226398, 2226398 };
	}

	namespace Main
	{
		inline constexpr REL::RelocationID Singleton{ 756304, 2698043, 2698043 };
		inline constexpr REL::RelocationID WorldRootCamera{ 384264, 2228956, 2228956 };
		inline constexpr REL::RelocationID WorldRootNode{ 0, 0, 2698065 };
		inline constexpr REL::RelocationID QGameSystemsShouldUpdate{ 0, 2698031, 2698031 };
		inline constexpr REL::RelocationID QGameDataLoaded{ 0, 2698032, 2698032 };
		inline constexpr REL::RelocationID SetCameraFOV{ 0, 0, 2228973 };
	}

	namespace MemoryManager
	{
		namespace AutoScrapBuffer
		{
			inline constexpr REL::RelocationID ctor{ 1571567, 2267865, 2267865 };
			inline constexpr REL::RelocationID dtor{ 68625, 2267867, 2267867 };
		}

		inline constexpr REL::RelocationID Singleton{ 343176, 2193197, 4471522 };
		inline constexpr REL::RelocationID Allocate{ 652767, 2267872, 2267872 };
		inline constexpr REL::RelocationID Deallocate{ 1582181, 2267874, 2267874 };
		inline constexpr REL::RelocationID GetThreadScrapHeap{ 1495205, 2267850, 2267850 };
		inline constexpr REL::RelocationID Reallocate{ 1502917, 2267873, 2267873 };
		inline constexpr REL::RelocationID RegisterMemoryManager{ 453212, 2228356, 2228356 };
	}

	namespace MenuControls
	{
		inline constexpr REL::RelocationID Singleton{ 520890, 2689089, 4796375 };
	}

	namespace MenuCursor
	{
		inline constexpr REL::RelocationID Singleton{ 695696, 0, 4803837 };
		inline constexpr REL::RelocationID CenterCursor{ 1107298, 0, 2287473 };
		inline constexpr REL::RelocationID RegisterCursor{ 1318193, 0, 2287475 };
		inline constexpr REL::RelocationID SetCursorConstraintsRaw{ 907092, 0, 2287480 };
		inline constexpr REL::RelocationID UnregisterCursor{ 1225249, 0, 2287486 };
		inline constexpr REL::RelocationID PipboyConstraintTLX{ 60674, 0, 280077 };
		inline constexpr REL::RelocationID PipboyConstraintTLY{ 719279, 0, 938173 };
		inline constexpr REL::RelocationID PipboyConstraintWidth{ 1376729, 0, 13663 };
		inline constexpr REL::RelocationID PipboyConstraintHeight{ 452591, 0, 672503 };
		inline constexpr REL::RelocationID PipboyConstraintTLX_PowerArmor{ 1110986, 0, 1330184 };
		inline constexpr REL::RelocationID PipboyConstraintTLY_PowerArmor{ 187113, 0, 406096 };
		inline constexpr REL::RelocationID PipboyConstraintWidth_PowerArmor{ 844985, 0, 1064265 };
		inline constexpr REL::RelocationID PipboyConstraintHeight_PowerArmor{ 1503497, 0, 140195 };
	}

	namespace MenuTopicManager
	{
		inline constexpr REL::RelocationID Singleton{ 520890, 2689089, 4796375 };
	}

	namespace MessageBoxMenu
	{
		inline constexpr REL::RelocationID ShowMessage{ 442479, 0, 2249469 };
	}

	namespace MessageMenuManager
	{
		inline constexpr REL::RelocationID Singleton{ 959572, 2689087, 4796373 };
		inline constexpr REL::RelocationID Create{ 89563, 2249456, 2249456 };
	}

	namespace Moon
	{
		inline constexpr REL::RelocationID Init{ 0, 0, 2208804 };
	}

	namespace NiAlphaProperty
	{
		inline constexpr REL::RelocationID SetDestBlendMode{ 0, 0, 0 };  // inlined
		inline constexpr REL::RelocationID SetSrcBlendMode{ 0, 0, 0 };   // inlined
		inline constexpr REL::RelocationID SetTestMode{ 0, 0, 0 };       // inlined
		inline constexpr REL::RelocationID SetAlphaBlending{ 0, 0, 0 };  // inlined
		inline constexpr REL::RelocationID SetAlphaTesting{ 0, 0, 0 };   // inlined
	}

	namespace NiCamera
	{
		inline constexpr REL::RelocationID BoundInFrustum{ 0, 0, 2194525 };
		inline constexpr REL::RelocationID WorldPtToScreenPt3{ 0, 0, 2270344 };
		inline constexpr REL::RelocationID ViewPointToRay{ 0, 0, 2270338 };
	}

	namespace NiControllerManager
	{
		inline constexpr REL::RelocationID GetNiControllerManager{ 1013515, 2271798, 2271798 };
		inline constexpr REL::RelocationID GetSequenceByName{ 846648, 0, 2192808 };
	}

	namespace NiControllerSequence
	{
		inline constexpr REL::RelocationID Activate{ 829033, 2271861, 2271861 };
	}

	namespace NiMatrix3
	{
		inline constexpr REL::RelocationID ToEulerAnglesXYZ1{ 34114, 2269806, 2269806 };
		inline constexpr REL::RelocationID ToEulerAnglesXZY2{ 0, 2269807, 2269807 };
		inline constexpr REL::RelocationID ToEulerAnglesYXZ3{ 0, 2269808, 2269808 };
		inline constexpr REL::RelocationID ToEulerAnglesYZX4{ 0, 2269809, 2269809 };
		inline constexpr REL::RelocationID ToEulerAnglesZYX5{ 511385, 2269810, 2269810 };
		inline constexpr REL::RelocationID ToEulerAnglesZXY6{ 0x141b926f0, 2269824, 2269824 };
		inline constexpr REL::RelocationID FromEulerAnglesXYZ1{ 124665, 2269813, 2269813 };
		inline constexpr REL::RelocationID FromEulerAnglesXZY2{ 0, 2269814, 2269814 };
		inline constexpr REL::RelocationID FromEulerAnglesYXZ3{ 0, 2269815, 2269815 };
		inline constexpr REL::RelocationID FromEulerAnglesYZX4{ 0, 2269816, 2269816 };
		inline constexpr REL::RelocationID FromEulerAnglesZYX5{ 1569564, 2269817, 2269817 };
		inline constexpr REL::RelocationID FromEulerAnglesZXY6{ 326460, 2269825, 2269825 };
	}

	namespace NiNode
	{
		inline constexpr REL::RelocationID ChildrenVTable{ 390064, 0, 390064 };
	}

	namespace NiPoint
	{
		namespace NiPoint3
		{
			inline constexpr REL::RelocationID GetZAngleFromVector{ 1450064, 2269788, 2269788 };
		}
	}

	namespace NiRefObject
	{
		inline constexpr REL::RelocationID Objects{ 1161724, 0, 2703471 };
	}

	namespace NiTexture
	{
		inline constexpr REL::RelocationID SetAllowDegrade{ 948181, 0, 2270148 };
	}

	namespace nsHUDNotifications
	{
		inline constexpr REL::RelocationID IsQuestNotification{ 0, 0, 2222465 };
		inline constexpr REL::RelocationID IsObjectiveNotification{ 0, 0, 2222466 };
		inline constexpr REL::RelocationID IsLocationDiscoveredNotification{ 0, 0, 2222467 };
	}

	namespace nsHUDTypes
	{
		namespace NotificationInfo
		{
			inline constexpr REL::RelocationID ctor{ 0, 0, 2223292 };
		}
	}

	namespace nsStatsMenuUtils
	{
		inline constexpr REL::RelocationID GetEffectDisplayInfo{ 294691, 0, 2224586 };
	}

	namespace PerkPointIncreaseEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 685859, 0, 4804734 };
	}

	namespace PerkUtilities
	{
		inline constexpr REL::RelocationID RemoveGrenadeTrajectory{ 672186, 0, 2233303 };
	}

	namespace PipboyDataManager
	{
		inline constexpr REL::RelocationID Singleton{ 1178971, 2689086, 4796372 };
	}

	namespace PipboyDataGroup
	{
		inline constexpr REL::RelocationID LockDataGroup{ 0, 0, 2225147 };
		inline constexpr REL::RelocationID UnlockDataGroup{ 0, 0, 2225148 };
	}

	namespace PipboyInventoryData
	{
		inline constexpr REL::RelocationID AddItemCardInfoEntry{ 0, 0, 2225267 };
		inline constexpr REL::RelocationID BaseAddItemCardInfoEntry{ 0, 0, 2225270 };
		inline constexpr REL::RelocationID InitializeItem{ 0, 0, 2225264 };
		inline constexpr REL::RelocationID PopulateItemCardInfo{ 0, 0, 2225266 };
		inline constexpr REL::RelocationID QueueItemCardRepopulate{ 0, 0, 2225311 };
		inline constexpr REL::RelocationID RepopulateItemCardOnSection{ 0, 0, 2225279 };
	}

	namespace PipboyInventoryMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 762897, 2224143, 2224143 };
		inline constexpr REL::RelocationID SetQuickkey{ 0, 0, 2224159 };
	}

	namespace PipboyInventoryUtils
	{
		inline constexpr REL::RelocationID DoSlotsOverlap{ 1035436, 0, 2225230 };
		inline constexpr REL::RelocationID FillDamageTypeInfo{ 928518, 0, 2225234 };
		inline constexpr REL::RelocationID FillResistTypeInfo{ 1578434, 0, 2225235 };
	}

	namespace PipboyLightEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 1140080, 2696280, 4803571 };
	}

	namespace PipboyLogMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 672256, 0, 2224052 };
	}

	namespace PipboyManager
	{
		inline constexpr REL::RelocationID Singleton{ 553234, 2691945, 4799238 };
		inline constexpr REL::RelocationID AddMenuToPipboy{ 394568, 2225453, 2225453 };
		inline constexpr REL::RelocationID ClosedownPipboy{ 731410, 2225480, 2225480 };
		inline constexpr REL::RelocationID DisablePipboyShader{ 662519, 2225484, 2225484 };
		inline constexpr REL::RelocationID EnablePipboyShader{ 157921, 2225479, 2225484 };
		inline constexpr REL::RelocationID InitPipboy{ 1477369, 2225454, 2225454 };
		inline constexpr REL::RelocationID LowerPipboy{ 1444875, 2225457, 2225457 };
		inline constexpr REL::RelocationID OnPipboyCloseAnim{ 1231000, 2225459, 2225457 };
		inline constexpr REL::RelocationID OnPipboyCloseAnimFailed{ 1362084, 2225459, 2225459 };
		inline constexpr REL::RelocationID OnPipboyClosed{ 592088, 0, 2225458 };
		inline constexpr REL::RelocationID OnPipboyOpenAnim{ 1500318, 0, 2225448 };
		inline constexpr REL::RelocationID OnPipboyOpenAnimFailed{ 702357, 0, 2225449 };
		inline constexpr REL::RelocationID OnPipboyOpened{ 1299608, 0, 2225450 };
		inline constexpr REL::RelocationID PlayItemAnimOnClose{ 377837, 0, 2225461 };
		inline constexpr REL::RelocationID PlayPipboyCloseAnim{ 273927, 0, 2225456 };
		inline constexpr REL::RelocationID PlayPipboyGenericOpenAnim{ 809076, 0, 2225447 };
		inline constexpr REL::RelocationID PlayPipboyLoadHolotapeAnim{ 477096, 0, 2225446 };
		inline constexpr REL::RelocationID PlayPipboyOpenAnim{ 663900, 0, 2225444 };
		inline constexpr REL::RelocationID PlayPipboyOpenTerminalAnim{ 743427, 0, 2225445 };
		inline constexpr REL::RelocationID ProcessLoweringReason{ 302903, 0, 2225486 };
		inline constexpr REL::RelocationID QPipboyActive{ 470886, 0, 2225460 };
		inline constexpr REL::RelocationID RaisePipboy{ 726763, 0, 2225455 };
		inline constexpr REL::RelocationID RefreshPipboyRenderSurface{ 81339, 0, 2225478 };
		inline constexpr REL::RelocationID StartAnimationGraphListening{ 714713, 0, 2225490 };
		inline constexpr REL::RelocationID StopAnimationGraphListening{ 621144, 0, 2225491 };
		inline constexpr REL::RelocationID UpdateCursorConstraint{ 900802, 0, 2225488 };
	}

	namespace PipboyMapMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 92696, 0, 2224074 };
	}

	namespace PipboyMenu
	{
		inline constexpr REL::RelocationID RefreshMapMarkers{ 0, 0, 2224187 };
	}

	namespace PipboyObject
	{
		inline constexpr REL::RelocationID AddMember{ 0, 0, 2225699 };
	}

	namespace PipboyPerksMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 783380, 0, 2224224 };
	}

	namespace PipboyPlayerInfoData
	{
		inline constexpr REL::RelocationID UpdateCarryWeightData{ 0, 0, 2225788 };
	}

	namespace PipboyPlayerInfoMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 426990, 0, 2224248 };
	}

	namespace PipboyPrimitiveValue
	{
		namespace uint32
		{
			inline constexpr REL::RelocationID ctor{ 0, 0, 2225324 };
		}

		namespace boolean
		{
			inline constexpr REL::RelocationID ctor{ 0, 0, 2225327 };
		}
	}

	namespace PipboyQuestMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 1495929, 0, 2224231 };
	}

	namespace PipboyRadioMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 713423, 0, 2224242 };
	}

	namespace PipboySpecialMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 1426810, 0, 2224256 };
	}

	namespace PipboyStatsMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 332518, 0, 2224261 };
		inline constexpr REL::RelocationID UpdateActiveEffects{ 0, 0, 2224262 };
	}

	namespace PipboySubMenu
	{
		inline constexpr REL::RelocationID ProcessEvent{ 893703, 0, 2224270 };
	}

	namespace PipboyValue
	{
		inline constexpr REL::RelocationID ctor{ 0, 0, 2225915 };
	}

	namespace PipboyWorkshopMenu
	{
		inline constexpr REL::RelocationID UpdateData{ 1370368, 0, 2224273 };
	}

	namespace PlayerCamera
	{
		inline constexpr REL::RelocationID Singleton{ 1171980, 2688801, 4796065 };
		inline constexpr REL::RelocationID PopState{ 120998, 2248424, 2248424 };
		inline constexpr REL::RelocationID PushState{ 746523, 0, 2248422 };
		inline constexpr REL::RelocationID ToggleFreeCameraMode{ 224913, 2248368, 2248368 };
		inline constexpr REL::RelocationID SetState{ 858847, 2214742, 2214742 };
		inline constexpr REL::RelocationID StartFurnitureMode{ 10202, 0, 2248373 };
		inline constexpr REL::RelocationID StartPipboyMode{ 998069, 2248358, 2248358 };
		inline constexpr REL::RelocationID StopPipboyMode{ 811954, 2248359, 2248359 };
		inline constexpr REL::RelocationID QCameraEquals{ 839543, 2248421, 2248421 };
	}

	namespace PlayerCharacter
	{
		namespace ScopedInventoryChangeMessageContext
		{
			inline constexpr REL::RelocationID ctor{ 1512872, 2233292, 2233292 };
			inline constexpr REL::RelocationID dtor{ 542100, 2233293, 2233293 };
		}

		inline constexpr REL::RelocationID Singleton{ 303410, 2690919, 4798212 };
		inline constexpr REL::RelocationID GetPlayerHandle{ 522947, 2698072, 2698072 };
		inline constexpr REL::RelocationID GetDifficultyLevel{ 922962, 2233056, 2233056 };
		inline constexpr REL::RelocationID IsGodMode{ 1032309, 2232986, 2232986 };
		inline constexpr REL::RelocationID IsHolotapePlaying{ 530826, 2233206, 2233206 };
		inline constexpr REL::RelocationID IsImmortal{ 500346, 2232988, 2232988 };
		inline constexpr REL::RelocationID IsPipboyLightOn{ 426550, 0, 2233202 };
		inline constexpr REL::RelocationID PauseHolotape{ 1567456, 2233208, 2233208 };
		inline constexpr REL::RelocationID PlayHolotape{ 1581042, 2233207, 2233207 };
		inline constexpr REL::RelocationID QueueFastTravel{ 556824, 0, 2232918 };
		inline constexpr REL::RelocationID RemoveLastUsedPowerArmor{ 1488486, 0, 2233024 };
		inline constexpr REL::RelocationID SelectPerk{ 1397326, 0, 2232926 };
		inline constexpr REL::RelocationID SetAIControlledPackage{ 0, 0, 2233087 };
		inline constexpr REL::RelocationID SetEscaping{ 25528, 0, 2233142 };
		inline constexpr REL::RelocationID SetVATSCriticalCount{ 327338, 0, 2233219 };
		inline constexpr REL::RelocationID ShowPipboyLight{ 1304102, 0, 2233203 };
		inline constexpr REL::RelocationID SetLastDialogueInput{ 696117, 2233190, 2233190 };
		inline constexpr REL::RelocationID ClearPrison{ 0, 2233196, 2233196 };
		inline constexpr REL::RelocationID ReloadWeapon{ 0, 0, 2232907 };
		inline constexpr REL::RelocationID SetPerkCount{ 0, 0, 2233187 };
		inline constexpr REL::RelocationID HasLOSToTarget{ 0, 0, 2233004 };
		inline constexpr REL::RelocationID TryUnlockObject{ 0, 0, 2233040 };
		inline constexpr REL::RelocationID TogglePipBoyLight{ 520007, 0, 0 };
	}

	namespace PlayerControls
	{
		inline constexpr REL::RelocationID Singleton{ 544871, 2692013, 4799306 };
		inline constexpr REL::RelocationID CanPerformAction{ 565925, 0, 0 };
		inline constexpr REL::RelocationID DoAction{ 818081, 0, 2234796 };
		inline constexpr REL::RelocationID DoRegisterHandler{ 177801, 2234822, 2234822 };
	}

	namespace PlayerCrosshairModeEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 0, 4801808 };
	}

	namespace PowerArmor
	{
		inline constexpr REL::RelocationID ActorInPowerArmor{ 1176757, 0, 2219437 };
		inline constexpr REL::RelocationID GetArmorKeyword{ 961172, 0, 2194743 };
		inline constexpr REL::RelocationID GetBatteryKeyword{ 1493537, 0, 2194740 };
		inline constexpr REL::RelocationID GetDefaultBatteryObject{ 1279247, 0, 2194761 };
		inline constexpr REL::RelocationID IsPowerArmorBattery{ 1012910, 0, 2219422 };
		inline constexpr REL::RelocationID SyncFurnitureVisualsToInventory{ 1078979, 0, 2219453 };
		inline constexpr REL::RelocationID fNewBatteryCapacity{ 1134204, 0, 1353498 };
	}

	namespace PowerArmorGeometry
	{
		inline constexpr REL::RelocationID Singleton{ 1365745, 0, 4801732 };
		inline constexpr REL::RelocationID HidePipboyPAGeometry{ 976332, 0, 2248877 };
		inline constexpr REL::RelocationID ShowPipboyPAGeometry{ 19066, 0, 2248876 };
	}

	namespace PowerArmorLightData
	{
		inline constexpr REL::RelocationID GetEventSource{ 120809, 0, 2701547 };
	}

	namespace PowerArmorModMenu
	{
		inline constexpr REL::RelocationID ShowBuildFailureMessage{ 0, 0, 2224322 };
	}

	namespace ProcessLists
	{
		inline constexpr REL::RelocationID Singleton{ 1569706, 2688869, 4796160 };
		inline constexpr REL::RelocationID AreHostileActorsNear{ 1053584, 2234105, 2234105 };
		inline constexpr REL::RelocationID IsActorTargetingREFinPackage{ 559542, 2234033, 2234033 };
		inline constexpr REL::RelocationID RequestHighestDetectionLevelAgainstActor{ 1036693, 2234111, 2234111 };
	}

	namespace REFR_LOCK
	{
		inline constexpr REL::RelocationID GetLockLevel{ 782953, 2191018, 2191018 };
		inline constexpr REL::RelocationID SetLocked{ 157617, 2191020, 2191020 };
		inline constexpr REL::RelocationID IsBroken{ 0, 0, 2191021 };
	}

	namespace SavefileMetadata
	{
		inline constexpr REL::RelocationID FillDataFromFileName{ 0, 0, 2228156 };
	}

	namespace ScrapHeap
	{
		inline constexpr REL::RelocationID Allocate{ 1085394, 2267983, 2267983 };
		inline constexpr REL::RelocationID Deallocate{ 923307, 2267984, 2267984 };
	}

	namespace SCRIPT_FUNCTION
	{
		inline constexpr REL::RelocationID ConsoleFunctions{ 901511, 901511, 901511 };
		inline constexpr REL::RelocationID ScriptFunctions{ 75173, 75173, 75173 };
		inline constexpr REL::RelocationID CompileFunction{ 638606, 2204343, 2204343 };
	}

	namespace Script
	{
		inline constexpr REL::RelocationID ParseParameters{ 1607, 2204298, 2204298 };
		inline constexpr REL::RelocationID CompileAndRun{ 526625, 2204287, 2204287 };
		inline constexpr REL::RelocationID GetProcessScripts{ 44950, 2204310, 2204310 };
		inline constexpr REL::RelocationID SetProcessScripts{ 1188642, 2204309, 2204309 };
	}

	namespace SendHUDMessage
	{
		inline constexpr REL::RelocationID PopHUDMode{ 1495042, 2222444, 2222444 };
		inline constexpr REL::RelocationID PushHUDMode{ 1321764, 2222443, 2222443 };
		inline constexpr REL::RelocationID SetPowerArmorMode{ 361745, 0, 2222459 };
		inline constexpr REL::RelocationID ShowHUDMessage{ 1163005, 2222440, 2222440 };
	}

	namespace Setting
	{
		namespace INISettingCollection
		{
			inline constexpr REL::RelocationID Singleton{ 791183, 2704108, 2704108 };
		}

		namespace INIPrefSettingCollection
		{
			inline constexpr REL::RelocationID Singleton{ 767844, 2703234, 2703234 };
		}

		namespace GameSettingCollection
		{
			inline constexpr REL::RelocationID Singleton{ 8308, 2690301, 4797590 };
			inline constexpr REL::RelocationID InitCollection{ 948832, 2188690, 2188690 };
		}
	}

	namespace SitWaitMenu
	{
		inline constexpr REL::RelocationID OnEnterFurniture{ 562238, 0, 2249503 };
		inline constexpr REL::RelocationID OnExitFurniture{ 454795, 0, 2249504 };
	}

	namespace Sky
	{
		inline constexpr REL::RelocationID Singleton{ 484694, 2192448, 2192448 };
		inline constexpr REL::RelocationID ForceWeather{ 698558, 2208861, 2208861 };
		inline constexpr REL::RelocationID ResetWeather{ 6511, 2208860, 2208860 };
	}

	namespace SplineUtils
	{
		inline constexpr REL::RelocationID DisconnectSpline{ 750682, 0, 2195074 };
		inline constexpr REL::RelocationID ConnectSpline{ 59311, 0, 2195073 };
	}

	namespace StartMenuBase
	{
		inline constexpr REL::RelocationID GetMenuDifficultyLevel{ 0, 0, 2224540 };
	}

	namespace SubtitleManager
	{
		inline constexpr REL::RelocationID Singleton{ 0, 0, 4796374 };
		inline constexpr REL::RelocationID RWLock{ 0, 0, 2701704 };
	}

	namespace SWFToCodeFunctionHandler
	{
		inline constexpr REL::RelocationID MapCodeMethodToASFunction{ 1263128, 2287419, 2287419 };
		inline constexpr REL::RelocationID RegisterCodeObject{ 67637, 2287415, 2287415 };
	}

	namespace TaskQueueInterface
	{
		inline constexpr REL::RelocationID Singleton{ 7491, 0, 2698331 };
		inline constexpr REL::RelocationID QueueClosePipboy{ 69886, 0, 2229289 };
		inline constexpr REL::RelocationID QueueRebuildBendableSpline{ 198419, 0, 2229302 };
		inline constexpr REL::RelocationID QueueShow1stPerson{ 994377, 0, 2229268 };
		inline constexpr REL::RelocationID QueueShowPipboy{ 1133684, 0, 2229288 };
		inline constexpr REL::RelocationID QueueUpdate3D{ 581890, 0, 2229234 };
		inline constexpr REL::RelocationID QueueWeaponFire{ 15449, 0, 2229186 };
	}

	namespace TerminalHacked
	{
		inline constexpr REL::RelocationID GetEventSource{ 425579, 0, 2233751 };
	}

	namespace TES
	{
		inline constexpr REL::RelocationID Singleton{ 1194835, 2698044, 2698044 };
	}

	namespace TESActivateEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 166230, 2201819, 2201819 };
	}

	namespace TESActorBaseData
	{
		inline constexpr REL::RelocationID GetLevel{ 151866, 2192891, 2192891 };
	}

	namespace TESAmmo
	{
		inline constexpr REL::RelocationID GetReloadsWithAmmoRef{ 1035622, 2197864, 2197864 };
	}

	namespace TESAudio
	{
		namespace ScriptedMusicState
		{
			inline constexpr REL::RelocationID Singleton{ 0, 0, 4799278 };
			inline constexpr REL::RelocationID Remove{ 0, 0, 2226976 };
		}
	}

	namespace TESBoundObject
	{
		inline constexpr REL::RelocationID ApplyMods{ 113585, 2198325, 2198325 };
	}

	namespace TESCellAttachDetachEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 0, 2201823 };
	}

	namespace TESCellFullyLoadedEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 0, 2201824 };
	}

	namespace TESCondition
	{
		inline constexpr REL::RelocationID IsTrue{ 1275731, 2211989, 2211989 };
		inline constexpr REL::RelocationID IsTrueForAllButFunction{ 1182457, 0, 0 };  // inlined
		inline constexpr REL::RelocationID ClearAllConditionItems{ 0, 0, 2211988 };
	}

	namespace TESConditionItem
	{
		inline constexpr REL::RelocationID GetComparisonValue{ 1373349, 2212007, 2212007 };
		inline constexpr REL::RelocationID IsTrue1{ 1453240, 2212008, 2212008 };
		inline constexpr REL::RelocationID IsTrue2{ 0, 0, 2212009 };
	}

	namespace TESContainerChangedEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 242538, 2201832, 2201832 };
	}

	namespace TESDataHandler
	{
		inline constexpr REL::RelocationID Singleton{ 711558, 2688883, 2688883 };
		inline constexpr REL::RelocationID AddFormToDataHandler{ 350112, 2192271, 2192271 };
		inline constexpr REL::RelocationID CheckModsLoaded{ 1432894, 2192323, 2192323 };
		inline constexpr REL::RelocationID CreateReferenceAtLocation{ 500304, 500304, 500304 };
		inline constexpr REL::RelocationID IsFormIDInuse{ 1448838, 2192351, 2192351 };
	}

	namespace TESDeathEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 1465690, 2201833, 2201833 };
	}

	namespace TESDescription
	{
		inline constexpr REL::RelocationID GetDescription{ 523613, 0, 2193019 };
	}

	namespace TESEnterSneakingEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 2201837, 2201837 };
	}

	namespace TESFile
	{
		inline constexpr REL::RelocationID CloseTES{ 766555, 0, 2192491 };
		inline constexpr REL::RelocationID GetChunkData{ 188910, 0, 2192538 };
		inline constexpr REL::RelocationID GetTESChunk{ 641361, 0, 2192536 };
		inline constexpr REL::RelocationID NextChunk{ 1252764, 0, 2192537 };
		inline constexpr REL::RelocationID NextForm{ 644374, 0, 2192527 };
		inline constexpr REL::RelocationID NextGroup{ 339855, 0, 2192522 };
		inline constexpr REL::RelocationID OpenTES{ 728465, 0, 2192490 };
	}

	namespace TESForm
	{
		inline constexpr REL::RelocationID FormSortFunc{ 705530, 0, 0 };
		inline constexpr REL::RelocationID AddCompileIndex{ 1315637, 2193152, 2193152 };
		inline constexpr REL::RelocationID AllForms{ 422985, 2689178, 4796465 };
		inline constexpr REL::RelocationID AllFormsMapLock{ 691815, 2689189, 4796476 };
		inline constexpr REL::RelocationID AllFormsByEditorID{ 642758, 2689179, 4796466 };
		inline constexpr REL::RelocationID AllFormsEditorIDMapLock{ 910917, 2689190, 4796477 };
		inline constexpr REL::RelocationID GetFile{ 1376557, 2193103, 2193103 };
		inline constexpr REL::RelocationID GetFormByNumericID{ 0, 0, 2193092 };
		inline constexpr REL::RelocationID GetFormEnumString{ 1309967, 1309967, 1309967 };
		inline constexpr REL::RelocationID GetFormTypeFromString{ 565203, 2193108, 2193108 };
		inline constexpr REL::RelocationID SetTemporary{ 482454, 2193125, 2193125 };
	}

	namespace TESFormDeleteEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 1396562, 2201842, 2201842 };
	}

	namespace TESFullName
	{
		inline constexpr REL::RelocationID SparseFullNameMap{ 226372, 2661402, 2661402 };
	}

	namespace TESFurniture
	{
		inline constexpr REL::RelocationID GetContainer{ 1049933, 2198043, 2198043 };
	}

	namespace TESFurnitureEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 678665, 2201844, 2201844 };
	}

	namespace TESHarvestEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 0, 2193351 };
	}

	namespace TESHealthForm
	{
		inline constexpr REL::RelocationID GetFormHealth{ 1515099, 2193227, 2193227 };
	}

	namespace TESHitEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 0, 2201886 };
		inline constexpr REL::RelocationID GetSingleton{ 989868, 0, 0 };
	}

	namespace TESEquipEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 2201838, 2201838 };
		inline constexpr REL::RelocationID GetSingleton{ 485633, 0, 0 };
	}

	namespace TESInitScriptEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 0, 2201846 };
	}

	namespace TESLeveledList
	{
		inline constexpr REL::RelocationID AddLeveledObject{ 1163308, 0, 2193258 };
		inline constexpr REL::RelocationID AddScriptAddedLeveledObject{ 0, 0, 2193269 };
		inline constexpr REL::RelocationID CalculateCurrentFormList{ 507405, 2193259, 2193259 };
		inline constexpr REL::RelocationID CalculateCurrentFormListForRef{ 507405, 2193260, 2193260 };
		inline constexpr REL::RelocationID GetUseAll{ 233875, 2193253, 2193253 };
		inline constexpr REL::RelocationID RemoveAllScriptAddedLeveledObjects{ 1500052, 0, 2193273 };
	}

	namespace TESLoadGameEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 823570, 0, 2201848 };
	}

	namespace TESLocationClearedEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 0, 2201849 };
	}

	namespace TESMagicEffectApplyEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 2201851, 2201851 };
		inline constexpr REL::RelocationID GetSingleton{ 1481228, 0, 0 };
	}

	namespace TESNPC
	{
		inline constexpr REL::RelocationID AlternateHeadPartListMap{ 1306546, 2662368, 2662368 };
		inline constexpr REL::RelocationID GetDefaultNPC{ 1073775, 0, 0 };
		inline constexpr REL::RelocationID GetSex{ 1257181, 2207107, 2207107 };
		inline constexpr REL::RelocationID GetFacialBoneMorphIntensity{ 272217, 2207416, 2207416 };
		inline constexpr REL::RelocationID SetHairColor{ 0, 0, 2207426 };
		inline constexpr REL::RelocationID GetShortName{ 0, 0, 2207405 };
	}

	namespace TESObjectARMO
	{
		inline constexpr REL::RelocationID Protects{ 0, 0, 2198535 };
	}

	namespace TESObjectCELL
	{
		inline constexpr REL::RelocationID GetbhkWorld{ 1326073, 0, 2200260 };
		inline constexpr REL::RelocationID GetCantWaitHere{ 376940, 2200287, 2200287 };
		inline constexpr REL::RelocationID GetDataX{ 445210, 2200213, 2200213 };
		inline constexpr REL::RelocationID GetDataY{ 1322816, 2200214, 2200214 };
		inline constexpr REL::RelocationID GetEncounterZone{ 1414637, 2200242, 2200242 };
		inline constexpr REL::RelocationID GetLocation{ 868663, 2200179, 2200179 };
		inline constexpr REL::RelocationID GetOwner{ 910422, 0, 2200236 };
		inline constexpr REL::RelocationID GetRegionList{ 1565031, 2200265, 2200265 };
		inline constexpr REL::RelocationID Pick{ 434717, 0, 2200263 };
		inline constexpr REL::RelocationID SetCullCellMarkers{ 0, 0, 2192259 };
		inline constexpr REL::RelocationID UpdateAllRefsLoaded{ 0, 0, 2200415 };
		inline constexpr REL::RelocationID AttatchReference3D{ 0, 0, 2200620 };
		inline constexpr REL::RelocationID RemoveReference{ 0, 0, 2200299 };
		inline constexpr REL::RelocationID UpdateAllDecals{ 0, 0, 2200643 };
		inline constexpr REL::RelocationID DefaultWater{ 0, 0, 4799138 };
	}

	namespace TESObjectLoadedEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 2201853, 2201853 };
		inline constexpr REL::RelocationID GetSingleton{ 416662, 0, 0 };
	}

	namespace TESObjectREFR
	{
		inline constexpr REL::RelocationID ActivateRef{ 753531, 0, 2201147 };
		inline constexpr REL::RelocationID AddInventoryItem{ 78185, 2200949, 2200949 };
		inline constexpr REL::RelocationID AddKeyword{ 640674, 2200860, 2200860 };
		inline constexpr REL::RelocationID AddLockChange{ 1578706, 0, 2200731 };
		inline constexpr REL::RelocationID ApplyArtObject{ 357908, 2205200, 2205200 };
		inline constexpr REL::RelocationID ApplyEffectShader{ 652173, 2205201, 2205201 };
		inline constexpr REL::RelocationID Enable{ 1396707, 0, 2201150 };
		inline constexpr REL::RelocationID FindReferenceFor3D{ 766937, 0, 2201082 };
		inline constexpr REL::RelocationID GetCurrentLocation{ 1135470, 2201163, 2201163 };
		inline constexpr REL::RelocationID GetDisplayFullName{ 1212056, 2201126, 2201126 };
		inline constexpr REL::RelocationID GetEditorDead{ 0, 0, 2200781 };
		inline constexpr REL::RelocationID GetOwner{ 1323437, 0, 2202616 };
		inline constexpr REL::RelocationID GetGoldAmount{ 564356, 2200923, 2200923 };
		inline constexpr REL::RelocationID GetHandle{ 0, 0, 2201196 };
		inline constexpr REL::RelocationID GetHasOwner{ 1016277, 0, 2202622 };
		inline constexpr REL::RelocationID GetInventoryObjectCount{ 333415, 2200939, 2200939 };
		inline constexpr REL::RelocationID GetLinkedRef{ 897287, 0, 2202683 };
		inline constexpr REL::RelocationID GetLock{ 0, 0, 2202648 };
		inline constexpr REL::RelocationID GetWeightInContainer{ 1377567, 0, 2201001 };
		inline constexpr REL::RelocationID HasContainer{ 0, 0, 2201022 };
		inline constexpr REL::RelocationID IsAnOwner{ 933798, 0, 2202635 };
		inline constexpr REL::RelocationID IsCrimeToActivate{ 836011, 0, 2201180 };
		inline constexpr REL::RelocationID IsLeveledCreature{ 1341859, 2202655, 2202655 };
		inline constexpr REL::RelocationID MarkAsDeleted{ 192661, 0, 2201156 };
		inline constexpr REL::RelocationID MoveRefToNewSpace{ 629658, 0, 2201149 };
		inline constexpr REL::RelocationID RemoveKeyword{ 281170, 0, 2200861 };
		inline constexpr REL::RelocationID SetAngleOnReference{ 1049748, 0, 2201134 };
		inline constexpr REL::RelocationID SetLinkedRef{ 192840, 0, 2202684 };
		inline constexpr REL::RelocationID SetLocationOnReference{ 1101832, 0, 2201138 };
		inline constexpr REL::RelocationID SetWantsDelete{ 761346, 0, 2201199 };
		inline constexpr REL::RelocationID RebuildBendableSpline{ 340319, 0, 2201119 };
		inline constexpr REL::RelocationID GetItemCount{ 635042, 2200996, 2200996 };
		inline constexpr REL::RelocationID UpdateReference3D{ 1568075, 0, 2201071 };
		inline constexpr REL::RelocationID GetObjectCenter{ 777738, 0, 2201092 };
		inline constexpr REL::RelocationID SetScale{ 817930, 0, 2200893 };
		inline constexpr REL::RelocationID IsMarker{ 0, 0, 2201157 };
		inline constexpr REL::RelocationID IsDecalRef{ 0, 0, 2200794 };
		inline constexpr REL::RelocationID UpdateDynamicNavmesh{ 1518094, 2201206, 2201206 };
		inline constexpr REL::RelocationID GetMapMarkerData{ 0, 0, 2202644 };
		inline constexpr REL::RelocationID GetRelevantWaterHeight{ 6866, 0, 2201189 };
	}

	namespace TESObjectWEAP
	{
		inline constexpr REL::RelocationID GetMeleeAttackSpeed{ 817670, 0, 2198957 };
		inline constexpr REL::RelocationID GetMeleeAttackSpeedLabel{ 178784, 0, 2198959 };
		inline constexpr REL::RelocationID Fire{ 0, 0, 2198960 };
	}

	namespace TESQuest
	{
		inline constexpr REL::RelocationID SetStage{ 952799, 2207743, 2207743 };
		inline constexpr REL::RelocationID GetAliasedRef{ 847223, 2207810, 2207810 };
	}

	namespace TESResponse
	{
		inline constexpr REL::RelocationID GetResponseText{ 0, 2208288, 2208288 };
		inline constexpr REL::RelocationID GetSpeakerIdle{ 0, 0, 2208293 };
	}

	namespace TESSpellList
	{
		inline constexpr REL::RelocationID AddSpell{ 1312083, 0, 2193395 };
	}

	namespace TESSwitchRaceCompleteEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 0, 2201874, 2201874 };
	}

	namespace TESTopic
	{
		inline constexpr REL::RelocationID InitDialogueItem{ 0, 0, 2208360 };
	}

	namespace TESTopicInfo
	{
		inline constexpr REL::RelocationID GetParentInfoGroup{ 163538, 2208435, 2208435 };
		inline constexpr REL::RelocationID GetChallengeLevel{ 0, 2208441, 2208441 };
		inline constexpr REL::RelocationID GetSuccessLevel{ 1023955, 2208444, 2208444 };
		inline constexpr REL::RelocationID StartSceneOnEnd{ 0, 0, 2208466 };
		inline constexpr REL::RelocationID GetScene{ 0, 0, 2208453 };
		inline constexpr REL::RelocationID StartScene{ 0, 0, 2208469 };
		inline constexpr REL::RelocationID GetSpeaker{ 0, 0, 2208449 };
	}

	namespace TESValueForm
	{
		inline constexpr REL::RelocationID GetFormValue{ 885783, 0, 2193435 };
	}

	namespace TESWaterDisplacement
	{
		inline constexpr REL::RelocationID SetStencilBit{ 0, 0, 2213923 };
	}

	namespace TESWeightForm
	{
		inline constexpr REL::RelocationID GetFormWeight{ 1321341, 2193446, 2193446 };
	}

	namespace TESWorldSpace
	{
		inline constexpr REL::RelocationID DefaultWater{ 0, 0, 4799138 };
		inline constexpr REL::RelocationID GetSkyCell{ 0, 0, 2202924 };
	}

	namespace UI
	{
		inline constexpr REL::RelocationID Singleton{ 548587, 2689028, 4796314 };
		inline constexpr REL::RelocationID CustomRendererHasQuads{ 1401451, 0, 2284757 };
		inline constexpr REL::RelocationID GetMenuMapRWLock{ 578487, 2707105, 2707105 };
		inline constexpr REL::RelocationID RefreshCursor{ 1436639, 0, 2284772 };
		inline constexpr REL::RelocationID RegisterMenu{ 1519575, 0, 2284766 };
		inline constexpr REL::RelocationID UpdateControllerType{ 175796, 0, 2284768 };
	}

	namespace UIAdvanceMenusFunctionCompleteEvent
	{
		inline constexpr REL::RelocationID GetEventSource{ 1067039, 0, 4801719 };
	}

	namespace UIMessageQueue
	{
		inline constexpr REL::RelocationID Singleton{ 82123, 2689091, 4796377 };
		inline constexpr REL::RelocationID AddMessage{ 1182019, 2284929, 2284929 };
	}

	namespace UIUtils
	{
		inline constexpr REL::RelocationID GetComparisonItems{ 593818, 0, 0 };
		inline constexpr REL::RelocationID PlayPipboySound{ 1320952, 2249706, 2249706 };
		inline constexpr REL::RelocationID PlayMenuSound{ 1227993, 2249707, 2249707 };
		inline constexpr REL::RelocationID UpdateGamepadDependentButtonCodes{ 190238, 0, 4483350 };
		inline constexpr REL::RelocationID ShowCraftingMenu{ 0, 0, 2249718 };
		inline constexpr REL::RelocationID HasRequiredInventoryForCraftingMenu{ 0, 0, 2249717 };
	}

	namespace VATS
	{
		inline constexpr REL::RelocationID Singleton{ 570121, 2690444, 4797733 };
		inline constexpr REL::RelocationID CanActivateCriticals{ 0, 0, 2237208 };
	}

	namespace WorkbenchMenuBase
	{
		inline constexpr REL::RelocationID UpdateOptimizedAutoBuildInv{ 0, 0, 2224955 };
		inline constexpr REL::RelocationID QCurrentModChoiceData{ 0, 0, 2224958 };
		inline constexpr REL::RelocationID ShowBuildFailureMessage{ 0, 0, 2224959 };
	}

	namespace Workshop
	{
		namespace PlacementItemData
		{
			inline constexpr REL::RelocationID Set{ 1460935, 0, 2195643 };
		}

		namespace WorkshopMenuNode
		{
			inline constexpr REL::RelocationID FindAndSetSelectedNode{ 1309368, 0, 2195022 };
		}

		inline constexpr REL::RelocationID FindNearestValidWorkshop{ 905705, 2194970, 2194970 };
		inline constexpr REL::RelocationID FreeBuild{ 1583365, 2194924, 2194924 };
		inline constexpr REL::RelocationID GetSelectedWorkshopMenuNode{ 763948, 2195024, 2195024 };
		inline constexpr REL::RelocationID InitializePlacementReference{ 1577199, 0, 0 };
		inline constexpr REL::RelocationID IsLocationWithinBuildableArea{ 990965, 0, 2194956 };
		inline constexpr REL::RelocationID IsWorkshopItem{ 1386903, 2194912, 2194912 };
		inline constexpr REL::RelocationID PlaceCurrentReference{ 1058211, 0, 2195155 };
		inline constexpr REL::RelocationID RegisterForItemDestroyed{ 1367004, 0, 2194930 };
		inline constexpr REL::RelocationID RegisterForItemMoved{ 835323, 0, 2194932 };
		inline constexpr REL::RelocationID RegisterForItemPlaced{ 849008, 0, 2194926 };
		inline constexpr REL::RelocationID RegisterForWorkshopModeEvent{ 275798, 0, 2194946 };
		inline constexpr REL::RelocationID RequestExitWorkshop{ 209891, 0, 2195135 };
		inline constexpr REL::RelocationID ScrapReference{ 636327, 0, 2195125 };
		inline constexpr REL::RelocationID SetSelectedEditItem{ 2562, 0, 2195119 };
		inline constexpr REL::RelocationID StartWorkshop{ 171771, 0, 2195134 };
		inline constexpr REL::RelocationID ToggleEditMode{ 1243386, 0, 2195130 };
		inline constexpr REL::RelocationID UnregisterForItemDestroyed{ 1101379, 0, 2194931 };
		inline constexpr REL::RelocationID UnregisterForItemMoved{ 569432, 0, 2194933 };
		inline constexpr REL::RelocationID UnregisterForItemPlaced{ 583255, 0, 2194927 };
		inline constexpr REL::RelocationID UnregisterForWorkshopModeEvent{ 9236, 0, 2194947 };
		inline constexpr REL::RelocationID UpdateActiveEdit{ 69261, 0, 2195210 };
		inline constexpr REL::RelocationID WorkshopCanShowRecipe{ 239190, 0, 2195115 };
		inline constexpr REL::RelocationID CurrentPlacementItemData{ 1279207, 0, 4797261 };
		inline constexpr REL::RelocationID CurrentRow{ 833923, 0, 4797160 };
		inline constexpr REL::RelocationID PlacementItem{ 526727, 0, 4797235 };
	}

	namespace WorkshopMenu
	{
		inline constexpr REL::RelocationID CheckAndSetItemForPlacement{ 1541862, 0, 2224991 };
		inline constexpr REL::RelocationID UpdateButtonText{ 1089189, 0, 2224992 };
	}

	inline constexpr REL::RelocationID NiFree{ 242362, 0, 2268539 };
	inline constexpr REL::RelocationID NiMalloc{ 974443, 0, 2268535 };
	inline constexpr REL::RelocationID RTDynamicCast{ 84112, 2725673, 4818455 };
	inline constexpr REL::RelocationID IsPlayerInDialogue{ 0, 0, 2188686 };
}

namespace Scaleform::ID
{
	namespace GFx::ASStringManager
	{
		inline constexpr REL::RelocationID CreateStringNode{ 419974, 2290014, 2290014 };
	}

	namespace GFx::Loader
	{
		inline constexpr REL::RelocationID CreateMovie{ 912291, 2284723, 2284723 };
	}

	namespace GFx::Movie
	{
		inline constexpr REL::RelocationID Release{ 404814, 0, 2287230 };
	}

	namespace GFx::Value
	{
		inline constexpr REL::RelocationID ObjectAddRef{ 244786, 0, 2286228 };
		inline constexpr REL::RelocationID ObjectRelease{ 856221, 0, 2286229 };
		inline constexpr REL::RelocationID HasMember{ 788691, 0, 2286078 };
		inline constexpr REL::RelocationID GetArraySize{ 254218, 0, 2285791 };
		inline constexpr REL::RelocationID GetMember{ 1517430, 0, 4494126 };
		inline constexpr REL::RelocationID GetElement{ 0, 0, 2285881 };
		inline constexpr REL::RelocationID SetElement{ 0, 0, 2286575 };
		inline constexpr REL::RelocationID SetMember{ 1360149, 0, 2286589 };
		inline constexpr REL::RelocationID Invoke{ 655847, 0, 2286101 };
		inline constexpr REL::RelocationID PushBack{ 1330475, 0, 2286424 };
		inline constexpr REL::RelocationID RemoveElements{ 1286586, 0, 2286475 };
		inline constexpr REL::RelocationID VisitMembers{ 0, 0, 2286786 };
		inline constexpr REL::RelocationID GetDisplayInfo{ 498814, 0, 2285873 };
	}

	namespace Memory
	{
		inline constexpr REL::RelocationID SetGlobalHeap{ 939898, 2707353, 2707353 };
		inline constexpr REL::RelocationID GetGlobalHeap{ 939898, 2707353, 2707353 };
	}

	namespace SysAlloc
	{
		inline constexpr REL::RelocationID InitHeapEngine{ 1047970, 2284532, 4493927 };
		inline constexpr REL::RelocationID ShutdownHeapEngine{ 1207169, 2284536, 2284536 };
	}
}
