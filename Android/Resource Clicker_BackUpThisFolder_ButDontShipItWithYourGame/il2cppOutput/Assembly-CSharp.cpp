#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.IEnumerable`1<ISaveable>
struct IEnumerable_1_t0505C102B4F01B5466035FF9094D4FF9DF0CBE77;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<ISaveable>
struct List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// ISaveable[]
struct ISaveableU5BU5D_tDDEFA9F65B6B1860FC463E407F9307725B519351;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// AdsManager
struct AdsManager_tE059594BE435B356831188671B794CDE032FC41B;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ISaveable
struct ISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC;
// UnityEngine.Advertisements.IUnityAdsListener
struct IUnityAdsListener_t5F539BD30864A79A3CF8AED5367DBB29BAF3837F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// ItemCountingUI
struct ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ResourceManager
struct ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E;
// ResourceObject
struct ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SaveManager
struct SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SellItem
struct SellItem_t0A746857DDD9ACA19EE43D1421F0424CD565D12B;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// SpawnManager
struct SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3;
// UIMenu
struct UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UpgradeItem
struct UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Worker
struct Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD;
// WorkerInfo
struct WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED;
// WorkerManager
struct WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// ItemCountingUI/<AnimateIconHit>d__7
struct U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// ResourceObject/<Shake>d__13
struct U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09;

IL2CPP_EXTERN_C RuntimeClass* AdsManager_tE059594BE435B356831188671B794CDE032FC41B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0152ABB367CB5B97F01BE8B6C7E0D999793CD720;
IL2CPP_EXTERN_C String_t* _stringLiteral04125566686DF7C8A0C6FC4FD08275831A86D789;
IL2CPP_EXTERN_C String_t* _stringLiteral043434C6BB0A0082B9372B4E92F3C75630F7D85D;
IL2CPP_EXTERN_C String_t* _stringLiteral0663AF4DA1351BC822D640D926F2273F9D6FCCA1;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1F078E7C2669DF83F286E3609A4B9B3641D343;
IL2CPP_EXTERN_C String_t* _stringLiteral1593B3280BDACAC211BB99BA262CCA5F506C5CE6;
IL2CPP_EXTERN_C String_t* _stringLiteral32B6F9368820BD2CDA9CB9D72A2585DFFF11F59A;
IL2CPP_EXTERN_C String_t* _stringLiteral356969C220D9BE6384B14DA85ABA5A7FF10CA97B;
IL2CPP_EXTERN_C String_t* _stringLiteral3669DB73536170454216BA597CDED6167C4E18DC;
IL2CPP_EXTERN_C String_t* _stringLiteral39D49D75CC65034C0C333E398235E44DD6053904;
IL2CPP_EXTERN_C String_t* _stringLiteral3C5EB8D979616FFA586F0E1F70919945E7118FE7;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF2F2C8722A2013F312AB1C33E310359E26ED30;
IL2CPP_EXTERN_C String_t* _stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F;
IL2CPP_EXTERN_C String_t* _stringLiteral496D211C10CE9322E7EA60AA77CFAA7C9057694E;
IL2CPP_EXTERN_C String_t* _stringLiteral56C0D382AA01360686EC86280707D26099E2C9AD;
IL2CPP_EXTERN_C String_t* _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511;
IL2CPP_EXTERN_C String_t* _stringLiteral68EFE5D43F94566F03C39367809897B82F6ED8EF;
IL2CPP_EXTERN_C String_t* _stringLiteral6CBC309468131AECF1E60ABC845CF4283F0EE5A7;
IL2CPP_EXTERN_C String_t* _stringLiteral700192556041929D4AE4E231274A850A29A2B1FB;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral77556E02842E3CF226984047A5050611C0DC62FE;
IL2CPP_EXTERN_C String_t* _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD;
IL2CPP_EXTERN_C String_t* _stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D;
IL2CPP_EXTERN_C String_t* _stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3F31BA244307E513F0E859CABB9963BD32BAAA;
IL2CPP_EXTERN_C String_t* _stringLiteral9C62C6DFC7FB1C980FCAFF1631FE9286D608D4EE;
IL2CPP_EXTERN_C String_t* _stringLiteralA79C423FE09DCF8BCA3128D973C025531A781BFD;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6A7F8F11FCBED7A08BF425F2F60AB410D263B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAF0838B35DF6218CD7BDCDD4838785AB2A594EA5;
IL2CPP_EXTERN_C String_t* _stringLiteralB2FEC4D72EB27CB64B8A017D0001DE6E3DFF794A;
IL2CPP_EXTERN_C String_t* _stringLiteralB5262D071777E8B97783976D2E96331851B5CE6E;
IL2CPP_EXTERN_C String_t* _stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74;
IL2CPP_EXTERN_C String_t* _stringLiteralBB9F3CA2B1DD26E1EB57E7042868F05B9682880A;
IL2CPP_EXTERN_C String_t* _stringLiteralBDBF536BD17B6CCEF8508C0782CCAC9054D15D17;
IL2CPP_EXTERN_C String_t* _stringLiteralBFE5B63863C51613999DA998273EFE7794A7DB16;
IL2CPP_EXTERN_C String_t* _stringLiteralC684451D0741EFE4D20C933848D33B297BECC98F;
IL2CPP_EXTERN_C String_t* _stringLiteralCB053F1E57065ADB6E897433AD375C8B25D01614;
IL2CPP_EXTERN_C String_t* _stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81;
IL2CPP_EXTERN_C String_t* _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_m6AABC5CB066CE24F7099CDCFD37EEFF198E84B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF8F199152E9ED78F17E88D38B0D51E881440D73B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE9C47BF6436E719DBF96C521B520FB2E3BD6FB04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5DCC8E224125A3CEB447F8D07055ED4CC34B963F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B_mC7284F621D4467969DD11B4A3DBFE1741487F696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9576C81E34817F55DD15CD0217C7A9A7E6252753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7B62209EC44EDAE25769CE2DB11D28E11B6DFE5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m25F9822C8F36419F97592FBE6E0B14E5FA61C0B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateIconHitU3Ed__7_System_Collections_IEnumerator_Reset_m81206A0216A5C9F42ED82E1B70BCD501DB89F2CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__13_System_Collections_IEnumerator_Reset_mB0207B0FACA8FEBAA5C17F5CA0975A747A203C70_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<ISaveable>
struct List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ISaveableU5BU5D_tDDEFA9F65B6B1860FC463E407F9307725B519351* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ISaveableU5BU5D_tDDEFA9F65B6B1860FC463E407F9307725B519351* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ItemCountingUI/<AnimateIconHit>d__7
struct U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94  : public RuntimeObject
{
	// System.Int32 ItemCountingUI/<AnimateIconHit>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ItemCountingUI/<AnimateIconHit>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ItemCountingUI ItemCountingUI/<AnimateIconHit>d__7::<>4__this
	ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* ___U3CU3E4__this_2;
};

// ResourceObject/<Shake>d__13
struct U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09  : public RuntimeObject
{
	// System.Int32 ResourceObject/<Shake>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ResourceObject/<Shake>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ResourceObject ResourceObject/<Shake>d__13::<>4__this
	ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* ___U3CU3E4__this_2;
	// System.Single ResourceObject/<Shake>d__13::<sTime>5__2
	float ___U3CsTimeU3E5__2_3;
};

// System.Collections.Generic.List`1/Enumerator<ISaveable>
struct Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// AdsManager
struct AdsManager_tE059594BE435B356831188671B794CDE032FC41B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AdsManager::gameId
	String_t* ___gameId_5;
	// System.String[] AdsManager::adsName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___adsName_6;
	// System.Action AdsManager::onRewardedAdsSuccess
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onRewardedAdsSuccess_7;
};

struct AdsManager_tE059594BE435B356831188671B794CDE032FC41B_StaticFields
{
	// AdsManager AdsManager::instance
	AdsManager_tE059594BE435B356831188671B794CDE032FC41B* ___instance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GameManager::clearSave
	bool ___clearSave_5;
	// System.Boolean GameManager::isDebug
	bool ___isDebug_6;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// ItemCountingUI
struct ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ItemCountingUI::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// UnityEngine.RectTransform ItemCountingUI::icon
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___icon_5;
	// System.Single ItemCountingUI::iconMaxScale
	float ___iconMaxScale_6;
	// UnityEngine.Vector3 ItemCountingUI::startLocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startLocalScale_7;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Player::clickDamage
	int32_t ___clickDamage_5;
};

struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields
{
	// Player Player::instance
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___instance_4;
};

// ResourceManager
struct ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ResourceManager::money
	int32_t ___money_5;
	// System.Int32 ResourceManager::wood
	int32_t ___wood_6;
	// System.Int32 ResourceManager::stone
	int32_t ___stone_7;
	// System.Int32 ResourceManager::iron
	int32_t ___iron_8;
	// System.Int32 ResourceManager::gold
	int32_t ___gold_9;
	// System.Int32 ResourceManager::shard
	int32_t ___shard_10;
};

struct ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields
{
	// ResourceManager ResourceManager::instance
	ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* ___instance_4;
};

// ResourceObject
struct ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ResourceObject::hp
	int32_t ___hp_4;
	// System.Int32 ResourceObject::tier
	int32_t ___tier_5;
	// System.String ResourceObject::resourceName
	String_t* ___resourceName_6;
	// System.Single ResourceObject::shakeDuration
	float ___shakeDuration_7;
	// System.Single ResourceObject::shakeRadius
	float ___shakeRadius_8;
	// UnityEngine.Vector3 ResourceObject::spawnPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPosition_9;
	// System.Boolean ResourceObject::isBig
	bool ___isBig_10;
};

// SaveManager
struct SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SaveManager::saveRate
	float ___saveRate_5;
	// System.Single SaveManager::saveTime
	float ___saveTime_6;
};

struct SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5_StaticFields
{
	// SaveManager SaveManager::instance
	SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* ___instance_4;
};

// SellItem
struct SellItem_t0A746857DDD9ACA19EE43D1421F0424CD565D12B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String SellItem::itemName
	String_t* ___itemName_4;
	// System.Int32 SellItem::price
	int32_t ___price_5;
	// UnityEngine.UI.InputField SellItem::amount
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___amount_6;
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource SoundManager::bgAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgAudioSource_5;
	// UnityEngine.AudioSource SoundManager::sfxAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sfxAudioSource_6;
	// UnityEngine.AudioClip SoundManager::punchClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___punchClip_7;
	// UnityEngine.AudioClip SoundManager::treeBreakClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___treeBreakClip_8;
	// UnityEngine.AudioClip SoundManager::stoneBreakClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___stoneBreakClip_9;
	// UnityEngine.AudioClip SoundManager::glassBreakClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___glassBreakClip_10;
	// UnityEngine.AudioClip SoundManager::moneyIncomeClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___moneyIncomeClip_11;
};

struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields
{
	// SoundManager SoundManager::instance
	SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___instance_4;
};

// SpawnManager
struct SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 SpawnManager::maxResource
	int32_t ___maxResource_5;
	// UnityEngine.GameObject[] SpawnManager::resourcePrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___resourcePrefabs_6;
	// System.Single SpawnManager::spawnRate
	float ___spawnRate_7;
	// System.Single SpawnManager::bigRate
	float ___bigRate_8;
	// System.Single SpawnManager::woodRate
	float ___woodRate_9;
	// System.Single SpawnManager::stoneRate
	float ___stoneRate_10;
	// System.Single SpawnManager::ironRate
	float ___ironRate_11;
	// System.Single SpawnManager::goldRate
	float ___goldRate_12;
	// System.Single SpawnManager::shardRate
	float ___shardRate_13;
	// System.Boolean SpawnManager::isUnlockWood
	bool ___isUnlockWood_14;
	// System.Boolean SpawnManager::isUnlockStone
	bool ___isUnlockStone_15;
	// System.Boolean SpawnManager::isUnlockIron
	bool ___isUnlockIron_16;
	// System.Boolean SpawnManager::isUnlockGold
	bool ___isUnlockGold_17;
	// System.Boolean SpawnManager::isUnlockShard
	bool ___isUnlockShard_18;
	// System.Int32 SpawnManager::unlockCount
	int32_t ___unlockCount_19;
	// System.Single SpawnManager::spawnTime
	float ___spawnTime_20;
	// System.Boolean SpawnManager::isSpawning
	bool ___isSpawning_21;
};

struct SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields
{
	// SpawnManager SpawnManager::instance
	SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* ___instance_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UIManager::iconMaxScale
	float ___iconMaxScale_5;
	// ItemCountingUI UIManager::moneyUI
	ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* ___moneyUI_6;
	// ItemCountingUI UIManager::woodUI
	ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* ___woodUI_7;
	// ItemCountingUI UIManager::stoneUI
	ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* ___stoneUI_8;
	// ItemCountingUI UIManager::ironUI
	ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* ___ironUI_9;
	// ItemCountingUI UIManager::goldUI
	ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* ___goldUI_10;
	// ItemCountingUI UIManager::shardUI
	ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* ___shardUI_11;
	// UnityEngine.GameObject UIManager::upgradeMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___upgradeMenu_12;
	// System.Boolean UIManager::isUpgradeMenuOpen
	bool ___isUpgradeMenuOpen_13;
	// UnityEngine.GameObject UIManager::sellMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sellMenu_14;
	// System.Boolean UIManager::isSellMenuOpen
	bool ___isSellMenuOpen_15;
	// UnityEngine.UI.Image UIManager::toggleSpawnButton
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___toggleSpawnButton_16;
	// UnityEngine.UI.Image UIManager::toggleMusicButton
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___toggleMusicButton_17;
	// UnityEngine.UI.Image UIManager::toggleSoundButton
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___toggleSoundButton_18;
};

struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields
{
	// UIManager UIManager::instance
	UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* ___instance_4;
};

// UIMenu
struct UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UpgradeItem
struct UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UpgradeItem::upgradeName
	String_t* ___upgradeName_4;
	// System.Int32[] UpgradeItem::price
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___price_5;
	// System.String[] UpgradeItem::priceUnit
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___priceUnit_6;
	// System.Int32 UpgradeItem::nUpgrade
	int32_t ___nUpgrade_7;
	// System.Int32 UpgradeItem::maxUpgrade
	int32_t ___maxUpgrade_8;
	// UnityEngine.UI.Text UpgradeItem::textUpgradeName
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textUpgradeName_9;
	// UnityEngine.UI.Image UpgradeItem::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_10;
	// UnityEngine.UI.Text UpgradeItem::textPrice
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___textPrice_11;
	// UnityEngine.UI.Image UpgradeItem::priceUnitIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___priceUnitIcon_12;
	// UnityEngine.Sprite[] UpgradeItem::priceUnitIcons
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___priceUnitIcons_13;
};

// Worker
struct Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Worker::targetResource
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetResource_4;
	// System.Single Worker::harvestTimer
	float ___harvestTimer_5;
	// UnityEngine.Vector2 Worker::walkPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___walkPos_6;
	// UnityEngine.Animator Worker::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
};

// WorkerInfo
struct WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WorkerInfo::walkSpeed
	float ___walkSpeed_5;
	// System.Int32 WorkerInfo::harvestDamage
	int32_t ___harvestDamage_6;
	// System.Single WorkerInfo::harvestSpeed
	float ___harvestSpeed_7;
	// System.Single WorkerInfo::harvestRadius
	float ___harvestRadius_8;
};

