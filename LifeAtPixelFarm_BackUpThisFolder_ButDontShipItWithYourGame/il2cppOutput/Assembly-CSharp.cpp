#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Soil>
struct Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<Tool>
struct Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.ICollection`1<System.IDisposable>
struct ICollection_1_t3F13F61A78BE3BD019937B11A562337BB8F30736;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_tFE667855A98BB6902B52DD03254BE42CC7CEB26E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<Soil>
struct IEqualityComparer_1_tB75A7F40A575EB03A42FC6A2166F0321B30692F0;
// System.Collections.Generic.IEqualityComparer`1<Tool>
struct IEqualityComparer_1_tF1D82DE54794807EC091BA7A2A94B5FE80EF7DA9;
// System.IObservable`1<UnityEngine.GameObject>
struct IObservable_1_tF8F2A13D418FD0E0F4C2CB50D5D1238AF8BEFB69;
// System.IObservable`1<System.Int32>
struct IObservable_1_t0E0A998D81A11D83F5A27AE35016A086527BA410;
// System.IObservable`1<System.Int32Enum>
struct IObservable_1_t68E34A91AC981A252541434D529B2846ED45CE0A;
// System.IObservable`1<System.Object>
struct IObservable_1_t3B5CA6CF57A9734CD1D166FB2074FE7FB725EDDC;
// System.IObservable`1<Soil>
struct IObservable_1_t505BBC2EB23ADD3E20416311F64368BAD688DC37;
// System.IObservable`1<Tool>
struct IObservable_1_tD1402C4A75ECACD723D6E5B49997D3B5785A3730;
// UniRx.IReactiveProperty`1<UnityEngine.GameObject>
struct IReactiveProperty_1_tDF056F5EDC1BB599789576277F01D888FC30055A;
// UniRx.IReactiveProperty`1<System.Int32>
struct IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA;
// UniRx.IReactiveProperty`1<Soil>
struct IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D;
// UniRx.IReactiveProperty`1<Tool>
struct IReactiveProperty_1_t24748BBA65045921CDAE98C8622DC0A001F3D176;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// UniRx.IReadOnlyReactiveProperty`1<UnityEngine.GameObject>
struct IReadOnlyReactiveProperty_1_tF12FF67C224B0CA368F39A08FDFF50B0083FFDBA;
// UniRx.IReadOnlyReactiveProperty`1<System.Int32>
struct IReadOnlyReactiveProperty_1_t68D5CDF07D56694732C2A2359A7EC61C14D786CF;
// UniRx.IReadOnlyReactiveProperty`1<Soil>
struct IReadOnlyReactiveProperty_1_t62B9A2D5DC78EA5A0CAD5BC66887531021411DA3;
// UniRx.IReadOnlyReactiveProperty`1<Tool>
struct IReadOnlyReactiveProperty_1_t2826029490906A87A0B61D55393856ED4DDD81FC;
// System.Collections.Generic.List`1<System.IDisposable>
struct List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UniRx.ObserverNode`1<UnityEngine.GameObject>
struct ObserverNode_1_tD6BDE38FDD7712D57B1995DFC47F64E005DA6B0B;
// UniRx.ObserverNode`1<System.Int32>
struct ObserverNode_1_t568C1F87201894A98E48E8DDB9D2106BE26CB6A9;
// UniRx.ObserverNode`1<Soil>
struct ObserverNode_1_t08D091FE197D5FFCBBA7C38D8F29D5FA2D6E70E7;
// UniRx.ObserverNode`1<Tool>
struct ObserverNode_1_tD60FC95A586BCF58BB4C60CDA32306189A4666AA;
// UniRx.ReactiveProperty`1<UnityEngine.GameObject>
struct ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A;
// UniRx.ReactiveProperty`1<System.Int32>
struct ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9;
// UniRx.ReactiveProperty`1<System.Int32Enum>
struct ReactiveProperty_1_tEAD38B323E2641AC97EB7E7E14EE60D5B53DEED8;
// UniRx.ReactiveProperty`1<System.Object>
struct ReactiveProperty_1_tBB636758852A4EBCC60B3E58B1F30B4AFDF036E3;
// UniRx.ReactiveProperty`1<Soil>
struct ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4;
// UniRx.ReactiveProperty`1<Tool>
struct ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// Plant[]
struct PlantU5BU5D_t81B9F6F4E910D747F6278073B0A0BAF5E00B6135;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UniRx.CompositeDisposable
struct CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A;
// CropGrowthArea
struct CropGrowthArea_t93E5C8FE32F8ED008AB77F9133E50D5E83CD3075;
// DayNightCycle
struct DayNightCycle_t2F009151F900B14E57AB0BFCD5FF00292F3270A9;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GameController
struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameState
struct GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A;
// GrowthAreaState
struct GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Plant
struct Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// SFXController
struct SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SeedSelectionController
struct SeedSelectionController_tFEF971940330C3D1852358A35954482D66EAD9BD;
// ShowBalance
struct ShowBalance_t15B8BF85563501F180A9B652FF6969A1B331A6C9;
// ShowSelectedController
struct ShowSelectedController_tBFE8489B2EDDC15E6ABC0E0EBE73C5EB4DF09CE2;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ToolSelectionController
struct ToolSelectionController_t314E29375140BD3A58A4FF3FDBDE183F7D401F17;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReactiveProperty_1_t24748BBA65045921CDAE98C8622DC0A001F3D176_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReactiveProperty_1_tDF056F5EDC1BB599789576277F01D888FC30055A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyReactiveProperty_1_t2826029490906A87A0B61D55393856ED4DDD81FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyReactiveProperty_1_t62B9A2D5DC78EA5A0CAD5BC66887531021411DA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyReactiveProperty_1_t68D5CDF07D56694732C2A2359A7EC61C14D786CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyReactiveProperty_1_tF12FF67C224B0CA368F39A08FDFF50B0083FFDBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Soil_t4CB3B8AF80E974E497043B45184924D0DDAC3258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral7BC5C42FBA1B70A021C186DD013C7F2B49614C86;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralCE3CE1A7F186A5B8D4212703A444A221D2B5639E;
IL2CPP_EXTERN_C String_t* _stringLiteralEB9A43A207EECF86B5802D65091B5C82B984E052;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CropGrowthArea_OnSoilChanged_mFB8C728EF41EFDC66026D169FACAC5FEEF87521B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_mE3F25E69E0E6D771C0E31570886926E084046640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrowthAreaState_CurrentDayChanged_mEB4855240586BA9A57C42753AE68C2A46A5B5B4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD_m484890C6AB35247631E0BBCD070A00A504139986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObservableExtensions_Subscribe_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m345FD9D8F3B98F8AA50CF56D20CC203FAE93FDF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObservableExtensions_Subscribe_TisSoil_t4CB3B8AF80E974E497043B45184924D0DDAC3258_m7CE8A8AC4D8725AA86707F165F447D3E5482A202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObservableExtensions_Subscribe_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m6F2D4B0725D967E731EB4B18D08952192EBD199C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Plant_OnNewDay_mFD7AFCCEC13489FF0A44B32E50C6F613D61054AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReactiveProperty_1__ctor_m3EF287221D6A7257E69E67FDC3995206CD658238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReactiveProperty_1__ctor_mA16B5C6D2DE6C5D541D9B422FE7FE90B551A8573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReactiveProperty_1__ctor_mD04D70856543ADEFE1D3D01952F1F89CB75E968A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReactiveProperty_1__ctor_mE7F0FEC41D827D42C051DE55F962C21DAB3EE464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShowBalance_OnBalanceChanged_mB5299C5C6AF8963FF90087B6D2320BE95121E1E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShowSelectedController_OnSelectedPlantChanged_m48CADE8551091D9724C3469148B7185A23BFBDAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShowSelectedController_OnSelectedToolChanged_m216DE8807A1D1510567F65B8CD5DBAB56DB9EC8F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct PlantU5BU5D_t81B9F6F4E910D747F6278073B0A0BAF5E00B6135;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;

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

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UniRx.ReactiveProperty`1<UnityEngine.GameObject>
struct ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A  : public RuntimeObject
{
	// T UniRx.ReactiveProperty`1::value
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value_1;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::root
	ObserverNode_1_tD6BDE38FDD7712D57B1995DFC47F64E005DA6B0B* ___root_2;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::last
	ObserverNode_1_tD6BDE38FDD7712D57B1995DFC47F64E005DA6B0B* ___last_3;
	// System.Boolean UniRx.ReactiveProperty`1::isDisposed
	bool ___isDisposed_4;
};

// UniRx.ReactiveProperty`1<System.Int32>
struct ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9  : public RuntimeObject
{
	// T UniRx.ReactiveProperty`1::value
	int32_t ___value_1;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::root
	ObserverNode_1_t568C1F87201894A98E48E8DDB9D2106BE26CB6A9* ___root_2;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::last
	ObserverNode_1_t568C1F87201894A98E48E8DDB9D2106BE26CB6A9* ___last_3;
	// System.Boolean UniRx.ReactiveProperty`1::isDisposed
	bool ___isDisposed_4;
};

// UniRx.ReactiveProperty`1<Soil>
struct ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4  : public RuntimeObject
{
	// T UniRx.ReactiveProperty`1::value
	int32_t ___value_1;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::root
	ObserverNode_1_t08D091FE197D5FFCBBA7C38D8F29D5FA2D6E70E7* ___root_2;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::last
	ObserverNode_1_t08D091FE197D5FFCBBA7C38D8F29D5FA2D6E70E7* ___last_3;
	// System.Boolean UniRx.ReactiveProperty`1::isDisposed
	bool ___isDisposed_4;
};

// UniRx.ReactiveProperty`1<Tool>
struct ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840  : public RuntimeObject
{
	// T UniRx.ReactiveProperty`1::value
	int32_t ___value_1;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::root
	ObserverNode_1_tD60FC95A586BCF58BB4C60CDA32306189A4666AA* ___root_2;
	// UniRx.ObserverNode`1<T> UniRx.ReactiveProperty`1::last
	ObserverNode_1_tD60FC95A586BCF58BB4C60CDA32306189A4666AA* ___last_3;
	// System.Boolean UniRx.ReactiveProperty`1::isDisposed
	bool ___isDisposed_4;
};

// UniRx.CompositeDisposable
struct CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A  : public RuntimeObject
{
	// System.Object UniRx.CompositeDisposable::_gate
	RuntimeObject* ____gate_0;
	// System.Boolean UniRx.CompositeDisposable::_disposed
	bool ____disposed_1;
	// System.Collections.Generic.List`1<System.IDisposable> UniRx.CompositeDisposable::_disposables
	List_1_tDCC8AB6F4CE453A93C71B81D73916DC53DF6CE05* ____disposables_2;
	// System.Int32 UniRx.CompositeDisposable::_count
	int32_t ____count_3;
};

