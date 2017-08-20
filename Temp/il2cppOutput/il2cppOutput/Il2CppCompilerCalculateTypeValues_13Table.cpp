#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Char[]
struct CharU5BU5D_t1826220394;
// UnityEngine.Transform
struct Transform_t1026079987;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t827516256;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t99366418;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1895362502;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t3589450094;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t1965778200;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t4029030340;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t2915404323;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1881337841;
// System.Void
struct Void_t4119679456;
// UnityEngine.Rigidbody
struct Rigidbody_t1171925908;
// UnityEngine.Collider
struct Collider_t2433158712;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3033766555;
// UnityEngine.CharacterController
struct CharacterController_t1831852150;
// UnityEngine.Collider2D
struct Collider2D_t4141412607;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2232043206;
// UnityEngine.Object
struct Object_t889304621;
// UnityEngine.AnimationState
struct AnimationState_t889468257;
// System.Type
struct Type_t;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3679866261;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t833840395;
// System.IAsyncResult
struct IAsyncResult_t2157213255;
// System.AsyncCallback
struct AsyncCallback_t3839185477;
// UnityEngine.RectTransform
struct RectTransform_t3642922515;
// System.Single[]
struct SingleU5BU5D_t4046947997;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1954801218;

struct ContactPoint_t768313838 ;
struct Object_t889304621_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef PHYSICS_T17190194_H
#define PHYSICS_T17190194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t17190194  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T17190194_H
#ifndef TEXTWRITER_T2972012753_H
#define TEXTWRITER_T2972012753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t2972012753  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1826220394* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t2972012753, ___CoreNewLine_0)); }
	inline CharU5BU5D_t1826220394* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t1826220394** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t1826220394* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}
};

struct TextWriter_t2972012753_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t2972012753 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t2972012753_StaticFields, ___Null_1)); }
	inline TextWriter_t2972012753 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t2972012753 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t2972012753 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T2972012753_H
#ifndef ENUMERATOR_T3663702855_H
#define ENUMERATOR_T3663702855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t3663702855  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t1026079987 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t3663702855, ___outer_0)); }
	inline Transform_t1026079987 * get_outer_0() const { return ___outer_0; }
	inline Transform_t1026079987 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t1026079987 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t3663702855, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3663702855_H
#ifndef SCENEMANAGER_T3339680770_H
#define SCENEMANAGER_T3339680770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t3339680770  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t3339680770_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t827516256 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t99366418 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t1895362502 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t3339680770_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t827516256 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t827516256 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t827516256 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t3339680770_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t99366418 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t99366418 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t99366418 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t3339680770_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t1895362502 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t1895362502 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t1895362502 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T3339680770_H
#ifndef PHYSICS2D_T4288974566_H
#define PHYSICS2D_T4288974566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics2D
struct  Physics2D_t4288974566  : public RuntimeObject
{
public:

public:
};

struct Physics2D_t4288974566_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> UnityEngine.Physics2D::m_LastDisabledRigidbody2D
	List_1_t3589450094 * ___m_LastDisabledRigidbody2D_0;