struct WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields
{
	// WorkerInfo WorkerInfo::instance
	WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* ___instance_4;
};

// WorkerManager
struct WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WorkerManager::workerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___workerPrefab_5;
	// System.Int32 WorkerManager::workerCount
	int32_t ___workerCount_6;
};

struct WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_StaticFields
{
	// WorkerManager WorkerManager::instance
	WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E* ___instance_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7  : public RuntimeArray
{
	ALIGN_FIELD (8) MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* m_Items[1];

	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_mDC389BFFFA183993276487B5C0FBDE03AEBA8A96_gshared (bool ___includeInactive0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m5C8779EF1E96AFD11AC19F1E37FF67DF77D18442_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521 (const RuntimeMethod* method) ;
// System.Void ResourceManager::AddResource(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, int32_t ___tier0, int32_t ___amount1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mE4E9DB5879AB30EE129D1D13E063D236FD711EA9 (String_t* ___gameId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::AddListener(UnityEngine.Advertisements.IUnityAdsListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_AddListener_m7E98FB2C85D0D95A81D9F2CB6664D6D4D33D3836 (RuntimeObject* ___listener0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_mA3A5566ECE7B42198BF05E281E2E6D49A16B1B1D (String_t* ___placementId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m083DB7A2C2DF0DF1EBCA5D8A6D52358AE4247C50 (String_t* ___placementId0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void ItemCountingUI::HitIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCountingUI_HitIcon_m7C0DC73A31A73E2BB8676DBED6D7B95E18A2C6FD (ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ItemCountingUI::AnimateIconHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ItemCountingUI_AnimateIconHit_mFDF4F60608BDCBC7B4DCC393995EBB2CD76E9DC5 (ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void ItemCountingUI/<AnimateIconHit>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateIconHitU3Ed__7__ctor_m6FA6E4B152055DDCCAD6CAE7357AB06A52C488EF (U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UIManager::SetAmountResource(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___tier0, int32_t ___amount1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void ResourceManager::RemoveResource(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RemoveResource_mF883FDD23F1CB9E57A4ED59253D69B77B5144D3E (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, int32_t ___tier0, int32_t ___amount1, const RuntimeMethod* method) ;
// System.Int32 ResourceManager::GetResource(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceManager_GetResource_m095FF080A5F7C5B088ADE9BCC9429E69DE4245D4 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ResourceObject::Hit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject_Hit_mB6DE5F286EEA8AF57E8B5996F29BE834E41356C4 (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, int32_t ___damage0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ResourceObject::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceObject_Shake_m64E8834479FA13414FD5F42DA657C86579C0B345 (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) ;
// System.Void SoundManager::PlayPunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayPunch_mB6C1E9BB823D8075E9E853E05B3671132F8069C0 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void ResourceObject::DestroyResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject_DestroyResource_m7CCC6A2B031571551170556351DC6685FDEF3946 (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void SoundManager::PlayTreeBreak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayTreeBreak_mD8A69821499ABDF30CE88A51300F01E9F8B41168 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void SoundManager::PlayStoneBreak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayStoneBreak_m8C58C1B6DCDE23668929C8AC0426AF6F116BCCEB (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void SoundManager::PlayGlassBreak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayGlassBreak_m00D66B5234FC1C09A8AD25874A95D816E46896AB (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void ResourceManager::AddResource(ResourceObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_AddResource_m5A26C710C6789B4C3C98B797740C51EA3DF4007C (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* ___resource0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void ResourceObject/<Shake>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__13__ctor_m8FC3F2D9414130C36297908D1A4F3769BE91AFAE (U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void SaveManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_LoadData_m983359A04561F5E08DCA31C026C51197E605418D (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) ;
// System.Void SaveManager::AutoSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_AutoSave_m931704FEDAB66A5C8FB5C646904AA61B6FB6A53B (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) ;
// System.Void SaveManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SaveData_mEF2A4D132F875E24B99F21CBFAB954D3C675FF56 (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ISaveable> SaveManager::FindAllISaveable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4* SaveManager_FindAllISaveable_m6578213BD23E1862C080A6F0D298348B10550C0C (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ISaveable>::GetEnumerator()
inline Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94 List_1_GetEnumerator_m9576C81E34817F55DD15CD0217C7A9A7E6252753 (List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94 (*) (List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ISaveable>::Dispose()
inline void Enumerator_Dispose_mF8F199152E9ED78F17E88D38B0D51E881440D73B (Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ISaveable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m5DCC8E224125A3CEB447F8D07055ED4CC34B963F_inline (Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ISaveable>::MoveNext()
inline bool Enumerator_MoveNext_mE9C47BF6436E719DBF96C521B520FB2E3BD6FB04 (Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.MonoBehaviour>(System.Boolean)
inline MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m25F9822C8F36419F97592FBE6E0B14E5FA61C0B8 (bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* (*) (bool, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_mDC389BFFFA183993276487B5C0FBDE03AEBA8A96_gshared)(___includeInactive0, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<ISaveable>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_m6AABC5CB066CE24F7099CDCFD37EEFF198E84B8A (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m5C8779EF1E96AFD11AC19F1E37FF67DF77D18442_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<ISaveable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m7B62209EC44EDAE25769CE2DB11D28E11B6DFE5E (List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 ResourceManager::GetResource(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceManager_GetResource_m5051D7D7A0DD2DD5A088B04BB3F2151BCAA8A202 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, String_t* ___priceUnit0, const RuntimeMethod* method) ;
// System.Void ResourceManager::RemoveResource(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RemoveResource_m0FE524057E93025247E0FB82A63C183188CEABB6 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, String_t* ___priceUnit0, int32_t ___amount1, const RuntimeMethod* method) ;
// System.Void SoundManager::PlayMoneyIncome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayMoneyIncome_m9E5C42B457F627F4D98894637629DA6E5A92B929 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_mute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293 (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject SpawnManager::SpawnRandomResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnManager_SpawnRandomResource_m65DA1FF14B787E168D4A3004966AF25D8B810D4A (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.GameObject SpawnManager::RandomResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnManager_RandomResource_m80AB00429004DFD2F9F9C7231227F1B055BD7407 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject SpawnManager::SpawnResource(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnManager_SpawnResource_mA38CE064410FAA19D82B9A73B2A54D9A0117B8A7 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resourcePrefab0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<ResourceObject>()
inline ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* GameObject_GetComponent_TisResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B_mC7284F621D4467969DD11B4A3DBFE1741487F696 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ResourceObject::SetBig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject_SetBig_m16D787DC30EA7E7D5C0D6BFEB56BB97231CEDCAD (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UIManager::ToggleSellMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ToggleSellMenu_m087539AC825EDCFF33C129F27BDF5EAD57284B56 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) ;
// System.Void UIManager::ToggleUpgradeMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ToggleUpgradeMenu_mF1A705E2E5A77D8B9A85B260F9B685EEC7A2C506 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) ;
// System.Boolean SpawnManager::ToggleSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnManager_ToggleSpawning_m40FC4EF3631DA7D70415D4A113C3FF7E86A0D116 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Boolean SoundManager::ToggleMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_ToggleMusic_m79AFC42D5EEFA3400467E4290DCAB0B1076B2FA1 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Boolean SoundManager::ToggleSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_ToggleSound_m440BE7D26F7E6056E36EF9430777E4DC0717E071 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void ItemCountingUI::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCountingUI_SetText_mD3C7AADEF99A2FB19D2C4B67D23BB1FEBB33C948 (ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void UpgradeItem::SetUpItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem_SetUpItem_m5372EE10710F5A0EBBEBC87B6045C39671FD42F4 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Int32 UpgradeItem::PriceUnitStringtoIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpgradeItem_PriceUnitStringtoIndex_mB8077912C79A26A133954EA803CA7FC7B51845B7 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, String_t* ___priceUnit0, const RuntimeMethod* method) ;
// System.Void UpgradeItem::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem_Upgrade_m3F89074E138E80E29680214D47E0C0AD78507FE7 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 SpawnManager::UnlockResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpawnManager_UnlockResource_mF95FDB03BCCEE46CB044470ED342E547E0461364 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject WorkerManager::SpawnWorker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WorkerManager_SpawnWorker_mF4765ABA07606A81B4981F1451FCCE79BB18CC34 (WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Worker::HarvestResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_HarvestResource_m41403E9DF8E90D6A196F0457651BD028F7CB8FFA (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) ;
// System.Void Worker::Walk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_Walk_m6A122CC16EBC8485B8959DE843AB8F792CBB292A (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) ;
// System.Void Worker::Animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_Animation_mB6ABFA0A1E511BDFC3AB0F580B8CF306AA030B67 (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Worker::AnimationSetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_AnimationSetBool_m3FFB14E01E16E9854259200BB13F2869374CAE43 (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.GameObject Worker::FindRandomResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Worker_FindRandomResource_mFB96926B8ECF91BC5A37D20072B315C59FB23944 (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) ;
// System.Void Worker::HitResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_HitResource_m4BC1C6259F47B7431537403EC32142AEF829F6FF (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// if (clearSave)
		bool L_0 = __this->___clearSave_5;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521(NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isDebug)
		bool L_0 = __this->___isDebug_6;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// ResourceManager.instance.AddResource(0, 1000000);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_1 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_1);
		ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784(L_1, 0, ((int32_t)1000000), NULL);
		// ResourceManager.instance.AddResource(1, 1000000);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_2 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784(L_2, 1, ((int32_t)1000000), NULL);
		// ResourceManager.instance.AddResource(2, 1000000);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_3 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_3);
		ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784(L_3, 2, ((int32_t)1000000), NULL);
		// ResourceManager.instance.AddResource(3, 1000000);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_4 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784(L_4, 3, ((int32_t)1000000), NULL);
		// ResourceManager.instance.AddResource(4, 1000000);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_5 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_5);
		ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784(L_5, 4, ((int32_t)1000000), NULL);
		// ResourceManager.instance.AddResource(5, 1000000);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_6 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784(L_6, 5, ((int32_t)1000000), NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void GameManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnApplicationQuit_mF34E37140942EC2EBCF4E58123C45152E67149F1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// if (clearSave)
		bool L_0 = __this->___clearSave_5;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521(NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AdsManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_Awake_m41E841D8C091F00F7AB09B5403D9C3BD4BED7EBB (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdsManager_tE059594BE435B356831188671B794CDE032FC41B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((AdsManager_tE059594BE435B356831188671B794CDE032FC41B_StaticFields*)il2cpp_codegen_static_fields_for(AdsManager_tE059594BE435B356831188671B794CDE032FC41B_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AdsManager_tE059594BE435B356831188671B794CDE032FC41B_StaticFields*)il2cpp_codegen_static_fields_for(AdsManager_tE059594BE435B356831188671B794CDE032FC41B_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void AdsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_Start_m00CAFF84B03355B41A941006E80DB2F1D49E3EF3 (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Initialize(gameId);
		String_t* L_0 = __this->___gameId_5;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mE4E9DB5879AB30EE129D1D13E063D236FD711EA9(L_0, NULL);
		// Advertisement.AddListener(this);
		Advertisement_AddListener_m7E98FB2C85D0D95A81D9F2CB6664D6D4D33D3836(__this, NULL);
		// }
		return;
	}
}
// System.Void AdsManager::PlayAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_PlayAd_mF19CB93A56E462FED834CECE06F9C0B9DC4B340E (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Advertisement.IsReady(adsName[0]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___adsName_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Advertisement_IsReady_mA3A5566ECE7B42198BF05E281E2E6D49A16B1B1D(L_2, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// Advertisement.Show(adsName[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___adsName_6;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m083DB7A2C2DF0DF1EBCA5D8A6D52358AE4247C50(L_6, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void AdsManager::PlayRewardedAd(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_PlayRewardedAd_mCA56BD4016ECF75B06D9D6B700B58E69D066377B (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onSuccess0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Advertisement.IsReady(adsName[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___adsName_6;
		NullCheck(L_0);
		int32_t L_1 = 1;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Advertisement_IsReady_mA3A5566ECE7B42198BF05E281E2E6D49A16B1B1D(L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// onRewardedAdsSuccess = onSuccess;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___onSuccess0;
		__this->___onRewardedAdsSuccess_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onRewardedAdsSuccess_7), (void*)L_4);
		// Advertisement.Show(adsName[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___adsName_6;
		NullCheck(L_5);
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m083DB7A2C2DF0DF1EBCA5D8A6D52358AE4247C50(L_7, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void AdsManager::OnUnityAdsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsReady_m8E0D5D74095E109CF5FCDE840C7D06AB35263876 (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C62C6DFC7FB1C980FCAFF1631FE9286D608D4EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(placementId + " ready");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral9C62C6DFC7FB1C980FCAFF1631FE9286D608D4EE, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void AdsManager::OnUnityAdsDidError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsDidError_m8B34516FCBE1BA5BD54DC6134D31C15521B7F86A (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Error: " + message);
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void AdsManager::OnUnityAdsDidStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsDidStart_mC1C870C1159F46F73F14EEDA18555D2B19462C9D (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2FEC4D72EB27CB64B8A017D0001DE6E3DFF794A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(placementId + " start");
		String_t* L_0 = ___placementId0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteralB2FEC4D72EB27CB64B8A017D0001DE6E3DFF794A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// }
		return;
	}
}
// System.Void AdsManager::OnUnityAdsDidFinish(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager_OnUnityAdsDidFinish_m80754429FAE9A6AF7E41024C2DD73189EA565E7F (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, String_t* ___placementId0, int32_t ___showResult1, const RuntimeMethod* method) 
{
	{
		// if (placementId == adsName[1] && showResult == ShowResult.Finished)
		String_t* L_0 = ___placementId0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___adsName_6;
		NullCheck(L_1);
		int32_t L_2 = 1;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_3, NULL);
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_5 = ___showResult1;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		// onRewardedAdsSuccess.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = __this->___onRewardedAdsSuccess_7;
		NullCheck(L_6);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_6, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void AdsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsManager__ctor_m6A4EB92F72E9B7F28CC4E62F87F54F89CBAD6B3C (AdsManager_tE059594BE435B356831188671B794CDE032FC41B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC684451D0741EFE4D20C933848D33B297BECC98F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string gameId = "4892003";
		__this->___gameId_5 = _stringLiteralC684451D0741EFE4D20C933848D33B297BECC98F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameId_5), (void*)_stringLiteralC684451D0741EFE4D20C933848D33B297BECC98F);
		// string[] adsName = { "Interstitial_Android", "Rewarded_Android", "Banner_Android" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D);
		__this->___adsName_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adsName_6), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemCountingUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCountingUI_Start_mF52B0066765C6A86151BEA08584866C0BD378067 (ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iconMaxScale = UIManager.instance.iconMaxScale;
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_0 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		float L_1 = L_0->___iconMaxScale_5;
		__this->___iconMaxScale_6 = L_1;
		// startLocalScale = icon.localScale;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___icon_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		__this->___startLocalScale_7 = L_3;
		// }
		return;
	}
}
// System.Void ItemCountingUI::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCountingUI_SetText_mD3C7AADEF99A2FB19D2C4B67D23BB1FEBB33C948 (ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0663AF4DA1351BC822D640D926F2273F9D6FCCA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (text == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.Log("fuckkk");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0663AF4DA1351BC822D640D926F2273F9D6FCCA1, NULL);
	}

IL_0018:
	{
		// text.text = value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___text_4;
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// HitIcon();
		ItemCountingUI_HitIcon_m7C0DC73A31A73E2BB8676DBED6D7B95E18A2C6FD(__this, NULL);
		// }
		return;
	}
}
// System.Void ItemCountingUI::HitIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCountingUI_HitIcon_m7C0DC73A31A73E2BB8676DBED6D7B95E18A2C6FD (ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AnimateIconHit());
		RuntimeObject* L_0;
		L_0 = ItemCountingUI_AnimateIconHit_mFDF4F60608BDCBC7B4DCC393995EBB2CD76E9DC5(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ItemCountingUI::AnimateIconHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ItemCountingUI_AnimateIconHit_mFDF4F60608BDCBC7B4DCC393995EBB2CD76E9DC5 (ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94* L_0 = (U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94*)il2cpp_codegen_object_new(U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateIconHitU3Ed__7__ctor_m6FA6E4B152055DDCCAD6CAE7357AB06A52C488EF(L_0, 0, NULL);
		U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ItemCountingUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemCountingUI__ctor_m9BAB4221E75CA76B2D19FF94D0635ED57E3F1B29 (ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemCountingUI/<AnimateIconHit>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateIconHitU3Ed__7__ctor_m6FA6E4B152055DDCCAD6CAE7357AB06A52C488EF (U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ItemCountingUI/<AnimateIconHit>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateIconHitU3Ed__7_System_IDisposable_Dispose_m8026206550D990B42FF65C30093689592F754AAC (U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ItemCountingUI/<AnimateIconHit>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateIconHitU3Ed__7_MoveNext_mD8864912E491C342519313413E0EA26C91ABECD3 (U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_00c0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_006c;
	}

IL_002b:
	{
		// icon.localScale += new Vector3(0.1f, 0.1f, 0.1f);
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_3 = V_1;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = L_3->___icon_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = L_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.100000001f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_8, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0065:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006c:
	{
		// while (icon.localScale.x < iconMaxScale)
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_9 = V_1;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9->___icon_5;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		float L_12 = L_11.___x_2;
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___iconMaxScale_6;
		if ((((float)L_12) < ((float)L_14)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_00c7;
	}

IL_0086:
	{
		// icon.localScale -= new Vector3(0.1f, 0.1f, 0.1f);
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_15 = V_1;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = L_15->___icon_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = L_16;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.100000001f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_18, L_19, NULL);
		NullCheck(L_17);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_17, L_20, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c0:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c7:
	{
		// while (icon.localScale.x > startLocalScale.x)
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_21 = V_1;
		NullCheck(L_21);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = L_21->___icon_5;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		float L_24 = L_23.___x_2;
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_25 = V_1;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&L_25->___startLocalScale_7);
		float L_27 = L_26->___x_2;
		if ((((float)L_24) > ((float)L_27)))
		{
			goto IL_0086;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ItemCountingUI/<AnimateIconHit>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateIconHitU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m238A9583C1924EA8D83CD1657B9C22A369C283DD (U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ItemCountingUI/<AnimateIconHit>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateIconHitU3Ed__7_System_Collections_IEnumerator_Reset_m81206A0216A5C9F42ED82E1B70BCD501DB89F2CA (U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateIconHitU3Ed__7_System_Collections_IEnumerator_Reset_m81206A0216A5C9F42ED82E1B70BCD501DB89F2CA_RuntimeMethod_var)));
	}
}
// System.Object ItemCountingUI/<AnimateIconHit>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateIconHitU3Ed__7_System_Collections_IEnumerator_get_Current_mEB0215223975A749AB3CCD83343584152B1C8F86 (U3CAnimateIconHitU3Ed__7_t829A62AD339757585EA72F07A8C3FE03F826BB94* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Player::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_LoadData_m527A823DD003D658D54F35A4EBF9C4A1DBF6488A (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CBC309468131AECF1E60ABC845CF4283F0EE5A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clickDamage = PlayerPrefs.GetInt("clickDamage", clickDamage);
		int32_t L_0 = __this->___clickDamage_5;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral6CBC309468131AECF1E60ABC845CF4283F0EE5A7, L_0, NULL);
		__this->___clickDamage_5 = L_1;
		// }
		return;
	}
}
// System.Void Player::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SaveData_mAA38797D0F4C6FC4D460846715D273FC7BBA4ABF (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CBC309468131AECF1E60ABC845CF4283F0EE5A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("clickDamage", clickDamage);
		int32_t L_0 = __this->___clickDamage_5;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral6CBC309468131AECF1E60ABC845CF4283F0EE5A7, L_0, NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResourceManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Awake_m7A881012F7FB77026FD81E63F39F48BBF1131C89 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ResourceManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_Start_mDC8053F06C65AEF06644C0C862865B1BB6C1E75E (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UIManager.instance.SetAmountResource(0, money);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_0 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_1 = __this->___money_5;
		NullCheck(L_0);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_0, 0, L_1, NULL);
		// UIManager.instance.SetAmountResource(1, wood);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_2 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_3 = __this->___wood_6;
		NullCheck(L_2);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_2, 1, L_3, NULL);
		// UIManager.instance.SetAmountResource(2, stone);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_4 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_5 = __this->___stone_7;
		NullCheck(L_4);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_4, 2, L_5, NULL);
		// UIManager.instance.SetAmountResource(3, iron);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_6 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_7 = __this->___iron_8;
		NullCheck(L_6);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_6, 3, L_7, NULL);
		// UIManager.instance.SetAmountResource(4, gold);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_8 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_9 = __this->___gold_9;
		NullCheck(L_8);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_8, 4, L_9, NULL);
		// UIManager.instance.SetAmountResource(5, shard);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_10 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_11 = __this->___shard_10;
		NullCheck(L_10);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_10, 5, L_11, NULL);
		// }
		return;
	}
}
// System.Void ResourceManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_LoadData_m6074A3264B58B48BA92B2455C29E29E56AB5C003 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565);
		s_Il2CppMethodInitialized = true;
	}
	{
		// money = PlayerPrefs.GetInt("money", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, 0, NULL);
		__this->___money_5 = L_0;
		// wood = PlayerPrefs.GetInt("wood", 0);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F, 0, NULL);
		__this->___wood_6 = L_1;
		// stone = PlayerPrefs.GetInt("stone", 0);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74, 0, NULL);
		__this->___stone_7 = L_2;
		// iron = PlayerPrefs.GetInt("iron", 0);
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81, 0, NULL);
		__this->___iron_8 = L_3;
		// gold = PlayerPrefs.GetInt("gold", 0);
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD, 0, NULL);
		__this->___gold_9 = L_4;
		// shard = PlayerPrefs.GetInt("shard", 0);
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565, 0, NULL);
		__this->___shard_10 = L_5;
		// }
		return;
	}
}
// System.Void ResourceManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_SaveData_mDC92C57DCE0C251D689A5C013A9283F157A4D007 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("money", money);
		int32_t L_0 = __this->___money_5;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, L_0, NULL);
		// PlayerPrefs.SetInt("wood", wood);
		int32_t L_1 = __this->___wood_6;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F, L_1, NULL);
		// PlayerPrefs.SetInt("stone", stone);
		int32_t L_2 = __this->___stone_7;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74, L_2, NULL);
		// PlayerPrefs.SetInt("iron", iron);
		int32_t L_3 = __this->___iron_8;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81, L_3, NULL);
		// PlayerPrefs.SetInt("gold", gold);
		int32_t L_4 = __this->___gold_9;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD, L_4, NULL);
		// PlayerPrefs.SetInt("shard", shard);
		int32_t L_5 = __this->___shard_10;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565, L_5, NULL);
		// }
		return;
	}
}
// System.Void ResourceManager::AddResource(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, int32_t ___tier0, int32_t ___amount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___tier0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_005f;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_009f;
			}
			case 5:
			{
				goto IL_00bf;
			}
		}
	}
	{
		return;
	}

