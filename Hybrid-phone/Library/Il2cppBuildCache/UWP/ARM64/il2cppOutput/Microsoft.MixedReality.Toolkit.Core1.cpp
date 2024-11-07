#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct IEqualityComparer_1_tABFD2A1DC92D481E3305F7D5D79F6A3E8BAD7E74;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct IReadOnlyDictionary_2_t40D079348B568B7A7503915DC3D16510AB19F30D;
// Microsoft.MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>
struct InteractableChildrenEventRoute_2_t156706DF4492CB4F051306C7CC5E9E097AF5B8A1;
// Microsoft.MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>
struct InteractableChildrenEventRoute_2_t73FA5463C534E42B7F6B3526F3D1721613C06CC5;
// Microsoft.MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<System.Object,System.Object>
struct InteractableChildrenEventRoute_2_tBED23E4D1F398F1A6C853161EC4B3E79C451B89C;
// Microsoft.MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>
struct InteractableParentEventRoute_2_t26701325AFBD4FDFCAAEA75EC6F7DAB617B76F43;
// Microsoft.MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>
struct InteractableParentEventRoute_2_tBA9802883D621AD50D3C6815ACF42295F2338CBF;
// Microsoft.MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<System.Object,System.Object>
struct InteractableParentEventRoute_2_t1E0A7EEDAA1B52C83E99F2D7F9F0E7A41F9C0B70;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Events.UnityEvent>
struct KeyCollection_tA5D83626E94476B72233AEBF8B28119789B11BF5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>
struct List_1_tCA44EA83FC87D4B98607170EEDC8ABB6D80582D4;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>
struct List_1_t30CB571423B47C570622C1E5B0B9382226757AC6;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>
struct List_1_t2CA6E42656F38DA1BE5833A9962E03ABDE5125AB;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>
struct List_1_tF17D5FD12A621CB604603A7655008297FF39EC59;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>
struct List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<System.Object,System.Object>
struct MRTKSubsystemDescriptor_2_tBC706B42C8C51F1A64760E564597DA98160BCDFE;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>
struct MRTKSubsystemProvider_1_tA5FECA334DDC4779A7F97846F3FDCB5C7EDCD34B;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>
struct MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>
struct MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct MRTKSubsystem_3_tDCD353CC7625E9B7634BC63F60D848F12B6104CE;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>
struct MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct SubsystemWithProvider_3_tA05A7DD9D64C0A7D5CE8CEE01ACF1C3E94CAE6B1;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Events.UnityEvent>
struct ValueCollection_t84AFA3A44C85FFD072F03475AD4B0D3807856675;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Events.UnityEvent>[]
struct EntryU5BU5D_tF1FC7CDF24F7984E8306D27CC309980FDD2E392B;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>[]
struct SlotU5BU5D_tB2D4C64645D1D1222164FC007D3A34C8BEF61A1B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable[]
struct IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704;
// Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute[]
struct IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource[]
struct InteractableEventRouterChildSourceU5BU5D_t045742010F6CBB6E004B41B9FE03767E7E609CBE;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Microsoft.MixedReality.Toolkit.Experimental.BubbleChildHoverEvents
struct BubbleChildHoverEvents_t86538890A357E4F7AAD4541ED9EE7E44C635B889;
// Microsoft.MixedReality.Toolkit.Experimental.BubbleChildSelectEvents
struct BubbleChildSelectEvents_t431FBA01E675E6FB39EFFBE9AF9D205B8BB994E3;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable
struct IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD;
// Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableChild
struct IXRHoverInteractableChild_t52B6B4FC20B1DC0F592C466E6FE4D6C6D24BCEB5;
// Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableParent
struct IXRHoverInteractableParent_tCEA8005F8D88F6F11DFE562572F1F8DEC6398964;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute
struct IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableChild
struct IXRSelectInteractableChild_tEBDC4D9BC532D64F07C796F2339DD38F2A70FBBF;
// Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableParent
struct IXRSelectInteractableParent_t4B0BE706C46B43402F51FC17920D7CB6A8193762;
// Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter
struct InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9;
// Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource
struct InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem
struct KeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42;
// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo
struct KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2;
// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor
struct KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A;
// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo
struct MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem
struct TextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B;
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo
struct TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8;
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor
struct TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508;
// Microsoft.MixedReality.Toolkit.Experimental.TrickleChildHoverEvents
struct TrickleChildHoverEvents_tC89D37600C9256437817A8E093906B1688CF8399;
// Microsoft.MixedReality.Toolkit.Experimental.TrickleChildSelectEvents
struct TrickleChildSelectEvents_t7778479D9AB67463B9411158520D5E9EF6CFFD45;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider
struct Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider
struct Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRHoverInteractableChild_t52B6B4FC20B1DC0F592C466E6FE4D6C6D24BCEB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRHoverInteractableParent_tCEA8005F8D88F6F11DFE562572F1F8DEC6398964_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRSelectInteractableChild_tEBDC4D9BC532D64F07C796F2339DD38F2A70FBBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRSelectInteractableParent_t4B0BE706C46B43402F51FC17920D7CB6A8193762_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MRTKSubsystem_3_tDCD353CC7625E9B7634BC63F60D848F12B6104CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral33B1E25D03A60D4D52E409FD3171FF658C3AB9F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5542C2C12376B62727BB20CE9C9B84E76ACD561B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390_m64139C378052537B379D1BC5B52D8F35A83CC7FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableChildrenEventRoute_2__ctor_m43566BED5C1E880C80BE4FD9438D7BA5843E28BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableChildrenEventRoute_2__ctor_mAB2AE6334F14A28BDFD459CFF5FC411804A42F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableEventRouter_ConnectAllEventRoutesToInteractables_m1476D022287612212A527B2C05ACBF49FE723285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableParentEventRoute_2__ctor_m03D0A84C0E950ABE0D45E68050E1F7ADA572D876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractableParentEventRoute_2__ctor_m049C970D0CBE7B440F7006EE1A40DF45F96961EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeywordRecognitionSubsystemDescriptor_Create_m010CF407CC3482FEA8D095F604BBF5D71DB01690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDE28CE118362D02F2E1A9E5CAB6CBA010C5D710D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m55B0F984DB08E7871BFE1C7960E6A682B33F01C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF10BF1067FAF215770D6653A40115274510369CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystemProvider_1__ctor_mB36774C997903FDDA2E1415E3732233B74CAE44C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MRTKSubsystem_3__ctor_mBFDFB71D6CC9212D448F4654FC7B37F310ABA086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToSpeechSubsystemDescriptor_Create_m5437479128C55ECBCC37D543F9384F9D73D7A766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m927252AFFD616E4754CC0510BCCD5B8E45B89DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m28B6585B22BB8F4A4EB0F11D700FDA3F6BED5ED0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>
struct Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF1FC7CDF24F7984E8306D27CC309980FDD2E392B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA5D83626E94476B72233AEBF8B28119789B11BF5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t84AFA3A44C85FFD072F03475AD4B0D3807856675* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB2D4C64645D1D1222164FC007D3A34C8BEF61A1B* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>
struct InteractableEventRoute_2_tCB86FF885E8E0683168BA16732F3BA0FADB54F64  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRoute`2::targets
	List_1_tCA44EA83FC87D4B98607170EEDC8ABB6D80582D4* ___targets_0;
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>
struct InteractableEventRoute_2_t2B270300935FAFD758FC50943666C33D52345736  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRoute`2::targets
	List_1_t30CB571423B47C570622C1E5B0B9382226757AC6* ___targets_0;
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>
struct InteractableEventRoute_2_t2486BC58969A3CB77DE2C9ADCF3671600700F60B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRoute`2::targets
	List_1_t2CA6E42656F38DA1BE5833A9962E03ABDE5125AB* ___targets_0;
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>
struct InteractableEventRoute_2_t680D2D1A68C5C25B716BA768623C3E152E7588B7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRoute`2::targets
	List_1_tF17D5FD12A621CB604603A7655008297FF39EC59* ___targets_0;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IXRInteractableU5BU5D_t15C3B0839294519BE8D32AF8738AA20F78721704* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>