// GameState
struct GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A  : public RuntimeObject
{
	// UniRx.IReactiveProperty`1<System.Int32> GameState::currentDay
	RuntimeObject* ___currentDay_0;
	// UniRx.IReactiveProperty`1<UnityEngine.GameObject> GameState::selectedPlant
	RuntimeObject* ___selectedPlant_1;
	// UniRx.IReactiveProperty`1<System.Int32> GameState::balance
	RuntimeObject* ___balance_2;
	// UniRx.IReactiveProperty`1<Tool> GameState::selectedTool
	RuntimeObject* ___selectedTool_3;
};

// GrowthAreaState
struct GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C  : public RuntimeObject
{
	// UniRx.CompositeDisposable GrowthAreaState::subscriptionTracker
	CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A* ___subscriptionTracker_0;
	// GameState GrowthAreaState::gameState
	GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* ___gameState_1;
	// UniRx.IReactiveProperty`1<Soil> GrowthAreaState::currentSoil
	RuntimeObject* ___currentSoil_2;
	// System.Int32 GrowthAreaState::LastDayWithAction
	int32_t ___LastDayWithAction_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<UnityEngine.GameObject>
struct Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<Soil>
struct Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42  : public MulticastDelegate_t
{
};

// System.Action`1<Tool>
struct Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CropGrowthArea
struct CropGrowthArea_t93E5C8FE32F8ED008AB77F9133E50D5E83CD3075  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Plant CropGrowthArea::plant
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___plant_4;
	// UnityEngine.SpriteRenderer CropGrowthArea::soil
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___soil_5;
	// UnityEngine.Sprite CropGrowthArea::grass
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___grass_6;
	// UnityEngine.Sprite CropGrowthArea::dirt
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___dirt_7;
	// UnityEngine.Sprite CropGrowthArea::wetDirt
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___wetDirt_8;
	// System.Boolean CropGrowthArea::hasPlant
	bool ___hasPlant_9;
	// UnityEngine.GameObject CropGrowthArea::plantReference
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___plantReference_10;
	// GameState CropGrowthArea::gameState
	GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* ___gameState_11;
	// GrowthAreaState CropGrowthArea::growthAreaState
	GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* ___growthAreaState_12;
};

// DayNightCycle
struct DayNightCycle_t2F009151F900B14E57AB0BFCD5FF00292F3270A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DayNightCycle::dayDuration
	float ___dayDuration_4;
	// UnityEngine.Material DayNightCycle::skyboxMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___skyboxMaterial_5;
	// UnityEngine.Light DayNightCycle::sun
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___sun_6;
	// System.Single DayNightCycle::rotationSpeed
	float ___rotationSpeed_7;
	// GameState DayNightCycle::gameState
	GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* ___gameState_8;
	// System.Single DayNightCycle::time
	float ___time_9;
};

// GameController
struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameController::lengthOfDay
	int32_t ___lengthOfDay_4;
	// Plant[] GameController::plants
	PlantU5BU5D_t81B9F6F4E910D747F6278073B0A0BAF5E00B6135* ___plants_5;
	// GameState GameController::State
	GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* ___State_6;
};

// Plant
struct Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Plant::GrowthStage
	int32_t ___GrowthStage_4;
	// UnityEngine.Sprite[] Plant::GrowthSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___GrowthSprites_5;
	// UnityEngine.Sprite Plant::seed
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___seed_6;
	// UnityEngine.Sprite Plant::Harvest
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Harvest_7;
	// UnityEngine.Sprite Plant::Death
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Death_8;
	// System.Int32 Plant::price
	int32_t ___price_9;
	// System.Int32 Plant::profit
	int32_t ___profit_10;
	// System.Int32 Plant::growthTime
	int32_t ___growthTime_11;
	// UnityEngine.SpriteRenderer Plant::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_12;
	// GameController Plant::gameController
	GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* ___gameController_13;
};

// SFXController
struct SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip SFXController::fail
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___fail_4;
	// UnityEngine.AudioClip SFXController::success
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___success_5;
	// UnityEngine.AudioSource SFXController::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_6;
};

// SeedSelectionController
struct SeedSelectionController_tFEF971940330C3D1852358A35954482D66EAD9BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Plant SeedSelectionController::seedSelection
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___seedSelection_4;
	// GameState SeedSelectionController::gameState
	GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* ___gameState_5;
};

// ShowBalance
struct ShowBalance_t15B8BF85563501F180A9B652FF6969A1B331A6C9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text ShowBalance::tmpText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___tmpText_4;
};

// ShowSelectedController
struct ShowSelectedController_tBFE8489B2EDDC15E6ABC0E0EBE73C5EB4DF09CE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer ShowSelectedController::selectedSeed
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___selectedSeed_4;
	// UnityEngine.GameObject ShowSelectedController::Hoe
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Hoe_5;
	// UnityEngine.GameObject ShowSelectedController::Rake
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Rake_6;
	// UnityEngine.GameObject ShowSelectedController::WateringCan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WateringCan_7;
	// GameState ShowSelectedController::gameState
	GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* ___gameState_8;
};

// ToolSelectionController
struct ToolSelectionController_t314E29375140BD3A58A4FF3FDBDE183F7D401F17  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Tool ToolSelectionController::toolSelection
	int32_t ___toolSelection_4;
	// GameState ToolSelectionController::gameState
	GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* ___gameState_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>

// UniRx.ReactiveProperty`1<UnityEngine.GameObject>
struct ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<T> UniRx.ReactiveProperty`1::defaultEqualityComparer
	RuntimeObject* ___defaultEqualityComparer_0;
};

// UniRx.ReactiveProperty`1<UnityEngine.GameObject>

// UniRx.ReactiveProperty`1<System.Int32>
struct ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<T> UniRx.ReactiveProperty`1::defaultEqualityComparer
	RuntimeObject* ___defaultEqualityComparer_0;
};

// UniRx.ReactiveProperty`1<System.Int32>

// UniRx.ReactiveProperty`1<Soil>
struct ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<T> UniRx.ReactiveProperty`1::defaultEqualityComparer
	RuntimeObject* ___defaultEqualityComparer_0;
};

// UniRx.ReactiveProperty`1<Soil>

// UniRx.ReactiveProperty`1<Tool>
struct ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<T> UniRx.ReactiveProperty`1::defaultEqualityComparer
	RuntimeObject* ___defaultEqualityComparer_0;
};

// UniRx.ReactiveProperty`1<Tool>

// UniRx.CompositeDisposable

// UniRx.CompositeDisposable

// GameState

// GameState

// GrowthAreaState

// GrowthAreaState

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// System.Single

// System.Single

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// System.Action`1<UnityEngine.GameObject>

// System.Action`1<UnityEngine.GameObject>

// System.Action`1<System.Int32>

// System.Action`1<System.Int32>

// System.Action`1<Soil>

// System.Action`1<Soil>

// System.Action`1<Tool>

// System.Action`1<Tool>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// UnityEngine.AudioBehaviour

// UnityEngine.AudioBehaviour

// UnityEngine.Light

// UnityEngine.Light

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// CropGrowthArea

// CropGrowthArea

// DayNightCycle

// DayNightCycle

// GameController

// GameController

// Plant

// Plant

// SFXController

// SFXController

// SeedSelectionController

// SeedSelectionController

// ShowBalance

// ShowBalance

// ShowSelectedController

// ShowSelectedController

// ToolSelectionController

// ToolSelectionController

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// Unity.Template.VR.XRPlatformControllerSetup

// Unity.Template.VR.XRPlatformControllerSetup

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Plant[]
struct PlantU5BU5D_t81B9F6F4E910D747F6278073B0A0BAF5E00B6135  : public RuntimeArray
{
	ALIGN_FIELD (8) Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* m_Items[1];