IL_001f:
	{
		// money += amount;
		int32_t L_1 = __this->___money_5;
		int32_t L_2 = ___amount1;
		__this->___money_5 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		// UIManager.instance.SetAmountResource(tier, money);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_3 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = ___tier0;
		int32_t L_5 = __this->___money_5;
		NullCheck(L_3);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_3, L_4, L_5, NULL);
		// break;
		return;
	}

IL_003f:
	{
		// wood += amount;
		int32_t L_6 = __this->___wood_6;
		int32_t L_7 = ___amount1;
		__this->___wood_6 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		// UIManager.instance.SetAmountResource(tier, wood);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_8 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_9 = ___tier0;
		int32_t L_10 = __this->___wood_6;
		NullCheck(L_8);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_8, L_9, L_10, NULL);
		// break;
		return;
	}

IL_005f:
	{
		// stone += amount;
		int32_t L_11 = __this->___stone_7;
		int32_t L_12 = ___amount1;
		__this->___stone_7 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		// UIManager.instance.SetAmountResource(tier, stone);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_13 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_14 = ___tier0;
		int32_t L_15 = __this->___stone_7;
		NullCheck(L_13);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_13, L_14, L_15, NULL);
		// break;
		return;
	}

IL_007f:
	{
		// iron += amount;
		int32_t L_16 = __this->___iron_8;
		int32_t L_17 = ___amount1;
		__this->___iron_8 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		// UIManager.instance.SetAmountResource(tier, iron);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_18 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_19 = ___tier0;
		int32_t L_20 = __this->___iron_8;
		NullCheck(L_18);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_18, L_19, L_20, NULL);
		// break;
		return;
	}

IL_009f:
	{
		// gold += amount;
		int32_t L_21 = __this->___gold_9;
		int32_t L_22 = ___amount1;
		__this->___gold_9 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		// UIManager.instance.SetAmountResource(tier, gold);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_23 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_24 = ___tier0;
		int32_t L_25 = __this->___gold_9;
		NullCheck(L_23);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_23, L_24, L_25, NULL);
		// break;
		return;
	}

IL_00bf:
	{
		// shard += amount;
		int32_t L_26 = __this->___shard_10;
		int32_t L_27 = ___amount1;
		__this->___shard_10 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		// UIManager.instance.SetAmountResource(tier, shard);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_28 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_29 = ___tier0;
		int32_t L_30 = __this->___shard_10;
		NullCheck(L_28);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_28, L_29, L_30, NULL);
		// }
		return;
	}
}
// System.Void ResourceManager::AddResource(ResourceObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_AddResource_m5A26C710C6789B4C3C98B797740C51EA3DF4007C (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* ___resource0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int amount = Random.Range(1,4);
		int32_t L_0;
		L_0 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		V_0 = L_0;
		// if (resource.isBig)
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_1 = ___resource0;
		NullCheck(L_1);
		bool L_2 = L_1->___isBig_10;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// amount *= 10;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)10)));
	}

IL_0015:
	{
		// AddResource(resource.tier, amount);
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_4 = ___resource0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___tier_5;
		int32_t L_6 = V_0;
		ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784(__this, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void ResourceManager::RemoveResource(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RemoveResource_mF883FDD23F1CB9E57A4ED59253D69B77B5144D3E (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, int32_t ___tier0, int32_t ___amount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___tier0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_005f;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_009f;
			}
			case 5:
			{
				goto IL_00bf;
			}
		}
	}
	{
		return;
	}

IL_001f:
	{
		// money -= amount;
		int32_t L_1 = __this->___money_5;
		int32_t L_2 = ___amount1;
		__this->___money_5 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		// UIManager.instance.SetAmountResource(tier, money);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_3 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = ___tier0;
		int32_t L_5 = __this->___money_5;
		NullCheck(L_3);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_3, L_4, L_5, NULL);
		// break;
		return;
	}

IL_003f:
	{
		// wood -= amount;
		int32_t L_6 = __this->___wood_6;
		int32_t L_7 = ___amount1;
		__this->___wood_6 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		// UIManager.instance.SetAmountResource(tier, wood);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_8 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_9 = ___tier0;
		int32_t L_10 = __this->___wood_6;
		NullCheck(L_8);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_8, L_9, L_10, NULL);
		// break;
		return;
	}

IL_005f:
	{
		// stone -= amount;
		int32_t L_11 = __this->___stone_7;
		int32_t L_12 = ___amount1;
		__this->___stone_7 = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
		// UIManager.instance.SetAmountResource(tier, stone);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_13 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_14 = ___tier0;
		int32_t L_15 = __this->___stone_7;
		NullCheck(L_13);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_13, L_14, L_15, NULL);
		// break;
		return;
	}

IL_007f:
	{
		// iron -= amount;
		int32_t L_16 = __this->___iron_8;
		int32_t L_17 = ___amount1;
		__this->___iron_8 = ((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		// UIManager.instance.SetAmountResource(tier, iron);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_18 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_19 = ___tier0;
		int32_t L_20 = __this->___iron_8;
		NullCheck(L_18);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_18, L_19, L_20, NULL);
		// break;
		return;
	}

IL_009f:
	{
		// gold -= amount;
		int32_t L_21 = __this->___gold_9;
		int32_t L_22 = ___amount1;
		__this->___gold_9 = ((int32_t)il2cpp_codegen_subtract(L_21, L_22));
		// UIManager.instance.SetAmountResource(tier, gold);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_23 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_24 = ___tier0;
		int32_t L_25 = __this->___gold_9;
		NullCheck(L_23);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_23, L_24, L_25, NULL);
		// break;
		return;
	}

IL_00bf:
	{
		// shard -= amount;
		int32_t L_26 = __this->___shard_10;
		int32_t L_27 = ___amount1;
		__this->___shard_10 = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		// UIManager.instance.SetAmountResource(tier, shard);
		UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* L_28 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_29 = ___tier0;
		int32_t L_30 = __this->___shard_10;
		NullCheck(L_28);
		UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817(L_28, L_29, L_30, NULL);
		// }
		return;
	}
}
// System.Void ResourceManager::RemoveResource(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager_RemoveResource_m0FE524057E93025247E0FB82A63C183188CEABB6 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, String_t* ___priceUnit0, int32_t ___amount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___priceUnit0;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, NULL);
		if (L_1)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_2 = ___priceUnit0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F, NULL);
		if (L_3)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_4 = ___priceUnit0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74, NULL);
		if (L_5)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_6 = ___priceUnit0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81, NULL);
		if (L_7)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_8 = ___priceUnit0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD, NULL);
		if (L_9)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_10 = ___priceUnit0;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565, NULL);
		if (L_11)
		{
			goto IL_007c;
		}
	}
	{
		return;
	}

IL_004f:
	{
		// RemoveResource(0, amount);
		int32_t L_12 = ___amount1;
		ResourceManager_RemoveResource_mF883FDD23F1CB9E57A4ED59253D69B77B5144D3E(__this, 0, L_12, NULL);
		// break;
		return;
	}

IL_0058:
	{
		// RemoveResource(1, amount);
		int32_t L_13 = ___amount1;
		ResourceManager_RemoveResource_mF883FDD23F1CB9E57A4ED59253D69B77B5144D3E(__this, 1, L_13, NULL);
		// break;
		return;
	}