public:
	inline static int32_t get_offset_of_m_LastDisabledRigidbody2D_0() { return static_cast<int32_t>(offsetof(Physics2D_t4288974566_StaticFields, ___m_LastDisabledRigidbody2D_0)); }
	inline List_1_t3589450094 * get_m_LastDisabledRigidbody2D_0() const { return ___m_LastDisabledRigidbody2D_0; }
	inline List_1_t3589450094 ** get_address_of_m_LastDisabledRigidbody2D_0() { return &___m_LastDisabledRigidbody2D_0; }
	inline void set_m_LastDisabledRigidbody2D_0(List_1_t3589450094 * value)
	{
		___m_LastDisabledRigidbody2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDisabledRigidbody2D_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2D_T4288974566_H
#ifndef AUDIOSETTINGS_T1420395759_H
#define AUDIOSETTINGS_T1420395759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t1420395759  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t1420395759_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t1965778200 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t1420395759_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t1965778200 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t1965778200 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t1965778200 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T1420395759_H
#ifndef AUDIOPLAYABLEGRAPHEXTENSIONS_T2566900710_H
#define AUDIOPLAYABLEGRAPHEXTENSIONS_T2566900710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.AudioPlayableGraphExtensions
struct  AudioPlayableGraphExtensions_t2566900710  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEGRAPHEXTENSIONS_T2566900710_H
#ifndef SPRITEATLASMANAGER_T46120008_H
#define SPRITEATLASMANAGER_T46120008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t46120008  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t46120008_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t4029030340 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t2915404323 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t46120008_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t4029030340 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t4029030340 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t4029030340 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t46120008_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline Action_1_t2915404323 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline Action_1_t2915404323 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(Action_1_t2915404323 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T46120008_H
#ifndef YIELDINSTRUCTION_T1245760601_H
#define YIELDINSTRUCTION_T1245760601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t1245760601  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t1245760601_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t1245760601_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T1245760601_H
#ifndef TIME_T640727949_H
#define TIME_T640727949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t640727949  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T640727949_H
#ifndef DATAUTILITY_T2821325640_H
#define DATAUTILITY_T2821325640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprites.DataUtility
struct  DataUtility_t2821325640  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAUTILITY_T2821325640_H
#ifndef ANIMATIONPLAYABLEGRAPHEXTENSIONS_T1471151230_H
#define ANIMATIONPLAYABLEGRAPHEXTENSIONS_T1471151230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct  AnimationPlayableGraphExtensions_t1471151230  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEGRAPHEXTENSIONS_T1471151230_H
#ifndef RANDOM_T797721516_H
#define RANDOM_T797721516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Random
struct  Random_t797721516  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T797721516_H
#ifndef ATTRIBUTE_T3633858984_H
#define ATTRIBUTE_T3633858984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3633858984  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3633858984_H
#ifndef VALUETYPE_T4021874819_H
#define VALUETYPE_T4021874819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4021874819  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4021874819_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4021874819_marshaled_com
{
};
#endif // VALUETYPE_T4021874819_H
#ifndef HOSTDATA_T1624050234_H
#define HOSTDATA_T1624050234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HostData
struct  HostData_t1624050234  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.HostData::m_Nat
	int32_t ___m_Nat_0;
	// System.String UnityEngine.HostData::m_GameType
	String_t* ___m_GameType_1;
	// System.String UnityEngine.HostData::m_GameName
	String_t* ___m_GameName_2;
	// System.Int32 UnityEngine.HostData::m_ConnectedPlayers
	int32_t ___m_ConnectedPlayers_3;
	// System.Int32 UnityEngine.HostData::m_PlayerLimit
	int32_t ___m_PlayerLimit_4;
	// System.String[] UnityEngine.HostData::m_IP
	StringU5BU5D_t1881337841* ___m_IP_5;
	// System.Int32 UnityEngine.HostData::m_Port
	int32_t ___m_Port_6;
	// System.Int32 UnityEngine.HostData::m_PasswordProtected
	int32_t ___m_PasswordProtected_7;
	// System.String UnityEngine.HostData::m_Comment
	String_t* ___m_Comment_8;
	// System.String UnityEngine.HostData::m_GUID
	String_t* ___m_GUID_9;

public:
	inline static int32_t get_offset_of_m_Nat_0() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_Nat_0)); }
	inline int32_t get_m_Nat_0() const { return ___m_Nat_0; }
	inline int32_t* get_address_of_m_Nat_0() { return &___m_Nat_0; }
	inline void set_m_Nat_0(int32_t value)
	{
		___m_Nat_0 = value;
	}

	inline static int32_t get_offset_of_m_GameType_1() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_GameType_1)); }
	inline String_t* get_m_GameType_1() const { return ___m_GameType_1; }
	inline String_t** get_address_of_m_GameType_1() { return &___m_GameType_1; }
	inline void set_m_GameType_1(String_t* value)
	{
		___m_GameType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameType_1), value);
	}

	inline static int32_t get_offset_of_m_GameName_2() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_GameName_2)); }
	inline String_t* get_m_GameName_2() const { return ___m_GameName_2; }
	inline String_t** get_address_of_m_GameName_2() { return &___m_GameName_2; }
	inline void set_m_GameName_2(String_t* value)
	{
		___m_GameName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameName_2), value);
	}

	inline static int32_t get_offset_of_m_ConnectedPlayers_3() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_ConnectedPlayers_3)); }
	inline int32_t get_m_ConnectedPlayers_3() const { return ___m_ConnectedPlayers_3; }
	inline int32_t* get_address_of_m_ConnectedPlayers_3() { return &___m_ConnectedPlayers_3; }
	inline void set_m_ConnectedPlayers_3(int32_t value)
	{
		___m_ConnectedPlayers_3 = value;
	}

	inline static int32_t get_offset_of_m_PlayerLimit_4() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_PlayerLimit_4)); }
	inline int32_t get_m_PlayerLimit_4() const { return ___m_PlayerLimit_4; }
	inline int32_t* get_address_of_m_PlayerLimit_4() { return &___m_PlayerLimit_4; }
	inline void set_m_PlayerLimit_4(int32_t value)
	{
		___m_PlayerLimit_4 = value;
	}

	inline static int32_t get_offset_of_m_IP_5() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_IP_5)); }
	inline StringU5BU5D_t1881337841* get_m_IP_5() const { return ___m_IP_5; }
	inline StringU5BU5D_t1881337841** get_address_of_m_IP_5() { return &___m_IP_5; }
	inline void set_m_IP_5(StringU5BU5D_t1881337841* value)
	{
		___m_IP_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_IP_5), value);
	}

	inline static int32_t get_offset_of_m_Port_6() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_Port_6)); }
	inline int32_t get_m_Port_6() const { return ___m_Port_6; }
	inline int32_t* get_address_of_m_Port_6() { return &___m_Port_6; }
	inline void set_m_Port_6(int32_t value)
	{
		___m_Port_6 = value;
	}

	inline static int32_t get_offset_of_m_PasswordProtected_7() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_PasswordProtected_7)); }
	inline int32_t get_m_PasswordProtected_7() const { return ___m_PasswordProtected_7; }
	inline int32_t* get_address_of_m_PasswordProtected_7() { return &___m_PasswordProtected_7; }
	inline void set_m_PasswordProtected_7(int32_t value)
	{
		___m_PasswordProtected_7 = value;
	}

	inline static int32_t get_offset_of_m_Comment_8() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_Comment_8)); }
	inline String_t* get_m_Comment_8() const { return ___m_Comment_8; }
	inline String_t** get_address_of_m_Comment_8() { return &___m_Comment_8; }
	inline void set_m_Comment_8(String_t* value)
	{
		___m_Comment_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Comment_8), value);
	}

	inline static int32_t get_offset_of_m_GUID_9() { return static_cast<int32_t>(offsetof(HostData_t1624050234, ___m_GUID_9)); }
	inline String_t* get_m_GUID_9() const { return ___m_GUID_9; }
	inline String_t** get_address_of_m_GUID_9() { return &___m_GUID_9; }
	inline void set_m_GUID_9(String_t* value)
	{
		___m_GUID_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_GUID_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HostData
struct HostData_t1624050234_marshaled_pinvoke
{
	int32_t ___m_Nat_0;
	char* ___m_GameType_1;
	char* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	char** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	char* ___m_Comment_8;
	char* ___m_GUID_9;
};
// Native definition for COM marshalling of UnityEngine.HostData
struct HostData_t1624050234_marshaled_com
{
	int32_t ___m_Nat_0;
	Il2CppChar* ___m_GameType_1;
	Il2CppChar* ___m_GameName_2;
	int32_t ___m_ConnectedPlayers_3;
	int32_t ___m_PlayerLimit_4;
	Il2CppChar** ___m_IP_5;
	int32_t ___m_Port_6;
	int32_t ___m_PasswordProtected_7;
	Il2CppChar* ___m_Comment_8;
	Il2CppChar* ___m_GUID_9;
};
#endif // HOSTDATA_T1624050234_H
#ifndef RESOURCES_T1700367204_H
#define RESOURCES_T1700367204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t1700367204  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T1700367204_H
#ifndef PLAYERCONNECTIONINTERNAL_T1812682739_H
#define PLAYERCONNECTIONINTERNAL_T1812682739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayerConnectionInternal
struct  PlayerConnectionInternal_t1812682739  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTIONINTERNAL_T1812682739_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T3608352242_H
#define DRIVENRECTTRANSFORMTRACKER_T3608352242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t3608352242 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T3608352242_H
#ifndef BOOLEAN_T4068918749_H
#define BOOLEAN_T4068918749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t4068918749 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t4068918749, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t4068918749_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t4068918749_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t4068918749_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T4068918749_H
#ifndef SCENE_T570834343_H
#define SCENE_T570834343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t570834343 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t570834343, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T570834343_H
#ifndef VECTOR2_T2013858152_H
#define VECTOR2_T2013858152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2013858152 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2013858152, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2013858152, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2013858152_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2013858152  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2013858152  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2013858152  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2013858152  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2013858152  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2013858152  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2013858152  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2013858152  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2013858152_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2013858152  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2013858152 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2013858152  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2013858152_StaticFields, ___oneVector_3)); }
	inline Vector2_t2013858152  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2013858152 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2013858152  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2013858152_StaticFields, ___upVector_4)); }
	inline Vector2_t2013858152  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2013858152 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2013858152  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2013858152_StaticFields, ___downVector_5)); }
	inline Vector2_t2013858152  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2013858152 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2013858152  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2013858152_StaticFields, ___leftVector_6)); }
	inline Vector2_t2013858152  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2013858152 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2013858152  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2013858152_StaticFields, ___rightVector_7)); }
	inline Vector2_t2013858152  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2013858152 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2013858152  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2013858152_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2013858152  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2013858152 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2013858152  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2013858152_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2013858152  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2013858152 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2013858152  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2013858152_H
#ifndef ENUM_T2522028430_H
#define ENUM_T2522028430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2522028430  : public ValueType_t4021874819
{
public:

public:
};

struct Enum_t2522028430_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1826220394* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2522028430_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1826220394* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1826220394** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1826220394* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2522028430_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2522028430_marshaled_com
{
};
#endif // ENUM_T2522028430_H
#ifndef COLOR32_T2205416216_H
#define COLOR32_T2205416216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t2205416216 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t2205416216, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t2205416216, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t2205416216, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t2205416216, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2205416216_H
#ifndef SORTINGLAYER_T3414273685_H
#define SORTINGLAYER_T3414273685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SortingLayer
struct  SortingLayer_t3414273685 
{
public:
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SortingLayer_t3414273685, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYER_T3414273685_H
#ifndef VECTOR3_T2536695750_H
#define VECTOR3_T2536695750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2536695750 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2536695750, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2536695750, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2536695750, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2536695750_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2536695750  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2536695750  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2536695750  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2536695750  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2536695750  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2536695750  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2536695750  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2536695750  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2536695750  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2536695750  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2536695750  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2536695750 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2536695750  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___oneVector_5)); }
	inline Vector3_t2536695750  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2536695750 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2536695750  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___upVector_6)); }
	inline Vector3_t2536695750  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2536695750 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2536695750  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___downVector_7)); }
	inline Vector3_t2536695750  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2536695750 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2536695750  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___leftVector_8)); }
	inline Vector3_t2536695750  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2536695750 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2536695750  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___rightVector_9)); }
	inline Vector3_t2536695750  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2536695750 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2536695750  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2536695750  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2536695750 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2536695750  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___backVector_11)); }
	inline Vector3_t2536695750  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2536695750 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2536695750  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2536695750  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2536695750 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2536695750  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2536695750_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2536695750  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2536695750 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2536695750  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2536695750_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INT32_T1004765569_H