	inline Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IDisposable UniRx.ObservableExtensions::Subscribe<System.Int32Enum>(System.IObservable`1<T>,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObservableExtensions_Subscribe_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m081ACAAE7890CDBA381C52D7A90B31DFA4A036A1_gshared (RuntimeObject* ___0_source, Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* ___1_onNext, const RuntimeMethod* method) ;
// T UniRx.DisposableExtensions::AddTo<System.Object>(T,UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisposableExtensions_AddTo_TisRuntimeObject_m2E8DDCA27CCA2B38309603A1D3795891C58EFC56_gshared (RuntimeObject* ___0_disposable, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___1_gameObjectComponent, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UniRx.ReactiveProperty`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReactiveProperty_1__ctor_mA16B5C6D2DE6C5D541D9B422FE7FE90B551A8573_gshared (ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9* __this, int32_t ___0_initialValue, const RuntimeMethod* method) ;
// System.Void UniRx.ReactiveProperty`1<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReactiveProperty_1__ctor_m7941F188BB4EC3C5680F1EE1F082207403BBE727_gshared (ReactiveProperty_1_tBB636758852A4EBCC60B3E58B1F30B4AFDF036E3* __this, RuntimeObject* ___0_initialValue, const RuntimeMethod* method) ;
// System.Void UniRx.ReactiveProperty`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReactiveProperty_1__ctor_mE105DDF4C9694BC5F394C7F976172D516402BE6D_gshared (ReactiveProperty_1_tEAD38B323E2641AC97EB7E7E14EE60D5B53DEED8* __this, int32_t ___0_initialValue, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IDisposable UniRx.ObservableExtensions::Subscribe<System.Int32>(System.IObservable`1<T>,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94_gshared (RuntimeObject* ___0_source, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___1_onNext, const RuntimeMethod* method) ;
// T UniRx.DisposableExtensions::AddTo<System.Object>(T,System.Collections.Generic.ICollection`1<System.IDisposable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisposableExtensions_AddTo_TisRuntimeObject_mDDE67A778EA8D83F8AFF3EC0C1886913B3C8A9A3_gshared (RuntimeObject* ___0_disposable, RuntimeObject* ___1_container, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IDisposable UniRx.ObservableExtensions::Subscribe<System.Object>(System.IObservable`1<T>,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObservableExtensions_Subscribe_TisRuntimeObject_m1A500EB38BCA320ED6CC35F13E19553393BA74ED_gshared (RuntimeObject* ___0_source, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_onNext, const RuntimeMethod* method) ;

// T UnityEngine.Object::FindObjectOfType<GameController>()
inline GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E (const RuntimeMethod* method)
{
	return ((  GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void GrowthAreaState::.ctor(GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrowthAreaState__ctor_m26DD1943715558BC52537E6F3C351D51566D254E (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* ___0_gameState, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// UniRx.IReadOnlyReactiveProperty`1<Soil> GrowthAreaState::get_CurrentSoil()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GrowthAreaState_get_CurrentSoil_mEC7360D9A4C9978F0199AFD0FF039DD527FAB14C_inline (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Soil>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1CEAE0526BF250B80B0B48A643A5E2969898A1E7 (Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___0_object, ___1_method, method);
}
// System.IDisposable UniRx.ObservableExtensions::Subscribe<Soil>(System.IObservable`1<T>,System.Action`1<T>)
inline RuntimeObject* ObservableExtensions_Subscribe_TisSoil_t4CB3B8AF80E974E497043B45184924D0DDAC3258_m7CE8A8AC4D8725AA86707F165F447D3E5482A202 (RuntimeObject* ___0_source, Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42* ___1_onNext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42*, const RuntimeMethod*))ObservableExtensions_Subscribe_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m081ACAAE7890CDBA381C52D7A90B31DFA4A036A1_gshared)(___0_source, ___1_onNext, method);
}
// T UniRx.DisposableExtensions::AddTo<System.IDisposable>(T,UnityEngine.Component)
inline RuntimeObject* DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C (RuntimeObject* ___0_disposable, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___1_gameObjectComponent, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))DisposableExtensions_AddTo_TisRuntimeObject_m2E8DDCA27CCA2B38309603A1D3795891C58EFC56_gshared)(___0_disposable, ___1_gameObjectComponent, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Plant>()
inline Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean Plant::IsHarvestable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plant_IsHarvestable_mA3C0B48A789BC1B4676E218F7B54C4C96B9562BB (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.Void Plant::HarvestCrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_HarvestCrop_mC613F701BF0C1BEE766B8FCED34457B725B4ED01 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<SFXController>()
inline SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* Object_FindObjectOfType_TisSFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD_m484890C6AB35247631E0BBCD070A00A504139986 (const RuntimeMethod* method)
{
	return ((  SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void SFXController::PlaySuccessSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXController_PlaySuccessSound_m36B23D0864DA9F5D926DF2DD0D2BF6995365A459 (SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* __this, const RuntimeMethod* method) ;
// UniRx.IReadOnlyReactiveProperty`1<Tool> GameState::get_SelectedTool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_SelectedTool_mE31A51AC0B1EE53597E421D1A145ACB4FF810D12_inline (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) ;
// System.Void GrowthAreaState::Hoe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrowthAreaState_Hoe_m54550330566134AD56B400C85B49569FE157F2E7 (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, const RuntimeMethod* method) ;
// System.Void GrowthAreaState::Water()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrowthAreaState_Water_m115CD3212EDCF8E3F7382728ED6925CC18505FF3 (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, const RuntimeMethod* method) ;
// System.Boolean GameState::CanPlantSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameState_CanPlantSelected_mC2644AB3943C0AEC5783FD9C1CA4F8D4CD4B3255 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) ;
// UniRx.IReadOnlyReactiveProperty`1<UnityEngine.GameObject> GameState::get_SelectedPlant()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_SelectedPlant_m39DCE8FCB1DFAC0C4B31C887E40E8298E5A8082E_inline (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) ;
// System.Int32 Plant::get_Price()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plant_get_Price_mC3A858762C61EDD83F4FCFCB0116B0CD019ACEED_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.Void GameState::SubtractMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_SubtractMoney_m1849732AE37A657AF0080FEF4A65395E099FF31A (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, int32_t ___0_amount, const RuntimeMethod* method) ;
// System.Void SFXController::PlayFailSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXController_PlayFailSound_mBE3520BD93EF004022088B4ACFAC6F8F72CBE88F (SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* __this, const RuntimeMethod* method) ;
// System.Void GrowthAreaState::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrowthAreaState_Dispose_m15884DD3CC6BD6099E14976794B15D2337A302B9 (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.RenderSettings::set_skybox(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void GameState::AdvanceDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_AdvanceDay_m30321031E60C6B3E3526B5C95A9460377D552775 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.RenderSettings::get_ambientIntensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_ambientIntensity_mEF613E4E650E851D9F273B1D07A8FBABD078968E (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_ambientIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844 (float ___0_value, const RuntimeMethod* method) ;
// System.Void GameState::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_Reset_mE1843CB3EBFFD3F155B49CC3933599FC87BF39B1 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) ;
// System.Void GameState::SetSelectedPlant(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_SetSelectedPlant_m41E7BD1374F1BD275A03C703EF4F2DE6758E98D7 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_plant, const RuntimeMethod* method) ;
// System.Int32 Plant::get_Profit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plant_get_Profit_m407BB24900414513C951E2DDA1510C1FFACFAEB3_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.Void GameState::AddMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_AddMoney_mFC38D6D2EC0C3FFD9BE4E4130720E24FB56BFC5A (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, int32_t ___0_amount, const RuntimeMethod* method) ;
// System.Void GameState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState__ctor_m136973224640261C767FADCA144A37EEF91CB53C (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UniRx.IReadOnlyReactiveProperty`1<System.Int32> GameState::get_Balance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_Balance_m5FBA90651AAECB57A498CE725C3A3867329D918E_inline (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) ;
// System.Void UniRx.ReactiveProperty`1<System.Int32>::.ctor(T)
inline void ReactiveProperty_1__ctor_mA16B5C6D2DE6C5D541D9B422FE7FE90B551A8573 (ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9* __this, int32_t ___0_initialValue, const RuntimeMethod* method)
{
	((  void (*) (ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9*, int32_t, const RuntimeMethod*))ReactiveProperty_1__ctor_mA16B5C6D2DE6C5D541D9B422FE7FE90B551A8573_gshared)(__this, ___0_initialValue, method);
}
// System.Void UniRx.ReactiveProperty`1<UnityEngine.GameObject>::.ctor(T)
inline void ReactiveProperty_1__ctor_mD04D70856543ADEFE1D3D01952F1F89CB75E968A (ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_initialValue, const RuntimeMethod* method)
{
	((  void (*) (ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ReactiveProperty_1__ctor_m7941F188BB4EC3C5680F1EE1F082207403BBE727_gshared)(__this, ___0_initialValue, method);
}
// System.Void UniRx.ReactiveProperty`1<Tool>::.ctor(T)
inline void ReactiveProperty_1__ctor_mE7F0FEC41D827D42C051DE55F962C21DAB3EE464 (ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840* __this, int32_t ___0_initialValue, const RuntimeMethod* method)
{
	((  void (*) (ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840*, int32_t, const RuntimeMethod*))ReactiveProperty_1__ctor_mE105DDF4C9694BC5F394C7F976172D516402BE6D_gshared)(__this, ___0_initialValue, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniRx.CompositeDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeDisposable__ctor_mF85767B0A007E387DC2E6F3088F4E30437C64EC5 (CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A* __this, const RuntimeMethod* method) ;
// System.Void UniRx.ReactiveProperty`1<Soil>::.ctor(T)
inline void ReactiveProperty_1__ctor_m3EF287221D6A7257E69E67FDC3995206CD658238 (ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4* __this, int32_t ___0_initialValue, const RuntimeMethod* method)
{
	((  void (*) (ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4*, int32_t, const RuntimeMethod*))ReactiveProperty_1__ctor_mE105DDF4C9694BC5F394C7F976172D516402BE6D_gshared)(__this, ___0_initialValue, method);
}
// UniRx.IReadOnlyReactiveProperty`1<System.Int32> GameState::get_CurrentDay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_CurrentDay_mC445AA7AC26DB2ECB961DF02EA28F687A0BE0691_inline (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87_gshared)(__this, ___0_object, ___1_method, method);
}
// System.IDisposable UniRx.ObservableExtensions::Subscribe<System.Int32>(System.IObservable`1<T>,System.Action`1<T>)
inline RuntimeObject* ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94 (RuntimeObject* ___0_source, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___1_onNext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, const RuntimeMethod*))ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94_gshared)(___0_source, ___1_onNext, method);
}
// T UniRx.DisposableExtensions::AddTo<System.IDisposable>(T,System.Collections.Generic.ICollection`1<System.IDisposable>)
inline RuntimeObject* DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_mE3F25E69E0E6D771C0E31570886926E084046640 (RuntimeObject* ___0_disposable, RuntimeObject* ___1_container, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))DisposableExtensions_AddTo_TisRuntimeObject_mDDE67A778EA8D83F8AFF3EC0C1886913B3C8A9A3_gshared)(___0_disposable, ___1_container, method);
}
// System.Void UniRx.CompositeDisposable::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompositeDisposable_Dispose_m446066E8D53D47EF8D7289EB09592CF53A13CA99 (CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Plant::Grow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_Grow_m014C76D82521856010FAE1E18D03A8880DCEE2BB (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Void GameController::HarvestCrop(Plant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_HarvestCrop_m3DE1543C5AB6066756C67D3ADB12F0622036BF96 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___0_plant, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3FA37AFA5AAB09F49F9C00A7D5B2A5F3D83CBB01 (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.IDisposable UniRx.ObservableExtensions::Subscribe<UnityEngine.GameObject>(System.IObservable`1<T>,System.Action`1<T>)
inline RuntimeObject* ObservableExtensions_Subscribe_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m345FD9D8F3B98F8AA50CF56D20CC203FAE93FDF6 (RuntimeObject* ___0_source, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* ___1_onNext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*, const RuntimeMethod*))ObservableExtensions_Subscribe_TisRuntimeObject_m1A500EB38BCA320ED6CC35F13E19553393BA74ED_gshared)(___0_source, ___1_onNext, method);
}
// System.Void System.Action`1<Tool>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m147AA38EE76F2C4998A51E72DBC780DE63375D48 (Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___0_object, ___1_method, method);
}
// System.IDisposable UniRx.ObservableExtensions::Subscribe<Tool>(System.IObservable`1<T>,System.Action`1<T>)
inline RuntimeObject* ObservableExtensions_Subscribe_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m6F2D4B0725D967E731EB4B18D08952192EBD199C (RuntimeObject* ___0_source, Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87* ___1_onNext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87*, const RuntimeMethod*))ObservableExtensions_Subscribe_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m081ACAAE7890CDBA381C52D7A90B31DFA4A036A1_gshared)(___0_source, ___1_onNext, method);
}
// UnityEngine.Sprite Plant::get_Seed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Plant_get_Seed_m92C5EEC7A19C96CC4815EF74F6AF44F7A7B469A8_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) ;
// System.Void GameState::SetSelectedTool(Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_SetSelectedTool_m9C12F022AAABA594A57151B0A4802E7F44B9AAF6 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, int32_t ___0_tool, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void CropGrowthArea::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropGrowthArea_Start_m957AE74737BA8FCB1D6D559F44A3BC9BE3348694 (CropGrowthArea_t93E5C8FE32F8ED008AB77F9133E50D5E83CD3075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CropGrowthArea_OnSoilChanged_mFB8C728EF41EFDC66026D169FACAC5FEEF87521B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableExtensions_Subscribe_TisSoil_t4CB3B8AF80E974E497043B45184924D0DDAC3258_m7CE8A8AC4D8725AA86707F165F447D3E5482A202_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hasPlant = false;
		__this->___hasPlant_9 = (bool)0;
		// gameState = FindObjectOfType<GameController>().State;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		NullCheck(L_0);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_1 = L_0->___State_6;
		__this->___gameState_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_11), (void*)L_1);
		// growthAreaState = new GrowthAreaState(gameState);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_2 = __this->___gameState_11;
		GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* L_3 = (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C*)il2cpp_codegen_object_new(GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GrowthAreaState__ctor_m26DD1943715558BC52537E6F3C351D51566D254E(L_3, L_2, NULL);
		__this->___growthAreaState_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___growthAreaState_12), (void*)L_3);
		// this.soil.sprite = grass;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___soil_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___grass_6;
		NullCheck(L_4);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_4, L_5, NULL);
		// growthAreaState.CurrentSoil.Subscribe(OnSoilChanged).AddTo(this);
		GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* L_6 = __this->___growthAreaState_12;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = GrowthAreaState_get_CurrentSoil_mEC7360D9A4C9978F0199AFD0FF039DD527FAB14C_inline(L_6, NULL);
		Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42* L_8 = (Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42*)il2cpp_codegen_object_new(Action_1_t6F1FBA7EB5E9547E064CAE6E7EB202A1E315BA42_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m1CEAE0526BF250B80B0B48A643A5E2969898A1E7(L_8, __this, (intptr_t)((void*)CropGrowthArea_OnSoilChanged_mFB8C728EF41EFDC66026D169FACAC5FEEF87521B_RuntimeMethod_var), NULL);
		RuntimeObject* L_9;
		L_9 = ObservableExtensions_Subscribe_TisSoil_t4CB3B8AF80E974E497043B45184924D0DDAC3258_m7CE8A8AC4D8725AA86707F165F447D3E5482A202(L_7, L_8, ObservableExtensions_Subscribe_TisSoil_t4CB3B8AF80E974E497043B45184924D0DDAC3258_m7CE8A8AC4D8725AA86707F165F447D3E5482A202_RuntimeMethod_var);
		RuntimeObject* L_10;
		L_10 = DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C(L_9, __this, DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CropGrowthArea::OnSoilChanged(Soil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropGrowthArea_OnSoilChanged_mFB8C728EF41EFDC66026D169FACAC5FEEF87521B (CropGrowthArea_t93E5C8FE32F8ED008AB77F9133E50D5E83CD3075* __this, int32_t ___0_soil, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_soil;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_0014:
	{
		// this.soil.sprite = grass;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___soil_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___grass_6;
		NullCheck(L_1);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_1, L_2, NULL);
		// break;
		return;
	}

IL_0026:
	{
		// this.soil.sprite = dirt;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___soil_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___dirt_7;
		NullCheck(L_3);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_3, L_4, NULL);
		// break;
		return;
	}

IL_0038:
	{
		// this.soil.sprite = wetDirt;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___soil_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___wetDirt_8;
		NullCheck(L_5);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_5, L_6, NULL);
		// break;
		return;
	}

IL_004a:
	{
		// throw new ArgumentOutOfRangeException(nameof(soil), soil, null);
		int32_t L_7 = ___0_soil;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Soil_t4CB3B8AF80E974E497043B45184924D0DDAC3258_il2cpp_TypeInfo_var)), &L_8);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE3CE1A7F186A5B8D4212703A444A221D2B5639E)), L_9, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CropGrowthArea_OnSoilChanged_mFB8C728EF41EFDC66026D169FACAC5FEEF87521B_RuntimeMethod_var)));
	}
}
// System.Void CropGrowthArea::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropGrowthArea_Update_mF15084F531F09EA6F38AF8A0FF9EA5EA32150675 (CropGrowthArea_t93E5C8FE32F8ED008AB77F9133E50D5E83CD3075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (plant != null && !hasPlant)
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_0 = __this->___plant_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		bool L_2 = __this->___hasPlant_9;
		if (L_2)
		{
			goto IL_003e;
		}
	}
	{
		// plantReference = Instantiate(plant.gameObject, gameObject.transform);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_3 = __this->___plant_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		__this->___plantReference_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plantReference_10), (void*)L_7);
		// hasPlant = true;
		__this->___hasPlant_9 = (bool)1;
	}