IL_0061:
	{
		// RemoveResource(2, amount);
		int32_t L_14 = ___amount1;
		ResourceManager_RemoveResource_mF883FDD23F1CB9E57A4ED59253D69B77B5144D3E(__this, 2, L_14, NULL);
		// break;
		return;
	}

IL_006a:
	{
		// RemoveResource(3, amount);
		int32_t L_15 = ___amount1;
		ResourceManager_RemoveResource_mF883FDD23F1CB9E57A4ED59253D69B77B5144D3E(__this, 3, L_15, NULL);
		// break;
		return;
	}

IL_0073:
	{
		// RemoveResource(4, amount);
		int32_t L_16 = ___amount1;
		ResourceManager_RemoveResource_mF883FDD23F1CB9E57A4ED59253D69B77B5144D3E(__this, 4, L_16, NULL);
		// break;
		return;
	}

IL_007c:
	{
		// RemoveResource(5, amount);
		int32_t L_17 = ___amount1;
		ResourceManager_RemoveResource_mF883FDD23F1CB9E57A4ED59253D69B77B5144D3E(__this, 5, L_17, NULL);
		// }
		return;
	}
}
// System.Int32 ResourceManager::GetResource(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceManager_GetResource_m095FF080A5F7C5B088ADE9BCC9429E69DE4245D4 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_002e;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_003c;
			}
			case 5:
			{
				goto IL_0043;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_0020:
	{
		// return money;
		int32_t L_1 = __this->___money_5;
		return L_1;
	}

IL_0027:
	{
		// return wood;
		int32_t L_2 = __this->___wood_6;
		return L_2;
	}

IL_002e:
	{
		// return stone;
		int32_t L_3 = __this->___stone_7;
		return L_3;
	}

IL_0035:
	{
		// return iron;
		int32_t L_4 = __this->___iron_8;
		return L_4;
	}

IL_003c:
	{
		// return gold;
		int32_t L_5 = __this->___gold_9;
		return L_5;
	}

IL_0043:
	{
		// return shard;
		int32_t L_6 = __this->___shard_10;
		return L_6;
	}

IL_004a:
	{
		// return 0;
		return 0;
	}
}
// System.Int32 ResourceManager::GetResource(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourceManager_GetResource_m5051D7D7A0DD2DD5A088B04BB3F2151BCAA8A202 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, String_t* ___priceUnit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___priceUnit0;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, NULL);
		if (L_1)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_2 = ___priceUnit0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F, NULL);
		if (L_3)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_4 = ___priceUnit0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74, NULL);
		if (L_5)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_6 = ___priceUnit0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81, NULL);
		if (L_7)
		{
			goto IL_0068;
		}
	}
	{
		String_t* L_8 = ___priceUnit0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD, NULL);
		if (L_9)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_10 = ___priceUnit0;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565, NULL);
		if (L_11)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0080;
	}

IL_0050:
	{
		// return GetResource(0);
		int32_t L_12;
		L_12 = ResourceManager_GetResource_m095FF080A5F7C5B088ADE9BCC9429E69DE4245D4(__this, 0, NULL);
		return L_12;
	}

IL_0058:
	{
		// return GetResource(1);
		int32_t L_13;
		L_13 = ResourceManager_GetResource_m095FF080A5F7C5B088ADE9BCC9429E69DE4245D4(__this, 1, NULL);
		return L_13;
	}

IL_0060:
	{
		// return GetResource(2);
		int32_t L_14;
		L_14 = ResourceManager_GetResource_m095FF080A5F7C5B088ADE9BCC9429E69DE4245D4(__this, 2, NULL);
		return L_14;
	}

IL_0068:
	{
		// return GetResource(3);
		int32_t L_15;
		L_15 = ResourceManager_GetResource_m095FF080A5F7C5B088ADE9BCC9429E69DE4245D4(__this, 3, NULL);
		return L_15;
	}

IL_0070:
	{
		// return GetResource(4);
		int32_t L_16;
		L_16 = ResourceManager_GetResource_m095FF080A5F7C5B088ADE9BCC9429E69DE4245D4(__this, 4, NULL);
		return L_16;
	}

IL_0078:
	{
		// return GetResource(5);
		int32_t L_17;
		L_17 = ResourceManager_GetResource_m095FF080A5F7C5B088ADE9BCC9429E69DE4245D4(__this, 5, NULL);
		return L_17;
	}

IL_0080:
	{
		// return 0;
		return 0;
	}
}
// System.Void ResourceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceManager__ctor_m0895A816FF3A70D6BD14077742487BAEF05CC9A3 (ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResourceObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject_Start_m839032F11E37A29C49B17AB50D2AFE550FDFDDEE (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) 
{
	{
		// spawnPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___spawnPosition_9 = L_1;
		// }
		return;
	}
}
// System.Void ResourceObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject_Update_mC1232A5DF34823DD07D63E58C0E17F2826F424F5 (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ResourceObject::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject_OnMouseDown_m33F284A277AFD41F7D539663E8501C213EA6C9AE (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hit(Player.instance.clickDamage);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___clickDamage_5;
		ResourceObject_Hit_mB6DE5F286EEA8AF57E8B5996F29BE834E41356C4(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ResourceObject::Hit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject_Hit_mB6DE5F286EEA8AF57E8B5996F29BE834E41356C4 (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, int32_t ___damage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(Shake());
		RuntimeObject* L_0;
		L_0 = ResourceObject_Shake_m64E8834479FA13414FD5F42DA657C86579C0B345(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// hp -= damage;
		int32_t L_2 = __this->___hp_4;
		int32_t L_3 = ___damage0;
		__this->___hp_4 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// SoundManager.instance.PlayPunch();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_4 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		SoundManager_PlayPunch_mB6C1E9BB823D8075E9E853E05B3671132F8069C0(L_4, NULL);
		// if (hp <= 0)
		int32_t L_5 = __this->___hp_4;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// DestroyResource();
		ResourceObject_DestroyResource_m7CCC6A2B031571551170556351DC6685FDEF3946(__this, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ResourceObject::SetBig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject_SetBig_m16D787DC30EA7E7D5C0D6BFEB56BB97231CEDCAD (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) 
{
	{
		// isBig = true;
		__this->___isBig_10 = (bool)1;
		// transform.localScale *= 3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, (3.0f), NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_3, NULL);
		// hp *= 10;
		int32_t L_4 = __this->___hp_4;
		__this->___hp_4 = ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)10)));
		// }
		return;
	}
}
// System.Void ResourceObject::DestroyResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject_DestroyResource_m7CCC6A2B031571551170556351DC6685FDEF3946 (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral667213E3CB64265CE8CADB89097E3D806741D511);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (resourceName == "tree")
		String_t* L_0 = __this->___resourceName_6;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral667213E3CB64265CE8CADB89097E3D806741D511, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// SoundManager.instance.PlayTreeBreak();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_2 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_2);
		SoundManager_PlayTreeBreak_mD8A69821499ABDF30CE88A51300F01E9F8B41168(L_2, NULL);
		goto IL_007c;
	}

IL_001e:
	{
		// else if (resourceName == "stone" || resourceName == "iron" || resourceName == "gold")
		String_t* L_3 = __this->___resourceName_6;
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74, NULL);
		if (L_4)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_5 = __this->___resourceName_6;
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81, NULL);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_7 = __this->___resourceName_6;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD, NULL);
		if (!L_8)
		{
			goto IL_0060;
		}
	}

IL_0054:
	{
		// SoundManager.instance.PlayStoneBreak();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_9 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_9);
		SoundManager_PlayStoneBreak_m8C58C1B6DCDE23668929C8AC0426AF6F116BCCEB(L_9, NULL);
		goto IL_007c;
	}

IL_0060:
	{
		// else if (resourceName == "shard")
		String_t* L_10 = __this->___resourceName_6;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565, NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		// SoundManager.instance.PlayGlassBreak();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_12 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_12);
		SoundManager_PlayGlassBreak_m00D66B5234FC1C09A8AD25874A95D816E46896AB(L_12, NULL);
	}