struct List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InteractableEventRouterChildSourceU5BU5D_t045742010F6CBB6E004B41B9FE03767E7E609CBE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InteractableEventRouterChildSourceU5BU5D_t045742010F6CBB6E004B41B9FE03767E7E609CBE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo
struct MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_2;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_3;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<ProviderType>k__BackingField
	Type_t* ___U3CProviderTypeU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::<SubsystemTypeOverride>k__BackingField
	Type_t* ___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

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

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>
struct InteractableChildrenEventRoute_2_t156706DF4492CB4F051306C7CC5E9E097AF5B8A1  : public InteractableEventRoute_2_tCB86FF885E8E0683168BA16732F3BA0FADB54F64
{
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>
struct InteractableChildrenEventRoute_2_t73FA5463C534E42B7F6B3526F3D1721613C06CC5  : public InteractableEventRoute_2_t2486BC58969A3CB77DE2C9ADCF3671600700F60B
{
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>
struct InteractableParentEventRoute_2_t26701325AFBD4FDFCAAEA75EC6F7DAB617B76F43  : public InteractableEventRoute_2_t2B270300935FAFD758FC50943666C33D52345736
{
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>
struct InteractableParentEventRoute_2_tBA9802883D621AD50D3C6815ACF42295F2338CBF  : public InteractableEventRoute_2_t680D2D1A68C5C25B716BA768623C3E152E7588B7
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t615BE4C5CA8D837A7E3A4DBA6F0370F519A4CF75  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tA21FF952E452FC1131351569716B195E1450613F  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>
struct SubsystemProvider_1_tC019C4DE4A36F98E9ABEFC16F061A26797EE0325  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>
struct SubsystemProvider_1_tE85E89C71C60B78D4090F8A38E8ED05C8FAD0C74  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct SubsystemWithProvider_3_tA05A7DD9D64C0A7D5CE8CEE01ACF1C3E94CAE6B1  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* ___U3CproviderU3Ek__BackingField_3;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
struct HoverEnterEventArgs_t4BCFA6BFD8D007CEE2D72D9D61DAED6C72F8CE2E  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs
struct HoverExitEventArgs_tFFBECDDAF90BF90AA3B7282FAEF1D8E5D19A5AD6  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
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

// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo
struct KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2  : public MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::<IsCloudBased>k__BackingField
	bool ___U3CIsCloudBasedU3Ek__BackingField_6;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo
struct TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8  : public MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3
{
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D96_t294A8BA6F189309AA206709F6E0AA0ED9D654B7D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t294A8BA6F189309AA206709F6E0AA0ED9D654B7D__padding[96];
	};
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A  : public SubsystemDescriptorWithProvider_2_t615BE4C5CA8D837A7E3A4DBA6F0370F519A4CF75
{
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282  : public SubsystemDescriptorWithProvider_2_tA21FF952E452FC1131351569716B195E1450613F
{
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_3;
	// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<Author>k__BackingField
	String_t* ___U3CAuthorU3Ek__BackingField_4;
	// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2::<ConfigType>k__BackingField
	Type_t* ___U3CConfigTypeU3Ek__BackingField_5;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>
struct MRTKSubsystemProvider_1_tA5FECA334DDC4779A7F97846F3FDCB5C7EDCD34B  : public SubsystemProvider_1_tC019C4DE4A36F98E9ABEFC16F061A26797EE0325
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>
struct MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D  : public SubsystemProvider_1_tE85E89C71C60B78D4090F8A38E8ED05C8FAD0C74
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t2ACAE790C79584FAEA6F0C1E03E30CC83A8BE01D  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t2ACAE790C79584FAEA6F0C1E03E30CC83A8BE01D_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B
	__StaticArrayInitTypeSizeU3D96_t294A8BA6F189309AA206709F6E0AA0ED9D654B7D ___577BB66DB352A52651963484243DD20947F8819D4C6589BA449C17677806F41B_0;
};

// Microsoft.MixedReality.Toolkit.Experimental.BubbleChildHoverEvents
struct BubbleChildHoverEvents_t86538890A357E4F7AAD4541ED9EE7E44C635B889  : public InteractableParentEventRoute_2_t26701325AFBD4FDFCAAEA75EC6F7DAB617B76F43
{
};

// Microsoft.MixedReality.Toolkit.Experimental.BubbleChildSelectEvents
struct BubbleChildSelectEvents_t431FBA01E675E6FB39EFFBE9AF9D205B8BB994E3  : public InteractableParentEventRoute_2_tBA9802883D621AD50D3C6815ACF42295F2338CBF
{
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

// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB  : public UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008
{
};

// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832  : public UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26
{
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// Microsoft.MixedReality.Toolkit.Experimental.TrickleChildHoverEvents
struct TrickleChildHoverEvents_tC89D37600C9256437817A8E093906B1688CF8399  : public InteractableChildrenEventRoute_2_t156706DF4492CB4F051306C7CC5E9E097AF5B8A1
{
};

// Microsoft.MixedReality.Toolkit.Experimental.TrickleChildSelectEvents
struct TrickleChildSelectEvents_t7778479D9AB67463B9411158520D5E9EF6CFFD45  : public InteractableChildrenEventRoute_2_t73FA5463C534E42B7F6B3526F3D1721613C06CC5
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>
struct MRTKSubsystem_3_tDCD353CC7625E9B7634BC63F60D848F12B6104CE  : public SubsystemWithProvider_3_tA05A7DD9D64C0A7D5CE8CEE01ACF1C3E94CAE6B1
{
};

struct MRTKSubsystem_3_tDCD353CC7625E9B7634BC63F60D848F12B6104CE_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>
struct MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17  : public SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73
{
};

struct MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_4;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3::FixedUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___FixedUpdatePerfMarker_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor
struct KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A  : public MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::<IsCloudBased>k__BackingField
	bool ___U3CIsCloudBasedU3Ek__BackingField_6;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor
struct TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508  : public MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider
struct Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954  : public MRTKSubsystemProvider_1_tA5FECA334DDC4779A7F97846F3FDCB5C7EDCD34B
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent> Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::keywordDictionary
	Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* ___keywordDictionary_1;
};

// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider
struct Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175  : public MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>
struct UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>
struct UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
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

// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem
struct KeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42  : public MRTKSubsystem_3_tDCD353CC7625E9B7634BC63F60D848F12B6104CE
{
};

// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem
struct TextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B  : public MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter
struct InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::activeInteractables
	HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* ___activeInteractables_4;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::newInteractables
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___newInteractables_5;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource> Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::childSources
	List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* ___childSources_6;
	// Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute[] Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::eventRoutes
	IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* ___eventRoutes_7;
};

// Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource
struct InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::childrenChanged
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___childrenChanged_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute[]
struct IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared (MRTKSubsystem_3_tEAD14DC13CD09761D9CE1704E1D40B24E6009F76* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared (MRTKSubsystemProvider_1_t04FEED85CA4E818499C335F753CB85F944E34B28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<System.Object,System.Object>::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemDescriptor_2__ctor_m8CBBE11F6D722DAD6A3647CAE791757405349BA0_gshared (MRTKSubsystemDescriptor_2_tBC706B42C8C51F1A64760E564597DA98160BCDFE* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___MRTKSubsystemCinfo0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<System.Object,System.Object>(System.String,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_mFC2396B34EE7D01E177B77F0943EBA39CC540E55_gshared (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___result1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableParentEventRoute_2__ctor_m080DF1CD1672C112EB3A82C78DEAC50AB15789A3_gshared (InteractableParentEventRoute_2_t1E0A7EEDAA1B52C83E99F2D7F9F0E7A41F9C0B70* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableChildrenEventRoute_2__ctor_m5F830EC87BA19306AB1C1F1570FCE987E49B403B_gshared (InteractableChildrenEventRoute_2_tBED23E4D1F398F1A6C853161EC4B3E79C451B89C* __this, const RuntimeMethod* method) ;

// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>::.ctor()
inline void MRTKSubsystem_3__ctor_mBFDFB71D6CC9212D448F4654FC7B37F310ABA086 (MRTKSubsystem_3_tDCD353CC7625E9B7634BC63F60D848F12B6104CE* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_tDCD353CC7625E9B7634BC63F60D848F12B6104CE*, const RuntimeMethod*))MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>::get_provider()
inline Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954* SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_inline (SubsystemWithProvider_3_tA05A7DD9D64C0A7D5CE8CEE01ACF1C3E94CAE6B1* __this, const RuntimeMethod* method)
{
	return ((  Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954* (*) (SubsystemWithProvider_3_tA05A7DD9D64C0A7D5CE8CEE01ACF1C3E94CAE6B1*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* KeywordRecognitionSubsystemDescriptor_Create_m010CF407CC3482FEA8D095F604BBF5D71DB01690 (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* ___cinfo0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Events.UnityEvent>::.ctor()
inline void Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_mB36774C997903FDDA2E1415E3732233B74CAE44C (MRTKSubsystemProvider_1_tA5FECA334DDC4779A7F97846F3FDCB5C7EDCD34B* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_tA5FECA334DDC4779A7F97846F3FDCB5C7EDCD34B*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared)(__this, method);
}
// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::get_running()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420_inline (SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MRTKSubsystemCinfo_Equals_m3111B01E6191DC1AAED8CBD2B6EB665FBC2A0B98 (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___other0, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::get_IsCloudBased()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mE9994954E7AF49F138631A2F9FA1EC0162989EAF_inline (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MRTKSubsystemCinfo__ctor_m50B9CACB0C4603A8F87EE5277BE47E62846E0BA4 (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
inline void MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7 (MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___MRTKSubsystemCinfo0, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemDescriptor_2_t4BDE7409DFAE8EA35C481417715843FB053EF05A*, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3*, const RuntimeMethod*))MRTKSubsystemDescriptor_2__ctor_m8CBBE11F6D722DAD6A3647CAE791757405349BA0_gshared)(__this, ___MRTKSubsystemCinfo0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::set_IsCloudBased(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mB4E255EEB2AF1728860B80D6EF1312E69054A359_inline (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MRTKSubsystemCinfo_get_Name_m16ABFCFB5920A666B7F322F15C5C1AA5197F481A_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::get_SubsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_SubsystemTypeOverride_mEA66595FC7C1ED69D33F84557D17897FD017F76E_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo::get_ProviderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_ProviderType_m4C8A14C25568D8C5E921C9686739E1A0E5F10276_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m927252AFFD616E4754CC0510BCCD5B8E45B89DEE (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_mFC2396B34EE7D01E177B77F0943EBA39CC540E55_gshared)(___name0, ___subsystemTypeOverride1, ___providerType2, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor__ctor_m2F810A3A0DC899924B7A7CB5C5AC924865F6BB38 (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* ___cinfo0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystem`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>::.ctor()
inline void MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5 (MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17*, const RuntimeMethod*))MRTKSubsystem_3__ctor_mA74FBF58ED7ECF4D6901C5C5AE599CD48E5E2634_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>::get_provider()
inline Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_inline (SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73* __this, const RuntimeMethod* method)
{
	return ((  Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* (*) (SubsystemWithProvider_3_tA57B48983AFAB9E331B71939F5568B7722C51C73*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* TextToSpeechSubsystemDescriptor_Create_m5437479128C55ECBCC37D543F9384F9D73D7A766 (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___cinfo0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemProvider`1<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem>::.ctor()
inline void MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C (MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D* __this, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemProvider_1_t96C1C7F051E91B1C8440B04BF4E98AB0C505F86D*, const RuntimeMethod*))MRTKSubsystemProvider_1__ctor_mCA2C3C05DD905908E089B5197C76CDB5FCF0D4D9_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemDescriptor`2<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
inline void MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE (MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___MRTKSubsystemCinfo0, const RuntimeMethod* method)
{
	((  void (*) (MRTKSubsystemDescriptor_2_t6B12CA0E78DD88BF9A23FADE958F13F256551282*, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3*, const RuntimeMethod*))MRTKSubsystemDescriptor_2__ctor_m8CBBE11F6D722DAD6A3647CAE791757405349BA0_gshared)(__this, ___MRTKSubsystemCinfo0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSubsystemHelpers::CheckTypes<Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem,Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider>(System.String,System.Type,System.Type)
inline bool XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m28B6585B22BB8F4A4EB0F11D700FDA3F6BED5ED0 (String_t* ___name0, Type_t* ___subsystemTypeOverride1, Type_t* ___providerType2, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, Type_t*, Type_t*, const RuntimeMethod*))XRSubsystemHelpers_CheckTypes_TisRuntimeObject_TisRuntimeObject_mFC2396B34EE7D01E177B77F0943EBA39CC540E55_gshared)(___name0, ___subsystemTypeOverride1, ___providerType2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystemDescriptor__ctor_mA047A84F98373061E4E8520509E93A921904C95E (TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* __this, TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___cinfo0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::EnableEventRoutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_EnableEventRoutes_mF8B13F8D44F9A5FDE4596DADC8CCF86BA4519DC1 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectAllEventRoutesToInteractables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectAllEventRoutesToInteractables_m1476D022287612212A527B2C05ACBF49FE723285 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectChildSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectChildSources_mA5644EA19B4B903538BD9B878C88B4E9BE996E1A (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectChildSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectChildSources_mA26A35F685DB2B0E9DD05604FCA3995495E44D6A (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectAllEventRoutesFromKnownInteractables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectAllEventRoutesFromKnownInteractables_m082E25423F6A4AAE41CBF52556F5FA8F9AC552F7 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_Refresh_m9696063E303ABDBE2A01BE26C1998B075B4B8EBF (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::EnableEventRoute(Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_EnableEventRoute_mD393F8CEB17B0E4ECC24720A6C2772A5440E8489 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, RuntimeObject* ___eventRoute0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390_m64139C378052537B379D1BC5B52D8F35A83CC7FA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* ___result1, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC_gshared)(__this, ___includeInactive0, ___result1, method);
}
// T System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>::get_Item(System.Int32)
inline InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390* List_1_get_Item_mF10BF1067FAF215770D6653A40115274510369CB (List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390* (*) (List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::get_ChildrenChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* InteractableEventRouterChildSource_get_ChildrenChanged_mC6EF9A8A8DF3C284F54D752EDBCB82D9B04BE75F_inline (InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>::get_Count()
inline int32_t List_1_get_Count_m55B0F984DB08E7871BFE1C7960E6A682B33F01C0_inline (List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>(System.Boolean,System.Collections.Generic.List`1<T>)
inline void Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___result1, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m7AFED511573059D0DA49E1966117E7F80F9112CC_gshared)(__this, ___includeInactive0, ___result1, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Add(T)
inline bool HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9 (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::IsValidChild(UnityEngine.XR.Interaction.Toolkit.IXRInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractableEventRouter_IsValidChild_m3855480BBDD3586704E09A4EB854AAF441E5D416 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::get_Count()
inline int32_t List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_inline (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::GetEnumerator()
inline Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689 (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 (*) (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Dispose()
inline void Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011 (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_inline (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::MoveNext()
inline bool Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::Clear()
inline void HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921 (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*, const RuntimeMethod*))HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::.ctor()
inline void HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815 (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>::.ctor()
inline void List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource>::.ctor()
inline void List_1__ctor_mDE28CE118362D02F2E1A9E5CAB6CBA010C5D710D (List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4 (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8 (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33 (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008* __this, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF375C8038EBFFA6D72A05014787BE5CDB0A95008*, UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.HoverExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78 (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26* __this, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t4B30B07A73CFB8205961561C2945408585355F26*, UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableParent>::.ctor()
inline void InteractableParentEventRoute_2__ctor_m049C970D0CBE7B440F7006EE1A40DF45F96961EB (InteractableParentEventRoute_2_t26701325AFBD4FDFCAAEA75EC6F7DAB617B76F43* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractableParentEventRoute_2_t26701325AFBD4FDFCAAEA75EC6F7DAB617B76F43*, const RuntimeMethod*))InteractableParentEventRoute_2__ctor_m080DF1CD1672C112EB3A82C78DEAC50AB15789A3_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableChild>::.ctor()
inline void InteractableChildrenEventRoute_2__ctor_mAB2AE6334F14A28BDFD459CFF5FC411804A42F53 (InteractableChildrenEventRoute_2_t156706DF4492CB4F051306C7CC5E9E097AF5B8A1* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractableChildrenEventRoute_2_t156706DF4492CB4F051306C7CC5E9E097AF5B8A1*, const RuntimeMethod*))InteractableChildrenEventRoute_2__ctor_m5F830EC87BA19306AB1C1F1570FCE987E49B403B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableParentEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableParent>::.ctor()
inline void InteractableParentEventRoute_2__ctor_m03D0A84C0E950ABE0D45E68050E1F7ADA572D876 (InteractableParentEventRoute_2_tBA9802883D621AD50D3C6815ACF42295F2338CBF* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractableParentEventRoute_2_tBA9802883D621AD50D3C6815ACF42295F2338CBF*, const RuntimeMethod*))InteractableParentEventRoute_2__ctor_m080DF1CD1672C112EB3A82C78DEAC50AB15789A3_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableChildrenEventRoute`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableChild>::.ctor()
inline void InteractableChildrenEventRoute_2__ctor_m43566BED5C1E880C80BE4FD9438D7BA5843E28BE (InteractableChildrenEventRoute_2_t73FA5463C534E42B7F6B3526F3D1721613C06CC5* __this, const RuntimeMethod* method)
{
	((  void (*) (InteractableChildrenEventRoute_2_t73FA5463C534E42B7F6B3526F3D1721613C06CC5*, const RuntimeMethod*))InteractableChildrenEventRoute_2__ctor_m5F830EC87BA19306AB1C1F1570FCE987E49B403B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystem__ctor_mE38956A59027235D7A1D080BB092537944513B69 (KeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_mBFDFB71D6CC9212D448F4654FC7B37F310ABA086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_tDCD353CC7625E9B7634BC63F60D848F12B6104CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public KeywordRecognitionSubsystem()
		il2cpp_codegen_runtime_class_init_inline(MRTKSubsystem_3_tDCD353CC7625E9B7634BC63F60D848F12B6104CE_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_mBFDFB71D6CC9212D448F4654FC7B37F310ABA086(__this, MRTKSubsystem_3__ctor_mBFDFB71D6CC9212D448F4654FC7B37F310ABA086_RuntimeMethod_var);
		// { }
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem::CreateOrGetEventForKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* KeywordRecognitionSubsystem_CreateOrGetEventForKeyword_mD0DF2A27A81B1A97D5AF2C77A02482902F3F33E8 (KeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42* __this, String_t* ___keyword0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent CreateOrGetEventForKeyword(string keyword) => provider.CreateOrGetEventForKeyword(keyword);
		Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_inline(__this, SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_RuntimeMethod_var);
		String_t* L_1 = ___keyword0;
		NullCheck(L_0);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2;
		L_2 = VirtualFuncInvoker1< UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*, String_t* >::Invoke(25 /* UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::CreateOrGetEventForKeyword(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem::RemoveKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystem_RemoveKeyword_mF67F39DCCD17C055C75698854E56B6BAABC05DAD (KeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42* __this, String_t* ___keyword0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RemoveKeyword(string keyword) => provider.RemoveKeyword(keyword);
		Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_inline(__this, SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_RuntimeMethod_var);
		String_t* L_1 = ___keyword0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::RemoveKeyword(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem::RemoveAllKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystem_RemoveAllKeywords_m0A1D1ED5E10DF5C19769BEDB85FFCE297855DD62 (KeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RemoveAllKeywords() => provider.RemoveAllKeywords();
		Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_inline(__this, SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(27 /* System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::RemoveAllKeywords() */, L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Events.UnityEvent> Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem::GetAllKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeywordRecognitionSubsystem_GetAllKeywords_m86924926B51315F44AE61BE751ACAF13CC03375E (KeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IReadOnlyDictionary<string, UnityEvent> GetAllKeywords() => provider.GetAllKeywords();
		Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_inline(__this, SubsystemWithProvider_3_get_provider_mEC2FA4F74EFCDE7BE5E0D554993729DDFE405711_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(28 /* System.Collections.Generic.IReadOnlyDictionary`2<System.String,UnityEngine.Events.UnityEvent> Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::GetAllKeywords() */, L_0);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem::Register(Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystem_Register_m8EB0A2170362476ED2B312CD1FD893B4E0300F03 (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* ___keywordRecognitionSubsystemParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var descriptor = KeywordRecognitionSubsystemDescriptor.Create(keywordRecognitionSubsystemParams);
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_0 = ___keywordRecognitionSubsystemParams0;
		KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* L_1;
		L_1 = KeywordRecognitionSubsystemDescriptor_Create_m010CF407CC3482FEA8D095F604BBF5D71DB01690(L_0, NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(descriptor);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// return true;
		return (bool)1;
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m6007B2EADD4936D0CCC42C934AC2A7E305DA9D13 (Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_mB36774C997903FDDA2E1415E3732233B74CAE44C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, UnityEvent> keywordDictionary = new Dictionary<string, UnityEvent>();
		Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050* L_0 = (Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050*)il2cpp_codegen_object_new(Dictionary_2_tDB042541336A0E5211E320FFD86DB11ABC4E7050_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E(L_0, Dictionary_2__ctor_m201D3F2B835DA73A9ADF2C88E7158ADEB95A593E_RuntimeMethod_var);
		__this->___keywordDictionary_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keywordDictionary_1), (void*)L_0);
		MRTKSubsystemProvider_1__ctor_mB36774C997903FDDA2E1415E3732233B74CAE44C(__this, MRTKSubsystemProvider_1__ctor_mB36774C997903FDDA2E1415E3732233B74CAE44C_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystem/Provider::UnityEngine.ISubsystem.get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityEngine_ISubsystem_get_running_m0A26AD4ECAB88F3B17D95DC1AEA172FE0ED75D8D (Provider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420_inline(__this, NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::get_IsCloudBased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mE9994954E7AF49F138631A2F9FA1EC0162989EAF (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::set_IsCloudBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemCinfo_set_IsCloudBased_m573CB98568CEAB89BF21140832011C7721558ED3 (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_Equals_m61E74224DD4F2377497EB4A1D4E2B399B54522CE (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* G_B3_0 = NULL;
	bool G_B3_1 = false;
	KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* G_B2_0 = NULL;
	bool G_B2_1 = false;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	bool G_B4_1 = false;
	{
		// return base.Equals(other) && IsCloudBased == (other as KeywordRecognitionSubsystemCinfo)?.IsCloudBased;
		MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* L_0 = ___other0;
		bool L_1;
		L_1 = MRTKSubsystemCinfo_Equals_m3111B01E6191DC1AAED8CBD2B6EB665FBC2A0B98(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		bool L_2;
		L_2 = KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mE9994954E7AF49F138631A2F9FA1EC0162989EAF_inline(__this, NULL);
		MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* L_3 = ___other0;
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_4 = ((KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2*)IsInstClass((RuntimeObject*)L_3, KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2_il2cpp_TypeInfo_var));
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_5 = V_1;
		G_B4_0 = L_5;
		G_B4_1 = G_B2_1;
		goto IL_002e;
	}

IL_0024:
	{
		NullCheck(G_B3_0);
		bool L_6;
		L_6 = KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mE9994954E7AF49F138631A2F9FA1EC0162989EAF_inline(G_B3_0, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_002e:
	{
		V_0 = G_B4_0;
		bool L_8;
		L_8 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_0), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return (bool)((int32_t)(((((int32_t)G_B4_1) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9));
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemCinfo__ctor_m9C00C7257A1D190AAB10D406A8A775743C217D28 (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* __this, const RuntimeMethod* method) 
{
	{
		MRTKSubsystemCinfo__ctor_m50B9CACB0C4603A8F87EE5277BE47E62846E0BA4(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor__ctor_m2F810A3A0DC899924B7A7CB5C5AC924865F6BB38 (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// KeywordRecognitionSubsystemDescriptor(KeywordRecognitionSubsystemCinfo cinfo) : base(cinfo)
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_0 = ___cinfo0;
		MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7(__this, L_0, MRTKSubsystemDescriptor_2__ctor_m47CE7F84C7F67197E26337A43C62A3723F12D0E7_RuntimeMethod_var);
		// IsCloudBased = cinfo.IsCloudBased;
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_1 = ___cinfo0;
		NullCheck(L_1);
		bool L_2;
		L_2 = KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mE9994954E7AF49F138631A2F9FA1EC0162989EAF_inline(L_1, NULL);
		KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mB4E255EEB2AF1728860B80D6EF1312E69054A359_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::get_IsCloudBased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemDescriptor_get_IsCloudBased_m0CAECD9EBA46CC2CFEBA8BDBA2AB36AEFA71E3B0 (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::set_IsCloudBased(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mB4E255EEB2AF1728860B80D6EF1312E69054A359 (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Subsystems.KeywordRecognitionSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* KeywordRecognitionSubsystemDescriptor_Create_m010CF407CC3482FEA8D095F604BBF5D71DB01690 (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m927252AFFD616E4754CC0510BCCD5B8E45B89DEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!XRSubsystemHelpers.CheckTypes<KeywordRecognitionSubsystem, KeywordRecognitionSubsystem.Provider>(cinfo.Name,
		//                                                                                                     cinfo.SubsystemTypeOverride,
		//                                                                                                     cinfo.ProviderType))
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_0 = ___cinfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MRTKSubsystemCinfo_get_Name_m16ABFCFB5920A666B7F322F15C5C1AA5197F481A_inline(L_0, NULL);
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_2 = ___cinfo0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = MRTKSubsystemCinfo_get_SubsystemTypeOverride_mEA66595FC7C1ED69D33F84557D17897FD017F76E_inline(L_2, NULL);
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_4 = ___cinfo0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = MRTKSubsystemCinfo_get_ProviderType_m4C8A14C25568D8C5E921C9686739E1A0E5F10276_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m927252AFFD616E4754CC0510BCCD5B8E45B89DEE(L_1, L_3, L_5, XRSubsystemHelpers_CheckTypes_TisKeywordRecognitionSubsystem_t9FCB4D388DFDD4E80978205ECBD91AA494E10E42_TisProvider_t4C453EEFF6DD80E37D5C68B664667B5D68BB4954_m927252AFFD616E4754CC0510BCCD5B8E45B89DEE_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentException("Could not create KeywordRecognitionSubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33B1E25D03A60D4D52E409FD3171FF658C3AB9F9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeywordRecognitionSubsystemDescriptor_Create_m010CF407CC3482FEA8D095F604BBF5D71DB01690_RuntimeMethod_var)));
	}

IL_0024:
	{
		// return new KeywordRecognitionSubsystemDescriptor(cinfo);
		KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* L_8 = ___cinfo0;
		KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* L_9 = (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A*)il2cpp_codegen_object_new(KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		KeywordRecognitionSubsystemDescriptor__ctor_m2F810A3A0DC899924B7A7CB5C5AC924865F6BB38(L_9, L_8, NULL);
		return L_9;
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystem__ctor_m02654ABFE0C86BFD7565428DB2058732033FD356 (TextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextToSpeechSubsystem()
		il2cpp_codegen_runtime_class_init_inline(MRTKSubsystem_3_tC8E5ED11BA1E8DFB50DB11E40610924826AAAD17_il2cpp_TypeInfo_var);
		MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5(__this, MRTKSubsystem_3__ctor_m34645850362DA46EF594519E25F78CDECE1252F5_RuntimeMethod_var);
		// { }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem::TrySpeak(System.String,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TextToSpeechSubsystem_TrySpeak_m670F46C11B73EAD63E6FBD3A436DFD46B4F002EB (TextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B* __this, String_t* ___phrase0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Task<bool> TrySpeak(string phrase, AudioSource audioSource) => provider.TrySpeak(phrase, audioSource);
		Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_inline(__this, SubsystemWithProvider_3_get_provider_m2734EEEE07AC19A035D24DC03D62B0F76CCEFE79_RuntimeMethod_var);
		String_t* L_1 = ___phrase0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___audioSource1;
		NullCheck(L_0);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_3;
		L_3 = VirtualFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t*, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* >::Invoke(18 /* System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider::TrySpeak(System.String,UnityEngine.AudioSource) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem::Register(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechSubsystem_Register_m4151691A4778D7222C81C8F4A506587F56A67349 (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___subsystemParams0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextToSpeechSubsystemDescriptor Descriptor = TextToSpeechSubsystemDescriptor.Create(subsystemParams);
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_0 = ___subsystemParams0;
		TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* L_1;
		L_1 = TextToSpeechSubsystemDescriptor_Create_m5437479128C55ECBCC37D543F9384F9D73D7A766(L_0, NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(Descriptor);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// return true;
		return (bool)1;
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m39939D5F249CA106064237867889A775A5A638D7 (Provider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C(__this, MRTKSubsystemProvider_1__ctor_m57EDC220EACDAE7340BE4EE3998121D5F78FC97C_RuntimeMethod_var);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo::Equals(Microsoft.MixedReality.Toolkit.Subsystems.MRTKSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextToSpeechSubsystemCinfo_Equals_mD8D3AE549451BA207AB02D3D8E6C62647FE1FD7E (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* __this, MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* ___other0, const RuntimeMethod* method) 
{
	{
		// return base.Equals(other);
		MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* L_0 = ___other0;
		bool L_1;
		L_1 = MRTKSubsystemCinfo_Equals_m3111B01E6191DC1AAED8CBD2B6EB665FBC2A0B98(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystemCinfo__ctor_m89368C58F9C324DC83DFB5465B329F4EE406F802 (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* __this, const RuntimeMethod* method) 
{
	{
		MRTKSubsystemCinfo__ctor_m50B9CACB0C4603A8F87EE5277BE47E62846E0BA4(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::.ctor(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToSpeechSubsystemDescriptor__ctor_mA047A84F98373061E4E8520509E93A921904C95E (TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* __this, TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextToSpeechSubsystemDescriptor(TextToSpeechSubsystemCinfo cinfo) : base(cinfo)
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_0 = ___cinfo0;
		MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE(__this, L_0, MRTKSubsystemDescriptor_2__ctor_mC4AF81B96552F8BACF51658BCA3FD28F85ABE7AE_RuntimeMethod_var);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemDescriptor::Create(Microsoft.MixedReality.Toolkit.Subsystems.TextToSpeechSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* TextToSpeechSubsystemDescriptor_Create_m5437479128C55ECBCC37D543F9384F9D73D7A766 (TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* ___cinfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m28B6585B22BB8F4A4EB0F11D700FDA3F6BED5ED0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!XRSubsystemHelpers.CheckTypes<TextToSpeechSubsystem, TextToSpeechSubsystem.Provider>(
		//         cinfo.Name,
		//         cinfo.SubsystemTypeOverride,
		//         cinfo.ProviderType))
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_0 = ___cinfo0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MRTKSubsystemCinfo_get_Name_m16ABFCFB5920A666B7F322F15C5C1AA5197F481A_inline(L_0, NULL);
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_2 = ___cinfo0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = MRTKSubsystemCinfo_get_SubsystemTypeOverride_mEA66595FC7C1ED69D33F84557D17897FD017F76E_inline(L_2, NULL);
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_4 = ___cinfo0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = MRTKSubsystemCinfo_get_ProviderType_m4C8A14C25568D8C5E921C9686739E1A0E5F10276_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(XRSubsystemHelpers_tA18F832A935AE7E010D7AF0037A8F1789788CF45_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m28B6585B22BB8F4A4EB0F11D700FDA3F6BED5ED0(L_1, L_3, L_5, XRSubsystemHelpers_CheckTypes_TisTextToSpeechSubsystem_t827FAA820F37B837312A1C7049D9B117CE88071B_TisProvider_tF841F7BB1F3168836420305AA8B9DBE0B20AB175_m28B6585B22BB8F4A4EB0F11D700FDA3F6BED5ED0_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		// throw new ArgumentException("Could not create TextToSpeechSubsystemDescriptor.");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5542C2C12376B62727BB20CE9C9B84E76ACD561B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextToSpeechSubsystemDescriptor_Create_m5437479128C55ECBCC37D543F9384F9D73D7A766_RuntimeMethod_var)));
	}

IL_0024:
	{
		// return new TextToSpeechSubsystemDescriptor(cinfo);
		TextToSpeechSubsystemCinfo_t294DCEBA69E3EA93C94E0CE4F79B21D1EE29DEE8* L_8 = ___cinfo0;
		TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508* L_9 = (TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508*)il2cpp_codegen_object_new(TextToSpeechSubsystemDescriptor_tDF6F9192C6773E3CD621BB0E6C55FED4D9FB8508_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		TextToSpeechSubsystemDescriptor__ctor_mA047A84F98373061E4E8520509E93A921904C95E(L_9, L_8, NULL);
		return L_9;
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_OnEnable_m57D13FE64B45ED40B940F8FA8B4553765C7FB799 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	{
		// EnableEventRoutes();
		InteractableEventRouter_EnableEventRoutes_mF8B13F8D44F9A5FDE4596DADC8CCF86BA4519DC1(__this, NULL);
		// ConnectAllEventRoutesToInteractables();
		InteractableEventRouter_ConnectAllEventRoutesToInteractables_m1476D022287612212A527B2C05ACBF49FE723285(__this, NULL);
		// ConnectChildSources();
		InteractableEventRouter_ConnectChildSources_mA5644EA19B4B903538BD9B878C88B4E9BE996E1A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_OnDisable_m71AABC8BF01687FB15FACF796378DB2ED77C24C9 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	{
		// DisconnectChildSources();
		InteractableEventRouter_DisconnectChildSources_mA26A35F685DB2B0E9DD05604FCA3995495E44D6A(__this, NULL);
		// DisconnectAllEventRoutesFromKnownInteractables();
		InteractableEventRouter_DisconnectAllEventRoutesFromKnownInteractables_m082E25423F6A4AAE41CBF52556F5FA8F9AC552F7(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::OnTransformChildrenChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_OnTransformChildrenChanged_m8F484E3178D965FDD1DB48CD8A9D9535B60326A4 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	{
		// Refresh();
		InteractableEventRouter_Refresh_m9696063E303ABDBE2A01BE26C1998B075B4B8EBF(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_Refresh_m9696063E303ABDBE2A01BE26C1998B075B4B8EBF (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	{
		// DisconnectChildSources();
		InteractableEventRouter_DisconnectChildSources_mA26A35F685DB2B0E9DD05604FCA3995495E44D6A(__this, NULL);
		// DisconnectAllEventRoutesFromKnownInteractables();
		InteractableEventRouter_DisconnectAllEventRoutesFromKnownInteractables_m082E25423F6A4AAE41CBF52556F5FA8F9AC552F7(__this, NULL);
		// EnableEventRoutes();
		InteractableEventRouter_EnableEventRoutes_mF8B13F8D44F9A5FDE4596DADC8CCF86BA4519DC1(__this, NULL);
		// ConnectAllEventRoutesToInteractables();
		InteractableEventRouter_ConnectAllEventRoutesToInteractables_m1476D022287612212A527B2C05ACBF49FE723285(__this, NULL);
		// ConnectChildSources();
		InteractableEventRouter_ConnectChildSources_mA5644EA19B4B903538BD9B878C88B4E9BE996E1A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::EnableEventRoutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_EnableEventRoutes_mF8B13F8D44F9A5FDE4596DADC8CCF86BA4519DC1 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (eventRoutes != null)
		IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* L_0 = __this->___eventRoutes_7;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// for (int i = 0; i < eventRoutes.Length; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_000c:
	{
		// EnableEventRoute(eventRoutes[i]);
		IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* L_1 = __this->___eventRoutes_7;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		InteractableEventRouter_EnableEventRoute_mD393F8CEB17B0E4ECC24720A6C2772A5440E8489(__this, L_4, NULL);
		// for (int i = 0; i < eventRoutes.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < eventRoutes.Length; i++)
		int32_t L_6 = V_0;
		IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* L_7 = __this->___eventRoutes_7;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000c;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::EnableEventRoute(Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_EnableEventRoute_mD393F8CEB17B0E4ECC24720A6C2772A5440E8489 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, RuntimeObject* ___eventRoute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventRoute.OnEnabled(gameObject);
		RuntimeObject* L_0 = ___eventRoute0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::OnEnabled(UnityEngine.GameObject) */, IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectChildSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectChildSources_mA5644EA19B4B903538BD9B878C88B4E9BE996E1A (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390_m64139C378052537B379D1BC5B52D8F35A83CC7FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableEventRouter_ConnectAllEventRoutesToInteractables_m1476D022287612212A527B2C05ACBF49FE723285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m55B0F984DB08E7871BFE1C7960E6A682B33F01C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF10BF1067FAF215770D6653A40115274510369CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GetComponentsInChildren(includeInactive: true, childSources);
		List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* L_0 = __this->___childSources_6;
		Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390_m64139C378052537B379D1BC5B52D8F35A83CC7FA(__this, (bool)1, L_0, Component_GetComponentsInChildren_TisInteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390_m64139C378052537B379D1BC5B52D8F35A83CC7FA_RuntimeMethod_var);
		// for (int i = 0; i < childSources.Count; i++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0011:
	{
		// childSources[i].ChildrenChanged.AddListener(ConnectAllEventRoutesToInteractables);
		List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* L_1 = __this->___childSources_6;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390* L_3;
		L_3 = List_1_get_Item_mF10BF1067FAF215770D6653A40115274510369CB(L_1, L_2, List_1_get_Item_mF10BF1067FAF215770D6653A40115274510369CB_RuntimeMethod_var);
		NullCheck(L_3);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4;
		L_4 = InteractableEventRouterChildSource_get_ChildrenChanged_mC6EF9A8A8DF3C284F54D752EDBCB82D9B04BE75F_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)InteractableEventRouter_ConnectAllEventRoutesToInteractables_m1476D022287612212A527B2C05ACBF49FE723285_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// for (int i = 0; i < childSources.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < childSources.Count; i++)
		int32_t L_7 = V_0;
		List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* L_8 = __this->___childSources_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m55B0F984DB08E7871BFE1C7960E6A682B33F01C0_inline(L_8, List_1_get_Count_m55B0F984DB08E7871BFE1C7960E6A682B33F01C0_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectChildSources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectChildSources_mA26A35F685DB2B0E9DD05604FCA3995495E44D6A (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableEventRouter_ConnectAllEventRoutesToInteractables_m1476D022287612212A527B2C05ACBF49FE723285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m55B0F984DB08E7871BFE1C7960E6A682B33F01C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF10BF1067FAF215770D6653A40115274510369CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < childSources.Count; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// childSources[i].ChildrenChanged.RemoveListener(ConnectAllEventRoutesToInteractables);
		List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* L_0 = __this->___childSources_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390* L_2;
		L_2 = List_1_get_Item_mF10BF1067FAF215770D6653A40115274510369CB(L_0, L_1, List_1_get_Item_mF10BF1067FAF215770D6653A40115274510369CB_RuntimeMethod_var);
		NullCheck(L_2);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3;
		L_3 = InteractableEventRouterChildSource_get_ChildrenChanged_mC6EF9A8A8DF3C284F54D752EDBCB82D9B04BE75F_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)InteractableEventRouter_ConnectAllEventRoutesToInteractables_m1476D022287612212A527B2C05ACBF49FE723285_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_3, L_4, NULL);
		// for (int i = 0; i < childSources.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < childSources.Count; i++)
		int32_t L_6 = V_0;
		List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* L_7 = __this->___childSources_6;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m55B0F984DB08E7871BFE1C7960E6A682B33F01C0_inline(L_7, List_1_get_Count_m55B0F984DB08E7871BFE1C7960E6A682B33F01C0_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectAllEventRoutesToInteractables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectAllEventRoutesToInteractables_m1476D022287612212A527B2C05ACBF49FE723285 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// GetComponentsInChildren(includeInactive: true, newInteractables);
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_0 = __this->___newInteractables_5;
		Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C(__this, (bool)1, L_0, Component_GetComponentsInChildren_TisIXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA_mDBA9EDBBC4FA0776A4908B6DF27F624BEBF8A13C_RuntimeMethod_var);
		// for (int i = 0; i < newInteractables.Count; i++)
		V_0 = 0;
		goto IL_0062;
	}

IL_0011:
	{
		// var interactable = newInteractables[i];
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_1 = __this->___newInteractables_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E(L_1, L_2, List_1_get_Item_m813E4C01FA736EBD8792E6296BAA5143C5D59F0E_RuntimeMethod_var);
		V_1 = L_3;
		// if (activeInteractables.Add(interactable) && IsValidChild(interactable) && eventRoutes != null)
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_4 = __this->___activeInteractables_4;
		RuntimeObject* L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9(L_4, L_5, HashSet_1_Add_m9404CABBDD206B28449279E04821FD0D1BA6C5A9_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		bool L_8;
		L_8 = InteractableEventRouter_IsValidChild_m3855480BBDD3586704E09A4EB854AAF441E5D416(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* L_9 = __this->___eventRoutes_7;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// for (int j = 0; j < eventRoutes.Length; j++)
		V_2 = 0;
		goto IL_0053;
	}

IL_0041:
	{
		// eventRoutes[j].Register(interactable);
		IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* L_10 = __this->___eventRoutes_7;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		RuntimeObject* L_14 = V_1;
		NullCheck(L_13);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::Register(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var, L_13, L_14);
		// for (int j = 0; j < eventRoutes.Length; j++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0053:
	{
		// for (int j = 0; j < eventRoutes.Length; j++)
		int32_t L_16 = V_2;
		IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* L_17 = __this->___eventRoutes_7;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0041;
		}
	}

IL_005e:
	{
		// for (int i = 0; i < newInteractables.Count; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0062:
	{
		// for (int i = 0; i < newInteractables.Count; i++)
		int32_t L_19 = V_0;
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_20 = __this->___newInteractables_5;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_inline(L_20, List_1_get_Count_m247BF28F8A1F9F3EE681A1BBDFD364F19947AB7E_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::ConnectEventRouteToKnownInteractables(Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_ConnectEventRouteToKnownInteractables_m7779B3F96FF6CFFA2A43299CD558779DFCE76E9A (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, RuntimeObject* ___eventRoute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// if (eventRoute == null)
		RuntimeObject* L_0 = ___eventRoute0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// foreach (var activeInteractable in activeInteractables)
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_1 = __this->___activeInteractables_4;
		NullCheck(L_1);
		Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 L_2;
		L_2 = HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689(L_1, HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011((&V_0), Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0012_1:
			{
				// foreach (var activeInteractable in activeInteractables)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_inline((&V_0), Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
				V_1 = L_3;
				// eventRoute.Register(activeInteractable);
				RuntimeObject* L_4 = ___eventRoute0;
				RuntimeObject* L_5 = V_1;
				NullCheck(L_4);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::Register(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var, L_4, L_5);
			}

IL_0021_1:
			{
				// foreach (var activeInteractable in activeInteractables)
				bool L_6;
				L_6 = Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C((&V_0), Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectAllEventRoutesFromKnownInteractables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectAllEventRoutesFromKnownInteractables_m082E25423F6A4AAE41CBF52556F5FA8F9AC552F7 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (eventRoutes != null)
		IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* L_0 = __this->___eventRoutes_7;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// foreach (var interactable in activeInteractables)
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_1 = __this->___activeInteractables_4;
		NullCheck(L_1);
		Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 L_2;
		L_2 = HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689(L_1, HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011((&V_0), Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003f_1;
			}

IL_0016_1:
			{
				// foreach (var interactable in activeInteractables)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_inline((&V_0), Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
				V_1 = L_3;
				// for (int j = 0; j < eventRoutes.Length; j++)
				V_2 = 0;
				goto IL_0034_1;
			}

IL_0022_1:
			{
				// eventRoutes[j].Unregister(interactable);
				IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* L_4 = __this->___eventRoutes_7;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				RuntimeObject* L_8 = V_1;
				NullCheck(L_7);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var, L_7, L_8);
				// for (int j = 0; j < eventRoutes.Length; j++)
				int32_t L_9 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
			}

IL_0034_1:
			{
				// for (int j = 0; j < eventRoutes.Length; j++)
				int32_t L_10 = V_2;
				IXRInteractableEventRouteU5BU5D_t45F94C81726174ABA4FC125A318122846F739DB9* L_11 = __this->___eventRoutes_7;
				NullCheck(L_11);
				if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
				{
					goto IL_0022_1;
				}
			}

IL_003f_1:
			{
				// foreach (var interactable in activeInteractables)
				bool L_12;
				L_12 = Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C((&V_0), Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		// activeInteractables.Clear();
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_13 = __this->___activeInteractables_4;
		NullCheck(L_13);
		HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921(L_13, HashSet_1_Clear_mCED08157F9BBECF5C9781943201B246ACF5F2921_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::DisconnectEventRouteFromKnownInteractables(Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter_DisconnectEventRouteFromKnownInteractables_m6946D4CB94F0A79BE055108786F867B997862E78 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, RuntimeObject* ___eventRoute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		// if (eventRoute == null)
		RuntimeObject* L_0 = ___eventRoute0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// foreach (var activeInteractable in activeInteractables)
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_1 = __this->___activeInteractables_4;
		NullCheck(L_1);
		Enumerator_tEFC44512BCB13DD5B5716EBA28E4AC49C9F287C6 L_2;
		L_2 = HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689(L_1, HashSet_1_GetEnumerator_mEE0DCBC614A1F8A4D945852338C788739DC9F689_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011((&V_0), Enumerator_Dispose_mD2A0D948D72E3533FA73FB9B1A701D4D1E57E011_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0012_1:
			{
				// foreach (var activeInteractable in activeInteractables)
				RuntimeObject* L_3;
				L_3 = Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_inline((&V_0), Enumerator_get_Current_m096A818E0B9DE49A52F95338F08AEA557AA68CD4_RuntimeMethod_var);
				V_1 = L_3;
				// eventRoute.Unregister(activeInteractable);
				RuntimeObject* L_4 = ___eventRoute0;
				RuntimeObject* L_5 = V_1;
				NullCheck(L_4);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.IXRInteractableEventRoute::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractableEventRoute_tC6D3D618B1AAB28D03363EFF6DFAB6F24E11D93E_il2cpp_TypeInfo_var, L_4, L_5);
			}

IL_0021_1:
			{
				// foreach (var activeInteractable in activeInteractables)
				bool L_6;
				L_6 = Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C((&V_0), Enumerator_MoveNext_m1E87383340E72B28995FC3FFC907D16782BF4D7C_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::IsValidChild(UnityEngine.XR.Interaction.Toolkit.IXRInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractableEventRouter_IsValidChild_m3855480BBDD3586704E09A4EB854AAF441E5D416 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, RuntimeObject* ___interactable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* V_0 = NULL;
	{
		// return interactable is MonoBehaviour behaviour &&
		//     behaviour.gameObject != gameObject;
		RuntimeObject* L_0 = ___interactable0;
		V_0 = ((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)IsInstClass((RuntimeObject*)L_0, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_il2cpp_TypeInfo_var));
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_2 = V_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouter__ctor_mE2F134B8E8AFE24134D4DE3F437E312380A41859 (InteractableEventRouter_t1453E9B557F2893EC522F9C58A0DF293C43024E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDE28CE118362D02F2E1A9E5CAB6CBA010C5D710D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly HashSet<IXRInteractable> activeInteractables = new HashSet<IXRInteractable>();
		HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF* L_0 = (HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF*)il2cpp_codegen_object_new(HashSet_1_t9214798E84819EED4CB994B8F4D80D17BD48E3DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815(L_0, HashSet_1__ctor_m321F26D964CAFF6263B06C83093EA9741D907815_RuntimeMethod_var);
		__this->___activeInteractables_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeInteractables_4), (void*)L_0);
		// private readonly List<IXRInteractable> newInteractables = new List<IXRInteractable>();
		List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* L_1 = (List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810*)il2cpp_codegen_object_new(List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F(L_1, List_1__ctor_m5A52ADAE91EDC64DC6CDBAFEEDE2497E13744E0F_RuntimeMethod_var);
		__this->___newInteractables_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___newInteractables_5), (void*)L_1);
		// private readonly List<InteractableEventRouterChildSource> childSources = new List<InteractableEventRouterChildSource>();
		List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C* L_2 = (List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C*)il2cpp_codegen_object_new(List_1_t0650356AA1E1C6F129D86581EE3735C2EDB1F10C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mDE28CE118362D02F2E1A9E5CAB6CBA010C5D710D(L_2, List_1__ctor_mDE28CE118362D02F2E1A9E5CAB6CBA010C5D710D_RuntimeMethod_var);
		__this->___childSources_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childSources_6), (void*)L_2);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.BubbleChildHoverEvents::Register(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableParent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildHoverEvents_Register_m990D274DC598E9ADFCC863CF8BDC4E3D6D4FDDBC (BubbleChildHoverEvents_t86538890A357E4F7AAD4541ED9EE7E44C635B889* __this, RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractableParent_tCEA8005F8D88F6F11DFE562572F1F8DEC6398964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.hoverEntered.AddListener(target.OnChildHoverEntered);
		RuntimeObject* L_0 = ___source0;
		NullCheck(L_0);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_1;
		L_1 = InterfaceFuncInvoker0< HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverEntered() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___target1;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRHoverInteractableParent_tCEA8005F8D88F6F11DFE562572F1F8DEC6398964_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_1, L_4, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// source.hoverExited.AddListener(target.OnChildHoverExited);
		RuntimeObject* L_5 = ___source0;
		NullCheck(L_5);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_6;
		L_6 = InterfaceFuncInvoker0< HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverExited() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___target1;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_9 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRHoverInteractableParent_tCEA8005F8D88F6F11DFE562572F1F8DEC6398964_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_6, L_9, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.BubbleChildHoverEvents::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableParent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildHoverEvents_Unregister_m916A35FD4F443A58105F3777A5BEA823BBB8A476 (BubbleChildHoverEvents_t86538890A357E4F7AAD4541ED9EE7E44C635B889* __this, RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractableParent_tCEA8005F8D88F6F11DFE562572F1F8DEC6398964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.hoverEntered.RemoveListener(target.OnChildHoverEntered);
		RuntimeObject* L_0 = ___source0;
		NullCheck(L_0);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_1;
		L_1 = InterfaceFuncInvoker0< HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverEntered() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___target1;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRHoverInteractableParent_tCEA8005F8D88F6F11DFE562572F1F8DEC6398964_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_1, L_4, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// source.hoverExited.RemoveListener(target.OnChildHoverExited);
		RuntimeObject* L_5 = ___source0;
		NullCheck(L_5);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_6;
		L_6 = InterfaceFuncInvoker0< HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverExited() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___target1;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_9 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRHoverInteractableParent_tCEA8005F8D88F6F11DFE562572F1F8DEC6398964_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_6, L_9, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.BubbleChildHoverEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildHoverEvents__ctor_m435534732AA8EC319C4EDE40F899FAADDBFE73C2 (BubbleChildHoverEvents_t86538890A357E4F7AAD4541ED9EE7E44C635B889* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableParentEventRoute_2__ctor_m049C970D0CBE7B440F7006EE1A40DF45F96961EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractableParentEventRoute_2__ctor_m049C970D0CBE7B440F7006EE1A40DF45F96961EB(__this, InteractableParentEventRoute_2__ctor_m049C970D0CBE7B440F7006EE1A40DF45F96961EB_RuntimeMethod_var);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.TrickleChildHoverEvents::Register(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildHoverEvents_Register_mE8B66102E32DC474994E8E4B367ACFA4E190A85C (TrickleChildHoverEvents_tC89D37600C9256437817A8E093906B1688CF8399* __this, RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractableChild_t52B6B4FC20B1DC0F592C466E6FE4D6C6D24BCEB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.hoverEntered.AddListener(target.OnParentHoverEntered);
		RuntimeObject* L_0 = ___source0;
		NullCheck(L_0);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_1;
		L_1 = InterfaceFuncInvoker0< HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverEntered() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___target1;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRHoverInteractableChild_t52B6B4FC20B1DC0F592C466E6FE4D6C6D24BCEB5_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F(L_1, L_4, UnityEvent_1_AddListener_mAC66156659CCBF4F403AA58A3029F740AB221D8F_RuntimeMethod_var);
		// source.hoverExited.AddListener(target.OnParentHoverExited);
		RuntimeObject* L_5 = ___source0;
		NullCheck(L_5);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_6;
		L_6 = InterfaceFuncInvoker0< HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverExited() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___target1;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_9 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRHoverInteractableChild_t52B6B4FC20B1DC0F592C466E6FE4D6C6D24BCEB5_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722(L_6, L_9, UnityEvent_1_AddListener_m05144EB9F3BFA975DF4C33D66491674CFDF53722_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.TrickleChildHoverEvents::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRHoverInteractableChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildHoverEvents_Unregister_m66464FFC2B02A537F5353B5366F7793AF04FA386 (TrickleChildHoverEvents_tC89D37600C9256437817A8E093906B1688CF8399* __this, RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractableChild_t52B6B4FC20B1DC0F592C466E6FE4D6C6D24BCEB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.hoverEntered.RemoveListener(target.OnParentHoverEntered);
		RuntimeObject* L_0 = ___source0;
		NullCheck(L_0);
		HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* L_1;
		L_1 = InterfaceFuncInvoker0< HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverEntered() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___target1;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906* L_4 = (UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906*)il2cpp_codegen_object_new(UnityAction_1_t7821A7EA54C56577CDB3A8CF220894E704C5E906_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_m3C8E30AEA90302CA8E564E339058E839E40196F4(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRHoverInteractableChild_t52B6B4FC20B1DC0F592C466E6FE4D6C6D24BCEB5_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33(L_1, L_4, UnityEvent_1_RemoveListener_m171EFC9F72CB58EDA4139097DDCA155A3D9C7D33_RuntimeMethod_var);
		// source.hoverExited.RemoveListener(target.OnParentHoverExited);
		RuntimeObject* L_5 = ___source0;
		NullCheck(L_5);
		HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* L_6;
		L_6 = InterfaceFuncInvoker0< HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable::get_hoverExited() */, IXRHoverInteractable_t407C7F95A02C484D5EA2DB88ECE7A6C0E5B40EDD_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___target1;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B* L_9 = (UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B*)il2cpp_codegen_object_new(UnityAction_1_tEA316A79555AFDC4BC3AC6593643EDAF90C8898B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m917A650EF730B0F8CDB9227A03A45B24FB54BCF8(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRHoverInteractableChild_t52B6B4FC20B1DC0F592C466E6FE4D6C6D24BCEB5_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78(L_6, L_9, UnityEvent_1_RemoveListener_mB0EAA6A1EA777B455A6D9493E09DB3FA63B1FB78_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.TrickleChildHoverEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildHoverEvents__ctor_m859B02D01969166FCEFA42B376712F52A410554D (TrickleChildHoverEvents_tC89D37600C9256437817A8E093906B1688CF8399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableChildrenEventRoute_2__ctor_mAB2AE6334F14A28BDFD459CFF5FC411804A42F53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractableChildrenEventRoute_2__ctor_mAB2AE6334F14A28BDFD459CFF5FC411804A42F53(__this, InteractableChildrenEventRoute_2__ctor_mAB2AE6334F14A28BDFD459CFF5FC411804A42F53_RuntimeMethod_var);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.BubbleChildSelectEvents::Register(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableParent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildSelectEvents_Register_mA0370146512CC2E2780CCE7241E71CA1E8499EB3 (BubbleChildSelectEvents_t431FBA01E675E6FB39EFFBE9AF9D205B8BB994E3* __this, RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractableParent_t4B0BE706C46B43402F51FC17920D7CB6A8193762_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.selectEntered.AddListener(target.OnChildSelectEntered);
		RuntimeObject* L_0 = ___source0;
		NullCheck(L_0);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_1;
		L_1 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectEntered() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___target1;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_4 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRSelectInteractableParent_t4B0BE706C46B43402F51FC17920D7CB6A8193762_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_1, L_4, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// source.selectExited.AddListener(target.OnChildSelectExited);
		RuntimeObject* L_5 = ___source0;
		NullCheck(L_5);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = InterfaceFuncInvoker0< SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectExited() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___target1;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_9 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRSelectInteractableParent_t4B0BE706C46B43402F51FC17920D7CB6A8193762_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_6, L_9, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.BubbleChildSelectEvents::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableParent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildSelectEvents_Unregister_m3C91A62E80A757F68408C89E5E3E94B5CA6D9DD3 (BubbleChildSelectEvents_t431FBA01E675E6FB39EFFBE9AF9D205B8BB994E3* __this, RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractableParent_t4B0BE706C46B43402F51FC17920D7CB6A8193762_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.selectEntered.RemoveListener(target.OnChildSelectEntered);
		RuntimeObject* L_0 = ___source0;
		NullCheck(L_0);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_1;
		L_1 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectEntered() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___target1;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_4 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRSelectInteractableParent_t4B0BE706C46B43402F51FC17920D7CB6A8193762_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_1, L_4, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// source.selectExited.RemoveListener(target.OnChildSelectExited);
		RuntimeObject* L_5 = ___source0;
		NullCheck(L_5);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = InterfaceFuncInvoker0< SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectExited() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___target1;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_9 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRSelectInteractableParent_t4B0BE706C46B43402F51FC17920D7CB6A8193762_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_6, L_9, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.BubbleChildSelectEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BubbleChildSelectEvents__ctor_m8B05F5EF0DFE15AE17B8A940D1391B12ECF1D38F (BubbleChildSelectEvents_t431FBA01E675E6FB39EFFBE9AF9D205B8BB994E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableParentEventRoute_2__ctor_m03D0A84C0E950ABE0D45E68050E1F7ADA572D876_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractableParentEventRoute_2__ctor_m03D0A84C0E950ABE0D45E68050E1F7ADA572D876(__this, InteractableParentEventRoute_2__ctor_m03D0A84C0E950ABE0D45E68050E1F7ADA572D876_RuntimeMethod_var);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.TrickleChildSelectEvents::Register(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildSelectEvents_Register_mFA0DDDB5F6F53BCABC0CE795F1B8A41821849BCE (TrickleChildSelectEvents_t7778479D9AB67463B9411158520D5E9EF6CFFD45* __this, RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractableChild_tEBDC4D9BC532D64F07C796F2339DD38F2A70FBBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.selectEntered.AddListener(target.OnParentSelectEntered);
		RuntimeObject* L_0 = ___source0;
		NullCheck(L_0);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_1;
		L_1 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectEntered() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___target1;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_4 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRSelectInteractableChild_tEBDC4D9BC532D64F07C796F2339DD38F2A70FBBF_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_1, L_4, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// source.selectExited.AddListener(target.OnParentSelectExited);
		RuntimeObject* L_5 = ___source0;
		NullCheck(L_5);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = InterfaceFuncInvoker0< SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectExited() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___target1;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_9 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRSelectInteractableChild_tEBDC4D9BC532D64F07C796F2339DD38F2A70FBBF_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_6, L_9, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.TrickleChildSelectEvents::Unregister(UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,Microsoft.MixedReality.Toolkit.Experimental.IXRSelectInteractableChild)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildSelectEvents_Unregister_mB6304A475A18063E9500D3C55930E21E64924794 (TrickleChildSelectEvents_t7778479D9AB67463B9411158520D5E9EF6CFFD45* __this, RuntimeObject* ___source0, RuntimeObject* ___target1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractableChild_tEBDC4D9BC532D64F07C796F2339DD38F2A70FBBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.selectEntered.RemoveListener(target.OnParentSelectEntered);
		RuntimeObject* L_0 = ___source0;
		NullCheck(L_0);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_1;
		L_1 = InterfaceFuncInvoker0< SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* >::Invoke(2 /* UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectEntered() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___target1;
		RuntimeObject* L_3 = L_2;
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_4 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_4, L_3, (intptr_t)((void*)GetInterfaceMethodInfo(L_3, 0, IXRSelectInteractableChild_tEBDC4D9BC532D64F07C796F2339DD38F2A70FBBF_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB(L_1, L_4, UnityEvent_1_RemoveListener_m1008B118B379B498B23E13BB88779719C22EB9EB_RuntimeMethod_var);
		// source.selectExited.RemoveListener(target.OnParentSelectExited);
		RuntimeObject* L_5 = ___source0;
		NullCheck(L_5);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_6;
		L_6 = InterfaceFuncInvoker0< SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* >::Invoke(3 /* UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable::get_selectExited() */, IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = ___target1;
		RuntimeObject* L_8 = L_7;
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_9 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_9, L_8, (intptr_t)((void*)GetInterfaceMethodInfo(L_8, 1, IXRSelectInteractableChild_tEBDC4D9BC532D64F07C796F2339DD38F2A70FBBF_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B(L_6, L_9, UnityEvent_1_RemoveListener_m4353C3D43531002B6FBE7556246DB0A261672F9B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.TrickleChildSelectEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrickleChildSelectEvents__ctor_m73C4C05833AC7A73D469E13DE69F5B0E10BC944A (TrickleChildSelectEvents_t7778479D9AB67463B9411158520D5E9EF6CFFD45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractableChildrenEventRoute_2__ctor_m43566BED5C1E880C80BE4FD9438D7BA5843E28BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteractableChildrenEventRoute_2__ctor_m43566BED5C1E880C80BE4FD9438D7BA5843E28BE(__this, InteractableChildrenEventRoute_2__ctor_m43566BED5C1E880C80BE4FD9438D7BA5843E28BE_RuntimeMethod_var);
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
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::get_ChildrenChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* InteractableEventRouterChildSource_get_ChildrenChanged_mC6EF9A8A8DF3C284F54D752EDBCB82D9B04BE75F (InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent ChildrenChanged => childrenChanged;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___childrenChanged_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::OnTransformChildrenChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouterChildSource_OnTransformChildrenChanged_mD51B7514BB93F318A460E60F9DDDC375391BBE2D (InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390* __this, const RuntimeMethod* method) 
{
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_0 = NULL;
	{
		// childrenChanged?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___childrenChanged_4;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.InteractableEventRouterChildSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractableEventRouterChildSource__ctor_m992F4F06F309B8DE60EFF8327E0FC9F077A50810 (InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private UnityEvent childrenChanged = new UnityEvent();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)il2cpp_codegen_object_new(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(L_0, NULL);
		__this->___childrenChanged_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childrenChanged_4), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SubsystemProvider_get_running_m0331B5275B76BA00ACD2635216B455B599E41420_inline (SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_Running_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeywordRecognitionSubsystemCinfo_get_IsCloudBased_mE9994954E7AF49F138631A2F9FA1EC0162989EAF_inline (KeywordRecognitionSubsystemCinfo_tBED3D09030E45B0E23705D07C54D7206DD1DEEE2* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = __this->___U3CIsCloudBasedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeywordRecognitionSubsystemDescriptor_set_IsCloudBased_mB4E255EEB2AF1728860B80D6EF1312E69054A359_inline (KeywordRecognitionSubsystemDescriptor_tBA6E4A769F1C776F08DB0A23B3009BAB1877312A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsCloudBased { get; set; }
		bool L_0 = ___value0;
		__this->___U3CIsCloudBasedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MRTKSubsystemCinfo_get_Name_m16ABFCFB5920A666B7F322F15C5C1AA5197F481A_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_SubsystemTypeOverride_mEA66595FC7C1ED69D33F84557D17897FD017F76E_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) 
{
	{
		// public Type SubsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CSubsystemTypeOverrideU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MRTKSubsystemCinfo_get_ProviderType_m4C8A14C25568D8C5E921C9686739E1A0E5F10276_inline (MRTKSubsystemCinfo_t7F29FA251A9EE5ED588A90E3E2B0B343D4A7CDC3* __this, const RuntimeMethod* method) 
{
	{
		// public Type ProviderType { get; set; }
		Type_t* L_0 = __this->___U3CProviderTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* InteractableEventRouterChildSource_get_ChildrenChanged_mC6EF9A8A8DF3C284F54D752EDBCB82D9B04BE75F_inline (InteractableEventRouterChildSource_t40BA76E93CA6738C5F46721BA0C9AA4B8847A390* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent ChildrenChanged => childrenChanged;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___childrenChanged_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