IL_003e:
	{
		// if (plant == null && hasPlant)
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_8 = __this->___plant_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		bool L_10 = __this->___hasPlant_9;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// Destroy(plantReference);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___plantReference_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		// hasPlant = false;
		__this->___hasPlant_9 = (bool)0;
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void CropGrowthArea::SetPlant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropGrowthArea_SetPlant_m60DE5B20BD15145A6C2D031FCB2E310927BE86C3 (CropGrowthArea_t93E5C8FE32F8ED008AB77F9133E50D5E83CD3075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyReactiveProperty_1_t2826029490906A87A0B61D55393856ED4DDD81FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyReactiveProperty_1_t62B9A2D5DC78EA5A0CAD5BC66887531021411DA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyReactiveProperty_1_tF12FF67C224B0CA368F39A08FDFF50B0083FFDBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD_m484890C6AB35247631E0BBCD070A00A504139986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* V_0 = NULL;
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* V_1 = NULL;
	{
		// if (this.plant != null)
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_0 = __this->___plant_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// var currentPlant = this.plantReference.GetComponent<Plant>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___plantReference_10;
		NullCheck(L_2);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_3;
		L_3 = GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A(L_2, GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A_RuntimeMethod_var);
		V_0 = L_3;
		// if (currentPlant.IsHarvestable())
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Plant_IsHarvestable_mA3C0B48A789BC1B4676E218F7B54C4C96B9562BB(L_4, NULL);
		if (!L_5)
		{
			goto IL_00f9;
		}
	}
	{
		// currentPlant.HarvestCrop();
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_6 = V_0;
		NullCheck(L_6);
		Plant_HarvestCrop_mC613F701BF0C1BEE766B8FCED34457B725B4ED01(L_6, NULL);
		// this.plant = null;
		__this->___plant_4 = (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plant_4), (void*)(Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72*)NULL);
		// FindObjectOfType<SFXController>().PlaySuccessSound();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* L_7;
		L_7 = Object_FindObjectOfType_TisSFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD_m484890C6AB35247631E0BBCD070A00A504139986(Object_FindObjectOfType_TisSFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD_m484890C6AB35247631E0BBCD070A00A504139986_RuntimeMethod_var);
		NullCheck(L_7);
		SFXController_PlaySuccessSound_m36B23D0864DA9F5D926DF2DD0D2BF6995365A459(L_7, NULL);
		return;
	}

IL_003d:
	{
		// if (gameState.SelectedTool.Value == Tool.Hoe && growthAreaState.CurrentSoil.Value == Soil.Grass)
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_8 = __this->___gameState_11;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = GameState_get_SelectedTool_mE31A51AC0B1EE53597E421D1A145ACB4FF810D12_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<Tool>::get_Value() */, IReadOnlyReactiveProperty_1_t2826029490906A87A0B61D55393856ED4DDD81FC_il2cpp_TypeInfo_var, L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_006e;
		}
	}
	{
		GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* L_11 = __this->___growthAreaState_12;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = GrowthAreaState_get_CurrentSoil_mEC7360D9A4C9978F0199AFD0FF039DD527FAB14C_inline(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<Soil>::get_Value() */, IReadOnlyReactiveProperty_1_t62B9A2D5DC78EA5A0CAD5BC66887531021411DA3_il2cpp_TypeInfo_var, L_12);
		if (L_13)
		{
			goto IL_006e;
		}
	}
	{
		// growthAreaState.Hoe();
		GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* L_14 = __this->___growthAreaState_12;
		NullCheck(L_14);
		GrowthAreaState_Hoe_m54550330566134AD56B400C85B49569FE157F2E7(L_14, NULL);
		// return;
		return;
	}

IL_006e:
	{
		// if (gameState.SelectedTool.Value == Tool.WateringCan && growthAreaState.CurrentSoil.Value == Soil.Dirt)
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_15 = __this->___gameState_11;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = GameState_get_SelectedTool_mE31A51AC0B1EE53597E421D1A145ACB4FF810D12_inline(L_15, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<Tool>::get_Value() */, IReadOnlyReactiveProperty_1_t2826029490906A87A0B61D55393856ED4DDD81FC_il2cpp_TypeInfo_var, L_16);
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00a0;
		}
	}
	{
		GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* L_18 = __this->___growthAreaState_12;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = GrowthAreaState_get_CurrentSoil_mEC7360D9A4C9978F0199AFD0FF039DD527FAB14C_inline(L_18, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<Soil>::get_Value() */, IReadOnlyReactiveProperty_1_t62B9A2D5DC78EA5A0CAD5BC66887531021411DA3_il2cpp_TypeInfo_var, L_19);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00a0;
		}
	}
	{
		// growthAreaState.Water();
		GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* L_21 = __this->___growthAreaState_12;
		NullCheck(L_21);
		GrowthAreaState_Water_m115CD3212EDCF8E3F7382728ED6925CC18505FF3(L_21, NULL);
		// return;
		return;
	}

IL_00a0:
	{
		// if (gameState.CanPlantSelected() && growthAreaState.CurrentSoil.Value == Soil.Wet)
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_22 = __this->___gameState_11;
		NullCheck(L_22);
		bool L_23;
		L_23 = GameState_CanPlantSelected_mC2644AB3943C0AEC5783FD9C1CA4F8D4CD4B3255(L_22, NULL);
		if (!L_23)
		{
			goto IL_00ef;
		}
	}
	{
		GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* L_24 = __this->___growthAreaState_12;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = GrowthAreaState_get_CurrentSoil_mEC7360D9A4C9978F0199AFD0FF039DD527FAB14C_inline(L_24, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<Soil>::get_Value() */, IReadOnlyReactiveProperty_1_t62B9A2D5DC78EA5A0CAD5BC66887531021411DA3_il2cpp_TypeInfo_var, L_25);
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_00ef;
		}
	}
	{
		// var selectedPlant = gameState.SelectedPlant.Value.GetComponent<Plant>();
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_27 = __this->___gameState_11;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = GameState_get_SelectedPlant_m39DCE8FCB1DFAC0C4B31C887E40E8298E5A8082E_inline(L_27, NULL);
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<UnityEngine.GameObject>::get_Value() */, IReadOnlyReactiveProperty_1_tF12FF67C224B0CA368F39A08FDFF50B0083FFDBA_il2cpp_TypeInfo_var, L_28);
		NullCheck(L_29);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_30;
		L_30 = GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A(L_29, GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A_RuntimeMethod_var);
		V_1 = L_30;
		// gameState.SubtractMoney(selectedPlant.Price);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_31 = __this->___gameState_11;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Plant_get_Price_mC3A858762C61EDD83F4FCFCB0116B0CD019ACEED_inline(L_32, NULL);
		NullCheck(L_31);
		GameState_SubtractMoney_m1849732AE37A657AF0080FEF4A65395E099FF31A(L_31, L_33, NULL);
		// this.plant = selectedPlant;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_34 = V_1;
		__this->___plant_4 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plant_4), (void*)L_34);
		// return;
		return;
	}

IL_00ef:
	{
		// FindObjectOfType<SFXController>().PlayFailSound();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* L_35;
		L_35 = Object_FindObjectOfType_TisSFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD_m484890C6AB35247631E0BBCD070A00A504139986(Object_FindObjectOfType_TisSFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD_m484890C6AB35247631E0BBCD070A00A504139986_RuntimeMethod_var);
		NullCheck(L_35);
		SFXController_PlayFailSound_mBE3520BD93EF004022088B4ACFAC6F8F72CBE88F(L_35, NULL);
	}