IL_007c:
	{
		// ResourceManager.instance.AddResource(this);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_13 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_13);
		ResourceManager_AddResource_m5A26C710C6789B4C3C98B797740C51EA3DF4007C(L_13, __this, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ResourceObject::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResourceObject_Shake_m64E8834479FA13414FD5F42DA657C86579C0B345 (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09* L_0 = (U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09*)il2cpp_codegen_object_new(U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShakeU3Ed__13__ctor_m8FC3F2D9414130C36297908D1A4F3769BE91AFAE(L_0, 0, NULL);
		U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ResourceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourceObject__ctor_m7ADE8BE924D4C35A4EA53FA2674441BDF6B86CB5 (ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResourceObject/<Shake>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__13__ctor_m8FC3F2D9414130C36297908D1A4F3769BE91AFAE (U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ResourceObject/<Shake>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__13_System_IDisposable_Dispose_m9FA23D375ADFF17B5525EC90E55F33D7A9AC8689 (U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ResourceObject/<Shake>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeU3Ed__13_MoveNext_m61BF5110D40CBF69D00C474D460A4335CFA3DC1C (U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float sTime = 0f;
		__this->___U3CsTimeU3E5__2_3 = (0.0f);
		goto IL_007a;
	}

IL_002b:
	{
		// sTime += Time.deltaTime;
		float L_4 = __this->___U3CsTimeU3E5__2_3;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CsTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_4, L_5));
		// transform.position = spawnPosition + Random.insideUnitSphere * shakeRadius;
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_6 = V_1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_8 = V_1;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___spawnPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Random_get_insideUnitSphere_mDC65508F8B735E93612D4A1D482792B5DA4DC26C(NULL);
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___shakeRadius_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_13, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_14, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0073:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007a:
	{
		// while (sTime < shakeDuration)
		float L_15 = __this->___U3CsTimeU3E5__2_3;
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->___shakeDuration_7;
		if ((((float)L_15) < ((float)L_17)))
		{
			goto IL_002b;
		}
	}
	{
		// transform.position = spawnPosition;
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_20 = V_1;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->___spawnPosition_9;
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ResourceObject/<Shake>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShakeU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAFBF21563E7E732D534FC4123C1C89A67BED0961 (U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ResourceObject/<Shake>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__13_System_Collections_IEnumerator_Reset_mB0207B0FACA8FEBAA5C17F5CA0975A747A203C70 (U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeU3Ed__13_System_Collections_IEnumerator_Reset_mB0207B0FACA8FEBAA5C17F5CA0975A747A203C70_RuntimeMethod_var)));
	}
}
// System.Object ResourceObject/<Shake>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShakeU3Ed__13_System_Collections_IEnumerator_get_Current_m4C5DC3F96B21700FA44535ECC3D5B3ED95032645 (U3CShakeU3Ed__13_tC62A87A9466B718DDC3C07254A98CB17F04C0B09* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SaveManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_Awake_m2927105A9E7C11D2465A7F3207AD94C226E6EA72 (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5_StaticFields*)il2cpp_codegen_static_fields_for(SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5_StaticFields*)il2cpp_codegen_static_fields_for(SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void SaveManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_Start_m15A011D82A0D65E15B7C1242F81CE2971F0AD675 (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) 
{
	{
		// LoadData();
		SaveManager_LoadData_m983359A04561F5E08DCA31C026C51197E605418D(__this, NULL);
		// }
		return;
	}
}
// System.Void SaveManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_Update_m000CE1120AE16EF07C944FF62FEFF841A74752C2 (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) 
{
	{
		// AutoSave();
		SaveManager_AutoSave_m931704FEDAB66A5C8FB5C646904AA61B6FB6A53B(__this, NULL);
		// }
		return;
	}
}
// System.Void SaveManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_OnApplicationQuit_mE127A8C6DE6AE2CFA745EDD0D805CA4F295917E9 (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) 
{
	{
		// SaveData();
		SaveManager_SaveData_mEF2A4D132F875E24B99F21CBFAB954D3C675FF56(__this, NULL);
		// }
		return;
	}
}
// System.Void SaveManager::AutoSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_AutoSave_m931704FEDAB66A5C8FB5C646904AA61B6FB6A53B (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) 
{
	{
		// saveTime += Time.deltaTime;
		float L_0 = __this->___saveTime_6;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___saveTime_6 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (saveTime >= saveRate)
		float L_2 = __this->___saveTime_6;
		float L_3 = __this->___saveRate_5;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		// saveTime -= saveRate;
		float L_4 = __this->___saveTime_6;
		float L_5 = __this->___saveRate_5;
		__this->___saveTime_6 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// SaveData();
		SaveManager_SaveData_mEF2A4D132F875E24B99F21CBFAB954D3C675FF56(__this, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void SaveManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_LoadData_m983359A04561F5E08DCA31C026C51197E605418D (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF8F199152E9ED78F17E88D38B0D51E881440D73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9C47BF6436E719DBF96C521B520FB2E3BD6FB04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5DCC8E224125A3CEB447F8D07055ED4CC34B963F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9576C81E34817F55DD15CD0217C7A9A7E6252753_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// List<ISaveable> iSaveables = FindAllISaveable();
		List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4* L_0;
		L_0 = SaveManager_FindAllISaveable_m6578213BD23E1862C080A6F0D298348B10550C0C(__this, NULL);
		// foreach (ISaveable iSaveable in iSaveables)
		NullCheck(L_0);
		Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94 L_1;
		L_1 = List_1_GetEnumerator_m9576C81E34817F55DD15CD0217C7A9A7E6252753(L_0, List_1_GetEnumerator_m9576C81E34817F55DD15CD0217C7A9A7E6252753_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF8F199152E9ED78F17E88D38B0D51E881440D73B((&V_0), Enumerator_Dispose_mF8F199152E9ED78F17E88D38B0D51E881440D73B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (ISaveable iSaveable in iSaveables)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m5DCC8E224125A3CEB447F8D07055ED4CC34B963F_inline((&V_0), Enumerator_get_Current_m5DCC8E224125A3CEB447F8D07055ED4CC34B963F_RuntimeMethod_var);
				// iSaveable.LoadData();
				NullCheck(L_2);
				InterfaceActionInvoker0::Invoke(0 /* System.Void ISaveable::LoadData() */, ISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_il2cpp_TypeInfo_var, L_2);
			}

IL_001a_1:
			{
				// foreach (ISaveable iSaveable in iSaveables)
				bool L_3;
				L_3 = Enumerator_MoveNext_mE9C47BF6436E719DBF96C521B520FB2E3BD6FB04((&V_0), Enumerator_MoveNext_mE9C47BF6436E719DBF96C521B520FB2E3BD6FB04_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void SaveManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager_SaveData_mEF2A4D132F875E24B99F21CBFAB954D3C675FF56 (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF8F199152E9ED78F17E88D38B0D51E881440D73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE9C47BF6436E719DBF96C521B520FB2E3BD6FB04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5DCC8E224125A3CEB447F8D07055ED4CC34B963F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9576C81E34817F55DD15CD0217C7A9A7E6252753_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// List<ISaveable> iSaveables = FindAllISaveable();
		List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4* L_0;
		L_0 = SaveManager_FindAllISaveable_m6578213BD23E1862C080A6F0D298348B10550C0C(__this, NULL);
		// foreach (ISaveable iSaveable in iSaveables)
		NullCheck(L_0);
		Enumerator_t21E5CF6E8100E4A38D5AA220A93CF4DBE4366D94 L_1;
		L_1 = List_1_GetEnumerator_m9576C81E34817F55DD15CD0217C7A9A7E6252753(L_0, List_1_GetEnumerator_m9576C81E34817F55DD15CD0217C7A9A7E6252753_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF8F199152E9ED78F17E88D38B0D51E881440D73B((&V_0), Enumerator_Dispose_mF8F199152E9ED78F17E88D38B0D51E881440D73B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (ISaveable iSaveable in iSaveables)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m5DCC8E224125A3CEB447F8D07055ED4CC34B963F_inline((&V_0), Enumerator_get_Current_m5DCC8E224125A3CEB447F8D07055ED4CC34B963F_RuntimeMethod_var);
				// iSaveable.SaveData();
				NullCheck(L_2);
				InterfaceActionInvoker0::Invoke(1 /* System.Void ISaveable::SaveData() */, ISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_il2cpp_TypeInfo_var, L_2);
			}

IL_001a_1:
			{
				// foreach (ISaveable iSaveable in iSaveables)
				bool L_3;
				L_3 = Enumerator_MoveNext_mE9C47BF6436E719DBF96C521B520FB2E3BD6FB04((&V_0), Enumerator_MoveNext_mE9C47BF6436E719DBF96C521B520FB2E3BD6FB04_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<ISaveable> SaveManager::FindAllISaveable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4* SaveManager_FindAllISaveable_m6578213BD23E1862C080A6F0D298348B10550C0C (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_m6AABC5CB066CE24F7099CDCFD37EEFF198E84B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7B62209EC44EDAE25769CE2DB11D28E11B6DFE5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m25F9822C8F36419F97592FBE6E0B14E5FA61C0B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IEnumerable<ISaveable> iSaveables = FindObjectsOfType<MonoBehaviour>(true).OfType<ISaveable>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_0;
		L_0 = Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m25F9822C8F36419F97592FBE6E0B14E5FA61C0B8((bool)1, Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m25F9822C8F36419F97592FBE6E0B14E5FA61C0B8_RuntimeMethod_var);
		RuntimeObject* L_1;
		L_1 = Enumerable_OfType_TisISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_m6AABC5CB066CE24F7099CDCFD37EEFF198E84B8A((RuntimeObject*)L_0, Enumerable_OfType_TisISaveable_t408CD4E5BC3391A368E94999F7156A1B0FF621EC_m6AABC5CB066CE24F7099CDCFD37EEFF198E84B8A_RuntimeMethod_var);
		// List<ISaveable> listISaveable = new List<ISaveable>(iSaveables);
		List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4* L_2 = (List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4*)il2cpp_codegen_object_new(List_1_tE23CED02E288F5616143B9FE7CE86635A571FAC4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m7B62209EC44EDAE25769CE2DB11D28E11B6DFE5E(L_2, L_1, List_1__ctor_m7B62209EC44EDAE25769CE2DB11D28E11B6DFE5E_RuntimeMethod_var);
		// return listISaveable;
		return L_2;
	}
}
// System.Void SaveManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveManager__ctor_m1F205ADF8D0DB62531A750C62939AB6BC056D9FE (SaveManager_t8C78B99FC298BDDDADBD6EE95F9107F6B55ED2F5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SellItem::OnSellClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellItem_OnSellClick_mFB4AC19B297EBFF6647D0C94A5FA2BD3F720AB31 (SellItem_t0A746857DDD9ACA19EE43D1421F0424CD565D12B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (int.Parse(amount.text) > ResourceManager.instance.GetResource(itemName))
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___amount_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		int32_t L_2;
		L_2 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_1, NULL);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_3 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		String_t* L_4 = __this->___itemName_4;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = ResourceManager_GetResource_m5051D7D7A0DD2DD5A088B04BB3F2151BCAA8A202(L_3, L_4, NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_5)))
		{
			goto IL_0059;
		}
	}
	{
		// int num = ResourceManager.instance.GetResource(itemName);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_6 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		String_t* L_7 = __this->___itemName_4;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = ResourceManager_GetResource_m5051D7D7A0DD2DD5A088B04BB3F2151BCAA8A202(L_6, L_7, NULL);
		V_0 = L_8;
		// ResourceManager.instance.RemoveResource(itemName, num);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_9 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		String_t* L_10 = __this->___itemName_4;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		ResourceManager_RemoveResource_m0FE524057E93025247E0FB82A63C183188CEABB6(L_9, L_10, L_11, NULL);
		// ResourceManager.instance.AddResource(0, num * price);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_12 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___price_5;
		NullCheck(L_12);
		ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784(L_12, 0, ((int32_t)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		goto IL_008e;
	}

IL_0059:
	{
		// int num = int.Parse(amount.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = __this->___amount_6;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_15, NULL);
		int32_t L_17;
		L_17 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_16, NULL);
		V_1 = L_17;
		// ResourceManager.instance.RemoveResource(itemName, num);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_18 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		String_t* L_19 = __this->___itemName_4;
		int32_t L_20 = V_1;
		NullCheck(L_18);
		ResourceManager_RemoveResource_m0FE524057E93025247E0FB82A63C183188CEABB6(L_18, L_19, L_20, NULL);
		// ResourceManager.instance.AddResource(0, num * price);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_21 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_22 = V_1;
		int32_t L_23 = __this->___price_5;
		NullCheck(L_21);
		ResourceManager_AddResource_m132D6010B9D2A687E8837B5EC212EB5DFDC49784(L_21, 0, ((int32_t)il2cpp_codegen_multiply(L_22, L_23)), NULL);
	}

IL_008e:
	{
		// SoundManager.instance.PlayMoneyIncome();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_24 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_24);
		SoundManager_PlayMoneyIncome_m9E5C42B457F627F4D98894637629DA6E5A92B929(L_24, NULL);
		// amount.text = "1";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_25 = __this->___amount_6;
		NullCheck(L_25);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_25, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		// }
		return;
	}
}
// System.Void SellItem::OnMaxClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellItem_OnMaxClick_m59DF87FBD5E5E505E005246ADFFC8E7FFE3BDD1D (SellItem_t0A746857DDD9ACA19EE43D1421F0424CD565D12B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// amount.text = ResourceManager.instance.GetResource(itemName).ToString();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___amount_6;
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_1 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		String_t* L_2 = __this->___itemName_4;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = ResourceManager_GetResource_m5051D7D7A0DD2DD5A088B04BB3F2151BCAA8A202(L_1, L_2, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_0);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void SellItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellItem__ctor_mA0BB169546BD7AB4FFB8E7CFAE847C71DEDBFC02 (SellItem_t0A746857DDD9ACA19EE43D1421F0424CD565D12B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mEB5694CE6F2913D14C32C4AF41C936AA76007825 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Boolean SoundManager::ToggleMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_ToggleMusic_m79AFC42D5EEFA3400467E4290DCAB0B1076B2FA1 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// bgAudioSource.mute = !bgAudioSource.mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___bgAudioSource_5;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___bgAudioSource_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_1, NULL);
		NullCheck(L_0);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// return bgAudioSource.mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___bgAudioSource_5;
		NullCheck(L_3);
		bool L_4;
		L_4 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_3, NULL);
		return L_4;
	}
}
// System.Boolean SoundManager::ToggleSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SoundManager_ToggleSound_m440BE7D26F7E6056E36EF9430777E4DC0717E071 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.mute = !sfxAudioSource.mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_6;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___sfxAudioSource_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_1, NULL);
		NullCheck(L_0);
		AudioSource_set_mute_m6407E0AEE7F088AC69BD8C1D270C2B2049769B09(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// return sfxAudioSource.mute;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sfxAudioSource_6;
		NullCheck(L_3);
		bool L_4;
		L_4 = AudioSource_get_mute_mE23745FC15F1105556CB7590CA651628FC562DBD(L_3, NULL);
		return L_4;
	}
}
// System.Void SoundManager::PlayPunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayPunch_mB6C1E9BB823D8075E9E853E05B3671132F8069C0 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(punchClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___punchClip_7;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayTreeBreak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayTreeBreak_mD8A69821499ABDF30CE88A51300F01E9F8B41168 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(treeBreakClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___treeBreakClip_8;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayStoneBreak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayStoneBreak_m8C58C1B6DCDE23668929C8AC0426AF6F116BCCEB (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(stoneBreakClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___stoneBreakClip_9;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayGlassBreak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayGlassBreak_m00D66B5234FC1C09A8AD25874A95D816E46896AB (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(glassBreakClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___glassBreakClip_10;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlayMoneyIncome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlayMoneyIncome_m9E5C42B457F627F4D98894637629DA6E5A92B929 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// sfxAudioSource.PlayOneShot(moneyIncomeClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sfxAudioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___moneyIncomeClip_11;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpawnManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Awake_mFDED3E1AD4ACAC301FC5A529CF5AF24A9A92B1C1 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void SpawnManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_LoadData_m17409885489CAE8384571E2BBDE3D7E689F41F37 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04125566686DF7C8A0C6FC4FD08275831A86D789);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3669DB73536170454216BA597CDED6167C4E18DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral496D211C10CE9322E7EA60AA77CFAA7C9057694E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF0838B35DF6218CD7BDCDD4838785AB2A594EA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBF536BD17B6CCEF8508C0782CCAC9054D15D17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFE5B63863C51613999DA998273EFE7794A7DB16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB053F1E57065ADB6E897433AD375C8B25D01614);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnRate = PlayerPrefs.GetFloat("spawnRate", 5f);
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral3669DB73536170454216BA597CDED6167C4E18DC, (5.0f), NULL);
		__this->___spawnRate_7 = L_0;
		// unlockCount = PlayerPrefs.GetInt("unlockCount", 1);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralBDBF536BD17B6CCEF8508C0782CCAC9054D15D17, 1, NULL);
		__this->___unlockCount_19 = L_1;
		// isUnlockWood = PlayerPrefs.GetInt("isUnlockWood", 1) != 0;
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralAF0838B35DF6218CD7BDCDD4838785AB2A594EA5, 1, NULL);
		__this->___isUnlockWood_14 = (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		// isUnlockStone = PlayerPrefs.GetInt("isUnlockStone", 0) != 0;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralBFE5B63863C51613999DA998273EFE7794A7DB16, 0, NULL);
		__this->___isUnlockStone_15 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		// isUnlockIron = PlayerPrefs.GetInt("isUnlockIron", 0) != 0;
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral496D211C10CE9322E7EA60AA77CFAA7C9057694E, 0, NULL);
		__this->___isUnlockIron_16 = (bool)((!(((uint32_t)L_4) <= ((uint32_t)0)))? 1 : 0);
		// isUnlockGold = PlayerPrefs.GetInt("isUnlockGold", 0) != 0;
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral04125566686DF7C8A0C6FC4FD08275831A86D789, 0, NULL);
		__this->___isUnlockGold_17 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		// isUnlockShard = PlayerPrefs.GetInt("isUnlockShard", 0) != 0;
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralCB053F1E57065ADB6E897433AD375C8B25D01614, 0, NULL);
		__this->___isUnlockShard_18 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		// }
		return;
	}
}
// System.Void SpawnManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_SaveData_mF6C8AD557014933ED823195DB9E02E565BD5890C (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04125566686DF7C8A0C6FC4FD08275831A86D789);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3669DB73536170454216BA597CDED6167C4E18DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral496D211C10CE9322E7EA60AA77CFAA7C9057694E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF0838B35DF6218CD7BDCDD4838785AB2A594EA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDBF536BD17B6CCEF8508C0782CCAC9054D15D17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFE5B63863C51613999DA998273EFE7794A7DB16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB053F1E57065ADB6E897433AD375C8B25D01614);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	String_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	String_t* G_B9_1 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	String_t* G_B12_1 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	String_t* G_B15_1 = NULL;
	{
		// PlayerPrefs.SetFloat("spawnRate", spawnRate);
		float L_0 = __this->___spawnRate_7;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral3669DB73536170454216BA597CDED6167C4E18DC, L_0, NULL);
		// PlayerPrefs.SetInt("unlockCount", unlockCount);
		int32_t L_1 = __this->___unlockCount_19;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralBDBF536BD17B6CCEF8508C0782CCAC9054D15D17, L_1, NULL);
		// PlayerPrefs.SetInt("isUnlockWood", isUnlockWood? 1 : 0);
		bool L_2 = __this->___isUnlockWood_14;
		G_B1_0 = _stringLiteralAF0838B35DF6218CD7BDCDD4838785AB2A594EA5;
		if (L_2)
		{
			G_B2_0 = _stringLiteralAF0838B35DF6218CD7BDCDD4838785AB2A594EA5;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(G_B3_1, G_B3_0, NULL);
		// PlayerPrefs.SetInt("isUnlockStone", isUnlockStone ? 1 : 0);
		bool L_3 = __this->___isUnlockStone_15;
		G_B4_0 = _stringLiteralBFE5B63863C51613999DA998273EFE7794A7DB16;
		if (L_3)
		{
			G_B5_0 = _stringLiteralBFE5B63863C51613999DA998273EFE7794A7DB16;
			goto IL_0046;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0047:
	{
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(G_B6_1, G_B6_0, NULL);
		// PlayerPrefs.SetInt("isUnlockIron", isUnlockIron ? 1 : 0);
		bool L_4 = __this->___isUnlockIron_16;
		G_B7_0 = _stringLiteral496D211C10CE9322E7EA60AA77CFAA7C9057694E;
		if (L_4)
		{
			G_B8_0 = _stringLiteral496D211C10CE9322E7EA60AA77CFAA7C9057694E;
			goto IL_005c;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_005d:
	{
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(G_B9_1, G_B9_0, NULL);
		// PlayerPrefs.SetInt("isUnlockGold", isUnlockGold ? 1 : 0);
		bool L_5 = __this->___isUnlockGold_17;
		G_B10_0 = _stringLiteral04125566686DF7C8A0C6FC4FD08275831A86D789;
		if (L_5)
		{
			G_B11_0 = _stringLiteral04125566686DF7C8A0C6FC4FD08275831A86D789;
			goto IL_0072;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_0;
		goto IL_0073;
	}

IL_0072:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0073:
	{
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(G_B12_1, G_B12_0, NULL);
		// PlayerPrefs.SetInt("isUnlockShard", isUnlockShard ? 1 : 0);
		bool L_6 = __this->___isUnlockShard_18;
		G_B13_0 = _stringLiteralCB053F1E57065ADB6E897433AD375C8B25D01614;
		if (L_6)
		{
			G_B14_0 = _stringLiteralCB053F1E57065ADB6E897433AD375C8B25D01614;
			goto IL_0088;
		}
	}
	{
		G_B15_0 = 0;
		G_B15_1 = G_B13_0;
		goto IL_0089;
	}

IL_0088:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
	}

IL_0089:
	{
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(G_B15_1, G_B15_0, NULL);
		// }
		return;
	}
}
// System.Void SpawnManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager_Update_mD714BA3EADCC182FB7A93B9DE347D727E3A1BC53 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	{
		// SpawnRandomResource();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = SpawnManager_SpawnRandomResource_m65DA1FF14B787E168D4A3004966AF25D8B810D4A(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject SpawnManager::SpawnRandomResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnManager_SpawnRandomResource_m65DA1FF14B787E168D4A3004966AF25D8B810D4A (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32B6F9368820BD2CDA9CB9D72A2585DFFF11F59A);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (isSpawning == false)
		bool L_0 = __this->___isSpawning_21;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_000a:
	{
		// spawnTime += Time.deltaTime;
		float L_1 = __this->___spawnTime_20;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___spawnTime_20 = ((float)il2cpp_codegen_add(L_1, L_2));
		// if (spawnTime < spawnRate)
		float L_3 = __this->___spawnTime_20;
		float L_4 = __this->___spawnRate_7;
		if ((!(((float)L_3) < ((float)L_4))))
		{
			goto IL_002c;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_002c:
	{
		// spawnTime -= spawnRate;
		float L_5 = __this->___spawnTime_20;
		float L_6 = __this->___spawnRate_7;
		__this->___spawnTime_20 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		// if (GameObject.FindGameObjectsWithTag("Resource").Length >= maxResource)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7;
		L_7 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral32B6F9368820BD2CDA9CB9D72A2585DFFF11F59A, NULL);
		NullCheck(L_7);
		int32_t L_8 = __this->___maxResource_5;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) < ((int32_t)L_8)))
		{
			goto IL_0055;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_0055:
	{
		// GameObject prefab = RandomResource();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = SpawnManager_RandomResource_m80AB00429004DFD2F9F9C7231227F1B055BD7407(__this, NULL);
		V_0 = L_9;
		// GameObject resource = SpawnResource(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = SpawnManager_SpawnResource_mA38CE064410FAA19D82B9A73B2A54D9A0117B8A7(__this, L_10, NULL);
		// return resource;
		return L_11;
	}
}
// UnityEngine.GameObject SpawnManager::RandomResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnManager_RandomResource_m80AB00429004DFD2F9F9C7231227F1B055BD7407 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float rand = Random.Range(0f, 1f);
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (1.0f), NULL);
		V_0 = L_0;
		// if (rand < shardRate && isUnlockShard)
		float L_1 = V_0;
		float L_2 = __this->___shardRate_13;
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		bool L_3 = __this->___isUnlockShard_18;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// return resourcePrefabs[6];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___resourcePrefabs_6;
		NullCheck(L_4);
		int32_t L_5 = 6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}

IL_002a:
	{
		// else if (rand < goldRate && isUnlockGold)
		float L_7 = V_0;
		float L_8 = __this->___goldRate_12;
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_0044;
		}
	}
	{
		bool L_9 = __this->___isUnlockGold_17;
		if (!L_9)
		{
			goto IL_0044;
		}
	}
	{
		// return resourcePrefabs[5];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___resourcePrefabs_6;
		NullCheck(L_10);
		int32_t L_11 = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_0044:
	{
		// else if (rand < ironRate && isUnlockIron)
		float L_13 = V_0;
		float L_14 = __this->___ironRate_11;
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_005e;
		}
	}
	{
		bool L_15 = __this->___isUnlockIron_16;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		// return resourcePrefabs[4];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___resourcePrefabs_6;
		NullCheck(L_16);
		int32_t L_17 = 4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return L_18;
	}