#define INT32_T1004765569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1004765569 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t1004765569, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T1004765569_H
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_T1187576726_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_T1187576726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_t1187576726  : public Attribute_t3633858984
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_T1187576726_H
#ifndef NETWORKVIEWID_T1732444736_H
#define NETWORKVIEWID_T1732444736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkViewID
struct  NetworkViewID_t1732444736 
{
public:
	// System.Int32 UnityEngine.NetworkViewID::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.NetworkViewID::b
	int32_t ___b_1;
	// System.Int32 UnityEngine.NetworkViewID::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(NetworkViewID_t1732444736, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(NetworkViewID_t1732444736, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(NetworkViewID_t1732444736, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEWID_T1732444736_H
#ifndef NETWORKPLAYER_T850741861_H
#define NETWORKPLAYER_T850741861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkPlayer
struct  NetworkPlayer_t850741861 
{
public:
	// System.Int32 UnityEngine.NetworkPlayer::index
	int32_t ___index_0;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(NetworkPlayer_t850741861, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKPLAYER_T850741861_H
#ifndef UNITYLOGWRITER_T2004064362_H
#define UNITYLOGWRITER_T2004064362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_t2004064362  : public TextWriter_t2972012753
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_T2004064362_H
#ifndef ANIMATORCLIPINFO_T3861237910_H
#define ANIMATORCLIPINFO_T3861237910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t3861237910 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3861237910, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t3861237910, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T3861237910_H
#ifndef ANIMATORSTATEINFO_T1436468845_H
#define ANIMATORSTATEINFO_T1436468845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_t1436468845 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1436468845, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1436468845, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1436468845, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1436468845, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1436468845, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1436468845, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1436468845, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1436468845, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_t1436468845, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_T1436468845_H
#ifndef ANIMATORTRANSITIONINFO_T1174776079_H
#define ANIMATORTRANSITIONINFO_T1174776079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t1174776079 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_4;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_5;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1174776079, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1174776079, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1174776079, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1174776079, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1174776079, ___m_AnyState_4)); }
	inline bool get_m_AnyState_4() const { return ___m_AnyState_4; }
	inline bool* get_address_of_m_AnyState_4() { return &___m_AnyState_4; }
	inline void set_m_AnyState_4(bool value)
	{
		___m_AnyState_4 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t1174776079, ___m_TransitionType_5)); }
	inline int32_t get_m_TransitionType_5() const { return ___m_TransitionType_5; }
	inline int32_t* get_address_of_m_TransitionType_5() { return &___m_TransitionType_5; }
	inline void set_m_TransitionType_5(int32_t value)
	{
		___m_TransitionType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t1174776079_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t1174776079_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	float ___m_NormalizedTime_3;
	int32_t ___m_AnyState_4;
	int32_t ___m_TransitionType_5;
};
#endif // ANIMATORTRANSITIONINFO_T1174776079_H
#ifndef VOID_T4119679456_H
#define VOID_T4119679456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t4119679456 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T4119679456_H
#ifndef RPC_T1263621496_H
#define RPC_T1263621496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RPC
struct  RPC_t1263621496  : public Attribute_t3633858984
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RPC_T1263621496_H
#ifndef QUERYTRIGGERINTERACTION_T2626752235_H
#define QUERYTRIGGERINTERACTION_T2626752235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t2626752235 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t2626752235, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERYTRIGGERINTERACTION_T2626752235_H
#ifndef COLLISION_T559075286_H
#define COLLISION_T559075286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t559075286  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t2536695750  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t2536695750  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t1171925908 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t2433158712 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t3033766555* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t559075286, ___m_Impulse_0)); }
	inline Vector3_t2536695750  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t2536695750 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t2536695750  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t559075286, ___m_RelativeVelocity_1)); }
	inline Vector3_t2536695750  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t2536695750 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t2536695750  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t559075286, ___m_Rigidbody_2)); }
	inline Rigidbody_t1171925908 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t1171925908 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t1171925908 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t559075286, ___m_Collider_3)); }
	inline Collider_t2433158712 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t2433158712 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t2433158712 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t559075286, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t3033766555* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t3033766555** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t3033766555* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t559075286_marshaled_pinvoke
{
	Vector3_t2536695750  ___m_Impulse_0;
	Vector3_t2536695750  ___m_RelativeVelocity_1;
	Rigidbody_t1171925908 * ___m_Rigidbody_2;
	Collider_t2433158712 * ___m_Collider_3;
	ContactPoint_t768313838 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t559075286_marshaled_com
{
	Vector3_t2536695750  ___m_Impulse_0;
	Vector3_t2536695750  ___m_RelativeVelocity_1;
	Rigidbody_t1171925908 * ___m_Rigidbody_2;
	Collider_t2433158712 * ___m_Collider_3;
	ContactPoint_t768313838 * ___m_Contacts_4;
};
#endif // COLLISION_T559075286_H
#ifndef CONTROLLERCOLLIDERHIT_T810335212_H
#define CONTROLLERCOLLIDERHIT_T810335212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t810335212  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t1831852150 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t2433158712 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t2536695750  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t2536695750  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t2536695750  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t810335212, ___m_Controller_0)); }
	inline CharacterController_t1831852150 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t1831852150 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t1831852150 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t810335212, ___m_Collider_1)); }
	inline Collider_t2433158712 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t2433158712 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t2433158712 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t810335212, ___m_Point_2)); }
	inline Vector3_t2536695750  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t2536695750 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t2536695750  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t810335212, ___m_Normal_3)); }
	inline Vector3_t2536695750  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t2536695750 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t2536695750  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t810335212, ___m_MoveDirection_4)); }
	inline Vector3_t2536695750  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t2536695750 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t2536695750  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t810335212, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t810335212, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t810335212_marshaled_pinvoke
{
	CharacterController_t1831852150 * ___m_Controller_0;
	Collider_t2433158712 * ___m_Collider_1;
	Vector3_t2536695750  ___m_Point_2;
	Vector3_t2536695750  ___m_Normal_3;
	Vector3_t2536695750  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t810335212_marshaled_com
{
	CharacterController_t1831852150 * ___m_Controller_0;
	Collider_t2433158712 * ___m_Collider_1;
	Vector3_t2536695750  ___m_Point_2;
	Vector3_t2536695750  ___m_Normal_3;
	Vector3_t2536695750  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T810335212_H
#ifndef ASYNCOPERATION_T2493298791_H
#define ASYNCOPERATION_T2493298791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t2493298791  : public YieldInstruction_t1245760601
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t2493298791, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t2493298791_marshaled_pinvoke : public YieldInstruction_t1245760601_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t2493298791_marshaled_com : public YieldInstruction_t1245760601_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ASYNCOPERATION_T2493298791_H
#ifndef TRACKEDREFERENCE_T2661953186_H
#define TRACKEDREFERENCE_T2661953186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t2661953186  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t2661953186, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2661953186_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t2661953186_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T2661953186_H
#ifndef RAYCASTHIT_T1513098349_H
#define RAYCASTHIT_T1513098349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1513098349 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t2536695750  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t2536695750  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2013858152  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t2433158712 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1513098349, ___m_Point_0)); }
	inline Vector3_t2536695750  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2536695750 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2536695750  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1513098349, ___m_Normal_1)); }
	inline Vector3_t2536695750  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2536695750 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2536695750  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1513098349, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1513098349, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1513098349, ___m_UV_4)); }
	inline Vector2_t2013858152  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2013858152 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2013858152  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1513098349, ___m_Collider_5)); }
	inline Collider_t2433158712 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t2433158712 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t2433158712 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1513098349_marshaled_pinvoke
{
	Vector3_t2536695750  ___m_Point_0;
	Vector3_t2536695750  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2013858152  ___m_UV_4;
	Collider_t2433158712 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1513098349_marshaled_com
{
	Vector3_t2536695750  ___m_Point_0;
	Vector3_t2536695750  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2013858152  ___m_UV_4;
	Collider_t2433158712 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1513098349_H
#ifndef RAYCASTHIT2D_T1149663782_H
#define RAYCASTHIT2D_T1149663782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t1149663782 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2013858152  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2013858152  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2013858152  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t4141412607 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1149663782, ___m_Centroid_0)); }
	inline Vector2_t2013858152  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2013858152 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2013858152  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1149663782, ___m_Point_1)); }
	inline Vector2_t2013858152  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2013858152 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2013858152  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1149663782, ___m_Normal_2)); }
	inline Vector2_t2013858152  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2013858152 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2013858152  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1149663782, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1149663782, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t1149663782, ___m_Collider_5)); }
	inline Collider2D_t4141412607 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t4141412607 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t4141412607 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t1149663782_marshaled_pinvoke
{
	Vector2_t2013858152  ___m_Centroid_0;
	Vector2_t2013858152  ___m_Point_1;
	Vector2_t2013858152  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t4141412607 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t1149663782_marshaled_com
{
	Vector2_t2013858152  ___m_Centroid_0;
	Vector2_t2013858152  ___m_Point_1;
	Vector2_t2013858152  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t4141412607 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T1149663782_H
#ifndef ANIMATIONEVENTSOURCE_T876701330_H
#define ANIMATIONEVENTSOURCE_T876701330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t876701330 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimationEventSource_t876701330, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONEVENTSOURCE_T876701330_H
#ifndef ANIMATORCONTROLLERPARAMETERTYPE_T1747793050_H
#define ANIMATORCONTROLLERPARAMETERTYPE_T1747793050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t1747793050 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t1747793050, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETERTYPE_T1747793050_H
#ifndef CONTACTPOINT_T768313838_H
#define CONTACTPOINT_T768313838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t768313838 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t2536695750  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t2536695750  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t768313838, ___m_Point_0)); }
	inline Vector3_t2536695750  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t2536695750 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t2536695750  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t768313838, ___m_Normal_1)); }
	inline Vector3_t2536695750  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t2536695750 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t2536695750  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t768313838, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t768313838, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t768313838, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T768313838_H