IL_00f9:
	{
		// }
		return;
	}
}
// System.Void CropGrowthArea::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropGrowthArea_Dispose_mDBF887BEE0651E4899F1B4B5FC754E76618E5A33 (CropGrowthArea_t93E5C8FE32F8ED008AB77F9133E50D5E83CD3075* __this, const RuntimeMethod* method) 
{
	{
		// growthAreaState.Dispose();
		GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* L_0 = __this->___growthAreaState_12;
		NullCheck(L_0);
		GrowthAreaState_Dispose_m15884DD3CC6BD6099E14976794B15D2337A302B9(L_0, NULL);
		// }
		return;
	}
}
// System.Void CropGrowthArea::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CropGrowthArea__ctor_mB1CB44F9C90026B683212B10BFF1EB4A22DDD951 (CropGrowthArea_t93E5C8FE32F8ED008AB77F9133E50D5E83CD3075* __this, const RuntimeMethod* method) 
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
// System.Void DayNightCycle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayNightCycle_Start_mEBC69829A9266BB95FA3439A12DD170B6CCA4EFC (DayNightCycle_t2F009151F900B14E57AB0BFCD5FF00292F3270A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameState = FindObjectOfType<GameController>().State;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		NullCheck(L_0);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_1 = L_0->___State_6;
		__this->___gameState_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_8), (void*)L_1);
		// sun = GetComponent<Light>();
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2;
		L_2 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		__this->___sun_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sun_6), (void*)L_2);
		// rotationSpeed = 360f / dayDuration;
		float L_3 = __this->___dayDuration_4;
		__this->___rotationSpeed_7 = ((float)((360.0f)/L_3));
		// if (skyboxMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___skyboxMaterial_5;
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// RenderSettings.skybox = skyboxMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___skyboxMaterial_5;
		RenderSettings_set_skybox_m7988CC3217B1456CA0A7294127527BFC18EEC872(L_6, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void DayNightCycle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayNightCycle_Update_m93263D9CE1D7218754CD5AB4ABF1FB8D63C8ECC5 (DayNightCycle_t2F009151F900B14E57AB0BFCD5FF00292F3270A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB9A43A207EECF86B5802D65091B5C82B984E052);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float angle = Time.deltaTime * rotationSpeed;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_1 = __this->___rotationSpeed_7;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// time += angle;
		float L_2 = __this->___time_9;
		float L_3 = V_0;
		__this->___time_9 = ((float)il2cpp_codegen_add(L_2, L_3));
		// if(time >= 360f)
		float L_4 = __this->___time_9;
		if ((!(((float)L_4) >= ((float)(360.0f)))))
		{
			goto IL_0045;
		}
	}
	{
		// time -= 360f;
		float L_5 = __this->___time_9;
		__this->___time_9 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
		// gameState.AdvanceDay();
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_6 = __this->___gameState_8;
		NullCheck(L_6);
		GameState_AdvanceDay_m30321031E60C6B3E3526B5C95A9460377D552775(L_6, NULL);
	}

IL_0045:
	{
		// sun.transform.Rotate(new Vector3(angle, 0, 0));
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_7 = __this->___sun_6;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		float L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_9, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_8, L_10, NULL);
		// float currentSunElevation = sun.transform.eulerAngles.x;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = __this->___sun_6;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_12, NULL);
		float L_14 = L_13.___x_2;
		// if (currentSunElevation >= 180)
		if ((!(((float)L_14) >= ((float)(180.0f)))))
		{
			goto IL_00ef;
		}
	}
	{
		// sun.intensity = Mathf.Lerp(sun.intensity, 0.1f, Time.deltaTime);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = __this->___sun_6;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = __this->___sun_6;
		NullCheck(L_16);
		float L_17;
		L_17 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_16, NULL);
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_19;
		L_19 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_17, (0.100000001f), L_18, NULL);
		NullCheck(L_15);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_15, L_19, NULL);
		// skyboxMaterial.SetFloat("_Exposure",
		//     Mathf.Lerp(skyboxMaterial.GetFloat("_Exposure"), 0.25f, Time.deltaTime));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___skyboxMaterial_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___skyboxMaterial_5;
		NullCheck(L_21);
		float L_22;
		L_22 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_21, _stringLiteralEB9A43A207EECF86B5802D65091B5C82B984E052, NULL);
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_24;
		L_24 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_22, (0.25f), L_23, NULL);
		NullCheck(L_20);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_20, _stringLiteralEB9A43A207EECF86B5802D65091B5C82B984E052, L_24, NULL);
		// RenderSettings.ambientIntensity = Mathf.Lerp(RenderSettings.ambientIntensity, 0.7f, Time.deltaTime);
		float L_25;
		L_25 = RenderSettings_get_ambientIntensity_mEF613E4E650E851D9F273B1D07A8FBABD078968E(NULL);
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_27;
		L_27 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_25, (0.699999988f), L_26, NULL);
		RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844(L_27, NULL);
		return;
	}

IL_00ef:
	{
		// sun.intensity = Mathf.Lerp(sun.intensity, 1f, Time.deltaTime);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_28 = __this->___sun_6;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_29 = __this->___sun_6;
		NullCheck(L_29);
		float L_30;
		L_30 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_29, NULL);
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_32;
		L_32 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_30, (1.0f), L_31, NULL);
		NullCheck(L_28);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_28, L_32, NULL);
		// RenderSettings.ambientIntensity = Mathf.Lerp(RenderSettings.ambientIntensity, 1f, Time.deltaTime);
		float L_33;
		L_33 = RenderSettings_get_ambientIntensity_mEF613E4E650E851D9F273B1D07A8FBABD078968E(NULL);
		float L_34;
		L_34 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_35;
		L_35 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_33, (1.0f), L_34, NULL);
		RenderSettings_set_ambientIntensity_m27875436E47E2D28C13F362DAE9C24D0DEC4A844(L_35, NULL);
		// skyboxMaterial.SetFloat("_Exposure", Mathf.Lerp(skyboxMaterial.GetFloat("_Exposure"), 1f, Time.deltaTime));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___skyboxMaterial_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___skyboxMaterial_5;
		NullCheck(L_37);
		float L_38;
		L_38 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_37, _stringLiteralEB9A43A207EECF86B5802D65091B5C82B984E052, NULL);
		float L_39;
		L_39 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_40;
		L_40 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_38, (1.0f), L_39, NULL);
		NullCheck(L_36);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_36, _stringLiteralEB9A43A207EECF86B5802D65091B5C82B984E052, L_40, NULL);
		// }
		return;
	}
}
// System.Void DayNightCycle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayNightCycle__ctor_mA2B6C9B178964D2867D717FCDCD1A4539370C38E (DayNightCycle_t2F009151F900B14E57AB0BFCD5FF00292F3270A9* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float dayDuration = 30f; // Duration of a full day cycle (day + night) in seconds
		__this->___dayDuration_4 = (30.0f);
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
// System.Void GameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Start_mD0C79B8B5B5D8EDC88F7F2F88B5954B1342198EF (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	{
		// State.Reset();
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_0 = __this->___State_6;
		NullCheck(L_0);
		GameState_Reset_mE1843CB3EBFFD3F155B49CC3933599FC87BF39B1(L_0, NULL);
		// State.SetSelectedPlant(plants[0].gameObject);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_1 = __this->___State_6;
		PlantU5BU5D_t81B9F6F4E910D747F6278073B0A0BAF5E00B6135* L_2 = __this->___plants_5;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_1);
		GameState_SetSelectedPlant_m41E7BD1374F1BD275A03C703EF4F2DE6758E98D7(L_1, L_5, NULL);
		// }
		return;
	}
}
// System.Void GameController::HarvestCrop(Plant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_HarvestCrop_m3DE1543C5AB6066756C67D3ADB12F0622036BF96 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* ___0_plant, const RuntimeMethod* method) 
{
	{
		// State.AddMoney(plant.Profit);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_0 = __this->___State_6;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_1 = ___0_plant;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Plant_get_Profit_m407BB24900414513C951E2DDA1510C1FFACFAEB3_inline(L_1, NULL);
		NullCheck(L_0);
		GameState_AddMoney_mFC38D6D2EC0C3FFD9BE4E4130720E24FB56BFC5A(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_mB6369F6C5357D5984325D613D589EDA60818CBE9 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int lengthOfDay = 10;
		__this->___lengthOfDay_4 = ((int32_t)10);
		// public GameState State = new GameState();
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_0 = (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A*)il2cpp_codegen_object_new(GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameState__ctor_m136973224640261C767FADCA144A37EEF91CB53C(L_0, NULL);
		__this->___State_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___State_6), (void*)L_0);
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
// UniRx.IReadOnlyReactiveProperty`1<System.Int32> GameState::get_CurrentDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_CurrentDay_mC445AA7AC26DB2ECB961DF02EA28F687A0BE0691 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<int> CurrentDay => currentDay;
		RuntimeObject* L_0 = __this->___currentDay_0;
		return L_0;
	}
}
// UniRx.IReadOnlyReactiveProperty`1<UnityEngine.GameObject> GameState::get_SelectedPlant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_SelectedPlant_m39DCE8FCB1DFAC0C4B31C887E40E8298E5A8082E (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<GameObject> SelectedPlant => selectedPlant;
		RuntimeObject* L_0 = __this->___selectedPlant_1;
		return L_0;
	}
}
// UniRx.IReadOnlyReactiveProperty`1<System.Int32> GameState::get_Balance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_Balance_m5FBA90651AAECB57A498CE725C3A3867329D918E (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<int> Balance => balance;
		RuntimeObject* L_0 = __this->___balance_2;
		return L_0;
	}
}
// UniRx.IReadOnlyReactiveProperty`1<Tool> GameState::get_SelectedTool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_SelectedTool_mE31A51AC0B1EE53597E421D1A145ACB4FF810D12 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<Tool> SelectedTool => selectedTool;
		RuntimeObject* L_0 = __this->___selectedTool_3;
		return L_0;
	}
}
// System.Void GameState::SetDay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_SetDay_m5E7314B3BD5CDD6CC0D033082B24C57C60C66E02 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, int32_t ___0_day, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentDay.Value = day;
		RuntimeObject* L_0 = __this->___currentDay_0;
		int32_t L_1 = ___0_day;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<System.Int32>::set_Value(T) */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void GameState::AdvanceDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_AdvanceDay_m30321031E60C6B3E3526B5C95A9460377D552775 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// currentDay.Value++;
		RuntimeObject* L_0 = __this->___currentDay_0;
		RuntimeObject* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReactiveProperty`1<System.Int32>::get_Value() */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<System.Int32>::set_Value(T) */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_1, ((int32_t)il2cpp_codegen_add(L_3, 1)));
		// Debug.Log(currentDay.Value);
		RuntimeObject* L_4 = __this->___currentDay_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReactiveProperty`1<System.Int32>::get_Value() */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// }
		return;
	}
}
// System.Void GameState::SetSelectedPlant(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_SetSelectedPlant_m41E7BD1374F1BD275A03C703EF4F2DE6758E98D7 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_plant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_t24748BBA65045921CDAE98C8622DC0A001F3D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_tDF056F5EDC1BB599789576277F01D888FC30055A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (plant != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_plant;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// selectedTool.Value = Tool.None;
		RuntimeObject* L_2 = __this->___selectedTool_3;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<Tool>::set_Value(T) */, IReactiveProperty_1_t24748BBA65045921CDAE98C8622DC0A001F3D176_il2cpp_TypeInfo_var, L_2, 0);
	}