IL_005e:
	{
		// else if (rand < stoneRate && isUnlockStone)
		float L_19 = V_0;
		float L_20 = __this->___stoneRate_10;
		if ((!(((float)L_19) < ((float)L_20))))
		{
			goto IL_0078;
		}
	}
	{
		bool L_21 = __this->___isUnlockStone_15;
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		// return resourcePrefabs[3];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = __this->___resourcePrefabs_6;
		NullCheck(L_22);
		int32_t L_23 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		return L_24;
	}

IL_0078:
	{
		// return resourcePrefabs[Random.Range(0,3)];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___resourcePrefabs_6;
		int32_t L_26;
		L_26 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 3, NULL);
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		return L_28;
	}
}
// UnityEngine.GameObject SpawnManager::SpawnResource(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnManager_SpawnResource_mA38CE064410FAA19D82B9A73B2A54D9A0117B8A7 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___resourcePrefab0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B_mC7284F621D4467969DD11B4A3DBFE1741487F696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// Vector3 spawnPos = new Vector2(Random.Range(-3f, 3f), Random.Range(-3f, 3f));
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-3.0f), (3.0f), NULL);
		float L_1;
		L_1 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-3.0f), (3.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_2, NULL);
		V_0 = L_3;
		// GameObject resource = Instantiate(resourcePrefab, spawnPos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___resourcePrefab0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_1 = L_7;
		// if (Random.Range(0f,1f) < bigRate)
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (1.0f), NULL);
		float L_9 = __this->___bigRate_8;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0058;
		}
	}
	{
		// resource.GetComponent<ResourceObject>().SetBig();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		NullCheck(L_10);
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_11;
		L_11 = GameObject_GetComponent_TisResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B_mC7284F621D4467969DD11B4A3DBFE1741487F696(L_10, GameObject_GetComponent_TisResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B_mC7284F621D4467969DD11B4A3DBFE1741487F696_RuntimeMethod_var);
		NullCheck(L_11);
		ResourceObject_SetBig_m16D787DC30EA7E7D5C0D6BFEB56BB97231CEDCAD(L_11, NULL);
	}

IL_0058:
	{
		// return resource;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		return L_12;
	}
}
// System.Boolean SpawnManager::ToggleSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnManager_ToggleSpawning_m40FC4EF3631DA7D70415D4A113C3FF7E86A0D116 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	{
		// isSpawning = !isSpawning;
		bool L_0 = __this->___isSpawning_21;
		__this->___isSpawning_21 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// return isSpawning;
		bool L_1 = __this->___isSpawning_21;
		return L_1;
	}
}
// System.Int32 SpawnManager::UnlockResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpawnManager_UnlockResource_mF95FDB03BCCEE46CB044470ED342E547E0461364 (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// unlockCount++;
		int32_t L_0 = __this->___unlockCount_19;
		__this->___unlockCount_19 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// switch (unlockCount)
		int32_t L_1 = __this->___unlockCount_19;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_2, 2)))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_002f:
	{
		// isUnlockStone = true;
		__this->___isUnlockStone_15 = (bool)1;
		// break;
		goto IL_0051;
	}

IL_0038:
	{
		// isUnlockIron = true;
		__this->___isUnlockIron_16 = (bool)1;
		// break;
		goto IL_0051;
	}

IL_0041:
	{
		// isUnlockGold = true;
		__this->___isUnlockGold_17 = (bool)1;
		// break;
		goto IL_0051;
	}

IL_004a:
	{
		// isUnlockShard = true;
		__this->___isUnlockShard_18 = (bool)1;
	}

IL_0051:
	{
		// return unlockCount;
		int32_t L_3 = __this->___unlockCount_19;
		return L_3;
	}
}
// System.Void SpawnManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnManager__ctor_m8DD503A0FFE79FA38CF0B7F013E54D24A04D166A (SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* __this, const RuntimeMethod* method) 
{
	{
		// public bool isUnlockWood = true;
		__this->___isUnlockWood_14 = (bool)1;
		// public int unlockCount = 1;
		__this->___unlockCount_19 = 1;
		// private bool isSpawning = true;
		__this->___isSpawning_21 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_m7EC364BDD53CE056E998BAB28F79998608BB16DF (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// upgradeMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___upgradeMenu_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// sellMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___sellMenu_14;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UIManager::ToggleUpgradeMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ToggleUpgradeMenu_mF1A705E2E5A77D8B9A85B260F9B685EEC7A2C506 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// isUpgradeMenuOpen = !isUpgradeMenuOpen;
		bool L_0 = __this->___isUpgradeMenuOpen_13;
		__this->___isUpgradeMenuOpen_13 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (isUpgradeMenuOpen && isSellMenuOpen)
		bool L_1 = __this->___isUpgradeMenuOpen_13;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		bool L_2 = __this->___isSellMenuOpen_15;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// ToggleSellMenu();
		UIManager_ToggleSellMenu_m087539AC825EDCFF33C129F27BDF5EAD57284B56(__this, NULL);
	}

IL_0025:
	{
		// upgradeMenu.SetActive(isUpgradeMenuOpen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___upgradeMenu_12;
		bool L_4 = __this->___isUpgradeMenuOpen_13;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UIManager::ToggleSellMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ToggleSellMenu_m087539AC825EDCFF33C129F27BDF5EAD57284B56 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// isSellMenuOpen = !isSellMenuOpen;
		bool L_0 = __this->___isSellMenuOpen_15;
		__this->___isSellMenuOpen_15 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// if (isUpgradeMenuOpen && isSellMenuOpen)
		bool L_1 = __this->___isUpgradeMenuOpen_13;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		bool L_2 = __this->___isSellMenuOpen_15;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// ToggleUpgradeMenu();
		UIManager_ToggleUpgradeMenu_mF1A705E2E5A77D8B9A85B260F9B685EEC7A2C506(__this, NULL);
	}

IL_0025:
	{
		// sellMenu.SetActive(isSellMenuOpen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___sellMenu_14;
		bool L_4 = __this->___isSellMenuOpen_15;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UIManager::ToggleSpawnButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ToggleSpawnButton_mA4610B12EEED70C97492323C3C757DC2D7DB40CF (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool isSpawning = SpawnManager.instance.ToggleSpawning();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_0 = ((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = SpawnManager_ToggleSpawning_m40FC4EF3631DA7D70415D4A113C3FF7E86A0D116(L_0, NULL);
		// if (isSpawning)
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// toggleSpawnButton.color = Color.green;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___toggleSpawnButton_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		return;
	}

IL_001d:
	{
		// toggleSpawnButton.color = Color.red;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___toggleSpawnButton_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void UIManager::ToggleMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ToggleMusic_m59C4694A1C66407E3B61034E060AD2A4BA876109 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool isMusicMute = SoundManager.instance.ToggleMusic();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = SoundManager_ToggleMusic_m79AFC42D5EEFA3400467E4290DCAB0B1076B2FA1(L_0, NULL);
		// if (!isMusicMute)
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// toggleMusicButton.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___toggleMusicButton_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		return;
	}

IL_001d:
	{
		// toggleMusicButton.color = Color.red;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___toggleMusicButton_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void UIManager::ToggleSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ToggleSound_m6B9686C9DCF403B13DB82D2DB844184EBE0FD47E (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool isSoundMute = SoundManager.instance.ToggleSound();
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = SoundManager_ToggleSound_m440BE7D26F7E6056E36EF9430777E4DC0717E071(L_0, NULL);
		// if (!isSoundMute)
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// toggleSoundButton.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___toggleSoundButton_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		return;
	}

IL_001d:
	{
		// toggleSoundButton.color = Color.red;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___toggleSoundButton_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void UIManager::SetAmountResource(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetAmountResource_m8C506E9B52BB18BF4A3E29B02857C851AFA49817 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___tier0, int32_t ___amount1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___tier0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_006b;
			}
			case 5:
			{
				goto IL_007e;
			}
		}
	}
	{
		return;
	}

IL_001f:
	{
		// moneyUI.SetText(amount.ToString());
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_1 = __this->___moneyUI_6;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___amount1), NULL);
		NullCheck(L_1);
		ItemCountingUI_SetText_mD3C7AADEF99A2FB19D2C4B67D23BB1FEBB33C948(L_1, L_2, NULL);
		// break;
		return;
	}

IL_0032:
	{
		// woodUI.SetText(amount.ToString());
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_3 = __this->___woodUI_7;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___amount1), NULL);
		NullCheck(L_3);
		ItemCountingUI_SetText_mD3C7AADEF99A2FB19D2C4B67D23BB1FEBB33C948(L_3, L_4, NULL);
		// break;
		return;
	}

IL_0045:
	{
		// stoneUI.SetText(amount.ToString());
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_5 = __this->___stoneUI_8;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___amount1), NULL);
		NullCheck(L_5);
		ItemCountingUI_SetText_mD3C7AADEF99A2FB19D2C4B67D23BB1FEBB33C948(L_5, L_6, NULL);
		// break;
		return;
	}

IL_0058:
	{
		// ironUI.SetText(amount.ToString());
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_7 = __this->___ironUI_9;
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___amount1), NULL);
		NullCheck(L_7);
		ItemCountingUI_SetText_mD3C7AADEF99A2FB19D2C4B67D23BB1FEBB33C948(L_7, L_8, NULL);
		// break;
		return;
	}

IL_006b:
	{
		// goldUI.SetText(amount.ToString());
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_9 = __this->___goldUI_10;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___amount1), NULL);
		NullCheck(L_9);
		ItemCountingUI_SetText_mD3C7AADEF99A2FB19D2C4B67D23BB1FEBB33C948(L_9, L_10, NULL);
		// break;
		return;
	}

IL_007e:
	{
		// shardUI.SetText(amount.ToString());
		ItemCountingUI_tC3116163CA6C4324F3EBBCA0D8038885E188F3AE* L_11 = __this->___shardUI_11;
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___amount1), NULL);
		NullCheck(L_11);
		ItemCountingUI_SetText_mD3C7AADEF99A2FB19D2C4B67D23BB1FEBB33C948(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mC9DC2B8984E76F424E73C1860AD4BD3DEBF6573F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu_Update_mBB9305562DD7E5CCFC778894EF2A9D6766BC3432 (UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// if (!EventSystem.current.IsPointerOverGameObject())
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1;
		L_1 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_1, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void UIMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMenu__ctor_m3382AC3B4091E96F32BDC15216F9CE597719BA0B (UIMenu_tCA78203CCED11CCD89D275350CC4D37BBFDF8195* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UpgradeItem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem_Awake_m65493749F7B4452D4AFF4E58B341F5FE874BECD6 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) 
{
	{
		// maxUpgrade = Mathf.Min(price.Length, priceUnit.Length);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___price_5;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___priceUnit_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___maxUpgrade_8 = L_2;
		// }
		return;
	}
}
// System.Void UpgradeItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem_Start_m655F18E72D7EAD8FB7643C9D4629A261952798A0 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1593B3280BDACAC211BB99BA262CCA5F506C5CE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetUpItem();
		UpgradeItem_SetUpItem_m5372EE10710F5A0EBBEBC87B6045C39671FD42F4(__this, NULL);
		// if (upgradeName == "unlocknewresource")
		String_t* L_0 = __this->___upgradeName_4;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral1593B3280BDACAC211BB99BA262CCA5F506C5CE6, NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// icon.sprite = priceUnitIcons[SpawnManager.instance.unlockCount + 1];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___icon_10;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = __this->___priceUnitIcons_13;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_4 = ((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_4);
		int32_t L_5 = L_4->___unlockCount_19;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_7, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UpgradeItem::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem_LoadData_m43549055B75F60174244B00B5376EF2D105A98F9 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) 
{
	{
		// nUpgrade = PlayerPrefs.GetInt(upgradeName, 0);
		String_t* L_0 = __this->___upgradeName_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_0, 0, NULL);
		__this->___nUpgrade_7 = L_1;
		// }
		return;
	}
}
// System.Void UpgradeItem::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem_SaveData_m6058F138E4F4F79960007B5BF01E06DF2A07F785 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) 
{
	{
		// PlayerPrefs.SetInt(upgradeName, nUpgrade);
		String_t* L_0 = __this->___upgradeName_4;
		int32_t L_1 = __this->___nUpgrade_7;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UpgradeItem::SetUpItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem_SetUpItem_m5372EE10710F5A0EBBEBC87B6045C39671FD42F4 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nUpgrade >= maxUpgrade)
		int32_t L_0 = __this->___nUpgrade_7;
		int32_t L_1 = __this->___maxUpgrade_8;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002b;
		}
	}
	{
		// textPrice.text = "MAX";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___textPrice_11;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
		// priceUnitIcon.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___priceUnitIcon_12;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		// return;
		return;
	}