#ifndef PARTICLE_T1427311943_H
#define PARTICLE_T1427311943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/Particle
struct  Particle_t1427311943 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t2536695750  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t2536695750  ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t2536695750  ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t2536695750  ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t2536695750  ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t2536695750  ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t2536695750  ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t2536695750  ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t2205416216  ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_12;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_13;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_Position_0)); }
	inline Vector3_t2536695750  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t2536695750 * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t2536695750  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_Velocity_1)); }
	inline Vector3_t2536695750  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_t2536695750 * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_t2536695750  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimatedVelocity_2() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_AnimatedVelocity_2)); }
	inline Vector3_t2536695750  get_m_AnimatedVelocity_2() const { return ___m_AnimatedVelocity_2; }
	inline Vector3_t2536695750 * get_address_of_m_AnimatedVelocity_2() { return &___m_AnimatedVelocity_2; }
	inline void set_m_AnimatedVelocity_2(Vector3_t2536695750  value)
	{
		___m_AnimatedVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_InitialVelocity_3() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_InitialVelocity_3)); }
	inline Vector3_t2536695750  get_m_InitialVelocity_3() const { return ___m_InitialVelocity_3; }
	inline Vector3_t2536695750 * get_address_of_m_InitialVelocity_3() { return &___m_InitialVelocity_3; }
	inline void set_m_InitialVelocity_3(Vector3_t2536695750  value)
	{
		___m_InitialVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotation_4() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_AxisOfRotation_4)); }
	inline Vector3_t2536695750  get_m_AxisOfRotation_4() const { return ___m_AxisOfRotation_4; }
	inline Vector3_t2536695750 * get_address_of_m_AxisOfRotation_4() { return &___m_AxisOfRotation_4; }
	inline void set_m_AxisOfRotation_4(Vector3_t2536695750  value)
	{
		___m_AxisOfRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_5() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_Rotation_5)); }
	inline Vector3_t2536695750  get_m_Rotation_5() const { return ___m_Rotation_5; }
	inline Vector3_t2536695750 * get_address_of_m_Rotation_5() { return &___m_Rotation_5; }
	inline void set_m_Rotation_5(Vector3_t2536695750  value)
	{
		___m_Rotation_5 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_6() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_AngularVelocity_6)); }
	inline Vector3_t2536695750  get_m_AngularVelocity_6() const { return ___m_AngularVelocity_6; }
	inline Vector3_t2536695750 * get_address_of_m_AngularVelocity_6() { return &___m_AngularVelocity_6; }
	inline void set_m_AngularVelocity_6(Vector3_t2536695750  value)
	{
		___m_AngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_StartSize_7() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_StartSize_7)); }
	inline Vector3_t2536695750  get_m_StartSize_7() const { return ___m_StartSize_7; }
	inline Vector3_t2536695750 * get_address_of_m_StartSize_7() { return &___m_StartSize_7; }
	inline void set_m_StartSize_7(Vector3_t2536695750  value)
	{
		___m_StartSize_7 = value;
	}

	inline static int32_t get_offset_of_m_StartColor_8() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_StartColor_8)); }
	inline Color32_t2205416216  get_m_StartColor_8() const { return ___m_StartColor_8; }
	inline Color32_t2205416216 * get_address_of_m_StartColor_8() { return &___m_StartColor_8; }
	inline void set_m_StartColor_8(Color32_t2205416216  value)
	{
		___m_StartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeed_9() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_RandomSeed_9)); }
	inline uint32_t get_m_RandomSeed_9() const { return ___m_RandomSeed_9; }
	inline uint32_t* get_address_of_m_RandomSeed_9() { return &___m_RandomSeed_9; }
	inline void set_m_RandomSeed_9(uint32_t value)
	{
		___m_RandomSeed_9 = value;
	}

	inline static int32_t get_offset_of_m_Lifetime_10() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_Lifetime_10)); }
	inline float get_m_Lifetime_10() const { return ___m_Lifetime_10; }
	inline float* get_address_of_m_Lifetime_10() { return &___m_Lifetime_10; }
	inline void set_m_Lifetime_10(float value)
	{
		___m_Lifetime_10 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetime_11() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_StartLifetime_11)); }
	inline float get_m_StartLifetime_11() const { return ___m_StartLifetime_11; }
	inline float* get_address_of_m_StartLifetime_11() { return &___m_StartLifetime_11; }
	inline void set_m_StartLifetime_11(float value)
	{
		___m_StartLifetime_11 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator0_12() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_EmitAccumulator0_12)); }
	inline float get_m_EmitAccumulator0_12() const { return ___m_EmitAccumulator0_12; }
	inline float* get_address_of_m_EmitAccumulator0_12() { return &___m_EmitAccumulator0_12; }
	inline void set_m_EmitAccumulator0_12(float value)
	{
		___m_EmitAccumulator0_12 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator1_13() { return static_cast<int32_t>(offsetof(Particle_t1427311943, ___m_EmitAccumulator1_13)); }
	inline float get_m_EmitAccumulator1_13() const { return ___m_EmitAccumulator1_13; }
	inline float* get_address_of_m_EmitAccumulator1_13() { return &___m_EmitAccumulator1_13; }
	inline void set_m_EmitAccumulator1_13(float value)
	{
		___m_EmitAccumulator1_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLE_T1427311943_H
#ifndef DELEGATE_T1668432903_H
#define DELEGATE_T1668432903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1668432903  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t2232043206 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1668432903, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1668432903, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1668432903, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1668432903, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1668432903, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1668432903, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1668432903, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1668432903, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1668432903, ___data_8)); }
	inline DelegateData_t2232043206 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2232043206 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2232043206 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1668432903_H
#ifndef PLAYABLEHANDLE_T2223876468_H
#define PLAYABLEHANDLE_T2223876468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t2223876468 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t2223876468, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t2223876468, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T2223876468_H
#ifndef DATASTREAMTYPE_T1095873354_H
#define DATASTREAMTYPE_T1095873354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t1095873354 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t1095873354, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T1095873354_H
#ifndef PLAYSTATE_T2450080222_H
#define PLAYSTATE_T2450080222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayState
struct  PlayState_t2450080222 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlayState_t2450080222, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYSTATE_T2450080222_H
#ifndef OBJECT_T889304621_H
#define OBJECT_T889304621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t889304621  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t889304621, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t889304621_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t889304621_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t889304621_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t889304621_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T889304621_H
#ifndef PLAYABLEGRAPH_T3488947362_H
#define PLAYABLEGRAPH_T3488947362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t3488947362 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableGraph::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t3488947362, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t3488947362, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_T3488947362_H
#ifndef HIDEFLAGS_T405705414_H
#define HIDEFLAGS_T405705414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t405705414 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t405705414, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T405705414_H
#ifndef PLAYABLEOUTPUTHANDLE_T1384061269_H
#define PLAYABLEOUTPUTHANDLE_T1384061269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t1384061269 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	IntPtr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1384061269, ___m_Handle_0)); }
	inline IntPtr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline IntPtr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(IntPtr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1384061269, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T1384061269_H
#ifndef CALENDARUNIT_T331013377_H
#define CALENDARUNIT_T331013377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarUnit
struct  CalendarUnit_t331013377 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarUnit::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarUnit_t331013377, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARUNIT_T331013377_H
#ifndef LOCALNOTIFICATION_T1079836698_H
#define LOCALNOTIFICATION_T1079836698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t1079836698  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(LocalNotification_t1079836698, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

struct LocalNotification_t1079836698_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t1079836698_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T1079836698_H
#ifndef REMOTENOTIFICATION_T3092954430_H
#define REMOTENOTIFICATION_T3092954430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t3092954430  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::notificationWrapper
	IntPtr_t ___notificationWrapper_0;

public:
	inline static int32_t get_offset_of_notificationWrapper_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t3092954430, ___notificationWrapper_0)); }
	inline IntPtr_t get_notificationWrapper_0() const { return ___notificationWrapper_0; }
	inline IntPtr_t* get_address_of_notificationWrapper_0() { return &___notificationWrapper_0; }
	inline void set_notificationWrapper_0(IntPtr_t value)
	{
		___notificationWrapper_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T3092954430_H
#ifndef LOADSCENEMODE_T3797955393_H
#define LOADSCENEMODE_T3797955393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3797955393 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3797955393, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEMODE_T3797955393_H
#ifndef CALENDARIDENTIFIER_T1393471945_H
#define CALENDARIDENTIFIER_T1393471945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.CalendarIdentifier
struct  CalendarIdentifier_t1393471945 
{
public:
	// System.Int32 UnityEngine.iOS.CalendarIdentifier::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CalendarIdentifier_t1393471945, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARIDENTIFIER_T1393471945_H
#ifndef COMMANDBUFFER_T72207482_H
#define COMMANDBUFFER_T72207482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CommandBuffer
struct  CommandBuffer_t72207482  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t72207482, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDBUFFER_T72207482_H
#ifndef BITSTREAM_T3623688246_H
#define BITSTREAM_T3623688246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BitStream
struct  BitStream_t3623688246  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.BitStream::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(BitStream_t3623688246, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITSTREAM_T3623688246_H
#ifndef AXIS_T3867678894_H
#define AXIS_T3867678894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Axis
struct  Axis_t3867678894 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axis_t3867678894, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXIS_T3867678894_H
#ifndef EDGE_T4189799486_H
#define EDGE_T4189799486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Edge
struct  Edge_t4189799486 
{
public:
	// System.Int32 UnityEngine.RectTransform/Edge::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Edge_t4189799486, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDGE_T4189799486_H
#ifndef DRIVENTRANSFORMPROPERTIES_T3434989611_H
#define DRIVENTRANSFORMPROPERTIES_T3434989611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t3434989611 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t3434989611, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENTRANSFORMPROPERTIES_T3434989611_H
#ifndef NETWORKMESSAGEINFO_T3996136435_H
#define NETWORKMESSAGEINFO_T3996136435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkMessageInfo
struct  NetworkMessageInfo_t3996136435 
{
public:
	// System.Double UnityEngine.NetworkMessageInfo::m_TimeStamp
	double ___m_TimeStamp_0;
	// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::m_Sender
	NetworkPlayer_t850741861  ___m_Sender_1;
	// UnityEngine.NetworkViewID UnityEngine.NetworkMessageInfo::m_ViewID
	NetworkViewID_t1732444736  ___m_ViewID_2;

public:
	inline static int32_t get_offset_of_m_TimeStamp_0() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t3996136435, ___m_TimeStamp_0)); }
	inline double get_m_TimeStamp_0() const { return ___m_TimeStamp_0; }
	inline double* get_address_of_m_TimeStamp_0() { return &___m_TimeStamp_0; }
	inline void set_m_TimeStamp_0(double value)
	{
		___m_TimeStamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Sender_1() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t3996136435, ___m_Sender_1)); }
	inline NetworkPlayer_t850741861  get_m_Sender_1() const { return ___m_Sender_1; }
	inline NetworkPlayer_t850741861 * get_address_of_m_Sender_1() { return &___m_Sender_1; }
	inline void set_m_Sender_1(NetworkPlayer_t850741861  value)
	{
		___m_Sender_1 = value;
	}

	inline static int32_t get_offset_of_m_ViewID_2() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t3996136435, ___m_ViewID_2)); }
	inline NetworkViewID_t1732444736  get_m_ViewID_2() const { return ___m_ViewID_2; }
	inline NetworkViewID_t1732444736 * get_address_of_m_ViewID_2() { return &___m_ViewID_2; }
	inline void set_m_ViewID_2(NetworkViewID_t1732444736  value)
	{
		___m_ViewID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKMESSAGEINFO_T3996136435_H
#ifndef SCRIPTABLERENDERCONTEXT_T359416494_H
#define SCRIPTABLERENDERCONTEXT_T359416494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.ScriptableRenderContext
struct  ScriptableRenderContext_t359416494 
{
public:
	// System.IntPtr UnityEngine.Experimental.Rendering.ScriptableRenderContext::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ScriptableRenderContext_t359416494, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTABLERENDERCONTEXT_T359416494_H
#ifndef ANIMATIONPLAYABLEOUTPUT_T520948597_H
#define ANIMATIONPLAYABLEOUTPUT_T520948597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t520948597 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t1384061269  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t520948597, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1384061269  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1384061269 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1384061269  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_T520948597_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T692330186_H
#define ANIMATORCONTROLLERPLAYABLE_T692330186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t692330186 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t2223876468  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t692330186, ___m_Handle_0)); }
	inline PlayableHandle_t2223876468  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2223876468 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2223876468  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t692330186_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t692330186  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t692330186_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t692330186  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t692330186 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t692330186  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T692330186_H
#ifndef ANIMATIONEVENT_T2169826129_H
#define ANIMATIONEVENT_T2169826129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_t2169826129  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t889304621 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t889468257 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1436468845  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t3861237910  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_ObjectReferenceParameter_3)); }
	inline Object_t889304621 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_t889304621 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_t889304621 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_StateSender_8)); }
	inline AnimationState_t889468257 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t889468257 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t889468257 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_t1436468845  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_t1436468845 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_t1436468845  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_t2169826129, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t3861237910  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t3861237910 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t3861237910  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t2169826129_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_t889304621_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t889468257 * ___m_StateSender_8;
	AnimatorStateInfo_t1436468845  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t3861237910  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t2169826129_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_t889304621_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t889468257 * ___m_StateSender_8;
	AnimatorStateInfo_t1436468845  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t3861237910  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_T2169826129_H