IL_0015:
	{
		// selectedPlant.Value = plant;
		RuntimeObject* L_3 = __this->___selectedPlant_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_plant;
		NullCheck(L_3);
		InterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<UnityEngine.GameObject>::set_Value(T) */, IReactiveProperty_1_tDF056F5EDC1BB599789576277F01D888FC30055A_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}
}
// System.Void GameState::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_Reset_mE1843CB3EBFFD3F155B49CC3933599FC87BF39B1 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_tDF056F5EDC1BB599789576277F01D888FC30055A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.currentDay.Value = 0;
		RuntimeObject* L_0 = __this->___currentDay_0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<System.Int32>::set_Value(T) */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_0, 0);
		// this.selectedPlant.Value = null;
		RuntimeObject* L_1 = __this->___selectedPlant_1;
		NullCheck(L_1);
		InterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<UnityEngine.GameObject>::set_Value(T) */, IReactiveProperty_1_tDF056F5EDC1BB599789576277F01D888FC30055A_il2cpp_TypeInfo_var, L_1, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// this.balance.Value = 5;
		RuntimeObject* L_2 = __this->___balance_2;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<System.Int32>::set_Value(T) */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_2, 5);
		// }
		return;
	}
}
// System.Void GameState::AddMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_AddMoney_mFC38D6D2EC0C3FFD9BE4E4130720E24FB56BFC5A (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// balance.Value += amount;
		RuntimeObject* L_0 = __this->___balance_2;
		RuntimeObject* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReactiveProperty`1<System.Int32>::get_Value() */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = ___0_amount;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<System.Int32>::set_Value(T) */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)));
		// }
		return;
	}
}
// System.Void GameState::SubtractMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_SubtractMoney_m1849732AE37A657AF0080FEF4A65395E099FF31A (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// balance.Value -= amount;
		RuntimeObject* L_0 = __this->___balance_2;
		RuntimeObject* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReactiveProperty`1<System.Int32>::get_Value() */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = ___0_amount;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<System.Int32>::set_Value(T) */, IReactiveProperty_1_t34C006EAC4CEEF36B18723D4CCD7AC25075C51AA_il2cpp_TypeInfo_var, L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)));
		// }
		return;
	}
}
// System.Boolean GameState::CanPlantSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameState_CanPlantSelected_mC2644AB3943C0AEC5783FD9C1CA4F8D4CD4B3255 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyReactiveProperty_1_t68D5CDF07D56694732C2A2359A7EC61C14D786CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyReactiveProperty_1_tF12FF67C224B0CA368F39A08FDFF50B0083FFDBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.selectedPlant != null &&
		//        this.SelectedPlant.HasValue &&
		//        this.Balance.Value >= this.SelectedPlant.Value.GetComponent<Plant>().Price;
		RuntimeObject* L_0 = __this->___selectedPlant_1;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = GameState_get_SelectedPlant_m39DCE8FCB1DFAC0C4B31C887E40E8298E5A8082E_inline(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UniRx.IReadOnlyReactiveProperty`1<UnityEngine.GameObject>::get_HasValue() */, IReadOnlyReactiveProperty_1_tF12FF67C224B0CA368F39A08FDFF50B0083FFDBA_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = GameState_get_Balance_m5FBA90651AAECB57A498CE725C3A3867329D918E_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<System.Int32>::get_Value() */, IReadOnlyReactiveProperty_1_t68D5CDF07D56694732C2A2359A7EC61C14D786CF_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5;
		L_5 = GameState_get_SelectedPlant_m39DCE8FCB1DFAC0C4B31C887E40E8298E5A8082E_inline(__this, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<UnityEngine.GameObject>::get_Value() */, IReadOnlyReactiveProperty_1_tF12FF67C224B0CA368F39A08FDFF50B0083FFDBA_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_7;
		L_7 = GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A(L_6, GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Plant_get_Price_mC3A858762C61EDD83F4FCFCB0116B0CD019ACEED_inline(L_7, NULL);
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003b:
	{
		return (bool)0;
	}
}
// System.Void GameState::SetSelectedTool(Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState_SetSelectedTool_m9C12F022AAABA594A57151B0A4802E7F44B9AAF6 (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, int32_t ___0_tool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_t24748BBA65045921CDAE98C8622DC0A001F3D176_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_tDF056F5EDC1BB599789576277F01D888FC30055A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tool != Tool.None)
		int32_t L_0 = ___0_tool;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// selectedPlant.Value = null;
		RuntimeObject* L_1 = __this->___selectedPlant_1;
		NullCheck(L_1);
		InterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<UnityEngine.GameObject>::set_Value(T) */, IReactiveProperty_1_tDF056F5EDC1BB599789576277F01D888FC30055A_il2cpp_TypeInfo_var, L_1, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_000f:
	{
		// selectedTool.Value = tool;
		RuntimeObject* L_2 = __this->___selectedTool_3;
		int32_t L_3 = ___0_tool;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<Tool>::set_Value(T) */, IReactiveProperty_1_t24748BBA65045921CDAE98C8622DC0A001F3D176_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void GameState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameState__ctor_m136973224640261C767FADCA144A37EEF91CB53C (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReactiveProperty_1__ctor_mA16B5C6D2DE6C5D541D9B422FE7FE90B551A8573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReactiveProperty_1__ctor_mD04D70856543ADEFE1D3D01952F1F89CB75E968A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReactiveProperty_1__ctor_mE7F0FEC41D827D42C051DE55F962C21DAB3EE464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly IReactiveProperty<int> currentDay = new ReactiveProperty<int>(0);
		ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9* L_0 = (ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9*)il2cpp_codegen_object_new(ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReactiveProperty_1__ctor_mA16B5C6D2DE6C5D541D9B422FE7FE90B551A8573(L_0, 0, ReactiveProperty_1__ctor_mA16B5C6D2DE6C5D541D9B422FE7FE90B551A8573_RuntimeMethod_var);
		__this->___currentDay_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentDay_0), (void*)L_0);
		// private readonly IReactiveProperty<GameObject> selectedPlant = new ReactiveProperty<GameObject>(null);
		ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A* L_1 = (ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A*)il2cpp_codegen_object_new(ReactiveProperty_1_t810E9AB07DE9C034CCCABEAECD740D3A2779C23A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReactiveProperty_1__ctor_mD04D70856543ADEFE1D3D01952F1F89CB75E968A(L_1, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, ReactiveProperty_1__ctor_mD04D70856543ADEFE1D3D01952F1F89CB75E968A_RuntimeMethod_var);
		__this->___selectedPlant_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedPlant_1), (void*)L_1);
		// private readonly IReactiveProperty<int> balance = new ReactiveProperty<int>(0);
		ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9* L_2 = (ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9*)il2cpp_codegen_object_new(ReactiveProperty_1_t94AB242DA83204A720842F2D109747A03A1953C9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ReactiveProperty_1__ctor_mA16B5C6D2DE6C5D541D9B422FE7FE90B551A8573(L_2, 0, ReactiveProperty_1__ctor_mA16B5C6D2DE6C5D541D9B422FE7FE90B551A8573_RuntimeMethod_var);
		__this->___balance_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___balance_2), (void*)L_2);
		// private readonly IReactiveProperty<Tool> selectedTool = new ReactiveProperty<Tool>(Tool.None);
		ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840* L_3 = (ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840*)il2cpp_codegen_object_new(ReactiveProperty_1_t6CD3FC9B51289BB8B828F08A1EF99F3D6654A840_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ReactiveProperty_1__ctor_mE7F0FEC41D827D42C051DE55F962C21DAB3EE464(L_3, 0, ReactiveProperty_1__ctor_mE7F0FEC41D827D42C051DE55F962C21DAB3EE464_RuntimeMethod_var);
		__this->___selectedTool_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedTool_3), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UniRx.IReadOnlyReactiveProperty`1<Soil> GrowthAreaState::get_CurrentSoil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GrowthAreaState_get_CurrentSoil_mEC7360D9A4C9978F0199AFD0FF039DD527FAB14C (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<Soil> CurrentSoil => currentSoil;
		RuntimeObject* L_0 = __this->___currentSoil_2;
		return L_0;
	}
}
// System.Void GrowthAreaState::.ctor(GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrowthAreaState__ctor_m26DD1943715558BC52537E6F3C351D51566D254E (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* ___0_gameState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_mE3F25E69E0E6D771C0E31570886926E084046640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrowthAreaState_CurrentDayChanged_mEB4855240586BA9A57C42753AE68C2A46A5B5B4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReactiveProperty_1__ctor_m3EF287221D6A7257E69E67FDC3995206CD658238_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly CompositeDisposable subscriptionTracker = new CompositeDisposable();
		CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A* L_0 = (CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A*)il2cpp_codegen_object_new(CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CompositeDisposable__ctor_mF85767B0A007E387DC2E6F3088F4E30437C64EC5(L_0, NULL);
		__this->___subscriptionTracker_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subscriptionTracker_0), (void*)L_0);
		// private readonly IReactiveProperty<Soil> currentSoil = new ReactiveProperty<Soil>(Soil.Grass);
		ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4* L_1 = (ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4*)il2cpp_codegen_object_new(ReactiveProperty_1_t3EC841F48A7D23EDD67038DFF1FA7AECE81838C4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReactiveProperty_1__ctor_m3EF287221D6A7257E69E67FDC3995206CD658238(L_1, 0, ReactiveProperty_1__ctor_m3EF287221D6A7257E69E67FDC3995206CD658238_RuntimeMethod_var);
		__this->___currentSoil_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSoil_2), (void*)L_1);
		// private int LastDayWithAction = -1;
		__this->___LastDayWithAction_3 = (-1);
		// public GrowthAreaState(GameState gameState)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.gameState = gameState;
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_2 = ___0_gameState;
		__this->___gameState_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_1), (void*)L_2);
		// this.gameState.CurrentDay.Subscribe(CurrentDayChanged).AddTo(subscriptionTracker);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_3 = __this->___gameState_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = GameState_get_CurrentDay_mC445AA7AC26DB2ECB961DF02EA28F687A0BE0691_inline(L_3, NULL);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_5, __this, (intptr_t)((void*)GrowthAreaState_CurrentDayChanged_mEB4855240586BA9A57C42753AE68C2A46A5B5B4D_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94(L_4, L_5, ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94_RuntimeMethod_var);
		CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A* L_7 = __this->___subscriptionTracker_0;
		RuntimeObject* L_8;
		L_8 = DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_mE3F25E69E0E6D771C0E31570886926E084046640(L_6, L_7, DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_mE3F25E69E0E6D771C0E31570886926E084046640_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GrowthAreaState::CurrentDayChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrowthAreaState_CurrentDayChanged_mEB4855240586BA9A57C42753AE68C2A46A5B5B4D (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, int32_t ___0_day, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (day > LastDayWithAction + 2)
		int32_t L_0 = ___0_day;
		int32_t L_1 = __this->___LastDayWithAction_3;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_1, 2)))))
		{
			goto IL_0040;
		}
	}
	{
		// if (currentSoil.Value == Soil.Wet)
		RuntimeObject* L_2 = __this->___currentSoil_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReactiveProperty`1<Soil>::get_Value() */, IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0026;
		}
	}
	{
		// currentSoil.Value = Soil.Dirt;
		RuntimeObject* L_4 = __this->___currentSoil_2;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<Soil>::set_Value(T) */, IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var, L_4, 1);
		return;
	}

IL_0026:
	{
		// else if (currentSoil.Value == Soil.Dirt)
		RuntimeObject* L_5 = __this->___currentSoil_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReactiveProperty`1<Soil>::get_Value() */, IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		// currentSoil.Value = Soil.Grass;
		RuntimeObject* L_7 = __this->___currentSoil_2;
		NullCheck(L_7);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<Soil>::set_Value(T) */, IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var, L_7, 0);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void GrowthAreaState::Hoe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrowthAreaState_Hoe_m54550330566134AD56B400C85B49569FE157F2E7 (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyReactiveProperty_1_t68D5CDF07D56694732C2A2359A7EC61C14D786CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LastDayWithAction = gameState.CurrentDay.Value;
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_0 = __this->___gameState_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameState_get_CurrentDay_mC445AA7AC26DB2ECB961DF02EA28F687A0BE0691_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<System.Int32>::get_Value() */, IReadOnlyReactiveProperty_1_t68D5CDF07D56694732C2A2359A7EC61C14D786CF_il2cpp_TypeInfo_var, L_1);
		__this->___LastDayWithAction_3 = L_2;
		// if (currentSoil.Value == Soil.Grass)
		RuntimeObject* L_3 = __this->___currentSoil_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReactiveProperty`1<Soil>::get_Value() */, IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// currentSoil.Value = Soil.Dirt;
		RuntimeObject* L_5 = __this->___currentSoil_2;
		NullCheck(L_5);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<Soil>::set_Value(T) */, IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var, L_5, 1);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void GrowthAreaState::Water()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrowthAreaState_Water_m115CD3212EDCF8E3F7382728ED6925CC18505FF3 (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyReactiveProperty_1_t68D5CDF07D56694732C2A2359A7EC61C14D786CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LastDayWithAction = gameState.CurrentDay.Value;
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_0 = __this->___gameState_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GameState_get_CurrentDay_mC445AA7AC26DB2ECB961DF02EA28F687A0BE0691_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReadOnlyReactiveProperty`1<System.Int32>::get_Value() */, IReadOnlyReactiveProperty_1_t68D5CDF07D56694732C2A2359A7EC61C14D786CF_il2cpp_TypeInfo_var, L_1);
		__this->___LastDayWithAction_3 = L_2;
		// if (currentSoil.Value == Soil.Dirt)
		RuntimeObject* L_3 = __this->___currentSoil_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T UniRx.IReactiveProperty`1<Soil>::get_Value() */, IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// currentSoil.Value = Soil.Wet;
		RuntimeObject* L_5 = __this->___currentSoil_2;
		NullCheck(L_5);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void UniRx.IReactiveProperty`1<Soil>::set_Value(T) */, IReactiveProperty_1_tB78EE2C6550E10D166D76868018EAF1CC14C1F2D_il2cpp_TypeInfo_var, L_5, 2);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void GrowthAreaState::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrowthAreaState_Dispose_m15884DD3CC6BD6099E14976794B15D2337A302B9 (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, const RuntimeMethod* method) 
{
	{
		// subscriptionTracker.Dispose();
		CompositeDisposable_tA488069D0BEA0B0E5A4EE99C86A136273D1CBC0A* L_0 = __this->___subscriptionTracker_0;
		NullCheck(L_0);
		CompositeDisposable_Dispose_m446066E8D53D47EF8D7289EB09592CF53A13CA99(L_0, NULL);
		// }
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
// System.Int32 Plant::get_Profit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plant_get_Profit_m407BB24900414513C951E2DDA1510C1FFACFAEB3 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public int Profit => this.profit;
		int32_t L_0 = __this->___profit_10;
		return L_0;
	}
}
// System.Int32 Plant::get_Price()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Plant_get_Price_mC3A858762C61EDD83F4FCFCB0116B0CD019ACEED (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public int Price => this.price;
		int32_t L_0 = __this->___price_9;
		return L_0;
	}
}
// UnityEngine.Sprite Plant::get_Seed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Plant_get_Seed_m92C5EEC7A19C96CC4815EF74F6AF44F7A7B469A8 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite Seed => this.seed;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___seed_6;
		return L_0;
	}
}
// System.Void Plant::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_Start_m0D8708361E93F517A12E37CF816044B6D82E47E7 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Plant_OnNewDay_mFD7AFCCEC13489FF0A44B32E50C6F613D61054AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameController = FindObjectOfType<GameController>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		__this->___gameController_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameController_13), (void*)L_0);
		// spriteRenderer = this.GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_12), (void*)L_1);
		// gameController.State.CurrentDay.Subscribe(OnNewDay).AddTo(this);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_2 = __this->___gameController_13;
		NullCheck(L_2);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_3 = L_2->___State_6;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = GameState_get_CurrentDay_mC445AA7AC26DB2ECB961DF02EA28F687A0BE0691_inline(L_3, NULL);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_5, __this, (intptr_t)((void*)Plant_OnNewDay_mFD7AFCCEC13489FF0A44B32E50C6F613D61054AB_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94(L_4, L_5, ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94_RuntimeMethod_var);
		RuntimeObject* L_7;
		L_7 = DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C(L_6, __this, DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var);
		// GrowthStage = 0;
		__this->___GrowthStage_4 = 0;
		// spriteRenderer.sprite = GrowthSprites[this.GrowthStage];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___spriteRenderer_12;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_9 = __this->___GrowthSprites_5;
		int32_t L_10 = __this->___GrowthStage_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_8, L_12, NULL);
		// }
		return;
	}
}
// System.Void Plant::OnNewDay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_OnNewDay_mFD7AFCCEC13489FF0A44B32E50C6F613D61054AB (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, int32_t ___0_day, const RuntimeMethod* method) 
{
	{
		// this.Grow();
		Plant_Grow_m014C76D82521856010FAE1E18D03A8880DCEE2BB(__this, NULL);
		// }
		return;
	}
}
// System.Void Plant::Grow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_Grow_m014C76D82521856010FAE1E18D03A8880DCEE2BB (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// if (this.GrowthStage < this.GrowthSprites.Length-1)
		int32_t L_0 = __this->___GrowthStage_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = __this->___GrowthSprites_5;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_0047;
		}
	}
	{
		// this.GrowthStage++;
		int32_t L_2 = __this->___GrowthStage_4;
		__this->___GrowthStage_4 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// spriteRenderer.sprite = GrowthSprites[Mathf.Min(this.GrowthStage, this.GrowthSprites.Length-1)];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRenderer_12;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_4 = __this->___GrowthSprites_5;
		int32_t L_5 = __this->___GrowthStage_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_6 = __this->___GrowthSprites_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_5, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1)), NULL);
		NullCheck(L_4);
		int32_t L_8 = L_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_3);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_3, L_9, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Boolean Plant::IsHarvestable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plant_IsHarvestable_mA3C0B48A789BC1B4676E218F7B54C4C96B9562BB (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// return this.GrowthStage == this.GrowthSprites.Length-1;
		int32_t L_0 = __this->___GrowthStage_4;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_1 = __this->___GrowthSprites_5;
		NullCheck(L_1);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1))))? 1 : 0);
	}
}
// System.Void Plant::HarvestCrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant_HarvestCrop_mC613F701BF0C1BEE766B8FCED34457B725B4ED01 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// gameController.HarvestCrop(this);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0 = __this->___gameController_13;
		NullCheck(L_0);
		GameController_HarvestCrop_m3DE1543C5AB6066756C67D3ADB12F0622036BF96(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Plant::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plant__ctor_m077EBA5FF43D35D1CB8B8CBAB536875F5D93BB54 (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
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
// System.Void SeedSelectionController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedSelectionController_Start_mF59E5D82C73075FCD13348EEFF06281014C43C3C (SeedSelectionController_tFEF971940330C3D1852358A35954482D66EAD9BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameState = FindObjectOfType<GameController>().State;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		NullCheck(L_0);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_1 = L_0->___State_6;
		__this->___gameState_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void SeedSelectionController::SetSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedSelectionController_SetSelection_mC4584DDA9C9FFDA6E00A3A66EB5EDE3E3980AD5E (SeedSelectionController_tFEF971940330C3D1852358A35954482D66EAD9BD* __this, const RuntimeMethod* method) 
{
	{
		// gameState.SetSelectedPlant(seedSelection.gameObject);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_0 = __this->___gameState_5;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_1 = __this->___seedSelection_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_0);
		GameState_SetSelectedPlant_m41E7BD1374F1BD275A03C703EF4F2DE6758E98D7(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void SeedSelectionController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeedSelectionController__ctor_m6FC641468C54B0B52B00C56850132C0D39C25F18 (SeedSelectionController_tFEF971940330C3D1852358A35954482D66EAD9BD* __this, const RuntimeMethod* method) 
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
// System.Void SFXController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXController_Start_m9B0ECDCC8BF8CC1D05791B6CA5943452D9E73B33 (SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void SFXController::PlayFailSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXController_PlayFailSound_mBE3520BD93EF004022088B4ACFAC6F8F72CBE88F (SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.PlayOneShot(fail);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___fail_4;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SFXController::PlaySuccessSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXController_PlaySuccessSound_m36B23D0864DA9F5D926DF2DD0D2BF6995365A459 (SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.PlayOneShot(success);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___success_5;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SFXController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SFXController__ctor_mC4355226DCCD3F5DB75C2DEA5E169F1F73CF1F2B (SFXController_t8A1913EE424CD59FA7E062FA2F3B9831F6BD08FD* __this, const RuntimeMethod* method) 
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
// System.Void ShowBalance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowBalance_Start_m0D0987819C428EFFAE90C3518F361CA08DAFBD04 (ShowBalance_t15B8BF85563501F180A9B652FF6969A1B331A6C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowBalance_OnBalanceChanged_mB5299C5C6AF8963FF90087B6D2320BE95121E1E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var gameState = FindObjectOfType<GameController>().State;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		NullCheck(L_0);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_1 = L_0->___State_6;
		// gameState.Balance.Subscribe(OnBalanceChanged).AddTo(this);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = GameState_get_Balance_m5FBA90651AAECB57A498CE725C3A3867329D918E_inline(L_1, NULL);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)il2cpp_codegen_object_new(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m1BA854F3F4319EA4A4294DDFDA21C395B8D0FF87(L_3, __this, (intptr_t)((void*)ShowBalance_OnBalanceChanged_mB5299C5C6AF8963FF90087B6D2320BE95121E1E6_RuntimeMethod_var), NULL);
		RuntimeObject* L_4;
		L_4 = ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94(L_2, L_3, ObservableExtensions_Subscribe_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m32BBB0044E7DCE83038C59D5C4F44E07F6F77B94_RuntimeMethod_var);
		RuntimeObject* L_5;
		L_5 = DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C(L_4, __this, DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ShowBalance::OnBalanceChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowBalance_OnBalanceChanged_mB5299C5C6AF8963FF90087B6D2320BE95121E1E6 (ShowBalance_t15B8BF85563501F180A9B652FF6969A1B331A6C9* __this, int32_t ___0_balance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC5C42FBA1B70A021C186DD013C7F2B49614C86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tmpText.text = balance.ToString("C0");
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___tmpText_4;
		String_t* L_1;
		L_1 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&___0_balance), _stringLiteral7BC5C42FBA1B70A021C186DD013C7F2B49614C86, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void ShowBalance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowBalance__ctor_m7669A4411DC9BDD0C09108C40350E417355D7A7C (ShowBalance_t15B8BF85563501F180A9B652FF6969A1B331A6C9* __this, const RuntimeMethod* method) 
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
// System.Void ShowSelectedController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSelectedController_Start_mA69A8BCF1BD9F56181D1FCD46D2D16F0450DEFA0 (ShowSelectedController_tBFE8489B2EDDC15E6ABC0E0EBE73C5EB4DF09CE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableExtensions_Subscribe_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m345FD9D8F3B98F8AA50CF56D20CC203FAE93FDF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableExtensions_Subscribe_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m6F2D4B0725D967E731EB4B18D08952192EBD199C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowSelectedController_OnSelectedPlantChanged_m48CADE8551091D9724C3469148B7185A23BFBDAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShowSelectedController_OnSelectedToolChanged_m216DE8807A1D1510567F65B8CD5DBAB56DB9EC8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hoe.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Hoe_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Rake.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Rake_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// WateringCan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___WateringCan_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// selectedSeed.gameObject.SetActive(false);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___selectedSeed_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// gameState = FindObjectOfType<GameController>().State;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_5;
		L_5 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		NullCheck(L_5);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_6 = L_5->___State_6;
		__this->___gameState_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_8), (void*)L_6);
		// gameState.SelectedPlant.Subscribe(OnSelectedPlantChanged).AddTo(this);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_7 = __this->___gameState_8;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = GameState_get_SelectedPlant_m39DCE8FCB1DFAC0C4B31C887E40E8298E5A8082E_inline(L_7, NULL);
		Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C* L_9 = (Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C*)il2cpp_codegen_object_new(Action_1_tFF0F3D982F6CEB68CBA322555CBBEE6AE1D2519C_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_1__ctor_m3FA37AFA5AAB09F49F9C00A7D5B2A5F3D83CBB01(L_9, __this, (intptr_t)((void*)ShowSelectedController_OnSelectedPlantChanged_m48CADE8551091D9724C3469148B7185A23BFBDAC_RuntimeMethod_var), NULL);
		RuntimeObject* L_10;
		L_10 = ObservableExtensions_Subscribe_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m345FD9D8F3B98F8AA50CF56D20CC203FAE93FDF6(L_8, L_9, ObservableExtensions_Subscribe_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m345FD9D8F3B98F8AA50CF56D20CC203FAE93FDF6_RuntimeMethod_var);
		RuntimeObject* L_11;
		L_11 = DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C(L_10, __this, DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var);
		// gameState.SelectedTool.Subscribe(OnSelectedToolChanged).AddTo(this);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_12 = __this->___gameState_8;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = GameState_get_SelectedTool_mE31A51AC0B1EE53597E421D1A145ACB4FF810D12_inline(L_12, NULL);
		Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87* L_14 = (Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87*)il2cpp_codegen_object_new(Action_1_t4ABC65D6CB2F97378D6EDFCD49841C9748614E87_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m147AA38EE76F2C4998A51E72DBC780DE63375D48(L_14, __this, (intptr_t)((void*)ShowSelectedController_OnSelectedToolChanged_m216DE8807A1D1510567F65B8CD5DBAB56DB9EC8F_RuntimeMethod_var), NULL);
		RuntimeObject* L_15;
		L_15 = ObservableExtensions_Subscribe_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m6F2D4B0725D967E731EB4B18D08952192EBD199C(L_13, L_14, ObservableExtensions_Subscribe_TisTool_t7E2075B1251493E4510D7AC7ED16A1C9AECC3F5B_m6F2D4B0725D967E731EB4B18D08952192EBD199C_RuntimeMethod_var);
		RuntimeObject* L_16;
		L_16 = DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C(L_15, __this, DisposableExtensions_AddTo_TisIDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_m18F4B8D555B7416155F7ECAF324737DF887E244C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ShowSelectedController::OnSelectedPlantChanged(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSelectedController_OnSelectedPlantChanged_m48CADE8551091D9724C3469148B7185A23BFBDAC (ShowSelectedController_tBFE8489B2EDDC15E6ABC0E0EBE73C5EB4DF09CE2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_selectedPlant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* V_0 = NULL;
	{
		// if (selectedPlant == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_selectedPlant;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// selectedSeed.gameObject.SetActive(false);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___selectedSeed_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		return;
	}

IL_001b:
	{
		// Plant plant = selectedPlant.GetComponent<Plant>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_selectedPlant;
		NullCheck(L_4);
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_5;
		L_5 = GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A(L_4, GameObject_GetComponent_TisPlant_t86915369F8D1E7E1514172CDC382D655AEACBA72_m397940051E2DF77787E1619F1C8F41975890670A_RuntimeMethod_var);
		V_0 = L_5;
		// selectedSeed.gameObject.SetActive(true);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___selectedSeed_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// selectedSeed.sprite = plant.Seed;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___selectedSeed_4;
		Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* L_9 = V_0;
		NullCheck(L_9);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10;
		L_10 = Plant_get_Seed_m92C5EEC7A19C96CC4815EF74F6AF44F7A7B469A8_inline(L_9, NULL);
		NullCheck(L_8);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void ShowSelectedController::OnSelectedToolChanged(Tool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSelectedController_OnSelectedToolChanged_m216DE8807A1D1510567F65B8CD5DBAB56DB9EC8F (ShowSelectedController_tBFE8489B2EDDC15E6ABC0E0EBE73C5EB4DF09CE2* __this, int32_t ___0_selectedTool, const RuntimeMethod* method) 
{
	{
		// Hoe.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Hoe_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Rake.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Rake_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// WateringCan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___WateringCan_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		int32_t L_3 = ___0_selectedTool;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_0053;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0046;
			}
		}
	}
	{
		return;
	}

IL_0039:
	{
		// Hoe.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Hoe_5;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// break;
		return;
	}

IL_0046:
	{
		// Rake.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Rake_6;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// break;
		return;
	}

IL_0053:
	{
		// WateringCan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___WateringCan_7;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ShowSelectedController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSelectedController__ctor_mBC151231FCB466E351A2C51696C270A2F33C6920 (ShowSelectedController_tBFE8489B2EDDC15E6ABC0E0EBE73C5EB4DF09CE2* __this, const RuntimeMethod* method) 
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
// System.Void ToolSelectionController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolSelectionController_Start_m36CA59BBF0EC9DED15E5ABFDCBA215E4A6BC3B2F (ToolSelectionController_t314E29375140BD3A58A4FF3FDBDE183F7D401F17* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameState = FindObjectOfType<GameController>().State;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* L_0;
		L_0 = Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E(Object_FindObjectOfType_TisGameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_mC08A41C49227A3F669400DED83F12D3E064E170E_RuntimeMethod_var);
		NullCheck(L_0);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_1 = L_0->___State_6;
		__this->___gameState_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameState_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void ToolSelectionController::SetSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolSelectionController_SetSelection_mBB0613BAD616AD1A7166D16BBE43792FB84DBEBA (ToolSelectionController_t314E29375140BD3A58A4FF3FDBDE183F7D401F17* __this, const RuntimeMethod* method) 
{
	{
		// gameState.SetSelectedTool(this.toolSelection);
		GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* L_0 = __this->___gameState_5;
		int32_t L_1 = __this->___toolSelection_4;
		NullCheck(L_0);
		GameState_SetSelectedTool_m9C12F022AAABA594A57151B0A4802E7F44B9AAF6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ToolSelectionController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToolSelectionController__ctor_m4CF3B3F808F85AD7B95DB04A54E201A5449C902D (ToolSelectionController_t314E29375140BD3A58A4FF3FDBDE183F7D401F17* __this, const RuntimeMethod* method) 
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		// foreach (var loader in loaders)
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0017_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
				L_7 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_6);
				// if (loader.name.Equals("Oculus Loader"))
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				if (!L_9)
				{
					goto IL_005e_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_RightController_5;
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftController_4;
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_12);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
			}

IL_005e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GrowthAreaState_get_CurrentSoil_mEC7360D9A4C9978F0199AFD0FF039DD527FAB14C_inline (GrowthAreaState_tC43CF8BBEA55D04C37F7F6485FD5E6EE425D7F9C* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<Soil> CurrentSoil => currentSoil;
		RuntimeObject* L_0 = __this->___currentSoil_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_SelectedTool_mE31A51AC0B1EE53597E421D1A145ACB4FF810D12_inline (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<Tool> SelectedTool => selectedTool;
		RuntimeObject* L_0 = __this->___selectedTool_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_SelectedPlant_m39DCE8FCB1DFAC0C4B31C887E40E8298E5A8082E_inline (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<GameObject> SelectedPlant => selectedPlant;
		RuntimeObject* L_0 = __this->___selectedPlant_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plant_get_Price_mC3A858762C61EDD83F4FCFCB0116B0CD019ACEED_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public int Price => this.price;
		int32_t L_0 = __this->___price_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Plant_get_Profit_m407BB24900414513C951E2DDA1510C1FFACFAEB3_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public int Profit => this.profit;
		int32_t L_0 = __this->___profit_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_Balance_m5FBA90651AAECB57A498CE725C3A3867329D918E_inline (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<int> Balance => balance;
		RuntimeObject* L_0 = __this->___balance_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GameState_get_CurrentDay_mC445AA7AC26DB2ECB961DF02EA28F687A0BE0691_inline (GameState_t152D0B22E8EE644B8FE170865D50FB96CC7FA08A* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyReactiveProperty<int> CurrentDay => currentDay;
		RuntimeObject* L_0 = __this->___currentDay_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Plant_get_Seed_m92C5EEC7A19C96CC4815EF74F6AF44F7A7B469A8_inline (Plant_t86915369F8D1E7E1514172CDC382D655AEACBA72* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite Seed => this.seed;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___seed_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