IL_002b:
	{
		// textPrice.text = price[nUpgrade].ToString("0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___textPrice_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___price_5;
		int32_t L_6 = __this->___nUpgrade_7;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// priceUnitIcon.sprite = priceUnitIcons[PriceUnitStringtoIndex(priceUnit[nUpgrade])];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___priceUnitIcon_12;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_9 = __this->___priceUnitIcons_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = __this->___priceUnit_6;
		int32_t L_11 = __this->___nUpgrade_7;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14;
		L_14 = UpgradeItem_PriceUnitStringtoIndex_mB8077912C79A26A133954EA803CA7FC7B51845B7(__this, L_13, NULL);
		NullCheck(L_9);
		int32_t L_15 = L_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_16, NULL);
		// }
		return;
	}
}
// System.Void UpgradeItem::OnBuyClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem_OnBuyClick_mA4D4C1E476351179512A1630F163825AD31D747E (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nUpgrade >= maxUpgrade)
		int32_t L_0 = __this->___nUpgrade_7;
		int32_t L_1 = __this->___maxUpgrade_8;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (ResourceManager.instance.GetResource(PriceUnitStringtoIndex(priceUnit[nUpgrade])) < price[nUpgrade])
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_2 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->___priceUnit_6;
		int32_t L_4 = __this->___nUpgrade_7;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7;
		L_7 = UpgradeItem_PriceUnitStringtoIndex_mB8077912C79A26A133954EA803CA7FC7B51845B7(__this, L_6, NULL);
		NullCheck(L_2);
		int32_t L_8;
		L_8 = ResourceManager_GetResource_m095FF080A5F7C5B088ADE9BCC9429E69DE4245D4(L_2, L_7, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___price_5;
		int32_t L_10 = __this->___nUpgrade_7;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((((int32_t)L_8) >= ((int32_t)L_12)))
		{
			goto IL_003c;
		}
	}
	{
		// return;
		return;
	}

IL_003c:
	{
		// ResourceManager.instance.RemoveResource(PriceUnitStringtoIndex(priceUnit[nUpgrade]), price[nUpgrade]);
		ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E* L_13 = ((ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_StaticFields*)il2cpp_codegen_static_fields_for(ResourceManager_t3C786E6B9CB06BD30723E3099A98FEF2F853355E_il2cpp_TypeInfo_var))->___instance_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = __this->___priceUnit_6;
		int32_t L_15 = __this->___nUpgrade_7;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18;
		L_18 = UpgradeItem_PriceUnitStringtoIndex_mB8077912C79A26A133954EA803CA7FC7B51845B7(__this, L_17, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->___price_5;
		int32_t L_20 = __this->___nUpgrade_7;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_13);
		ResourceManager_RemoveResource_mF883FDD23F1CB9E57A4ED59253D69B77B5144D3E(L_13, L_18, L_22, NULL);
		// Upgrade();
		UpgradeItem_Upgrade_m3F89074E138E80E29680214D47E0C0AD78507FE7(__this, NULL);
		// nUpgrade++;
		int32_t L_23 = __this->___nUpgrade_7;
		__this->___nUpgrade_7 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		// SetUpItem();
		UpgradeItem_SetUpItem_m5372EE10710F5A0EBBEBC87B6045C39671FD42F4(__this, NULL);
		// }
		return;
	}
}
// System.Void UpgradeItem::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem_Upgrade_m3F89074E138E80E29680214D47E0C0AD78507FE7 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral043434C6BB0A0082B9372B4E92F3C75630F7D85D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1593B3280BDACAC211BB99BA262CCA5F506C5CE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39D49D75CC65034C0C333E398235E44DD6053904);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C5EB8D979616FFA586F0E1F70919945E7118FE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF2F2C8722A2013F312AB1C33E310359E26ED30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C0D382AA01360686EC86280707D26099E2C9AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C3F31BA244307E513F0E859CABB9963BD32BAAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB6A7F8F11FCBED7A08BF425F2F60AB410D263B9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// switch (upgradeName)
		String_t* L_0 = __this->___upgradeName_4;
		V_1 = L_0;
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)948530465)))))
		{
			goto IL_002f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)49494538))))
		{
			goto IL_0067;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)54267966))))
		{
			goto IL_0078;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)948530465))))
		{
			goto IL_0059;
		}
	}
	{
		return;
	}

IL_002f:
	{
		uint32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) <= ((uint32_t)((int32_t)-1781647529)))))
		{
			goto IL_0048;
		}
	}
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1380298981))))
		{
			goto IL_00bc;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-1781647529))))
		{
			goto IL_0089;
		}
	}
	{
		return;
	}

IL_0048:
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1123307114))))
		{
			goto IL_00ab;
		}
	}
	{
		uint32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)-487374494))))
		{
			goto IL_009a;
		}
	}
	{
		return;
	}

IL_0059:
	{
		String_t* L_12 = V_1;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteral1593B3280BDACAC211BB99BA262CCA5F506C5CE6, NULL);
		if (L_13)
		{
			goto IL_00cd;
		}
	}
	{
		return;
	}

IL_0067:
	{
		String_t* L_14 = V_1;
		bool L_15;
		L_15 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_14, _stringLiteral3C5EB8D979616FFA586F0E1F70919945E7118FE7, NULL);
		if (L_15)
		{
			goto IL_0109;
		}
	}
	{
		return;
	}

IL_0078:
	{
		String_t* L_16 = V_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_16, _stringLiteral9C3F31BA244307E513F0E859CABB9963BD32BAAA, NULL);
		if (L_17)
		{
			goto IL_0120;
		}
	}
	{
		return;
	}

IL_0089:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteral56C0D382AA01360686EC86280707D26099E2C9AD, NULL);
		if (L_19)
		{
			goto IL_0133;
		}
	}
	{
		return;
	}

IL_009a:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral043434C6BB0A0082B9372B4E92F3C75630F7D85D, NULL);
		if (L_21)
		{
			goto IL_013f;
		}
	}
	{
		return;
	}

IL_00ab:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral3EF2F2C8722A2013F312AB1C33E310359E26ED30, NULL);
		if (L_23)
		{
			goto IL_0156;
		}
	}
	{
		return;
	}

IL_00bc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_24, _stringLiteral39D49D75CC65034C0C333E398235E44DD6053904, NULL);
		if (L_25)
		{
			goto IL_0169;
		}
	}
	{
		return;
	}

IL_00cd:
	{
		// int n = SpawnManager.instance.UnlockResource();
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_26 = ((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = SpawnManager_UnlockResource_mF95FDB03BCCEE46CB044470ED342E547E0461364(L_26, NULL);
		V_0 = L_27;
		// if (n == 5)
		int32_t L_28 = V_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)5))))
		{
			goto IL_00ec;
		}
	}
	{
		// textUpgradeName.text = "Coming Soon...";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___textUpgradeName_9;
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteralAB6A7F8F11FCBED7A08BF425F2F60AB410D263B9);
	}

IL_00ec:
	{
		// if (n <= 5)
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) > ((int32_t)5)))
		{
			goto IL_017f;
		}
	}
	{
		// icon.sprite = priceUnitIcons[n + 1];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = __this->___icon_10;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_32 = __this->___priceUnitIcons_13;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_31, L_35, NULL);
		// break;
		return;
	}

IL_0109:
	{
		// SpawnManager.instance.spawnRate *= 0.7f;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_36 = ((SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_StaticFields*)il2cpp_codegen_static_fields_for(SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC_il2cpp_TypeInfo_var))->___instance_4;
		SpawnManager_tD38605BF221D4CC849CF709A85499D2B698FD6FC* L_37 = L_36;
		NullCheck(L_37);
		float L_38 = L_37->___spawnRate_7;
		NullCheck(L_37);
		L_37->___spawnRate_7 = ((float)il2cpp_codegen_multiply(L_38, (0.699999988f)));
		// break;
		return;
	}

IL_0120:
	{
		// Player.instance.clickDamage += 2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_39 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___instance_4;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41 = L_40->___clickDamage_5;
		NullCheck(L_40);
		L_40->___clickDamage_5 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		// break;
		return;
	}

IL_0133:
	{
		// WorkerManager.instance.SpawnWorker();
		WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E* L_42 = ((WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_StaticFields*)il2cpp_codegen_static_fields_for(WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = WorkerManager_SpawnWorker_mF4765ABA07606A81B4981F1451FCCE79BB18CC34(L_42, NULL);
		// break;
		return;
	}

IL_013f:
	{
		// WorkerInfo.instance.harvestSpeed *= 0.8f;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_44 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_45 = L_44;
		NullCheck(L_45);
		float L_46 = L_45->___harvestSpeed_7;
		NullCheck(L_45);
		L_45->___harvestSpeed_7 = ((float)il2cpp_codegen_multiply(L_46, (0.800000012f)));
		// break;
		return;
	}

IL_0156:
	{
		// WorkerInfo.instance.harvestDamage += 1;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_47 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->___harvestDamage_6;
		NullCheck(L_48);
		L_48->___harvestDamage_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		// break;
		return;
	}

IL_0169:
	{
		// WorkerInfo.instance.walkSpeed *= 1.3f;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_50 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_51 = L_50;
		NullCheck(L_51);
		float L_52 = L_51->___walkSpeed_5;
		NullCheck(L_51);
		L_51->___walkSpeed_5 = ((float)il2cpp_codegen_multiply(L_52, (1.29999995f)));
	}

IL_017f:
	{
		// }
		return;
	}
}
// System.Int32 UpgradeItem::PriceUnitStringtoIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UpgradeItem_PriceUnitStringtoIndex_mB8077912C79A26A133954EA803CA7FC7B51845B7 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, String_t* ___priceUnit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___priceUnit0;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral88B8A873F47E7F0762D303AD565BFFC23FE279BC, NULL);
		if (L_1)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_2 = ___priceUnit0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral4759FC2DF50015F90845ABBF82757688465AE69F, NULL);
		if (L_3)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_4 = ___priceUnit0;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralB80BE540846A9F42F8BA0D8C32A0E12681502A74, NULL);
		if (L_5)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_6 = ___priceUnit0;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralDFBF9D87D85100B9123FC7B1C2DF85BB3B300F81, NULL);
		if (L_7)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_8 = ___priceUnit0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteral7C6EFA425812F1F3EE9C396E088A0EBB0FF822AD, NULL);
		if (L_9)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_10 = ___priceUnit0;
		bool L_11;
		L_11 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_10, _stringLiteralF4C0EDF4F0BBB58BF149FD13C7DB81B9F816D565, NULL);
		if (L_11)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_005c;
	}

IL_0050:
	{
		// return 0;
		return 0;
	}

IL_0052:
	{
		// return 1;
		return 1;
	}

IL_0054:
	{
		// return 2;
		return 2;
	}

IL_0056:
	{
		// return 3;
		return 3;
	}

IL_0058:
	{
		// return 4;
		return 4;
	}

IL_005a:
	{
		// return 5;
		return 5;
	}

IL_005c:
	{
		// return -1;
		return (-1);
	}
}
// System.Void UpgradeItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpgradeItem__ctor_mBB4C268C9919107E2B848F1E65ECB6CDB4D99F69 (UpgradeItem_tE5E195C8A62010CFDFC85977130E0F004EFDD1AC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Worker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_Awake_m03841FE0D0B8881618AD0123399FE4FE4E06C34A (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Worker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_Update_mD753875ABA79D84365A67EBE09AA07739A034F84 (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) 
{
	{
		// HarvestResource();
		Worker_HarvestResource_m41403E9DF8E90D6A196F0457651BD028F7CB8FFA(__this, NULL);
		// Walk();
		Worker_Walk_m6A122CC16EBC8485B8959DE843AB8F792CBB292A(__this, NULL);
		// Animation();
		Worker_Animation_mB6ABFA0A1E511BDFC3AB0F580B8CF306AA030B67(__this, NULL);
		// }
		return;
	}
}
// System.Void Worker::AnimationSetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_AnimationSetBool_m3FFB14E01E16E9854259200BB13F2869374CAE43 (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0152ABB367CB5B97F01BE8B6C7E0D999793CD720);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1F078E7C2669DF83F286E3609A4B9B3641D343);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral356969C220D9BE6384B14DA85ABA5A7FF10CA97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68EFE5D43F94566F03C39367809897B82F6ED8EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("WalkUp", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral0B1F078E7C2669DF83F286E3609A4B9B3641D343, (bool)0, NULL);
		// animator.SetBool("WalkDown", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_7;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral68EFE5D43F94566F03C39367809897B82F6ED8EF, (bool)0, NULL);
		// animator.SetBool("WalkLeft", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_7;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral0152ABB367CB5B97F01BE8B6C7E0D999793CD720, (bool)0, NULL);
		// animator.SetBool("WalkRight", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_7;
		NullCheck(L_3);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteral356969C220D9BE6384B14DA85ABA5A7FF10CA97B, (bool)0, NULL);
		// animator.SetBool(name, value);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_7;
		String_t* L_5 = ___name0;
		bool L_6 = ___value1;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Worker::Animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_Animation_mB6ABFA0A1E511BDFC3AB0F580B8CF306AA030B67 (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0152ABB367CB5B97F01BE8B6C7E0D999793CD720);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1F078E7C2669DF83F286E3609A4B9B3641D343);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral356969C220D9BE6384B14DA85ABA5A7FF10CA97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68EFE5D43F94566F03C39367809897B82F6ED8EF);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 direction = walkPos - (Vector2)transform.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___walkPos_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_0, L_3, NULL);
		V_0 = L_4;
		// if (Mathf.Abs(direction.x) > Mathf.Abs(direction.y))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___x_0;
		float L_7;
		L_7 = fabsf(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___y_1;
		float L_10;
		L_10 = fabsf(L_9);
		if ((!(((float)L_7) > ((float)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		// if (direction.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		float L_12 = L_11.___x_0;
		if ((!(((float)L_12) < ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		// AnimationSetBool("WalkLeft", true);
		Worker_AnimationSetBool_m3FFB14E01E16E9854259200BB13F2869374CAE43(__this, _stringLiteral0152ABB367CB5B97F01BE8B6C7E0D999793CD720, (bool)1, NULL);
		return;
	}

IL_004e:
	{
		// AnimationSetBool("WalkRight", true);
		Worker_AnimationSetBool_m3FFB14E01E16E9854259200BB13F2869374CAE43(__this, _stringLiteral356969C220D9BE6384B14DA85ABA5A7FF10CA97B, (bool)1, NULL);
		return;
	}

IL_005b:
	{
		// else if (Mathf.Abs(direction.x) < Mathf.Abs(direction.y))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___x_0;
		float L_15;
		L_15 = fabsf(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		float L_17 = L_16.___y_1;
		float L_18;
		L_18 = fabsf(L_17);
		if ((!(((float)L_15) < ((float)L_18))))
		{
			goto IL_009a;
		}
	}
	{
		// if (direction.y < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___y_1;
		if ((!(((float)L_20) < ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		// AnimationSetBool("WalkDown", true);
		Worker_AnimationSetBool_m3FFB14E01E16E9854259200BB13F2869374CAE43(__this, _stringLiteral68EFE5D43F94566F03C39367809897B82F6ED8EF, (bool)1, NULL);
		return;
	}

IL_008d:
	{
		// AnimationSetBool("WalkUp", true);
		Worker_AnimationSetBool_m3FFB14E01E16E9854259200BB13F2869374CAE43(__this, _stringLiteral0B1F078E7C2669DF83F286E3609A4B9B3641D343, (bool)1, NULL);
		return;
	}

IL_009a:
	{
		// AnimationSetBool("WalkLeft", false);
		Worker_AnimationSetBool_m3FFB14E01E16E9854259200BB13F2869374CAE43(__this, _stringLiteral0152ABB367CB5B97F01BE8B6C7E0D999793CD720, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Worker::Walk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_Walk_m6A122CC16EBC8485B8959DE843AB8F792CBB292A (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetResource != null && Vector2.Distance(transform.position, targetResource.transform.position) > WorkerInfo.instance.harvestRadius)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___targetResource_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_009e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___targetResource_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_7, NULL);
		float L_9;
		L_9 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_4, L_8, NULL);
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_10 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_10);
		float L_11 = L_10->___harvestRadius_8;
		if ((!(((float)L_9) > ((float)L_11))))
		{
			goto IL_009e;
		}
	}
	{
		// walkPos = targetResource.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___targetResource_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_14, NULL);
		__this->___walkPos_6 = L_15;
		// transform.position = Vector2.MoveTowards(transform.position, walkPos, WorkerInfo.instance.walkSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = __this->___walkPos_6;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_21 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_21);
		float L_22 = L_21->___walkSpeed_5;
		float L_23;
		L_23 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_19, L_20, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_24, NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_25, NULL);
		return;
	}

IL_009e:
	{
		// else if (targetResource != null && Vector2.Distance(transform.position, targetResource.transform.position) <= WorkerInfo.instance.harvestRadius)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___targetResource_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00ee;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_29, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___targetResource_4;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_33, NULL);
		float L_35;
		L_35 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_30, L_34, NULL);
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_36 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_36);
		float L_37 = L_36->___harvestRadius_8;
		if ((!(((float)L_35) <= ((float)L_37))))
		{
			goto IL_00ee;
		}
	}
	{
		// walkPos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___walkPos_6 = L_38;
		return;
	}

IL_00ee:
	{
		// else if (walkPos == Vector2.zero)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = __this->___walkPos_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_41;
		L_41 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_39, L_40, NULL);
		if (!L_41)
		{
			goto IL_016b;
		}
	}
	{
		// walkPos = new Vector2(Random.Range(-4f, 4f), Random.Range(-4f, 4f));
		float L_42;
		L_42 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-4.0f), (4.0f), NULL);
		float L_43;
		L_43 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-4.0f), (4.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), L_42, L_43, /*hidden argument*/NULL);
		__this->___walkPos_6 = L_44;
		// transform.position = Vector2.MoveTowards(transform.position, walkPos, WorkerInfo.instance.walkSpeed / 2 * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_47, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = __this->___walkPos_6;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_50 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_50);
		float L_51 = L_50->___walkSpeed_5;
		float L_52;
		L_52 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_48, L_49, ((float)il2cpp_codegen_multiply(((float)(L_51/(2.0f))), L_52)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_53, NULL);
		NullCheck(L_45);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_45, L_54, NULL);
		return;
	}