#ifndef ANIMATIONSTATE_T889468257_H
#define ANIMATIONSTATE_T889468257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t889468257  : public TrackedReference_t2661953186
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T889468257_H
#ifndef MATERIAL_T310364891_H
#define MATERIAL_T310364891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t310364891  : public Object_t889304621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T310364891_H
#ifndef MULTICASTDELEGATE_T4248591139_H
#define MULTICASTDELEGATE_T4248591139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t4248591139  : public Delegate_t1668432903
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t4248591139 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t4248591139 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t4248591139, ___prev_9)); }
	inline MulticastDelegate_t4248591139 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t4248591139 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t4248591139 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t4248591139, ___kpm_next_10)); }
	inline MulticastDelegate_t4248591139 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t4248591139 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t4248591139 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T4248591139_H
#ifndef ANIMATORCONTROLLERPARAMETER_T2195185656_H
#define ANIMATORCONTROLLERPARAMETER_T2195185656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t2195185656  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2195185656, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2195185656, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2195185656, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2195185656, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t2195185656, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETER_T2195185656_H
#ifndef MOTION_T928451078_H
#define MOTION_T928451078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t928451078  : public Object_t889304621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T928451078_H
#ifndef ANIMATIONOFFSETPLAYABLE_T2497396470_H
#define ANIMATIONOFFSETPLAYABLE_T2497396470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t2497396470 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t2223876468  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t2497396470, ___m_Handle_0)); }
	inline PlayableHandle_t2223876468  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2223876468 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2223876468  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t2497396470_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t2497396470  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t2497396470_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t2497396470  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t2497396470 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t2497396470  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T2497396470_H
#ifndef RESOURCEREQUEST_T1629696935_H
#define RESOURCEREQUEST_T1629696935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t1629696935  : public AsyncOperation_t2493298791
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_1;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_2;