IL_016b:
	{
		// transform.position = Vector2.MoveTowards(transform.position, walkPos, WorkerInfo.instance.walkSpeed / 2 * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_56);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_57, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = __this->___walkPos_6;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_60 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_60);
		float L_61 = L_60->___walkSpeed_5;
		float L_62;
		L_62 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_58, L_59, ((float)il2cpp_codegen_multiply(((float)(L_61/(2.0f))), L_62)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_63, NULL);
		NullCheck(L_55);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_55, L_64, NULL);
		// }
		return;
	}
}
// System.Void Worker::HarvestResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_HarvestResource_m41403E9DF8E90D6A196F0457651BD028F7CB8FFA (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (targetResource == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___targetResource_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// targetResource = FindRandomResource();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Worker_FindRandomResource_mFB96926B8ECF91BC5A37D20072B315C59FB23944(__this, NULL);
		__this->___targetResource_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetResource_4), (void*)L_2);
		// if (targetResource == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___targetResource_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		return;
	}

IL_0029:
	{
		// if (Vector2.Distance(transform.position, targetResource.transform.position) <= WorkerInfo.instance.harvestRadius)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___targetResource_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_10, NULL);
		float L_12;
		L_12 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_7, L_11, NULL);
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_13 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_13);
		float L_14 = L_13->___harvestRadius_8;
		if ((!(((float)L_12) <= ((float)L_14))))
		{
			goto IL_0065;
		}
	}
	{
		// HitResource();
		Worker_HitResource_m4BC1C6259F47B7431537403EC32142AEF829F6FF(__this, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Worker::HitResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker_HitResource_m4BC1C6259F47B7431537403EC32142AEF829F6FF (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B_mC7284F621D4467969DD11B4A3DBFE1741487F696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// harvestTimer += Time.deltaTime;
		float L_0 = __this->___harvestTimer_5;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___harvestTimer_5 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (harvestTimer > WorkerInfo.instance.harvestSpeed)
		float L_2 = __this->___harvestTimer_5;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_3 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_3);
		float L_4 = L_3->___harvestSpeed_7;
		if ((!(((float)L_2) > ((float)L_4))))
		{
			goto IL_0055;
		}
	}
	{
		// harvestTimer -= WorkerInfo.instance.harvestSpeed;
		float L_5 = __this->___harvestTimer_5;
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_6 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		float L_7 = L_6->___harvestSpeed_7;
		__this->___harvestTimer_5 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// targetResource.GetComponent<ResourceObject>().Hit(WorkerInfo.instance.harvestDamage);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___targetResource_4;
		NullCheck(L_8);
		ResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B* L_9;
		L_9 = GameObject_GetComponent_TisResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B_mC7284F621D4467969DD11B4A3DBFE1741487F696(L_8, GameObject_GetComponent_TisResourceObject_t3275E80FEC550A156DB56E05EB7620A9F0905E4B_mC7284F621D4467969DD11B4A3DBFE1741487F696_RuntimeMethod_var);
		WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* L_10 = ((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_10);
		int32_t L_11 = L_10->___harvestDamage_6;
		NullCheck(L_9);
		ResourceObject_Hit_mB6DE5F286EEA8AF57E8B5996F29BE834E41356C4(L_9, L_11, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Worker::FindRandomResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Worker_FindRandomResource_mFB96926B8ECF91BC5A37D20072B315C59FB23944 (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32B6F9368820BD2CDA9CB9D72A2585DFFF11F59A);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	{
		// GameObject[] resources = GameObject.FindGameObjectsWithTag("Resource");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral32B6F9368820BD2CDA9CB9D72A2585DFFF11F59A, NULL);
		V_0 = L_0;
		// if (resources.Length == 0)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_0011:
	{
		// return resources[Random.Range(0, resources.Length)];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		NullCheck(L_2);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// UnityEngine.GameObject Worker::FindClosestResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Worker_FindClosestResource_m20D59368476F5E5F27A2262947DABB06224706E1 (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32B6F9368820BD2CDA9CB9D72A2585DFFF11F59A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	float V_5 = 0.0f;
	{
		// GameObject[] resources = GameObject.FindGameObjectsWithTag("Resource");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral32B6F9368820BD2CDA9CB9D72A2585DFFF11F59A, NULL);
		// float minDist = Mathf.Infinity;
		V_0 = (std::numeric_limits<float>::infinity());
		// GameObject closestResource = null;
		V_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (GameObject resource in resources)
		V_2 = L_0;
		V_3 = 0;
		goto IL_005c;
	}

IL_0017:
	{
		// foreach (GameObject resource in resources)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// float dist = Vector2.Distance(transform.position, resource.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_10, NULL);
		float L_12;
		L_12 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_7, L_11, NULL);
		V_5 = L_12;
		// if (dist < minDist && dist < 10f)
		float L_13 = V_5;
		float L_14 = V_0;
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_0058;
		}
	}
	{
		float L_15 = V_5;
		if ((!(((float)L_15) < ((float)(10.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		// minDist = dist;
		float L_16 = V_5;
		V_0 = L_16;
		// closestResource = resource;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_4;
		V_1 = L_17;
	}

IL_0058:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005c:
	{
		// foreach (GameObject resource in resources)
		int32_t L_19 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// return closestResource;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		return L_21;
	}
}
// System.Void Worker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Worker__ctor_mA30F5C6EC013F145B991FB34AC8B6FD2CA690273 (Worker_t27A6A39A19F647D9D6AB86C9973F06B5F98E9BAD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WorkerInfo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerInfo_Awake_m68D30DC1854A283F29F49D621D8E3A18E8664C56 (WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_StaticFields*)il2cpp_codegen_static_fields_for(WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void WorkerInfo::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerInfo_LoadData_mD70042C36FFBA4F4C23E0F9D203617BDC39EA5BD (WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral700192556041929D4AE4E231274A850A29A2B1FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA79C423FE09DCF8BCA3128D973C025531A781BFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5262D071777E8B97783976D2E96331851B5CE6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB9F3CA2B1DD26E1EB57E7042868F05B9682880A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// walkSpeed = PlayerPrefs.GetFloat("walkSpeed", walkSpeed);
		float L_0 = __this->___walkSpeed_5;
		float L_1;
		L_1 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralA79C423FE09DCF8BCA3128D973C025531A781BFD, L_0, NULL);
		__this->___walkSpeed_5 = L_1;
		// harvestDamage = PlayerPrefs.GetInt("harvestDamage", harvestDamage);
		int32_t L_2 = __this->___harvestDamage_6;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral700192556041929D4AE4E231274A850A29A2B1FB, L_2, NULL);
		__this->___harvestDamage_6 = L_3;
		// harvestSpeed = PlayerPrefs.GetFloat("harvestSpeed", harvestSpeed);
		float L_4 = __this->___harvestSpeed_7;
		float L_5;
		L_5 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralB5262D071777E8B97783976D2E96331851B5CE6E, L_4, NULL);
		__this->___harvestSpeed_7 = L_5;
		// harvestRadius = PlayerPrefs.GetFloat("harvestRadius", harvestRadius);
		float L_6 = __this->___harvestRadius_8;
		float L_7;
		L_7 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteralBB9F3CA2B1DD26E1EB57E7042868F05B9682880A, L_6, NULL);
		__this->___harvestRadius_8 = L_7;
		// }
		return;
	}
}
// System.Void WorkerInfo::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerInfo_SaveData_m6F5633D51FF1F70D8D662D97B1160EFCA38C80E8 (WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral700192556041929D4AE4E231274A850A29A2B1FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA79C423FE09DCF8BCA3128D973C025531A781BFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5262D071777E8B97783976D2E96331851B5CE6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB9F3CA2B1DD26E1EB57E7042868F05B9682880A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("walkSpeed", walkSpeed);
		float L_0 = __this->___walkSpeed_5;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteralA79C423FE09DCF8BCA3128D973C025531A781BFD, L_0, NULL);
		// PlayerPrefs.SetInt("harvestDamage", harvestDamage);
		int32_t L_1 = __this->___harvestDamage_6;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral700192556041929D4AE4E231274A850A29A2B1FB, L_1, NULL);
		// PlayerPrefs.SetFloat("harvestSpeed", harvestSpeed);
		float L_2 = __this->___harvestSpeed_7;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteralB5262D071777E8B97783976D2E96331851B5CE6E, L_2, NULL);
		// PlayerPrefs.SetFloat("harvestRadius", harvestRadius);
		float L_3 = __this->___harvestRadius_8;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteralBB9F3CA2B1DD26E1EB57E7042868F05B9682880A, L_3, NULL);
		// }
		return;
	}
}
// System.Void WorkerInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerInfo__ctor_mCD21F98FD94D4FDBD2CC864C524F3621D3350C4D (WorkerInfo_tB6BA7B2EDE019FEF932C1C414372A7BF984532ED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WorkerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerManager_Awake_m2553F8198C97D08690365F630BC77BE0468BA690 (WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_StaticFields*)il2cpp_codegen_static_fields_for(WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_StaticFields*)il2cpp_codegen_static_fields_for(WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void WorkerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerManager_Start_m8F950F3CF70A3837F5E1BA23F3D23D75A28FCCBE (WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < workerCount; i++)
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		// Vector2 spawnPos = new Vector2(Random.Range(-4f, 4f), Random.Range(-4f, 4f));
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-4.0f), (4.0f), NULL);
		float L_1;
		L_1 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-4.0f), (4.0f), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_0, L_1, NULL);
		// Instantiate(workerPrefab, spawnPos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___workerPrefab_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_2, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// for (int i = 0; i < workerCount; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0044:
	{
		// for (int i = 0; i < workerCount; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___workerCount_6;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WorkerManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerManager_LoadData_mE00BACCFAB56025C6D9F5FAEF711356ACFE22A5C (WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77556E02842E3CF226984047A5050611C0DC62FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// workerCount = PlayerPrefs.GetInt("workerCount", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral77556E02842E3CF226984047A5050611C0DC62FE, 0, NULL);
		__this->___workerCount_6 = L_0;
		// }
		return;
	}
}
// System.Void WorkerManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerManager_SaveData_m9B7CC7F951CB6FF63B55D9FE089C4E6AC417CC9C (WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77556E02842E3CF226984047A5050611C0DC62FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("workerCount", workerCount);
		int32_t L_0 = __this->___workerCount_6;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral77556E02842E3CF226984047A5050611C0DC62FE, L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject WorkerManager::SpawnWorker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WorkerManager_SpawnWorker_mF4765ABA07606A81B4981F1451FCCE79BB18CC34 (WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 spawnPos = new Vector2(Random.Range(-4f, 4f), Random.Range(-4f, 4f));
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-4.0f), (4.0f), NULL);
		float L_1;
		L_1 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-4.0f), (4.0f), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		// workerCount++;
		int32_t L_2 = __this->___workerCount_6;
		__this->___workerCount_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// return Instantiate(workerPrefab, spawnPos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___workerPrefab_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_5, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void WorkerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerManager__ctor_m40CE819295C3655A100E0793B28A874759C80B2E (WorkerManager_t437AD53DE4E8563022AB73D87466C3E88E1BAC7E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___target1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___current0;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___target1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___current0;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_13 = ___maxDistanceDelta2;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = ___maxDistanceDelta2;
		float L_16 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply(L_15, L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		G_B6_0 = G_B4_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___target1;
		V_5 = L_18;
		goto IL_0079;
	}

IL_004f:
	{
		float L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_3 = ((float)L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___current0;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___current0;
		float L_27 = L_26.___y_1;
		float L_28 = V_1;
		float L_29 = V_3;
		float L_30 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)(L_28/L_29)), L_30)))), /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_0079;
	}

IL_0079:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