public:
	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(ResourceRequest_t1629696935, ___m_Path_1)); }
	inline String_t* get_m_Path_1() const { return ___m_Path_1; }
	inline String_t** get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(String_t* value)
	{
		___m_Path_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_1), value);
	}

	inline static int32_t get_offset_of_m_Type_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t1629696935, ___m_Type_2)); }
	inline Type_t * get_m_Type_2() const { return ___m_Type_2; }
	inline Type_t ** get_address_of_m_Type_2() { return &___m_Type_2; }
	inline void set_m_Type_2(Type_t * value)
	{
		___m_Type_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t1629696935_marshaled_pinvoke : public AsyncOperation_t2493298791_marshaled_pinvoke
{
	char* ___m_Path_1;
	Type_t * ___m_Type_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t1629696935_marshaled_com : public AsyncOperation_t2493298791_marshaled_com
{
	Il2CppChar* ___m_Path_1;
	Type_t * ___m_Type_2;
};
#endif // RESOURCEREQUEST_T1629696935_H
#ifndef SPRITE_T2098836954_H
#define SPRITE_T2098836954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t2098836954  : public Object_t889304621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T2098836954_H
#ifndef SHADER_T2722065682_H
#define SHADER_T2722065682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t2722065682  : public Object_t889304621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T2722065682_H
#ifndef TEXTURE_T2238064212_H
#define TEXTURE_T2238064212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t2238064212  : public Object_t889304621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T2238064212_H
#ifndef ANIMATIONMIXERPLAYABLE_T34728908_H
#define ANIMATIONMIXERPLAYABLE_T34728908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t34728908 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t2223876468  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t34728908, ___m_Handle_0)); }
	inline PlayableHandle_t2223876468  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2223876468 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2223876468  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_T34728908_H
#ifndef COMPONENT_T1302393703_H
#define COMPONENT_T1302393703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1302393703  : public Object_t889304621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1302393703_H
#ifndef ANIMATIONCLIPPLAYABLE_T2789240033_H
#define ANIMATIONCLIPPLAYABLE_T2789240033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t2789240033 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t2223876468  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t2789240033, ___m_Handle_0)); }
	inline PlayableHandle_t2223876468  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2223876468 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2223876468  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T2789240033_H
#ifndef SCRIPTABLEOBJECT_T637317905_H
#define SCRIPTABLEOBJECT_T637317905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t637317905  : public Object_t889304621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t637317905_marshaled_pinvoke : public Object_t889304621_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t637317905_marshaled_com : public Object_t889304621_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T637317905_H
#ifndef PHYSICMATERIAL_T2540319972_H
#define PHYSICMATERIAL_T2540319972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t2540319972  : public Object_t889304621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T2540319972_H
#ifndef PLAYABLEOUTPUT_T3338350298_H
#define PLAYABLEOUTPUT_T3338350298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t3338350298 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t1384061269  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t3338350298, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1384061269  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1384061269 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1384061269  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t3338350298_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t3338350298  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t3338350298_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t3338350298  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t3338350298 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t3338350298  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T3338350298_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T1196608417_H
#define ANIMATIONLAYERMIXERPLAYABLE_T1196608417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t1196608417 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t2223876468  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t1196608417, ___m_Handle_0)); }
	inline PlayableHandle_t2223876468  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2223876468 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2223876468  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t1196608417_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t1196608417  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t1196608417_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t1196608417  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t1196608417 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t1196608417  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T1196608417_H
#ifndef AUDIOCLIPPLAYABLE_T860390623_H
#define AUDIOCLIPPLAYABLE_T860390623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t860390623 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t2223876468  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t860390623, ___m_Handle_0)); }
	inline PlayableHandle_t2223876468  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2223876468 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2223876468  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T860390623_H
#ifndef AUDIOMIXERPLAYABLE_T1288743271_H
#define AUDIOMIXERPLAYABLE_T1288743271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t1288743271 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t2223876468  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t1288743271, ___m_Handle_0)); }
	inline PlayableHandle_t2223876468  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2223876468 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2223876468  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T1288743271_H
#ifndef AUDIOPLAYABLEOUTPUT_T2921526655_H
#define AUDIOPLAYABLEOUTPUT_T2921526655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t2921526655 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t1384061269  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t2921526655, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1384061269  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1384061269 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1384061269  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T2921526655_H
#ifndef SPRITEATLAS_T3337285292_H
#define SPRITEATLAS_T3337285292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t3337285292  : public Object_t889304621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T3337285292_H
#ifndef AUDIOCLIP_T4282011234_H
#define AUDIOCLIP_T4282011234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t4282011234  : public Object_t889304621
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3679866261 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t833840395 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t4282011234, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t3679866261 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t3679866261 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t3679866261 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t4282011234, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t833840395 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t833840395 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t833840395 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T4282011234_H
#ifndef PLAYABLE_T442113288_H
#define PLAYABLE_T442113288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t442113288 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t2223876468  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t442113288, ___m_Handle_0)); }
	inline PlayableHandle_t2223876468  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t2223876468 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t2223876468  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t442113288_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t442113288  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t442113288_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t442113288  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t442113288 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t442113288  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T442113288_H
#ifndef REQUESTATLASCALLBACK_T4029030340_H
#define REQUESTATLASCALLBACK_T4029030340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t4029030340  : public MulticastDelegate_t4248591139
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T4029030340_H
#ifndef RENDERER_T3337016967_H
#define RENDERER_T3337016967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t3337016967  : public Component_t1302393703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T3337016967_H
#ifndef REAPPLYDRIVENPROPERTIES_T1954801218_H
#define REAPPLYDRIVENPROPERTIES_T1954801218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t1954801218  : public MulticastDelegate_t4248591139
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T1954801218_H
#ifndef STATEMACHINEBEHAVIOUR_T3954742484_H
#define STATEMACHINEBEHAVIOUR_T3954742484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t3954742484  : public ScriptableObject_t637317905
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T3954742484_H
#ifndef RIGIDBODY_T1171925908_H
#define RIGIDBODY_T1171925908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t1171925908  : public Component_t1302393703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T1171925908_H
#ifndef COLLIDER_T2433158712_H
#define COLLIDER_T2433158712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t2433158712  : public Component_t1302393703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T2433158712_H
#ifndef TRANSFORM_T1026079987_H
#define TRANSFORM_T1026079987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t1026079987  : public Component_t1302393703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T1026079987_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T1965778200_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T1965778200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t1965778200  : public MulticastDelegate_t4248591139
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T1965778200_H
#ifndef BEHAVIOUR_T553138338_H
#define BEHAVIOUR_T553138338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t553138338  : public Component_t1302393703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T553138338_H
#ifndef RIGIDBODY2D_T281205685_H
#define RIGIDBODY2D_T281205685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t281205685  : public Component_t1302393703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T281205685_H
#ifndef PCMSETPOSITIONCALLBACK_T833840395_H
#define PCMSETPOSITIONCALLBACK_T833840395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t833840395  : public MulticastDelegate_t4248591139
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T833840395_H
#ifndef PCMREADERCALLBACK_T3679866261_H
#define PCMREADERCALLBACK_T3679866261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t3679866261  : public MulticastDelegate_t4248591139
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T3679866261_H
#ifndef TEXTURE2D_T3143483337_H
#define TEXTURE2D_T3143483337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3143483337  : public Texture_t2238064212
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3143483337_H
#ifndef RENDERTEXTURE_T3290507881_H
#define RENDERTEXTURE_T3290507881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t3290507881  : public Texture_t2238064212
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T3290507881_H
#ifndef ANIMATIONCLIP_T454815319_H
#define ANIMATIONCLIP_T454815319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t454815319  : public Motion_t928451078
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T454815319_H
#ifndef PARTICLESYSTEM_T3692253423_H
#define PARTICLESYSTEM_T3692253423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t3692253423  : public Component_t1302393703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T3692253423_H
#ifndef SPHERECOLLIDER_T3655050292_H
#define SPHERECOLLIDER_T3655050292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t3655050292  : public Collider_t2433158712
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T3655050292_H
#ifndef AUDIOSOURCE_T165630056_H
#define AUDIOSOURCE_T165630056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t165630056  : public Behaviour_t553138338
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T165630056_H
#ifndef COLLIDER2D_T4141412607_H
#define COLLIDER2D_T4141412607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t4141412607  : public Behaviour_t553138338
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T4141412607_H
#ifndef CHARACTERCONTROLLER_T1831852150_H
#define CHARACTERCONTROLLER_T1831852150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t1831852150  : public Collider_t2433158712
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T1831852150_H
#ifndef CAPSULECOLLIDER_T2557572108_H
#define CAPSULECOLLIDER_T2557572108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t2557572108  : public Collider_t2433158712
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T2557572108_H
#ifndef MESHCOLLIDER_T1485548118_H
#define MESHCOLLIDER_T1485548118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t1485548118  : public Collider_t2433158712
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T1485548118_H
#ifndef BOXCOLLIDER_T3461336466_H
#define BOXCOLLIDER_T3461336466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t3461336466  : public Collider_t2433158712
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T3461336466_H
#ifndef RECTTRANSFORM_T3642922515_H
#define RECTTRANSFORM_T3642922515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3642922515  : public Transform_t1026079987
{
public:

public:
};

struct RectTransform_t3642922515_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1954801218 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3642922515_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1954801218 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1954801218 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1954801218 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3642922515_H
#ifndef SPRITERENDERER_T665388607_H
#define SPRITERENDERER_T665388607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t665388607  : public Renderer_t3337016967
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T665388607_H
#ifndef ANIMATOR_T4289089135_H
#define ANIMATOR_T4289089135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t4289089135  : public Behaviour_t553138338
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T4289089135_H
#ifndef NETWORKVIEW_T1337888596_H
#define NETWORKVIEW_T1337888596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkView
struct  NetworkView_t1337888596  : public Behaviour_t553138338
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKVIEW_T1337888596_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (NetworkView_t1337888596), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (BitStream_t3623688246), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1301[1] = 
{
	BitStream_t3623688246::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (RPC_t1263621496), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (HostData_t1624050234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1303[10] = 
{
	HostData_t1624050234::get_offset_of_m_Nat_0(),
	HostData_t1624050234::get_offset_of_m_GameType_1(),
	HostData_t1624050234::get_offset_of_m_GameName_2(),
	HostData_t1624050234::get_offset_of_m_ConnectedPlayers_3(),
	HostData_t1624050234::get_offset_of_m_PlayerLimit_4(),
	HostData_t1624050234::get_offset_of_m_IP_5(),
	HostData_t1624050234::get_offset_of_m_Port_6(),
	HostData_t1624050234::get_offset_of_m_PasswordProtected_7(),
	HostData_t1624050234::get_offset_of_m_Comment_8(),
	HostData_t1624050234::get_offset_of_m_GUID_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (NetworkMessageInfo_t3996136435)+ sizeof (RuntimeObject), sizeof(NetworkMessageInfo_t3996136435 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1304[3] = 
{
	NetworkMessageInfo_t3996136435::get_offset_of_m_TimeStamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t3996136435::get_offset_of_m_Sender_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NetworkMessageInfo_t3996136435::get_offset_of_m_ViewID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (PlayerConnectionInternal_t1812682739), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (Random_t797721516), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (CommandBuffer_t72207482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1308[1] = 
{
	CommandBuffer_t72207482::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (ResourceRequest_t1629696935), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1309[2] = 
{
	ResourceRequest_t1629696935::get_offset_of_m_Path_1(),
	ResourceRequest_t1629696935::get_offset_of_m_Type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (Resources_t1700367204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (Shader_t2722065682), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (Material_t310364891), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (SortingLayer_t3414273685)+ sizeof (RuntimeObject), sizeof(SortingLayer_t3414273685 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1313[1] = 
{
	SortingLayer_t3414273685::get_offset_of_m_Id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (Sprite_t2098836954), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (SpriteRenderer_t665388607), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (DataUtility_t2821325640), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (Texture_t2238064212), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (Texture2D_t3143483337), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (RenderTexture_t3290507881), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (Time_t640727949), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (HideFlags_t405705414)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1321[10] = 
{
	HideFlags_t405705414::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (Object_t889304621), sizeof(Object_t889304621_marshaled_pinvoke), sizeof(Object_t889304621_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1322[2] = 
{
	Object_t889304621::get_offset_of_m_CachedPtr_0(),
	Object_t889304621_StaticFields::get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (UnityLogWriter_t2004064362), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (YieldInstruction_t1245760601), sizeof(YieldInstruction_t1245760601_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (PlayState_t2450080222)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1325[3] = 
{
	PlayState_t2450080222::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (PlayableHandle_t2223876468)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t2223876468 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1326[2] = 
{
	PlayableHandle_t2223876468::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t2223876468::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (Playable_t442113288)+ sizeof (RuntimeObject), sizeof(Playable_t442113288 ), sizeof(Playable_t442113288_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1327[2] = 
{
	Playable_t442113288::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t442113288_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (DataStreamType_t1095873354)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1328[5] = 
{
	DataStreamType_t1095873354::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (PlayableGraph_t3488947362)+ sizeof (RuntimeObject), sizeof(PlayableGraph_t3488947362 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1329[2] = 
{
	PlayableGraph_t3488947362::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_t3488947362::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (PlayableOutputHandle_t1384061269)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t1384061269 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1330[2] = 
{
	PlayableOutputHandle_t1384061269::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t1384061269::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (PlayableOutput_t3338350298)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t3338350298 ), sizeof(PlayableOutput_t3338350298_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1331[2] = 
{
	PlayableOutput_t3338350298::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t3338350298_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (CalendarIdentifier_t1393471945)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1332[12] = 
{
	CalendarIdentifier_t1393471945::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (CalendarUnit_t331013377)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1333[12] = 
{
	CalendarUnit_t331013377::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (LocalNotification_t1079836698), -1, sizeof(LocalNotification_t1079836698_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1334[2] = 
{
	LocalNotification_t1079836698::get_offset_of_notificationWrapper_0(),
	LocalNotification_t1079836698_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (RemoteNotification_t3092954430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1335[1] = 
{
	RemoteNotification_t3092954430::get_offset_of_notificationWrapper_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (Scene_t570834343)+ sizeof (RuntimeObject), sizeof(Scene_t570834343 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1336[1] = 
{
	Scene_t570834343::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (LoadSceneMode_t3797955393)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1337[3] = 
{
	LoadSceneMode_t3797955393::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (SceneManager_t3339680770), -1, sizeof(SceneManager_t3339680770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1338[3] = 
{
	SceneManager_t3339680770_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t3339680770_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t3339680770_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (ScriptableRenderContext_t359416494)+ sizeof (RuntimeObject), sizeof(ScriptableRenderContext_t359416494 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1339[1] = 
{
	ScriptableRenderContext_t359416494::get_offset_of_m_Ptr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (Transform_t1026079987), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (Enumerator_t3663702855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1341[2] = 
{
	Enumerator_t3663702855::get_offset_of_outer_0(),
	Enumerator_t3663702855::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (DrivenTransformProperties_t3434989611)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1342[26] = 
{
	DrivenTransformProperties_t3434989611::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (DrivenRectTransformTracker_t3608352242)+ sizeof (RuntimeObject), sizeof(DrivenRectTransformTracker_t3608352242 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (RectTransform_t3642922515), -1, sizeof(RectTransform_t3642922515_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1344[1] = 
{
	RectTransform_t3642922515_StaticFields::get_offset_of_reapplyDrivenProperties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (ReapplyDrivenProperties_t1954801218), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (Edge_t4189799486)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1346[5] = 
{
	Edge_t4189799486::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (Axis_t3867678894)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1347[3] = 
{
	Axis_t3867678894::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (SpriteAtlasManager_t46120008), -1, sizeof(SpriteAtlasManager_t46120008_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1348[2] = 
{
	SpriteAtlasManager_t46120008_StaticFields::get_offset_of_atlasRequested_0(),
	SpriteAtlasManager_t46120008_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (RequestAtlasCallback_t4029030340), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (SpriteAtlas_t3337285292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (ParticleSystem_t3692253423), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (Particle_t1427311943)+ sizeof (RuntimeObject), sizeof(Particle_t1427311943 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1352[14] = 
{
	Particle_t1427311943::get_offset_of_m_Position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_Velocity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_AnimatedVelocity_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_InitialVelocity_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_AxisOfRotation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_Rotation_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_AngularVelocity_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_StartSize_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_StartColor_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_RandomSeed_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_Lifetime_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_StartLifetime_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_EmitAccumulator0_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t1427311943::get_offset_of_m_EmitAccumulator1_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (ControllerColliderHit_t810335212), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1353[7] = 
{
	ControllerColliderHit_t810335212::get_offset_of_m_Controller_0(),
	ControllerColliderHit_t810335212::get_offset_of_m_Collider_1(),
	ControllerColliderHit_t810335212::get_offset_of_m_Point_2(),
	ControllerColliderHit_t810335212::get_offset_of_m_Normal_3(),
	ControllerColliderHit_t810335212::get_offset_of_m_MoveDirection_4(),
	ControllerColliderHit_t810335212::get_offset_of_m_MoveLength_5(),
	ControllerColliderHit_t810335212::get_offset_of_m_Push_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (Collision_t559075286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1354[5] = 
{
	Collision_t559075286::get_offset_of_m_Impulse_0(),
	Collision_t559075286::get_offset_of_m_RelativeVelocity_1(),
	Collision_t559075286::get_offset_of_m_Rigidbody_2(),
	Collision_t559075286::get_offset_of_m_Collider_3(),
	Collision_t559075286::get_offset_of_m_Contacts_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (QueryTriggerInteraction_t2626752235)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1355[4] = 
{
	QueryTriggerInteraction_t2626752235::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (Physics_t17190194), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (ContactPoint_t768313838)+ sizeof (RuntimeObject), sizeof(ContactPoint_t768313838 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1357[5] = 
{
	ContactPoint_t768313838::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t768313838::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t768313838::get_offset_of_m_ThisColliderInstanceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t768313838::get_offset_of_m_OtherColliderInstanceID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ContactPoint_t768313838::get_offset_of_m_Separation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (Rigidbody_t1171925908), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (Collider_t2433158712), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (BoxCollider_t3461336466), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (SphereCollider_t3655050292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (MeshCollider_t1485548118), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (CapsuleCollider_t2557572108), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (RaycastHit_t1513098349)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1364[6] = 
{
	RaycastHit_t1513098349::get_offset_of_m_Point_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1513098349::get_offset_of_m_Normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1513098349::get_offset_of_m_FaceID_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1513098349::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1513098349::get_offset_of_m_UV_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit_t1513098349::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (PhysicMaterial_t2540319972), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (CharacterController_t1831852150), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (RaycastHit2D_t1149663782)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1367[6] = 
{
	RaycastHit2D_t1149663782::get_offset_of_m_Centroid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t1149663782::get_offset_of_m_Point_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t1149663782::get_offset_of_m_Normal_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t1149663782::get_offset_of_m_Distance_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t1149663782::get_offset_of_m_Fraction_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastHit2D_t1149663782::get_offset_of_m_Collider_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (Physics2D_t4288974566), -1, sizeof(Physics2D_t4288974566_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1368[1] = 
{
	Physics2D_t4288974566_StaticFields::get_offset_of_m_LastDisabledRigidbody2D_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { sizeof (Rigidbody2D_t281205685), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (Collider2D_t4141412607), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (AudioPlayableOutput_t2921526655)+ sizeof (RuntimeObject), sizeof(AudioPlayableOutput_t2921526655 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1371[1] = 
{
	AudioPlayableOutput_t2921526655::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (AudioClipPlayable_t860390623)+ sizeof (RuntimeObject), sizeof(AudioClipPlayable_t860390623 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1372[1] = 
{
	AudioClipPlayable_t860390623::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (AudioMixerPlayable_t1288743271)+ sizeof (RuntimeObject), sizeof(AudioMixerPlayable_t1288743271 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1373[1] = 
{
	AudioMixerPlayable_t1288743271::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (AudioSettings_t1420395759), -1, sizeof(AudioSettings_t1420395759_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1374[1] = 
{
	AudioSettings_t1420395759_StaticFields::get_offset_of_OnAudioConfigurationChanged_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (AudioConfigurationChangeHandler_t1965778200), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (AudioClip_t4282011234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1376[2] = 
{
	AudioClip_t4282011234::get_offset_of_m_PCMReaderCallback_2(),
	AudioClip_t4282011234::get_offset_of_m_PCMSetPositionCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (PCMReaderCallback_t3679866261), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (PCMSetPositionCallback_t833840395), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (AudioSource_t165630056), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (AudioPlayableGraphExtensions_t2566900710), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (SharedBetweenAnimatorsAttribute_t1187576726), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (StateMachineBehaviour_t3954742484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (AnimationClipPlayable_t2789240033)+ sizeof (RuntimeObject), sizeof(AnimationClipPlayable_t2789240033 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1383[1] = 
{
	AnimationClipPlayable_t2789240033::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (AnimationLayerMixerPlayable_t1196608417)+ sizeof (RuntimeObject), sizeof(AnimationLayerMixerPlayable_t1196608417 ), sizeof(AnimationLayerMixerPlayable_t1196608417_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1384[2] = 
{
	AnimationLayerMixerPlayable_t1196608417::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationLayerMixerPlayable_t1196608417_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (AnimationMixerPlayable_t34728908)+ sizeof (RuntimeObject), sizeof(AnimationMixerPlayable_t34728908 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1385[1] = 
{
	AnimationMixerPlayable_t34728908::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (AnimationOffsetPlayable_t2497396470)+ sizeof (RuntimeObject), sizeof(AnimationOffsetPlayable_t2497396470 ), sizeof(AnimationOffsetPlayable_t2497396470_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1386[2] = 
{
	AnimationOffsetPlayable_t2497396470::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationOffsetPlayable_t2497396470_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (AnimationPlayableOutput_t520948597)+ sizeof (RuntimeObject), sizeof(AnimationPlayableOutput_t520948597 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1387[1] = 
{
	AnimationPlayableOutput_t520948597::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (AnimatorControllerPlayable_t692330186)+ sizeof (RuntimeObject), sizeof(AnimatorControllerPlayable_t692330186 ), sizeof(AnimatorControllerPlayable_t692330186_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1388[2] = 
{
	AnimatorControllerPlayable_t692330186::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorControllerPlayable_t692330186_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (AnimationPlayableGraphExtensions_t1471151230), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (AnimationEventSource_t876701330)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1390[4] = 
{
	AnimationEventSource_t876701330::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (AnimationEvent_t2169826129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1391[11] = 
{
	AnimationEvent_t2169826129::get_offset_of_m_Time_0(),
	AnimationEvent_t2169826129::get_offset_of_m_FunctionName_1(),
	AnimationEvent_t2169826129::get_offset_of_m_StringParameter_2(),
	AnimationEvent_t2169826129::get_offset_of_m_ObjectReferenceParameter_3(),
	AnimationEvent_t2169826129::get_offset_of_m_FloatParameter_4(),
	AnimationEvent_t2169826129::get_offset_of_m_IntParameter_5(),
	AnimationEvent_t2169826129::get_offset_of_m_MessageOptions_6(),
	AnimationEvent_t2169826129::get_offset_of_m_Source_7(),
	AnimationEvent_t2169826129::get_offset_of_m_StateSender_8(),
	AnimationEvent_t2169826129::get_offset_of_m_AnimatorStateInfo_9(),
	AnimationEvent_t2169826129::get_offset_of_m_AnimatorClipInfo_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (AnimationClip_t454815319), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (AnimationState_t889468257), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (AnimatorControllerParameterType_t1747793050)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1394[5] = 
{
	AnimatorControllerParameterType_t1747793050::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (AnimatorClipInfo_t3861237910)+ sizeof (RuntimeObject), sizeof(AnimatorClipInfo_t3861237910 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1395[2] = 
{
	AnimatorClipInfo_t3861237910::get_offset_of_m_ClipInstanceID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorClipInfo_t3861237910::get_offset_of_m_Weight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (AnimatorStateInfo_t1436468845)+ sizeof (RuntimeObject), sizeof(AnimatorStateInfo_t1436468845 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1396[9] = 
{
	AnimatorStateInfo_t1436468845::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1436468845::get_offset_of_m_Path_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1436468845::get_offset_of_m_FullPath_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1436468845::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1436468845::get_offset_of_m_Length_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1436468845::get_offset_of_m_Speed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1436468845::get_offset_of_m_SpeedMultiplier_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1436468845::get_offset_of_m_Tag_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorStateInfo_t1436468845::get_offset_of_m_Loop_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (AnimatorTransitionInfo_t1174776079)+ sizeof (RuntimeObject), sizeof(AnimatorTransitionInfo_t1174776079_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1397[6] = 
{
	AnimatorTransitionInfo_t1174776079::get_offset_of_m_FullPath_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1174776079::get_offset_of_m_UserName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1174776079::get_offset_of_m_Name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1174776079::get_offset_of_m_NormalizedTime_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1174776079::get_offset_of_m_AnyState_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorTransitionInfo_t1174776079::get_offset_of_m_TransitionType_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (Animator_t4289089135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (AnimatorControllerParameter_t2195185656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1399[5] = 
{
	AnimatorControllerParameter_t2195185656::get_offset_of_m_Name_0(),
	AnimatorControllerParameter_t2195185656::get_offset_of_m_Type_1(),
	AnimatorControllerParameter_t2195185656::get_offset_of_m_DefaultFloat_2(),
	AnimatorControllerParameter_t2195185656::get_offset_of_m_DefaultInt_3(),
	AnimatorControllerParameter_t2195185656::get_offset_of_m_DefaultBool_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
