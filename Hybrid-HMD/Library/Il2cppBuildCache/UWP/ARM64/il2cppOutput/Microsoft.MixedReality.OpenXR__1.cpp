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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>
struct Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>
struct Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IEnumerable_1_tB83A3B12F5B9AAEC6CFF917CFDEB77D3AF2BB650;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IEqualityComparer_1_t3307DD9AF9B2FB6D29369AE34FAC79516C04F489;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>
struct KeyCollection_t5823C8DA2382CF92F1764470358479E3188C1A62;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>
struct KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct List_1_t160F335B05E7692BA4234AFD249D62316B990635;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct List_1_t511BD97C45CE630FB76E68532C127583B647161F;
// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>
struct List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem>
struct SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>
struct SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct TaskFactory_1_t473B37BD2E5B3F5EC2F0AF2DBC05A0C31BDAED38;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t540941697851E30F426086F3FF64AB8F3E6E8A36;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>
struct TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C;
// UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct ValidationUtility_1_t4071DC84AD0683D4663382F1ED47C6DFFF271FB5;
// UnityEngine.XR.ARSubsystems.ValidationUtility`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>
struct ValueCollection_t9853123B9054CBA3BE91C2A72D2DF6D196C48CB1;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct ValueCollection_t54435D0A93A5BD5EB6A04A450ACB34185B20BFA2;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>[]
struct EntryU5BU5D_t7B68FBCD8295231F4624FC74CC90AF09CB0533BE;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>[]
struct EntryU5BU5D_tB7A32D8CB3BA3DE15C6B3012D7DED16C6A874BBD;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.XR.ARSubsystems.TrackableId>[]
struct SlotU5BU5D_t8B6763663F83272EA8D1F0278A6E57A7EE836B73;
// Microsoft.MixedReality.OpenXR.ARMarkerType[]
struct ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker[]
struct XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC;
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor[]
struct XRMarkerSubsystemDescriptorU5BU5D_t29D66BBA61AEC7558FAAA08A31214A92ED40E64D;
// Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT[]
struct XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541;
// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem
struct AppRemotingSubsystem_t5DAAD43B0B15AABE4FB1B8ADEE65DFE7E589D7C8;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Microsoft.MixedReality.OpenXR.Remoting.ConnectedDelegate
struct ConnectedDelegate_tC4795FAAC0B8E30B338CDBE9AE0C0DA3684F0037;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.MixedReality.OpenXR.Remoting.DisconnectingDelegate
struct DisconnectingDelegate_tE566A8996A30FF60581620D354FDA22AC2FC7CDF;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Microsoft.MixedReality.OpenXR.IOpenXRContext
struct IOpenXRContext_t9516AC31F508ED22DB3791D6A9A88C9963328263;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// Microsoft.MixedReality.OpenXR.ISubsystemPlugin
struct ISubsystemPlugin_t40FA6639F1F57974DC348B62EA2DCE1A8EB74B82;
// Microsoft.MixedReality.OpenXR.Remoting.InternalValidateServerCertificateDelegate
struct InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351;
// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem
struct MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E;
// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController
struct MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Microsoft.MixedReality.OpenXR.OpenXRContext
struct OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97;
// Microsoft.MixedReality.OpenXR.Remoting.ReadyToStartDelegate
struct ReadyToStartDelegate_t7BDCD3E8F09C127F63A3845FD4A0F8E0F74AC72C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736;
// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateAuthenticationTokenDelegate
struct SecureRemotingValidateAuthenticationTokenDelegate_t47FFE3A67695F50C896AFC37F3E95061C63E3456;
// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateServerCertificateDelegate
struct SecureRemotingValidateServerCertificateDelegate_t9B7128E30F16E825EA5B3A2220D9479B07AD39B9;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper
struct StartOrStopXRHelper_t56F33A6CED037B6FBE229DC3C2E24A2993FECB70;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Microsoft.MixedReality.OpenXR.SubsystemController
struct SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Microsoft.MixedReality.OpenXR.XRAnchorStore
struct XRAnchorStore_tA17A979992A57D87A09540CA7959CAC6DBADAC93;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor
struct XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem
struct XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357;
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor
struct XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39
struct U3CDisconnectAndStopXRU3Ed__39_tDB4A2869C5D9B03236BF5AAF672C193860A808E8;
// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35
struct U3CListenLegacyU3Ed__35_tDCE65A47845B6D719D026268497B38C686714FCA;
// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider
struct OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA;
// Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1
struct U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider
struct Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C;
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider
struct Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC;

IL2CPP_EXTERN_C RuntimeClass* ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720;
IL2CPP_EXTERN_C String_t* _stringLiteral23DC94C1A21957C047FE1EB19F86F440997C76E7;
IL2CPP_EXTERN_C String_t* _stringLiteral5499AB62695100148435B68029C2A51DB3024FB8;
IL2CPP_EXTERN_C String_t* _stringLiteral56C8DE3C6A11CDB84EDEBBABC5ED0115711886B3;
IL2CPP_EXTERN_C String_t* _stringLiteral9B156E4DD192DAC930816A88E5407ABC60A09EB6;
IL2CPP_EXTERN_C String_t* _stringLiteralE92AB447C3883936D381052A946A6CF1CED1EFB7;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISubsystemPlugin_CreateSubsystem_TisXRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m1A23BDF123AF771DE0E0D8BC99000A2698E7D48A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISubsystemPlugin_DestroySubsystem_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m29E429B7340A8A442182BD2DAA371BE7A9443B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisconnectAndStopXRU3Ed__39_System_Collections_IEnumerator_Reset_m69EEAC2B753189D92500B18B31396E4965A4A4EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnsureInitializationU3Ed__1_System_Collections_IEnumerator_Reset_m0C4326E00ABF4958B8699FD34373965EBD79E5CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CListenLegacyU3Ed__35_System_Collections_IEnumerator_Reset_m0E59E423E549FD9796DD8E7E97ACCBBD9C55250D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736;;
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke;
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke;;

struct ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0;
struct XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC;
struct XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>
struct Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7B68FBCD8295231F4624FC74CC90AF09CB0533BE* ____entries_1;
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
	KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9853123B9054CBA3BE91C2A72D2DF6D196C48CB1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB7A32D8CB3BA3DE15C6B3012D7DED16C6A874BBD* ____entries_1;
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
	KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t54435D0A93A5BD5EB6A04A450ACB34185B20BFA2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B6763663F83272EA8D1F0278A6E57A7EE836B73* ____slots_8;
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

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>
struct KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* ____dictionary_0;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct List_1_t160F335B05E7692BA4234AFD249D62316B990635  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct List_1_t511BD97C45CE630FB76E68532C127583B647161F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>
struct List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMarkerSubsystemDescriptorU5BU5D_t29D66BBA61AEC7558FAAA08A31214A92ED40E64D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.XR.ARSubsystems.ValidationUtility`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.ValidationUtility`1::m_Trackables
	HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* ___m_Trackables_4;
};

// Microsoft.MixedReality.OpenXR.ARFoundation.ARAnchorExtensions
struct ARAnchorExtensions_t14B3EE61B7B4E6A6B39A16F0805BA8D35BA56C3A  : public RuntimeObject
{
};

// Microsoft.MixedReality.OpenXR.ARFoundation.AnchorManagerExtensions
struct AnchorManagerExtensions_tB321ADA06AF5E4B57B4370F055475EDB3170AD49  : public RuntimeObject
{
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.AnchorSubsystemExtensions
struct AnchorSubsystemExtensions_tE071EDB7D6F7E3864217BA3989D967DE415D5A19  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.MeshSubsystemExtensions
struct MeshSubsystemExtensions_tF543A0BA0DF8C9C71AA279F61559FE6362AAF424  : public RuntimeObject
{
};

// Microsoft.MixedReality.OpenXR.OpenXRContext
struct OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Microsoft.MixedReality.OpenXR.SubsystemController
struct SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF  : public RuntimeObject
{
	// Microsoft.MixedReality.OpenXR.IOpenXRContext Microsoft.MixedReality.OpenXR.SubsystemController::Context
	RuntimeObject* ___Context_0;
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

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRAnchorExtensions
struct XRAnchorExtensions_tE8843893302CEA7E59DBE4BE34A17D02D1532BD7  : public RuntimeObject
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

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39
struct U3CDisconnectAndStopXRU3Ed__39_tDB4A2869C5D9B03236BF5AAF672C193860A808E8  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39::<>4__this
	AppRemotingSubsystem_t5DAAD43B0B15AABE4FB1B8ADEE65DFE7E589D7C8* ___U3CU3E4__this_2;
};

// Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1
struct U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Guid>
struct NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>
struct NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem>
struct SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRAnchorSubsystemDescriptor_tE311C24D7BA2405DA537716807EBEB451F6A3C30* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tC23348CAA1FF3A0CAF374E321AECCAD47945849C* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>
struct SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* ___U3CproviderU3Ek__BackingField_3;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	XRAnchorStore_tA17A979992A57D87A09540CA7959CAC6DBADAC93* ___m_result_38;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration
struct InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6 
{
	// System.String Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration::RemoteHostName
	String_t* ___RemoteHostName_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration::RemotePort
	uint16_t ___RemotePort_1;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration::VideoCodec
	int32_t ___VideoCodec_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration::EnableAudio
	bool ___EnableAudio_4;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingAudioCaptureMode Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration::AudioCaptureMode
	int32_t ___AudioCaptureMode_5;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration
struct InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_pinvoke
{
	char* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
	int32_t ___AudioCaptureMode_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration
struct InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_com
{
	Il2CppChar* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
	int32_t ___AudioCaptureMode_5;
};

// Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration
struct InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139 
{
	// System.String Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration::ListenInterface
	String_t* ___ListenInterface_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration::HandshakeListenPort
	uint16_t ___HandshakeListenPort_1;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration::TransportListenPort
	uint16_t ___TransportListenPort_2;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_3;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration::VideoCodec
	int32_t ___VideoCodec_4;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration::EnableAudio
	bool ___EnableAudio_5;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingAudioCaptureMode Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration::AudioCaptureMode
	int32_t ___AudioCaptureMode_6;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration
struct InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_pinvoke
{
	char* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
	int32_t ___AudioCaptureMode_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration
struct InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_com
{
	Il2CppChar* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
	int32_t ___AudioCaptureMode_6;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController
struct MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7  : public SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF
{
};

// Microsoft.MixedReality.OpenXR.MeshComputeSettings
#pragma pack(push, tp, 8)
struct MeshComputeSettings_t9846F4B1842319A1C05A94581E0248E1253A896D 
{
	// Microsoft.MixedReality.OpenXR.MeshType Microsoft.MixedReality.OpenXR.MeshComputeSettings::meshType
	int32_t ___meshType_0;
	// Microsoft.MixedReality.OpenXR.VisualMeshLevelOfDetail Microsoft.MixedReality.OpenXR.MeshComputeSettings::visualMeshLevelOfDetail
	int32_t ___visualMeshLevelOfDetail_1;
	// Microsoft.MixedReality.OpenXR.MeshComputeConsistency Microsoft.MixedReality.OpenXR.MeshComputeSettings::meshComputeConsistency
	int32_t ___meshComputeConsistency_2;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.OpenXR.ARSubsystems.NativeQRCodeProperties
#pragma pack(push, tp, 8)
struct NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0 
{
	// Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerQRCodeSymbolTypeMSFT Microsoft.MixedReality.OpenXR.ARSubsystems.NativeQRCodeProperties::type
	int32_t ___type_0;
	// System.UInt32 Microsoft.MixedReality.OpenXR.ARSubsystems.NativeQRCodeProperties::version
	uint32_t ___version_1;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.OpenXR.QRCodeProperties
struct QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D 
{
	// System.UInt32 Microsoft.MixedReality.OpenXR.QRCodeProperties::version
	uint32_t ___version_0;
	// Microsoft.MixedReality.OpenXR.QRCodeType Microsoft.MixedReality.OpenXR.QRCodeProperties::type
	int32_t ___type_1;
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

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 
{
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::TrustedRoot
	bool ___TrustedRoot_0;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::Revoked
	bool ___Revoked_1;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::Expired
	bool ___Expired_2;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::WrongUsage
	bool ___WrongUsage_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::RevocationCheckFailed
	bool ___RevocationCheckFailed_4;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::InvalidCertOrChain
	bool ___InvalidCertOrChain_5;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingNameValidationResult Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult::NameValidationResult
	int32_t ___NameValidationResult_6;
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke
{
	int32_t ___TrustedRoot_0;
	int32_t ___Revoked_1;
	int32_t ___Expired_2;
	int32_t ___WrongUsage_3;
	int32_t ___RevocationCheckFailed_4;
	int32_t ___InvalidCertOrChain_5;
	int32_t ___NameValidationResult_6;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult
#pragma pack(push, tp, 8)
struct SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_com
{
	int32_t ___TrustedRoot_0;
	int32_t ___Revoked_1;
	int32_t ___Expired_2;
	int32_t ___WrongUsage_3;
	int32_t ___RevocationCheckFailed_4;
	int32_t ___InvalidCertOrChain_5;
	int32_t ___NameValidationResult_6;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration
struct SecureRemotingConnectConfiguration_t78E178B1FD2AF62EA5CADE4525CF5FAA02125164 
{
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration::AuthenticationToken
	String_t* ___AuthenticationToken_0;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration::PerformSystemValidation
	bool ___PerformSystemValidation_1;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateServerCertificateDelegate Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration::ValidateServerCertificateCallback
	SecureRemotingValidateServerCertificateDelegate_t9B7128E30F16E825EA5B3A2220D9479B07AD39B9* ___ValidateServerCertificateCallback_2;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration
struct SecureRemotingConnectConfiguration_t78E178B1FD2AF62EA5CADE4525CF5FAA02125164_marshaled_pinvoke
{
	char* ___AuthenticationToken_0;
	int32_t ___PerformSystemValidation_1;
	Il2CppMethodPointer ___ValidateServerCertificateCallback_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration
struct SecureRemotingConnectConfiguration_t78E178B1FD2AF62EA5CADE4525CF5FAA02125164_marshaled_com
{
	Il2CppChar* ___AuthenticationToken_0;
	int32_t ___PerformSystemValidation_1;
	Il2CppMethodPointer ___ValidateServerCertificateCallback_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.TimeOffsetInfo
struct TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9 
{
	// System.Single Microsoft.MixedReality.OpenXR.ARSubsystems.TimeOffsetInfo::lastOffsetCalculationTime
	float ___lastOffsetCalculationTime_0;
	// System.Single Microsoft.MixedReality.OpenXR.ARSubsystems.TimeOffsetInfo::offset
	float ___offset_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo
struct Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD 
{
	// System.String Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo
struct Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo
struct Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>
struct Enumerator_t413487DCCACC376393F93AF90282B4527081B999 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t160F335B05E7692BA4234AFD249D62316B990635* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ____current_3;
};

// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration>
struct Nullable_1_tBFE673EEE6DABC8D7E1569BB04A8FC0486E433AE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SecureRemotingConnectConfiguration_t78E178B1FD2AF62EA5CADE4525CF5FAA02125164 ___value_1;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956  : public SubsystemWithProvider_3_t9B46676D7BE943A96773ABEE0697A7F35EA89C3B
{
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>
struct TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C  : public SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F
{
};

// Microsoft.MixedReality.OpenXR.ARMarkerType
struct ARMarkerType_t98DB893DF1611EE7F97184C8A4659F4B63233326 
{
	// System.Int32 Microsoft.MixedReality.OpenXR.ARMarkerType::value__
	int32_t ___value___2;
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
	intptr_t ___method_ptr_0;
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

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker
#pragma pack(push, tp, 8)
struct NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 
{
	// System.Guid Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker::id
	Guid_t ___id_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_2;
	// UnityEngine.XR.ARSubsystems.TrackingState Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker::trackingState
	int32_t ___trackingState_3;
	// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker::center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_5;
	// System.Int64 Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker::lastSeenTime
	int64_t ___lastSeenTime_6;
	// Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker::type
	int32_t ___type_7;
};
#pragma pack(pop, tp)

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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration
struct SecureRemotingListenConfiguration_t4C1B3FFEF840E841960184AB981D7C8944C156C8 
{
	// Unity.Collections.NativeArray`1<System.Byte> Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::Certificate
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___Certificate_0;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::SubjectName
	String_t* ___SubjectName_1;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::KeyPassphrase
	String_t* ___KeyPassphrase_2;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateAuthenticationTokenDelegate Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::ValidateAuthenticationTokenCallback
	SecureRemotingValidateAuthenticationTokenDelegate_t47FFE3A67695F50C896AFC37F3E95061C63E3456* ___ValidateAuthenticationTokenCallback_3;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration
struct SecureRemotingListenConfiguration_t4C1B3FFEF840E841960184AB981D7C8944C156C8_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___Certificate_0;
	char* ___SubjectName_1;
	char* ___KeyPassphrase_2;
	Il2CppMethodPointer ___ValidateAuthenticationTokenCallback_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration
struct SecureRemotingListenConfiguration_t4C1B3FFEF840E841960184AB981D7C8944C156C8_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___Certificate_0;
	Il2CppChar* ___SubjectName_1;
	Il2CppChar* ___KeyPassphrase_2;
	Il2CppMethodPointer ___ValidateAuthenticationTokenCallback_3;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor
struct XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6  : public SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED
{
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT
struct XrSceneMarkerTypeMSFT_t59F7DE32A063CEB9C8A21B53FDF96EEF899ED083 
{
	// System.Int32 Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT::value__
	int32_t ___value___2;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider
struct Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC  : public SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D
{
};

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration>
struct Nullable_1_t5D8DD2569667FB0A7D785BB2F47BA5A0A9268813 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SecureRemotingListenConfiguration_t4C1B3FFEF840E841960184AB981D7C8944C156C8 ___value_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration
struct RemotingConnectConfiguration_t7004F753F51FE820351C7547D7D7DE140D01D466 
{
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::RemoteHostName
	String_t* ___RemoteHostName_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::RemotePort
	uint16_t ___RemotePort_1;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::VideoCodec
	int32_t ___VideoCodec_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::EnableAudio
	bool ___EnableAudio_4;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingAudioCaptureMode Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::AudioCaptureMode
	int32_t ___AudioCaptureMode_5;
	// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration> Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::secureConnectConfiguration
	Nullable_1_tBFE673EEE6DABC8D7E1569BB04A8FC0486E433AE ___secureConnectConfiguration_6;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration
#pragma pack(push, tp, 8)
struct RemotingConnectConfiguration_t7004F753F51FE820351C7547D7D7DE140D01D466_marshaled_pinvoke
{
	char* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
	int32_t ___AudioCaptureMode_5;
	Nullable_1_tBFE673EEE6DABC8D7E1569BB04A8FC0486E433AE ___secureConnectConfiguration_6;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration
#pragma pack(push, tp, 8)
struct RemotingConnectConfiguration_t7004F753F51FE820351C7547D7D7DE140D01D466_marshaled_com
{
	Il2CppChar* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
	int32_t ___AudioCaptureMode_5;
	Nullable_1_tBFE673EEE6DABC8D7E1569BB04A8FC0486E433AE ___secureConnectConfiguration_6;
};
#pragma pack(pop, tp)

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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF  : public TrackingSubsystem_4_tAE598621837B470F57C1F0867DC899BE9FDE8956
{
	// UnityEngine.XR.ARSubsystems.ValidationUtility`1<UnityEngine.XR.ARSubsystems.XRAnchor> UnityEngine.XR.ARSubsystems.XRAnchorSubsystem::m_ValidationUtility
	ValidationUtility_1_t4071DC84AD0683D4663382F1ED47C6DFFF271FB5* ___m_ValidationUtility_4;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker
struct XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 
{
	// UnityEngine.XR.ARSubsystems.TrackableId Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::<trackableId>k__BackingField
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___U3CtrackableIdU3Ek__BackingField_1;
	// UnityEngine.Pose Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::<pose>k__BackingField
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CposeU3Ek__BackingField_2;
	// UnityEngine.XR.ARSubsystems.TrackingState Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::<trackingState>k__BackingField
	int32_t ___U3CtrackingStateU3Ek__BackingField_3;
	// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::<center>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CcenterU3Ek__BackingField_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::<size>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CsizeU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::<lastSeenTime>k__BackingField
	float ___U3ClastSeenTimeU3Ek__BackingField_6;
	// Microsoft.MixedReality.OpenXR.TransformMode Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::<transformMode>k__BackingField
	int32_t ___U3CtransformModeU3Ek__BackingField_7;
	// Microsoft.MixedReality.OpenXR.ARMarkerType Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::<markerType>k__BackingField
	int32_t ___U3CmarkerTypeU3Ek__BackingField_8;
	// System.IntPtr Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::<nativePtr>k__BackingField
	intptr_t ___U3CnativePtrU3Ek__BackingField_9;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem
struct XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357  : public TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C
{
	// UnityEngine.XR.ARSubsystems.ValidationUtility`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker> Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::m_ValidationUtility
	ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* ___m_ValidationUtility_4;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider
struct OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA  : public Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC
{
	// Microsoft.MixedReality.OpenXR.ARMarkerType[] Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::m_enabledMarkerTypes
	ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___m_enabledMarkerTypes_1;
	// Microsoft.MixedReality.OpenXR.TransformMode Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::m_defaultTransformMode
	int32_t ___m_defaultTransformMode_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::m_Markers
	Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* ___m_Markers_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::m_PendingTransforms
	Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* ___m_PendingTransforms_4;
	// Microsoft.MixedReality.OpenXR.ARSubsystems.TimeOffsetInfo Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::m_TimeOffsetInfo
	TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9 ___m_TimeOffsetInfo_5;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Microsoft.MixedReality.OpenXR.Remoting.InternalValidateServerCertificateDelegate
struct InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem
struct MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E  : public XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
struct RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8 
{
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::ListenInterface
	String_t* ___ListenInterface_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::HandshakeListenPort
	uint16_t ___HandshakeListenPort_1;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::TransportListenPort
	uint16_t ___TransportListenPort_2;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_3;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::VideoCodec
	int32_t ___VideoCodec_4;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::EnableAudio
	bool ___EnableAudio_5;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingAudioCaptureMode Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::AudioCaptureMode
	int32_t ___AudioCaptureMode_6;
	// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration> Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::secureListenConfiguration
	Nullable_1_t5D8DD2569667FB0A7D785BB2F47BA5A0A9268813 ___secureListenConfiguration_7;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8_marshaled_pinvoke
{
	char* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
	int32_t ___AudioCaptureMode_6;
	Nullable_1_t5D8DD2569667FB0A7D785BB2F47BA5A0A9268813 ___secureListenConfiguration_7;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8_marshaled_com
{
	Il2CppChar* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
	int32_t ___AudioCaptureMode_6;
	Nullable_1_t5D8DD2569667FB0A7D785BB2F47BA5A0A9268813 ___secureListenConfiguration_7;
};
#pragma pack(pop, tp)

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

// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2  : public IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03
{
};

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem
struct AppRemotingSubsystem_t5DAAD43B0B15AABE4FB1B8ADEE65DFE7E589D7C8  : public RuntimeObject
{
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::m_runtimeOverrideAttempted
	bool ___m_runtimeOverrideAttempted_1;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::m_remotingConnectConfiguration
	RemotingConnectConfiguration_t7004F753F51FE820351C7547D7D7DE140D01D466 ___m_remotingConnectConfiguration_3;
	// Microsoft.MixedReality.OpenXR.Remoting.DisconnectReason Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::m_disconnectReasonOnLossPending
	int32_t ___m_disconnectReasonOnLossPending_6;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::m_remotingListenConfiguration
	RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8 ___m_remotingListenConfiguration_8;
	// Microsoft.MixedReality.OpenXR.Remoting.ReadyToStartDelegate Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::ReadyToStart
	ReadyToStartDelegate_t7BDCD3E8F09C127F63A3845FD4A0F8E0F74AC72C* ___ReadyToStart_12;
	// Microsoft.MixedReality.OpenXR.Remoting.DisconnectingDelegate Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::Disconnecting
	DisconnectingDelegate_tE566A8996A30FF60581620D354FDA22AC2FC7CDF* ___Disconnecting_13;
	// Microsoft.MixedReality.OpenXR.Remoting.ConnectedDelegate Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::Connected
	ConnectedDelegate_tC4795FAAC0B8E30B338CDBE9AE0C0DA3684F0037* ___Connected_14;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35
struct U3CListenLegacyU3Ed__35_tDCE65A47845B6D719D026268497B38C686714FCA  : public RuntimeObject
{
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::listenConfiguration
	RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8 ___listenConfiguration_2;
	// Microsoft.MixedReality.OpenXR.Remoting.ListenMode Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::listenMode
	int32_t ___listenMode_3;
	// System.Action Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::onRemotingListenCompleted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onRemotingListenCompleted_4;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::<>4__this
	AppRemotingSubsystem_t5DAAD43B0B15AABE4FB1B8ADEE65DFE7E589D7C8* ___U3CU3E4__this_5;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper
struct StartOrStopXRHelper_t56F33A6CED037B6FBE229DC3C2E24A2993FECB70  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<origin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CoriginU3Ek__BackingField_8;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CsessionOriginU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_10;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_11;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARAnchor
struct ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06  : public ARTrackable_2_tE57413318307EA1D5A47931CA675B32B49A1D79B
{
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_16;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>

// System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct List_1_t160F335B05E7692BA4234AFD249D62316B990635_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>

// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct List_1_t511BD97C45CE630FB76E68532C127583B647161F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>
struct List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMarkerSubsystemDescriptorU5BU5D_t29D66BBA61AEC7558FAAA08A31214A92ED40E64D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>

// UnityEngine.XR.ARSubsystems.ValidationUtility`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>
struct ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F_StaticFields
{
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.ValidationUtility`1::s_IdSet
	HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* ___s_IdSet_0;
	// System.String UnityEngine.XR.ARSubsystems.ValidationUtility`1::k_AddedAction
	String_t* ___k_AddedAction_1;
	// System.String UnityEngine.XR.ARSubsystems.ValidationUtility`1::k_UpdatedAction
	String_t* ___k_UpdatedAction_2;
	// System.String UnityEngine.XR.ARSubsystems.ValidationUtility`1::k_RemovedAction
	String_t* ___k_RemovedAction_3;
};

// UnityEngine.XR.ARSubsystems.ValidationUtility`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// Microsoft.MixedReality.OpenXR.ARFoundation.ARAnchorExtensions

// Microsoft.MixedReality.OpenXR.ARFoundation.ARAnchorExtensions

// Microsoft.MixedReality.OpenXR.ARFoundation.AnchorManagerExtensions

// Microsoft.MixedReality.OpenXR.ARFoundation.AnchorManagerExtensions

// Microsoft.MixedReality.OpenXR.ARSubsystems.AnchorSubsystemExtensions

// Microsoft.MixedReality.OpenXR.ARSubsystems.AnchorSubsystemExtensions

// Microsoft.MixedReality.OpenXR.ARSubsystems.MeshSubsystemExtensions

// Microsoft.MixedReality.OpenXR.ARSubsystems.MeshSubsystemExtensions

// Microsoft.MixedReality.OpenXR.OpenXRContext
struct OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97_StaticFields
{
	// Microsoft.MixedReality.OpenXR.OpenXRContext Microsoft.MixedReality.OpenXR.OpenXRContext::<Current>k__BackingField
	OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97* ___U3CCurrentU3Ek__BackingField_0;
};

// Microsoft.MixedReality.OpenXR.OpenXRContext

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Microsoft.MixedReality.OpenXR.SubsystemController

// Microsoft.MixedReality.OpenXR.SubsystemController

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRAnchorExtensions

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRAnchorExtensions

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39

// Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1

// Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Guid>

// Unity.Collections.NativeArray`1<System.Guid>

// Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>

// Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>

// Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t473B37BD2E5B3F5EC2F0AF2DBC05A0C31BDAED38* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration

// Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration

// Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration

// Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController
struct MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::s_MarkerDescriptors
	List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* ___s_MarkerDescriptors_1;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController

// Microsoft.MixedReality.OpenXR.MeshComputeSettings

// Microsoft.MixedReality.OpenXR.MeshComputeSettings

// Microsoft.MixedReality.OpenXR.ARSubsystems.NativeQRCodeProperties

// Microsoft.MixedReality.OpenXR.ARSubsystems.NativeQRCodeProperties

// Microsoft.MixedReality.OpenXR.QRCodeProperties

// Microsoft.MixedReality.OpenXR.QRCodeProperties

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult

// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult

// System.Single

// System.Single

// Microsoft.MixedReality.OpenXR.ARSubsystems.TimeOffsetInfo

// Microsoft.MixedReality.OpenXR.ARSubsystems.TimeOffsetInfo

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

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

// System.Void

// System.Void

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>

// Microsoft.MixedReality.OpenXR.ARMarkerType

// Microsoft.MixedReality.OpenXR.ARMarkerType

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker

// Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor

// Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT

// Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider

// System.Type
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

// System.Type

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRAnchor

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem

// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker
struct XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_StaticFields
{
	// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::s_Default
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___s_Default_0;
};

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem

// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// Microsoft.MixedReality.OpenXR.Remoting.InternalValidateServerCertificateDelegate

// Microsoft.MixedReality.OpenXR.Remoting.InternalValidateServerCertificateDelegate

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem

// Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem

// System.NotSupportedException

// System.NotSupportedException

// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration

// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration

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

// UnityEngine.XR.XRMeshSubsystem

// UnityEngine.XR.XRMeshSubsystem

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem
struct AppRemotingSubsystem_t5DAAD43B0B15AABE4FB1B8ADEE65DFE7E589D7C8_StaticFields
{
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::m_instance
	AppRemotingSubsystem_t5DAAD43B0B15AABE4FB1B8ADEE65DFE7E589D7C8* ___m_instance_0;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingState Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::s_remotingState
	int32_t ___s_remotingState_2;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::s_secureRemotingConnectConfiguration
	SecureRemotingConnectConfiguration_t78E178B1FD2AF62EA5CADE4525CF5FAA02125164 ___s_secureRemotingConnectConfiguration_4;
	// Microsoft.MixedReality.OpenXR.Remoting.InternalValidateServerCertificateDelegate Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::s_internalValidateServerCertificateCallback
	InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* ___s_internalValidateServerCertificateCallback_5;
	// Microsoft.MixedReality.OpenXR.Remoting.ListenMode Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::s_listenMode
	int32_t ___s_listenMode_7;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::s_secureRemotingListenConfiguration
	SecureRemotingListenConfiguration_t4C1B3FFEF840E841960184AB981D7C8944C156C8 ___s_secureRemotingListenConfiguration_9;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateAuthenticationTokenDelegate Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::s_validateAuthenticationTokenCallback
	SecureRemotingValidateAuthenticationTokenDelegate_t47FFE3A67695F50C896AFC37F3E95061C63E3456* ___s_validateAuthenticationTokenCallback_10;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::<UseSystemRuntime>k__BackingField
	bool ___U3CUseSystemRuntimeU3Ek__BackingField_11;
};

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>

// Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper

// Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper

// UnityEngine.XR.ARFoundation.ARAnchor

// UnityEngine.XR.ARFoundation.ARAnchor

// UnityEngine.XR.ARFoundation.ARAnchorManager

// UnityEngine.XR.ARFoundation.ARAnchorManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.OpenXR.ARMarkerType[]
struct ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801  : public RuntimeArray
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
// Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT[]
struct XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541  : public RuntimeArray
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
// UnityEngine.XR.ARSubsystems.TrackableId[]
struct TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0  : public RuntimeArray
{
	ALIGN_FIELD (8) TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 m_Items[1];

	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker[]
struct XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC  : public RuntimeArray
{
	ALIGN_FIELD (8) XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 m_Items[1];

	inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke(const SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736& unmarshaled, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_back(const SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke& marshaled, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736& unmarshaled);
IL2CPP_EXTERN_C void SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_cleanup(SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke& marshaled);

// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ValidationUtility`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_gshared (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_m8ABCB883CE361A387BBF3C6F049F808DFD561DDC_gshared (TrackingSubsystem_4_t540941697851E30F426086F3FF64AB8F3E6E8A36* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ValidationUtility`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::ValidateAndDisposeIfThrown(UnityEngine.XR.ARSubsystems.TrackableChanges`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_gshared (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* __this, TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 ___0_changes, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m877BB6551C6E358BA735387AD52394801234E96C_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_gshared (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_gshared (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Guid>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_gshared (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Guid>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_gshared (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_gshared (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_nativeArray, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Guid>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_gshared (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 ___0_nativeArray, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m2A78C109C5456536EEB8A2452FB65A51A5CD665D_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t5823C8DA2382CF92F1764470358479E3188C1A62* Dictionary_2_get_Keys_mA78D2F8F73A5A840930E849037B7F7F0A656A27E_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.XR.ARSubsystems.TrackableId>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t160F335B05E7692BA4234AFD249D62316B990635* Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t413487DCCACC376393F93AF90282B4527081B999 List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_gshared (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_gshared (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_gshared_inline (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m5C2E08B27B789AE40BC206CF7D39FC4BAA2AD065_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_gshared_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_gshared (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m0CE5A051CD529884B9D70361C50F87469B679A96_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_gshared (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_gshared (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_gshared (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_gshared (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, int32_t ___0_index, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_gshared_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_gshared (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_gshared (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::.ctor(T[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_gshared (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496* __this, XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(T[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_gshared (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E* __this, TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::CopyFrom(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_gshared (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___0_added, NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___1_updated, NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___2_removed, int32_t ___3_allocator, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m7EAF60416014D3F34E6A8A086276027199003657_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_gshared (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6361ACBA0E4244CDE236681BEA768F766459BD25_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Int32Enum>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mC21C844B05D3ABF3525B132CF630D7A551B0BA98_gshared (Dictionary_2_t8201E1B24F744EAB220281FE4E2EE3E29FC970C0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_gshared (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem::ListenRoutine(Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration,Microsoft.MixedReality.OpenXR.Remoting.ListenMode,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppRemotingSubsystem_ListenRoutine_m5938C5A37A1CAB749F60335CE7022C38EAA62868 (AppRemotingSubsystem_t5DAAD43B0B15AABE4FB1B8ADEE65DFE7E589D7C8* __this, RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8 ___0_listenConfiguration, int32_t ___1_listenMode, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_onRemotingListenCompleted, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.OpenXR.OpenXRContext Microsoft.MixedReality.OpenXR.OpenXRContext::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97* OpenXRContext_get_Current_m80D4A82031916348CFA840AA4970EBCC7B3972B2_inline (const RuntimeMethod* method) ;
// System.UInt64 Microsoft.MixedReality.OpenXR.OpenXRContext::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OpenXRContext_get_Instance_m3BE6AA1765B9375CBD0EC9ADCC039E68EEACD2AA (OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::DestroyAnchorSubsystemPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_DestroyAnchorSubsystemPending_m5DB500177F76FD5F6015FFE7328F7BE62340F11F (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::RemoveAllAnchors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_RemoveAllAnchors_mB08D3EABE8503EDB5919F3D3E7C93D4F3980B754 (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::DisconnectRemoting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_DisconnectRemoting_m3E89386FEA9939B8BD35F1B48B7D6047D2428C8E (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper::StopXrLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartOrStopXRHelper_StopXrLoader_m50CE6005FCB3C414DB937D20389A284E8D365391 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper::EnsureInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartOrStopXRHelper_EnsureInitialization_mD30DDC027190093AA82A98B856C5850F149F47DA (const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInitializationU3Ed__1__ctor_mD9EF163E9D27407C91958A5B551A32B6BAE262D8 (U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARFoundation.ARAnchor::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F (ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* __this, const RuntimeMethod* method) ;
// System.UInt64 Microsoft.MixedReality.OpenXR.AnchorConverter::ToOpenXRHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t AnchorConverter_ToOpenXRHandle_m3EBC72B383781267FCF5E2DC0BB5CC1F1E073B91 (intptr_t ___0_nativePtr, const RuntimeMethod* method) ;
// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>::get_subsystem()
inline XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_inline (SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3* __this, const RuntimeMethod* method)
{
	return ((  XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* (*) (SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3*, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore> Microsoft.MixedReality.OpenXR.XRAnchorStore::LoadAnchorStoreAsync(UnityEngine.XR.ARSubsystems.XRAnchorSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* XRAnchorStore_LoadAnchorStoreAsync_mE2B6F2B8EC3C19BE851E90D4C24253B2A70BB4D3 (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___0_anchorSubsystem, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_pose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_trackingState(UnityEngine.XR.ARSubsystems.TrackingState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_center(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_size(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_lastSeenTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_transformMode(Microsoft.MixedReality.OpenXR.TransformMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,Microsoft.MixedReality.OpenXR.TransformMode,Microsoft.MixedReality.OpenXR.ARMarkerType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_size, float ___5_lastSeenTime, int32_t ___6_transformMode, int32_t ___7_markerType, intptr_t ___8_nativePtr, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_center()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_lastSeenTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.OpenXR.TransformMode Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_transformMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.OpenXR.ARMarkerType Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_markerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline (const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ValidationUtility`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::.ctor()
inline void ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193 (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* __this, const RuntimeMethod* method)
{
	((  void (*) (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F*, const RuntimeMethod*))ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E (TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_tF56E54AAA20020788FD751DB507BF114FDA7F37C*, const RuntimeMethod*))TrackingSubsystem_4__ctor_m8ABCB883CE361A387BBF3C6F049F808DFD561DDC_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>::get_provider()
inline Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline (SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F* __this, const RuntimeMethod* method)
{
	return ((  Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* (*) (SubsystemWithProvider_3_t6BE1E3098EABAB2CCADAE626A4DB9DB8D4E38D7F*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 XRMarker_get_defaultValue_m049879891BEA32B4545D12BFEA87D0A0D0C9D8C9_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ValidationUtility`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::ValidateAndDisposeIfThrown(UnityEngine.XR.ARSubsystems.TrackableChanges`1<T>)
inline void ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* __this, TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 ___0_changes, const RuntimeMethod* method)
{
	((  void (*) (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F*, TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1, const RuntimeMethod*))ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_gshared)(__this, ___0_changes, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB (SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t0FC44397762C3D7F50C09E3117381BA1D8E46D4D*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor::.ctor(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystemDescriptor__ctor_m6D1DB7BCFCAF187DDAEE3B9BB97117B0F3B31AF2 (XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* __this, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6 (SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t5371C1AD13691BAA44EEB7D822245FB2802024ED*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.OpenXR.InternalMeshSettings::TrySetMeshComputeSettings(Microsoft.MixedReality.OpenXR.MeshComputeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalMeshSettings_TrySetMeshComputeSettings_m47DE5488CC1F9CBD2BA64A132B9EC75EE572CA19 (MeshComputeSettings_t9846F4B1842319A1C05A94581E0248E1253A896D ___0_settings, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor::Create(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystemDescriptor_Create_m5715C97F3DC18D0067B0FE10057DDE6F4E3D07E3 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD ___0_cinfo, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem__ctor_m9000E1906DD784DDA122B0CF8001E77F71D39F49 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::.ctor()
inline void Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, const RuntimeMethod*))Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>::.ctor()
inline void Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, const RuntimeMethod*))Dictionary_2__ctor_m877BB6551C6E358BA735387AD52394801234E96C_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A9559F0ED02F5F43A41231B6BB779FD616B164A (Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::DestroyMarkerSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_DestroyMarkerSubsystem_m499DDDF21B0239835937185F67C6B7C249D9078A (const RuntimeMethod* method) ;
// Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT[] Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ToXrSceneMarkerTypeMSFT(Microsoft.MixedReality.OpenXR.ARMarkerType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* OpenXRProvider_ToXrSceneMarkerTypeMSFT_m433281740A18B0C24D39984CABD5AA7A8F5D3802 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___0_markerTypes, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::SetEnabledMarkerTypes(Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_SetEnabledMarkerTypes_mDAB969557B62E417117D767C6C68A7C7116367DA (XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* ___0_enabledMarkerTypes, int32_t ___1_numMarkerTypes, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Int64 Microsoft.MixedReality.OpenXR.NativeLib::GetCurrentQpcTimeAsXrTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NativeLib_GetCurrentQpcTimeAsXrTime_m88ED8DA9E9B9761C91CF2D6E4A64B1AF0DC08CE0 (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::GetNumMarkerChanges(Microsoft.MixedReality.OpenXR.FrameTime,System.UInt32&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetNumMarkerChanges_m040A1C5B968567A22997E479824C891CA964684C (int32_t ___0_frameTime, uint32_t* ___1_numAddedMarkers, uint32_t* ___2_numUpdatedMarkers, uint32_t* ___3_numRemovedMarkers, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262 (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>::Dispose()
inline void NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7 (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE*, const RuntimeMethod*))NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Guid>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6 (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Guid>::Dispose()
inline void NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250 (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8*, const RuntimeMethod*))NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_gshared)(__this, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66 (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_gshared)(___0_nativeArray, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Guid>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_gshared)(___0_nativeArray, method);
}
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::GetMarkerChanges(System.UInt32,System.Void*,System.UInt32,System.Void*,System.UInt32,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetMarkerChanges_m7667F23DCFFCD310EEC8AA72EE636816F01E741C (uint32_t ___0_addedMarkersSize, void* ___1_addedMarkers, uint32_t ___2_updatedMarkersSize, void* ___3_updatedMarkers, uint32_t ___4_removedMarkersSize, void* ___5_removedMarkers, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::HandleAddedMarkers(Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t511BD97C45CE630FB76E68532C127583B647161F* OpenXRProvider_HandleAddedMarkers_mF4B821358D290648E05F13D47CDB9F3696C38511 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_addedNativeMarkers, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::HandleUpdatedMarkers(Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t511BD97C45CE630FB76E68532C127583B647161F* OpenXRProvider_HandleUpdatedMarkers_mE0BD2DDB1A7D9559291ABDF10083C71736088C80 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_updatedNativeMarkers, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId[] Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::HandleRemovedMarkers(Unity.Collections.NativeArray`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* OpenXRProvider_HandleRemovedMarkers_m3C7AC3CC49565AA5D723CAAFD9B29AAF2A412C4E (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 ___0_removedNativeMarkers, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>::get_Count()
inline int32_t Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, const RuntimeMethod*))Dictionary_2_get_Count_m2A78C109C5456536EEB8A2452FB65A51A5CD665D_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>::get_Keys()
inline KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9* Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9* (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, const RuntimeMethod*))Dictionary_2_get_Keys_mA78D2F8F73A5A840930E849037B7F7F0A656A27E_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.XR.ARSubsystems.TrackableId>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t160F335B05E7692BA4234AFD249D62316B990635* Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t160F335B05E7692BA4234AFD249D62316B990635* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.TrackableId>::GetEnumerator()
inline Enumerator_t413487DCCACC376393F93AF90282B4527081B999 List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1 (List_1_t160F335B05E7692BA4234AFD249D62316B990635* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t413487DCCACC376393F93AF90282B4527081B999 (*) (List_1_t160F335B05E7692BA4234AFD249D62316B990635*, const RuntimeMethod*))List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
inline void Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t413487DCCACC376393F93AF90282B4527081B999*, const RuntimeMethod*))Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::get_Current()
inline TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_inline (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method)
{
	return ((  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 (*) (Enumerator_t413487DCCACC376393F93AF90282B4527081B999*, const RuntimeMethod*))Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::get_Item(TKey)
inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_get_Item_m5C2E08B27B789AE40BC206CF7D39FC4BAA2AD065_gshared)(__this, ___0_key, method);
}
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ApplyTransform(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyTransform_mC47D48E167009A7AC3F69FAC7F337BC2F9818227 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::Add(T)
inline void List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.TrackableId>::MoveNext()
inline bool Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t413487DCCACC376393F93AF90282B4527081B999*, const RuntimeMethod*))Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>::Clear()
inline void Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, const RuntimeMethod*))Dictionary_2_Clear_m0CE5A051CD529884B9D70361C50F87469B679A96_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor()
inline void HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705 (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B*, const RuntimeMethod*))HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::get_Item(System.Int32)
inline XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, int32_t, const RuntimeMethod*))List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>::Add(T)
inline bool HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_gshared)(__this, ___0_item, method);
}
// System.Boolean Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::IsLastSeenTimeTooOld(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRProvider_IsLastSeenTimeTooOld_mC9BBE6C8FD3AEBF16C5AC66E85EC9351A07B9416 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::set_Item(System.Int32,T)
inline void List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, int32_t ___0_index, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, int32_t, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::get_Count()
inline int32_t List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, const RuntimeMethod*))List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::get_Keys()
inline KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, const RuntimeMethod*))Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.ARSubsystems.TrackableId>::Contains(T)
inline bool HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_gshared)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::ToArray()
inline XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1 (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method)
{
	return ((  XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, const RuntimeMethod*))List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::.ctor(T[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5 (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496* __this, XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496*, XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_gshared)(__this, ___0_array, ___1_allocator, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(T[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715 (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E* __this, TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* ___0_array, int32_t ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E*, TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_gshared)(__this, ___0_array, ___1_allocator, method);
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::CopyFrom(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
inline TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___0_added, NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 ___1_updated, NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___2_removed, int32_t ___3_allocator, const RuntimeMethod* method)
{
	return ((  TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 (*) (NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496, NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496, NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E, int32_t, const RuntimeMethod*))TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_gshared)(___0_added, ___1_updated, ___2_removed, ___3_allocator, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, int32_t, const RuntimeMethod*))Dictionary_2_Add_m7EAF60416014D3F34E6A8A086276027199003657_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Guid Microsoft.MixedReality.OpenXR.FeatureUtils::ToGuid(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t FeatureUtils_ToGuid_mE584D409DA9B609AD40CD86340655B9E8996FFE9 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_id, const RuntimeMethod* method) ;
// System.UInt32 Microsoft.MixedReality.OpenXR.NativeLib::GetMarkerRawDataSize(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeLib_GetMarkerRawDataSize_m48B9EE302FB55610AF2739137D14465DFAA005D0 (Guid_t ___0_markerId, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared)(___0_nativeArray, method);
}
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::GetMarkerRawData(System.Guid,System.Void*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetMarkerRawData_m544920DF405472FA3A93CDA3919894C630F65AFF (Guid_t ___0_markerId, void* ___1_rawDataOut, uint32_t ___2_capacity, const RuntimeMethod* method) ;
// System.UInt32 Microsoft.MixedReality.OpenXR.NativeLib::GetMarkerDecodedStringLength(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NativeLib_GetMarkerDecodedStringLength_m2A8FE807631CBDE22CC9B137501621E3D8208F8F (Guid_t ___0_markerId, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::GetMarkerDecodedString(System.Guid,System.Text.StringBuilder,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetMarkerDecodedString_m4BB563331785D9535720B2E6DA32AD3BE3A9CC56 (Guid_t ___0_markerId, StringBuilder_t* ___1_decodedStringOut, uint32_t ___2_capacity, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::GetMarkerQRCodeProperties(System.Guid,Microsoft.MixedReality.OpenXR.ARSubsystems.NativeQRCodeProperties*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_GetMarkerQRCodeProperties_mD9680AB8A4C493CCE95ED165DA2EED444522B3EA (Guid_t ___0_markerId, NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0* ___1_qrCodePropertiesOut, uint32_t ___2_capacity, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::StartMarkerSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_StartMarkerSubsystem_mA841DE4225E92CED4461DFF2A5CB471097AFB1FF (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.NativeLib::StopMarkerSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeLib_StopMarkerSubsystem_mCEA7FD09C6F70CB89F200256896C0BA2088CE6C6 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::.ctor()
inline void List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, const RuntimeMethod*))List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_gshared)(__this, method);
}
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ToXRMarker(Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ToXRMarker_m0D07122261B7A914500FAABD63D0D12B1F5E752F (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 ___0_nativeMarker, const RuntimeMethod* method) ;
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ApplyCenterTransform(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::Add(TKey,TValue)
inline void Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId Microsoft.MixedReality.OpenXR.FeatureUtils::ToTrackableId(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 FeatureUtils_ToTrackableId_m152DF710A98CD5C7264C3322770E841EFDB4CEBF (Guid_t ___0_guid, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::GetLastSeenTimeAsRealTimeSinceStartup(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OpenXRProvider_GetLastSeenTimeAsRealTimeSinceStartup_m56A4FD097CA3F7083477A18441159374001A96EC (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, int64_t ___0_lastSeenTime, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_ContainsKey_m6361ACBA0E4244CDE236681BEA768F766459BD25_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode>::Remove(TKey)
inline bool Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15 (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_Remove_mC21C844B05D3ABF3525B132CF630D7A551B0BA98_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker>::Remove(TKey)
inline bool Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594 (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, const RuntimeMethod*))Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_gshared)(__this, ___0_key, method);
}
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ApplyStableTransform(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyStableTransform_m1AD398C75E69AA99410219F8A47C6DAD10F92402 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.OpenXR.SubsystemController::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemController__ctor_m860DC323501E43007757630E4E5AE907CC3DBBA4 (SubsystemController_tD5980C0FF070149F54AC1C113942441FCC0A69BF* __this, RuntimeObject* ___0_context, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.OpenXR.OpenXRRuntime::IsExtensionEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRRuntime_IsExtensionEnabled_mF0C6FC95EDFD8DA6C5A838EA2053C06F657A2EE5 (String_t* ___0_extensionName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor>::.ctor()
inline void List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580 (List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListenLegacyU3Ed__35__ctor_m77DF8863FE2EB20895F4AF7BAFB6B0CB087B2F79 (U3CListenLegacyU3Ed__35_tDCE65A47845B6D719D026268497B38C686714FCA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListenLegacyU3Ed__35_System_IDisposable_Dispose_m13208BBE94B26571F95443B43404675BBF160793 (U3CListenLegacyU3Ed__35_tDCE65A47845B6D719D026268497B38C686714FCA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CListenLegacyU3Ed__35_MoveNext_mE6A87AEDE046891921BCBC0CDC351914B328CFC7 (U3CListenLegacyU3Ed__35_tDCE65A47845B6D719D026268497B38C686714FCA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return ListenRoutine(listenConfiguration, listenMode, onRemotingListenCompleted);
		AppRemotingSubsystem_t5DAAD43B0B15AABE4FB1B8ADEE65DFE7E589D7C8* L_3 = __this->___U3CU3E4__this_5;
		RemotingListenConfiguration_t0E2E9C7436FC0658E990758F11F05037E72CF1D8 L_4 = __this->___listenConfiguration_2;
		int32_t L_5 = __this->___listenMode_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = __this->___onRemotingListenCompleted_4;
		NullCheck(L_3);
		RuntimeObject* L_7;
		L_7 = AppRemotingSubsystem_ListenRoutine_m5938C5A37A1CAB749F60335CE7022C38EAA62868(L_3, L_4, L_5, L_6, NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CListenLegacyU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6552FEFE12095472E634681E8ED71CABA27A3E35 (U3CListenLegacyU3Ed__35_tDCE65A47845B6D719D026268497B38C686714FCA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CListenLegacyU3Ed__35_System_Collections_IEnumerator_Reset_m0E59E423E549FD9796DD8E7E97ACCBBD9C55250D (U3CListenLegacyU3Ed__35_tDCE65A47845B6D719D026268497B38C686714FCA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CListenLegacyU3Ed__35_System_Collections_IEnumerator_Reset_m0E59E423E549FD9796DD8E7E97ACCBBD9C55250D_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__35::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CListenLegacyU3Ed__35_System_Collections_IEnumerator_get_Current_mA0957E19C4939CE9C08C0B039ABEBD76728B1E7C (U3CListenLegacyU3Ed__35_tDCE65A47845B6D719D026268497B38C686714FCA* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectAndStopXRU3Ed__39__ctor_m74EE58CB2E74A50A73CB3C878193E0F9C252E09A (U3CDisconnectAndStopXRU3Ed__39_tDB4A2869C5D9B03236BF5AAF672C193860A808E8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectAndStopXRU3Ed__39_System_IDisposable_Dispose_m11A7DDF8643FAF383A629502DA0DB81E23C4BD21 (U3CDisconnectAndStopXRU3Ed__39_tDB4A2869C5D9B03236BF5AAF672C193860A808E8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisconnectAndStopXRU3Ed__39_MoveNext_mF4C5DC649E3811C3E49B56D8319156CD1CE2F8E7 (U3CDisconnectAndStopXRU3Ed__39_tDB4A2869C5D9B03236BF5AAF672C193860A808E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		goto IL_0023;
	}

IL_001d:
	{
		goto IL_0054;
	}

IL_001f:
	{
		goto IL_0071;
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (OpenXRContext.Current.Instance != 0)
		il2cpp_codegen_runtime_class_init_inline(OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97_il2cpp_TypeInfo_var);
		OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97* L_2;
		L_2 = OpenXRContext_get_Current_m80D4A82031916348CFA840AA4970EBCC7B3972B2_inline(NULL);
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = OpenXRContext_get_Instance_m3BE6AA1765B9375CBD0EC9ADCC039E68EEACD2AA(L_2, NULL);
		V_1 = (bool)((!(((uint64_t)L_3) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_007f;
		}
	}
	{
		// NativeLib.DestroyAnchorSubsystemPending();
		NativeLib_DestroyAnchorSubsystemPending_m5DB500177F76FD5F6015FFE7328F7BE62340F11F(NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// NativeLib.RemoveAllAnchors();
		NativeLib_RemoveAllAnchors_mB08D3EABE8503EDB5919F3D3E7C93D4F3980B754(NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0071:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// NativeLib.DisconnectRemoting();
		NativeLib_DisconnectRemoting_m3E89386FEA9939B8BD35F1B48B7D6047D2428C8E(NULL);
	}

IL_007f:
	{
		// StartOrStopXRHelper.StopXrLoader();
		StartOrStopXRHelper_StopXrLoader_m50CE6005FCB3C414DB937D20389A284E8D365391(NULL);
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisconnectAndStopXRU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0EB8FFF027E61B5069B725017ADFF63E6CAE4B39 (U3CDisconnectAndStopXRU3Ed__39_tDB4A2869C5D9B03236BF5AAF672C193860A808E8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectAndStopXRU3Ed__39_System_Collections_IEnumerator_Reset_m69EEAC2B753189D92500B18B31396E4965A4A4EC (U3CDisconnectAndStopXRU3Ed__39_tDB4A2869C5D9B03236BF5AAF672C193860A808E8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisconnectAndStopXRU3Ed__39_System_Collections_IEnumerator_Reset_m69EEAC2B753189D92500B18B31396E4965A4A4EC_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisconnectAndStopXRU3Ed__39_System_Collections_IEnumerator_get_Current_m59974B6F1873F528ECAF76D5541EF673BDC2227B (U3CDisconnectAndStopXRU3Ed__39_tDB4A2869C5D9B03236BF5AAF672C193860A808E8* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartOrStopXRHelper_Start_m2B9FF1DE633B5C2907ADADE5339739F3F248864C (StartOrStopXRHelper_t56F33A6CED037B6FBE229DC3C2E24A2993FECB70* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(EnsureInitialization());
		RuntimeObject* L_0;
		L_0 = StartOrStopXRHelper_EnsureInitialization_mD30DDC027190093AA82A98B856C5850F149F47DA(NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper::EnsureInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartOrStopXRHelper_EnsureInitialization_mD30DDC027190093AA82A98B856C5850F149F47DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD* L_0 = (U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD*)il2cpp_codegen_object_new(U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnsureInitializationU3Ed__1__ctor_mD9EF163E9D27407C91958A5B551A32B6BAE262D8(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper::StopXrLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartOrStopXRHelper_StopXrLoader_m50CE6005FCB3C414DB937D20389A284E8D365391 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C8DE3C6A11CDB84EDEBBABC5ED0115711886B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE92AB447C3883936D381052A946A6CF1CED1EFB7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (XRGeneralSettings.Instance.Manager.activeLoader != null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_2;
		L_2 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0067;
		}
	}
	{
		// XRGeneralSettings.Instance.Manager.StopSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_5;
		L_5 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_5);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_6;
		L_6 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_5, NULL);
		NullCheck(L_6);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_6, NULL);
		// Debug.Log("[AppRemotingSubsystem] StopSubsystems");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral56C8DE3C6A11CDB84EDEBBABC5ED0115711886B3, NULL);
		// if (XRGeneralSettings.Instance.Manager.isInitializationComplete)
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_7;
		L_7 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_7);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_8;
		L_8 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68(L_8, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_11;
		L_11 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_11);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_12;
		L_12 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_11, NULL);
		NullCheck(L_12);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_12, NULL);
		// Debug.Log("[AppRemotingSubsystem] DeinitializeLoader");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE92AB447C3883936D381052A946A6CF1CED1EFB7, NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartOrStopXRHelper__ctor_m2E409705CC9912B2947B9971FF4EACD4A3D350E4 (StartOrStopXRHelper_t56F33A6CED037B6FBE229DC3C2E24A2993FECB70* __this, const RuntimeMethod* method) 
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
// System.Void Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInitializationU3Ed__1__ctor_mD9EF163E9D27407C91958A5B551A32B6BAE262D8 (U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInitializationU3Ed__1_System_IDisposable_Dispose_mF94CE3FC9ED9D5B0821EBF32D5D5AF0F22056D55 (U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnsureInitializationU3Ed__1_MoveNext_m89D6A48D44CE4041A6D7EB24CEE2EAF08B0C39DF (U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5499AB62695100148435B68029C2A51DB3024FB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B156E4DD192DAC930816A88E5407ABC60A09EB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0063;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3;
		L_3 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_3, NULL);
		NullCheck(L_4);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_5;
		L_5 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// Debug.Log("[AppRemotingSubsystem] InitializeLoader");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9B156E4DD192DAC930816A88E5407ABC60A09EB6, NULL);
		// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_8;
		L_8 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_8);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_9;
		L_9 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B(L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0063:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006b:
	{
		// if (XRGeneralSettings.Instance.Manager.activeLoader != null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_11;
		L_11 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_11);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_12;
		L_12 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_11, NULL);
		NullCheck(L_12);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_13;
		L_13 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_00a1;
		}
	}
	{
		// Debug.Log("[AppRemotingSubsystem] StartSubsystems");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5499AB62695100148435B68029C2A51DB3024FB8, NULL);
		// XRGeneralSettings.Instance.Manager.StartSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_16;
		L_16 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_16);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_17;
		L_17 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_16, NULL);
		NullCheck(L_17);
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(L_17, NULL);
	}

IL_00a1:
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnsureInitializationU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAEF6C3E3A64DB16110F950E2E0D466DE4FE5A5DA (U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnsureInitializationU3Ed__1_System_Collections_IEnumerator_Reset_m0C4326E00ABF4958B8699FD34373965EBD79E5CA (U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnsureInitializationU3Ed__1_System_Collections_IEnumerator_Reset_m0C4326E00ABF4958B8699FD34373965EBD79E5CA_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.OpenXR.Remoting.StartOrStopXRHelper/<EnsureInitialization>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnsureInitializationU3Ed__1_System_Collections_IEnumerator_get_Current_m51D63DC94F1D49163F73C977F44278B425B5CF95 (U3CEnsureInitializationU3Ed__1_tC7B644A51D2DC52A02526CCF9AD656CE671EC2DD* __this, const RuntimeMethod* method) 
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
SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_Multicast(InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* currentDelegate = reinterpret_cast<InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351*>(delegatesToInvoke[i]);
		typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 (*FunctionPointerType) (RuntimeObject*, String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_hostName, ___1_systemValidationResult, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenInst(InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{
	NullCheck(___0_hostName);
	typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 (*FunctionPointerType) (String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_hostName, ___1_systemValidationResult, method);
}
SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenStatic(InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{
	typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 (*FunctionPointerType) (String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_hostName, ___1_systemValidationResult, method);
}
SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenStaticInvoker(InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_hostName, ___1_systemValidationResult);
}
SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_ClosedStaticInvoker(InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, RuntimeObject*, String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_hostName, ___1_systemValidationResult);
}
IL2CPP_EXTERN_C  SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 DelegatePInvokeWrapper_InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351 (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method)
{




	typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke (DEFAULT_CALL *PInvokeFunc)(char*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_hostName' to native representation
	char* ____0_hostName_marshaled = NULL;
	____0_hostName_marshaled = il2cpp_codegen_marshal_string(___0_hostName);

	// Marshaling of parameter '___1_systemValidationResult' to native representation
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke ____1_systemValidationResult_marshaled = {};
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke(___1_systemValidationResult, ____1_systemValidationResult_marshaled);

	// Native function invocation
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshaled_pinvoke returnValue = il2cppPInvokeFunc(____0_hostName_marshaled, ____1_systemValidationResult_marshaled);

	// Marshaling of return value back from native representation
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 _returnValue_unmarshaled;
	memset((&_returnValue_unmarshaled), 0, sizeof(_returnValue_unmarshaled));
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_cleanup(returnValue);

	// Marshaling cleanup of parameter '___0_hostName' native representation
	il2cpp_codegen_marshal_free(____0_hostName_marshaled);
	____0_hostName_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_systemValidationResult' native representation
	SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_marshal_pinvoke_cleanup(____1_systemValidationResult_marshaled);

	return _returnValue_unmarshaled;
}
// System.Void Microsoft.MixedReality.OpenXR.Remoting.InternalValidateServerCertificateDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValidateServerCertificateDelegate__ctor_mBFEA2E7DB3ABD0729D97587F8081D72B53B472DF (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3_Multicast;
}
// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult Microsoft.MixedReality.OpenXR.Remoting.InternalValidateServerCertificateDelegate::Invoke(System.String,Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_Invoke_m652610F8F872BC895F42142EB8F5D0EA9D110EC3 (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, const RuntimeMethod* method) 
{
	typedef SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 (*FunctionPointerType) (RuntimeObject*, String_t*, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_hostName, ___1_systemValidationResult, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Microsoft.MixedReality.OpenXR.Remoting.InternalValidateServerCertificateDelegate::BeginInvoke(System.String,Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalValidateServerCertificateDelegate_BeginInvoke_m78E6A910019DF90FD9F1068046188D5B87A72598 (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, String_t* ___0_hostName, SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 ___1_systemValidationResult, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_hostName;
	__d_args[1] = Box(SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736_il2cpp_TypeInfo_var, &___1_systemValidationResult);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingCertificateValidationResult Microsoft.MixedReality.OpenXR.Remoting.InternalValidateServerCertificateDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736 InternalValidateServerCertificateDelegate_EndInvoke_m6FD2569D2255AFCB466BF0EB71103D99DABBE541 (InternalValidateServerCertificateDelegate_t482C8A9918657B9827EF9F0AEAEC436766DA4351* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(SecureRemotingCertificateValidationResult_tDA0C18B9901F63FBF431595385903B5FB06F7736*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_pinvoke(const InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6& unmarshaled, InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_pinvoke& marshaled)
{
	marshaled.___RemoteHostName_0 = il2cpp_codegen_marshal_string(unmarshaled.___RemoteHostName_0);
	marshaled.___RemotePort_1 = unmarshaled.___RemotePort_1;
	marshaled.___MaxBitrateKbps_2 = unmarshaled.___MaxBitrateKbps_2;
	marshaled.___VideoCodec_3 = unmarshaled.___VideoCodec_3;
	marshaled.___EnableAudio_4 = static_cast<int32_t>(unmarshaled.___EnableAudio_4);
	marshaled.___AudioCaptureMode_5 = unmarshaled.___AudioCaptureMode_5;
}
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_pinvoke_back(const InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_pinvoke& marshaled, InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6& unmarshaled)
{
	unmarshaled.___RemoteHostName_0 = il2cpp_codegen_marshal_string_result(marshaled.___RemoteHostName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___RemoteHostName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___RemoteHostName_0));
	uint16_t unmarshaledRemotePort_temp_1 = 0;
	unmarshaledRemotePort_temp_1 = marshaled.___RemotePort_1;
	unmarshaled.___RemotePort_1 = unmarshaledRemotePort_temp_1;
	uint32_t unmarshaledMaxBitrateKbps_temp_2 = 0;
	unmarshaledMaxBitrateKbps_temp_2 = marshaled.___MaxBitrateKbps_2;
	unmarshaled.___MaxBitrateKbps_2 = unmarshaledMaxBitrateKbps_temp_2;
	int32_t unmarshaledVideoCodec_temp_3 = 0;
	unmarshaledVideoCodec_temp_3 = marshaled.___VideoCodec_3;
	unmarshaled.___VideoCodec_3 = unmarshaledVideoCodec_temp_3;
	bool unmarshaledEnableAudio_temp_4 = false;
	unmarshaledEnableAudio_temp_4 = static_cast<bool>(marshaled.___EnableAudio_4);
	unmarshaled.___EnableAudio_4 = unmarshaledEnableAudio_temp_4;
	int32_t unmarshaledAudioCaptureMode_temp_5 = 0;
	unmarshaledAudioCaptureMode_temp_5 = marshaled.___AudioCaptureMode_5;
	unmarshaled.___AudioCaptureMode_5 = unmarshaledAudioCaptureMode_temp_5;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_pinvoke_cleanup(InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___RemoteHostName_0);
	marshaled.___RemoteHostName_0 = NULL;
}
// Conversion methods for marshalling of: Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_com(const InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6& unmarshaled, InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_com& marshaled)
{
	marshaled.___RemoteHostName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___RemoteHostName_0);
	marshaled.___RemotePort_1 = unmarshaled.___RemotePort_1;
	marshaled.___MaxBitrateKbps_2 = unmarshaled.___MaxBitrateKbps_2;
	marshaled.___VideoCodec_3 = unmarshaled.___VideoCodec_3;
	marshaled.___EnableAudio_4 = static_cast<int32_t>(unmarshaled.___EnableAudio_4);
	marshaled.___AudioCaptureMode_5 = unmarshaled.___AudioCaptureMode_5;
}
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_com_back(const InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_com& marshaled, InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6& unmarshaled)
{
	unmarshaled.___RemoteHostName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___RemoteHostName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___RemoteHostName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___RemoteHostName_0));
	uint16_t unmarshaledRemotePort_temp_1 = 0;
	unmarshaledRemotePort_temp_1 = marshaled.___RemotePort_1;
	unmarshaled.___RemotePort_1 = unmarshaledRemotePort_temp_1;
	uint32_t unmarshaledMaxBitrateKbps_temp_2 = 0;
	unmarshaledMaxBitrateKbps_temp_2 = marshaled.___MaxBitrateKbps_2;
	unmarshaled.___MaxBitrateKbps_2 = unmarshaledMaxBitrateKbps_temp_2;
	int32_t unmarshaledVideoCodec_temp_3 = 0;
	unmarshaledVideoCodec_temp_3 = marshaled.___VideoCodec_3;
	unmarshaled.___VideoCodec_3 = unmarshaledVideoCodec_temp_3;
	bool unmarshaledEnableAudio_temp_4 = false;
	unmarshaledEnableAudio_temp_4 = static_cast<bool>(marshaled.___EnableAudio_4);
	unmarshaled.___EnableAudio_4 = unmarshaledEnableAudio_temp_4;
	int32_t unmarshaledAudioCaptureMode_temp_5 = 0;
	unmarshaledAudioCaptureMode_temp_5 = marshaled.___AudioCaptureMode_5;
	unmarshaled.___AudioCaptureMode_5 = unmarshaledAudioCaptureMode_temp_5;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingConnectConfiguration
IL2CPP_EXTERN_C void InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshal_com_cleanup(InternalRemotingConnectConfiguration_tCF928F7E87622D66E493C8721ECED79B2C1A4EA6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___RemoteHostName_0);
	marshaled.___RemoteHostName_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_pinvoke(const InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139& unmarshaled, InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_pinvoke& marshaled)
{
	marshaled.___ListenInterface_0 = il2cpp_codegen_marshal_string(unmarshaled.___ListenInterface_0);
	marshaled.___HandshakeListenPort_1 = unmarshaled.___HandshakeListenPort_1;
	marshaled.___TransportListenPort_2 = unmarshaled.___TransportListenPort_2;
	marshaled.___MaxBitrateKbps_3 = unmarshaled.___MaxBitrateKbps_3;
	marshaled.___VideoCodec_4 = unmarshaled.___VideoCodec_4;
	marshaled.___EnableAudio_5 = static_cast<int32_t>(unmarshaled.___EnableAudio_5);
	marshaled.___AudioCaptureMode_6 = unmarshaled.___AudioCaptureMode_6;
}
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_pinvoke_back(const InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_pinvoke& marshaled, InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139& unmarshaled)
{
	unmarshaled.___ListenInterface_0 = il2cpp_codegen_marshal_string_result(marshaled.___ListenInterface_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ListenInterface_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ListenInterface_0));
	uint16_t unmarshaledHandshakeListenPort_temp_1 = 0;
	unmarshaledHandshakeListenPort_temp_1 = marshaled.___HandshakeListenPort_1;
	unmarshaled.___HandshakeListenPort_1 = unmarshaledHandshakeListenPort_temp_1;
	uint16_t unmarshaledTransportListenPort_temp_2 = 0;
	unmarshaledTransportListenPort_temp_2 = marshaled.___TransportListenPort_2;
	unmarshaled.___TransportListenPort_2 = unmarshaledTransportListenPort_temp_2;
	uint32_t unmarshaledMaxBitrateKbps_temp_3 = 0;
	unmarshaledMaxBitrateKbps_temp_3 = marshaled.___MaxBitrateKbps_3;
	unmarshaled.___MaxBitrateKbps_3 = unmarshaledMaxBitrateKbps_temp_3;
	int32_t unmarshaledVideoCodec_temp_4 = 0;
	unmarshaledVideoCodec_temp_4 = marshaled.___VideoCodec_4;
	unmarshaled.___VideoCodec_4 = unmarshaledVideoCodec_temp_4;
	bool unmarshaledEnableAudio_temp_5 = false;
	unmarshaledEnableAudio_temp_5 = static_cast<bool>(marshaled.___EnableAudio_5);
	unmarshaled.___EnableAudio_5 = unmarshaledEnableAudio_temp_5;
	int32_t unmarshaledAudioCaptureMode_temp_6 = 0;
	unmarshaledAudioCaptureMode_temp_6 = marshaled.___AudioCaptureMode_6;
	unmarshaled.___AudioCaptureMode_6 = unmarshaledAudioCaptureMode_temp_6;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_pinvoke_cleanup(InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ListenInterface_0);
	marshaled.___ListenInterface_0 = NULL;
}
// Conversion methods for marshalling of: Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_com(const InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139& unmarshaled, InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_com& marshaled)
{
	marshaled.___ListenInterface_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___ListenInterface_0);
	marshaled.___HandshakeListenPort_1 = unmarshaled.___HandshakeListenPort_1;
	marshaled.___TransportListenPort_2 = unmarshaled.___TransportListenPort_2;
	marshaled.___MaxBitrateKbps_3 = unmarshaled.___MaxBitrateKbps_3;
	marshaled.___VideoCodec_4 = unmarshaled.___VideoCodec_4;
	marshaled.___EnableAudio_5 = static_cast<int32_t>(unmarshaled.___EnableAudio_5);
	marshaled.___AudioCaptureMode_6 = unmarshaled.___AudioCaptureMode_6;
}
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_com_back(const InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_com& marshaled, InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139& unmarshaled)
{
	unmarshaled.___ListenInterface_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___ListenInterface_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ListenInterface_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ListenInterface_0));
	uint16_t unmarshaledHandshakeListenPort_temp_1 = 0;
	unmarshaledHandshakeListenPort_temp_1 = marshaled.___HandshakeListenPort_1;
	unmarshaled.___HandshakeListenPort_1 = unmarshaledHandshakeListenPort_temp_1;
	uint16_t unmarshaledTransportListenPort_temp_2 = 0;
	unmarshaledTransportListenPort_temp_2 = marshaled.___TransportListenPort_2;
	unmarshaled.___TransportListenPort_2 = unmarshaledTransportListenPort_temp_2;
	uint32_t unmarshaledMaxBitrateKbps_temp_3 = 0;
	unmarshaledMaxBitrateKbps_temp_3 = marshaled.___MaxBitrateKbps_3;
	unmarshaled.___MaxBitrateKbps_3 = unmarshaledMaxBitrateKbps_temp_3;
	int32_t unmarshaledVideoCodec_temp_4 = 0;
	unmarshaledVideoCodec_temp_4 = marshaled.___VideoCodec_4;
	unmarshaled.___VideoCodec_4 = unmarshaledVideoCodec_temp_4;
	bool unmarshaledEnableAudio_temp_5 = false;
	unmarshaledEnableAudio_temp_5 = static_cast<bool>(marshaled.___EnableAudio_5);
	unmarshaled.___EnableAudio_5 = unmarshaledEnableAudio_temp_5;
	int32_t unmarshaledAudioCaptureMode_temp_6 = 0;
	unmarshaledAudioCaptureMode_temp_6 = marshaled.___AudioCaptureMode_6;
	unmarshaled.___AudioCaptureMode_6 = unmarshaledAudioCaptureMode_temp_6;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.OpenXR.Remoting.InternalRemotingListenConfiguration
IL2CPP_EXTERN_C void InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshal_com_cleanup(InternalRemotingListenConfiguration_t01E7151A601755103F2CDB9F758215557C938139_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ListenInterface_0);
	marshaled.___ListenInterface_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 Microsoft.MixedReality.OpenXR.ARFoundation.ARAnchorExtensions::GetOpenXRHandle(UnityEngine.XR.ARFoundation.ARAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ARAnchorExtensions_GetOpenXRHandle_mD3FBE707AF870E2629442C553C08806441878ED5 (ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* ___0_anchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		// return anchor == null ? 0 : AnchorConverter.ToOpenXRHandle(anchor.nativePtr);
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_0 = ___0_anchor;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ARAnchor_t832D3D366D3F1D43F995A298974D4EDABACC0E06* L_2 = ___0_anchor;
		NullCheck(L_2);
		intptr_t L_3;
		L_3 = ARAnchor_get_nativePtr_mBE82BAA63BB9C836B5AAECBC8B61F855B352196F(L_2, NULL);
		uint64_t L_4;
		L_4 = AnchorConverter_ToOpenXRHandle_m3EBC72B383781267FCF5E2DC0BB5CC1F1E073B91(L_3, NULL);
		G_B3_0 = L_4;
		goto IL_0019;
	}

IL_0017:
	{
		G_B3_0 = ((uint64_t)(((int64_t)0)));
	}

IL_0019:
	{
		V_0 = G_B3_0;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		uint64_t L_5 = V_0;
		return L_5;
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
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore> Microsoft.MixedReality.OpenXR.ARFoundation.AnchorManagerExtensions::LoadAnchorStoreAsync(UnityEngine.XR.ARFoundation.ARAnchorManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* AnchorManagerExtensions_LoadAnchorStoreAsync_m0DA11136A58D5AD8E1793D37EFAB07558947D6BC (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___0_anchorManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* V_0 = NULL;
	{
		// return XRAnchorStore.LoadAnchorStoreAsync(anchorManager.subsystem);
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_0 = ___0_anchorManager;
		NullCheck(L_0);
		XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* L_1;
		L_1 = SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_inline(L_0, SubsystemLifecycleManager_3_get_subsystem_mA1F0EB8234CADB2B521F077B1F4A35D931C3E207_RuntimeMethod_var);
		Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* L_2;
		L_2 = XRAnchorStore_LoadAnchorStoreAsync_mE2B6F2B8EC3C19BE851E90D4C24253B2A70BB4D3(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* L_3 = V_0;
		return L_3;
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
// System.UInt64 Microsoft.MixedReality.OpenXR.ARSubsystems.XRAnchorExtensions::GetOpenXRHandle(UnityEngine.XR.ARSubsystems.XRAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRAnchorExtensions_GetOpenXRHandle_mAA7D729CF968CECC040BE338B77817BC882EE1A1 (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___0_anchor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		// return anchor == null ? 0 : AnchorConverter.ToOpenXRHandle(anchor.nativePtr);
		il2cpp_codegen_runtime_class_init_inline(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline((&___0_anchor), NULL);
		uint64_t L_1;
		L_1 = AnchorConverter_ToOpenXRHandle_m3EBC72B383781267FCF5E2DC0BB5CC1F1E073B91(L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		uint64_t L_2 = V_0;
		return L_2;
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
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 XRMarker_get_defaultValue_m049879891BEA32B4545D12BFEA87D0A0D0C9D8C9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static XRMarker defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_0 = ((XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_StaticFields*)il2cpp_codegen_static_fields_for(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,Microsoft.MixedReality.OpenXR.TransformMode,Microsoft.MixedReality.OpenXR.ARMarkerType,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_size, float ___5_lastSeenTime, int32_t ___6_transformMode, int32_t ___7_markerType, intptr_t ___8_nativePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.trackableId = trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		__this->___U3CtrackableIdU3Ek__BackingField_1 = L_0;
		// this.pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___1_pose;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline(__this, L_1, NULL);
		// this.trackingState = trackingState;
		int32_t L_2 = ___2_trackingState;
		XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline(__this, L_2, NULL);
		// this.center = center;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___3_center;
		XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline(__this, L_3, NULL);
		// this.size = size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___4_size;
		XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline(__this, L_4, NULL);
		// this.lastSeenTime = lastSeenTime;
		float L_5 = ___5_lastSeenTime;
		XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline(__this, L_5, NULL);
		// this.transformMode = transformMode;
		int32_t L_6 = ___6_transformMode;
		XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline(__this, L_6, NULL);
		// this.markerType = markerType;
		int32_t L_7 = ___7_markerType;
		__this->___U3CmarkerTypeU3Ek__BackingField_8 = L_7;
		// this.nativePtr = nativePtr;
		intptr_t L_8 = ___8_nativePtr;
		__this->___U3CnativePtrU3Ek__BackingField_9 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_center, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___4_size, float ___5_lastSeenTime, int32_t ___6_transformMode, int32_t ___7_markerType, intptr_t ___8_nativePtr, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E(_thisAdjusted, ___0_trackableId, ___1_pose, ___2_trackingState, ___3_center, ___4_size, ___5_lastSeenTime, ___6_transformMode, ___7_markerType, ___8_nativePtr, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId { get; }
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___U3CtrackableIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; internal set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; internal set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState { get; internal set; }
		int32_t L_0 = __this->___U3CtrackingStateU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_trackingState(UnityEngine.XR.ARSubsystems.TrackingState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState { get; internal set; }
		int32_t L_0 = ___0_value;
		__this->___U3CtrackingStateU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 center { get; internal set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CcenterU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_center(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 center { get; internal set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CcenterU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector2 Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 size { get; internal set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CsizeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 size { get; internal set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline(_thisAdjusted, ___0_value, method);
}
// System.Single Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_lastSeenTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public float lastSeenTime { get; internal set; }
		float L_0 = __this->___U3ClastSeenTimeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	float _returnValue;
	_returnValue = XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_lastSeenTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float lastSeenTime { get; internal set; }
		float L_0 = ___0_value;
		__this->___U3ClastSeenTimeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline(_thisAdjusted, ___0_value, method);
}
// Microsoft.MixedReality.OpenXR.TransformMode Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_transformMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public TransformMode transformMode { get; internal set; }
		int32_t L_0 = __this->___U3CtransformModeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::set_transformMode(Microsoft.MixedReality.OpenXR.TransformMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4 (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransformMode transformMode { get; internal set; }
		int32_t L_0 = ___0_value;
		__this->___U3CtransformModeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline(_thisAdjusted, ___0_value, method);
}
// Microsoft.MixedReality.OpenXR.ARMarkerType Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_markerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public ARMarkerType markerType { get; }
		int32_t L_0 = __this->___U3CmarkerTypeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr { get; }
		intptr_t L_0 = __this->___U3CnativePtrU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarker__cctor_mB090B5F89D99B8EAB3AB6B16C8FEBDC4A332C2D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly XRMarker s_Default = new XRMarker(
		//         TrackableId.invalidId,
		//         Pose.identity,
		//         TrackingState.None,
		//         Vector2.zero,
		//         Vector2.zero,
		//         0.0f,
		//         TransformMode.MostStable,
		//         ARMarkerType.QRCode,
		//         IntPtr.Zero);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_5;
		memset((&L_5), 0, sizeof(L_5));
		XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E((&L_5), L_0, L_1, 0, L_2, L_3, (0.0f), 0, 1, L_4, /*hidden argument*/NULL);
		((XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_StaticFields*)il2cpp_codegen_static_fields_for(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var))->___s_Default_0 = L_5;
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
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem__ctor_m9000E1906DD784DDA122B0CF8001E77F71D39F49 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private ValidationUtility<XRMarker> m_ValidationUtility =
		//     new ValidationUtility<XRMarker>();
		ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* L_0 = (ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F*)il2cpp_codegen_object_new(ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193(L_0, ValidationUtility_1__ctor_m436491B161EEE3548DEEDBBB85EB6B1B357F8193_RuntimeMethod_var);
		__this->___m_ValidationUtility_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValidationUtility_4), (void*)L_0);
		// public XRMarkerSubsystem() { }
		TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E(__this, TrackingSubsystem_4__ctor_m2988A45459798133A5E117AD263DFA6560F7A74E_RuntimeMethod_var);
		// public XRMarkerSubsystem() { }
		return;
	}
}
// Microsoft.MixedReality.OpenXR.ARMarkerType[] Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::get_EnabledMarkerTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* XRMarkerSubsystem_get_EnabledMarkerTypes_m136000BD81DDEC1B44BA58DDBFDF92619544A106 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.EnabledMarkerTypes;
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		NullCheck(L_0);
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_1;
		L_1 = VirtualFuncInvoker0< ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* >::Invoke(13 /* Microsoft.MixedReality.OpenXR.ARMarkerType[] Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::get_EnabledMarkerTypes() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::set_EnabledMarkerTypes(Microsoft.MixedReality.OpenXR.ARMarkerType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem_set_EnabledMarkerTypes_m58784536BED03AD1CB9778F6518E3BC6D4FC3F76 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.EnabledMarkerTypes = value;
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* >::Invoke(14 /* System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::set_EnabledMarkerTypes(Microsoft.MixedReality.OpenXR.ARMarkerType[]) */, L_0, L_1);
		return;
	}
}
// Microsoft.MixedReality.OpenXR.TransformMode Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::get_DefaultTransformMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRMarkerSubsystem_get_DefaultTransformMode_mF96FE0594A1771892C1AA9FBEF78D556AA59E853 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.DefaultTransformMode;
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* Microsoft.MixedReality.OpenXR.TransformMode Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::get_DefaultTransformMode() */, L_0);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::set_DefaultTransformMode(Microsoft.MixedReality.OpenXR.TransformMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem_set_DefaultTransformMode_mC63990109ECFA0AEEFABB87219A51E4C7470E8C7 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.DefaultTransformMode = value;
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::set_DefaultTransformMode(Microsoft.MixedReality.OpenXR.TransformMode) */, L_0, L_1);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker> Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 XRMarkerSubsystem_GetChanges_m31960BED9F7B0D6CD051BCF1A7DE4FBD3360C0CB (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var changes = provider.GetChanges(XRMarker.defaultValue, allocator);
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_1;
		L_1 = XRMarker_get_defaultValue_m049879891BEA32B4545D12BFEA87D0A0D0C9D8C9_inline(NULL);
		int32_t L_2 = ___0_allocator;
		NullCheck(L_0);
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_3;
		L_3 = VirtualFuncInvoker2< TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, int32_t >::Invoke(8 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker> Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::GetChanges(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		V_0 = L_3;
		// m_ValidationUtility.ValidateAndDisposeIfThrown(changes);
		ValidationUtility_1_t0B5D337B2D6F1A074E2B04C8C99452AFF6944E1F* L_4 = __this->___m_ValidationUtility_4;
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_5 = V_0;
		NullCheck(L_4);
		ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE(L_4, L_5, ValidationUtility_1_ValidateAndDisposeIfThrown_m7F18C45935AE6619874E1B4B5A009820AD4464CE_RuntimeMethod_var);
		// return changes;
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_6 = V_0;
		V_1 = L_6;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_7 = V_1;
		return L_7;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::SetTransformMode(UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystem_SetTransformMode_mF28D924135D96AE277674630D91532F05E0E43E5 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_transformMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// provider.SetTransformMode(trackableId, transformMode);
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		int32_t L_2 = ___1_transformMode;
		NullCheck(L_0);
		VirtualActionInvoker2< TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, int32_t >::Invoke(9 /* System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::SetTransformMode(UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<System.Byte> Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::GetRawData(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF XRMarkerSubsystem_GetRawData_m3455360C4A6BB9B0252D58426BA42BE45591097E (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return provider.GetRawData(trackableId, allocator);
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		int32_t L_2 = ___1_allocator;
		NullCheck(L_0);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3;
		L_3 = VirtualFuncInvoker2< NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, int32_t >::Invoke(10 /* Unity.Collections.NativeArray`1<System.Byte> Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::GetRawData(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4 = V_0;
		return L_4;
	}
}
// System.String Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::GetDecodedString(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRMarkerSubsystem_GetDecodedString_mD8D1F187BC95924C8F38D9D5C3F3E5E032EAFDA1 (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return provider.GetDecodedString(trackableId);
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(11 /* System.String Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::GetDecodedString(UnityEngine.XR.ARSubsystems.TrackableId) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		String_t* L_3 = V_0;
		return L_3;
	}
}
// Microsoft.MixedReality.OpenXR.QRCodeProperties Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem::GetQRCodeProperties(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D XRMarkerSubsystem_GetQRCodeProperties_m461F40E881FEE29D6B73638C379855CC4F523FEC (XRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return provider.GetQRCodeProperties(trackableId);
		Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_inline(__this, SubsystemWithProvider_3_get_provider_m6B5FD33C98258FA3AA682E44ADDD51ED85044739_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D L_2;
		L_2 = VirtualFuncInvoker1< QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(12 /* Microsoft.MixedReality.OpenXR.QRCodeProperties Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::GetQRCodeProperties(UnityEngine.XR.ARSubsystems.TrackableId) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D L_3 = V_0;
		return L_3;
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
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1A9559F0ED02F5F43A41231B6BB779FD616B164A (Provider_t372A9C11292E8B98DF4CD684F9584BD42D5EDEDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB(__this, SubsystemProvider_1__ctor_m58F9D97109F68F0DDBD2821E27882E90ADAD0BAB_RuntimeMethod_var);
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
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor::Create(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystemDescriptor_Create_m5715C97F3DC18D0067B0FE10057DDE6F4E3D07E3 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* V_0 = NULL;
	{
		// var descriptor = new XRMarkerSubsystemDescriptor(cinfo);
		Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD L_0 = ___0_cinfo;
		XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* L_1 = (XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6*)il2cpp_codegen_object_new(XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRMarkerSubsystemDescriptor__ctor_m6D1DB7BCFCAF187DDAEE3B9BB97117B0F3B31AF2(L_1, L_0, NULL);
		V_0 = L_1;
		// SubsystemDescriptorStore.RegisterDescriptor(descriptor);
		XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_2, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor::.ctor(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMarkerSubsystemDescriptor__ctor_m6D1DB7BCFCAF187DDAEE3B9BB97117B0F3B31AF2 (XRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6* __this, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private XRMarkerSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6(__this, SubsystemDescriptorWithProvider_2__ctor_m860F49A1552CDB7B6BC6C7AE3780999F7B50E1B6_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
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
// Conversion methods for marshalling of: Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_pinvoke(const Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD& unmarshaled, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_pinvoke_back(const Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_pinvoke& marshaled, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_pinvoke_cleanup(Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_com(const Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD& unmarshaled, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_com_back(const Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_com& marshaled, Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshal_com_cleanup(Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD_marshaled_com& marshaled)
{
}
// System.String Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		// internal string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_inline(_thisAdjusted, ___0_value, method);
}
// System.Type Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		// internal Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_inline(_thisAdjusted, ___0_value, method);
}
// System.Type Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		// internal Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarkerSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29 (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_inline(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.OpenXR.ARSubsystems.MeshSubsystemExtensions::TrySetMeshComputeSettings(UnityEngine.XR.XRMeshSubsystem,Microsoft.MixedReality.OpenXR.MeshComputeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshSubsystemExtensions_TrySetMeshComputeSettings_mFFBCA3DAF91CA65F28F48285DEFC251BB2EB03A8 (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* ___0_subsystem, MeshComputeSettings_t9846F4B1842319A1C05A94581E0248E1253A896D ___1_settings, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return InternalMeshSettings.TrySetMeshComputeSettings(settings);
		MeshComputeSettings_t9846F4B1842319A1C05A94581E0248E1253A896D L_0 = ___1_settings;
		bool L_1;
		L_1 = InternalMeshSettings_TrySetMeshComputeSettings_m47DE5488CC1F9CBD2BA64A132B9EC75EE572CA19(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_2 = V_0;
		return L_2;
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
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore> Microsoft.MixedReality.OpenXR.ARSubsystems.AnchorSubsystemExtensions::LoadAnchorStoreAsync(UnityEngine.XR.ARSubsystems.XRAnchorSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* AnchorSubsystemExtensions_LoadAnchorStoreAsync_mBA73C68F3A497E0BCA71043B4C0BA210178E41FF (XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___0_anchorSubsystem, const RuntimeMethod* method) 
{
	Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* V_0 = NULL;
	{
		// return XRAnchorStore.LoadAnchorStoreAsync(anchorSubsystem);
		XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* L_0 = ___0_anchorSubsystem;
		Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* L_1;
		L_1 = XRAnchorStore_LoadAnchorStoreAsync_mE2B6F2B8EC3C19BE851E90D4C24253B2A70BB4D3(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1* L_2 = V_0;
		return L_2;
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
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystem_RegisterDescriptor_mB4B042529F48A8969D9323CE63E9E3E92C7A4561 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRMarkerSubsystemDescriptor.Create(new XRMarkerSubsystemDescriptor.Cinfo
		// {
		//     id = Id,
		//     providerType = typeof(MarkerSubsystem.OpenXRProvider),
		//     subsystemTypeOverride = typeof(MarkerSubsystem),
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD));
		Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_inline((&V_0), _stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_inline((&V_0), L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_inline((&V_0), L_3, NULL);
		Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD L_4 = V_0;
		XRMarkerSubsystemDescriptor_Create_m5715C97F3DC18D0067B0FE10057DDE6F4E3D07E3(L_4, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystem__ctor_mBCC0964BE8C322FB348A2C1498871D614377C38E (MarkerSubsystem_t6CE0544D63C7BF11F4D00888AD257947C248A72E* __this, const RuntimeMethod* method) 
{
	{
		XRMarkerSubsystem__ctor_m9000E1906DD784DDA122B0CF8001E77F71D39F49(__this, NULL);
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
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider__ctor_m3EE24BC2D6423407664F26B1E538F49A05234979 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private ARMarkerType[] m_enabledMarkerTypes = { ARMarkerType.QRCode };
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_0 = (ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801*)(ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801*)SZArrayNew(ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801_il2cpp_TypeInfo_var, (uint32_t)1);
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		__this->___m_enabledMarkerTypes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_enabledMarkerTypes_1), (void*)L_1);
		// private TransformMode m_defaultTransformMode = TransformMode.MostStable;
		__this->___m_defaultTransformMode_2 = 0;
		// private Dictionary<TrackableId, XRMarker> m_Markers = new Dictionary<TrackableId, XRMarker>();
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_2 = (Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F*)il2cpp_codegen_object_new(Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF(L_2, Dictionary_2__ctor_m483C72F7DD9B6DB29F3D3D65178F055CF1E756DF_RuntimeMethod_var);
		__this->___m_Markers_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Markers_3), (void*)L_2);
		// private Dictionary<TrackableId, TransformMode> m_PendingTransforms = new Dictionary<TrackableId, TransformMode>();
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_3 = (Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA*)il2cpp_codegen_object_new(Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652(L_3, Dictionary_2__ctor_mE1966FF7305FCFD926188A01F0EA2C1ACED3C652_RuntimeMethod_var);
		__this->___m_PendingTransforms_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PendingTransforms_4), (void*)L_3);
		// private TimeOffsetInfo m_TimeOffsetInfo = new TimeOffsetInfo();
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_4 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo_5);
		il2cpp_codegen_initobj(L_4, sizeof(TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9));
		// public OpenXRProvider()
		Provider__ctor_m1A9559F0ED02F5F43A41231B6BB779FD616B164A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Destroy_mC12B5D8611E9539A7947BC3E36CBF82EE2FB2EEB (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		// NativeLib.DestroyMarkerSubsystem();
		NativeLib_DestroyMarkerSubsystem_m499DDDF21B0239835937185F67C6B7C249D9078A(NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.OpenXR.ARMarkerType[] Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::get_EnabledMarkerTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* OpenXRProvider_get_EnabledMarkerTypes_m4EA95C573563011DC62EBED8DA30BF666EB4D462 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_enabledMarkerTypes;
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_0 = __this->___m_enabledMarkerTypes_1;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::set_EnabledMarkerTypes(Microsoft.MixedReality.OpenXR.ARMarkerType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_set_EnabledMarkerTypes_mF92E5BFF110FDAB08AE655043D39E901F2061ACB (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___0_value, const RuntimeMethod* method) 
{
	{
		// m_enabledMarkerTypes = value;
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_0 = ___0_value;
		__this->___m_enabledMarkerTypes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_enabledMarkerTypes_1), (void*)L_0);
		// NativeLib.SetEnabledMarkerTypes(ToXrSceneMarkerTypeMSFT(m_enabledMarkerTypes), m_enabledMarkerTypes.Length);
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_1 = __this->___m_enabledMarkerTypes_1;
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_2;
		L_2 = OpenXRProvider_ToXrSceneMarkerTypeMSFT_m433281740A18B0C24D39984CABD5AA7A8F5D3802(__this, L_1, NULL);
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_3 = __this->___m_enabledMarkerTypes_1;
		NullCheck(L_3);
		NativeLib_SetEnabledMarkerTypes_mDAB969557B62E417117D767C6C68A7C7116367DA(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.OpenXR.TransformMode Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::get_DefaultTransformMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenXRProvider_get_DefaultTransformMode_m26DA28A06B538115BAF698CDB3EDA8D586CE22A0 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_defaultTransformMode;
		int32_t L_0 = __this->___m_defaultTransformMode_2;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::set_DefaultTransformMode(Microsoft.MixedReality.OpenXR.TransformMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_set_DefaultTransformMode_m613E58922A57CF2BF8C0D06CFA209A884EAB8A59 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_defaultTransformMode = value;
		int32_t L_0 = ___0_value;
		__this->___m_defaultTransformMode_2 = L_0;
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::GetChanges(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 OpenXRProvider_GetChanges_m20638E2AE68379EA0D834F86F71589869193BA38 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_defaultMarker, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	int64_t V_5 = 0;
	NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_9 = NULL;
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_10 = NULL;
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* V_11 = NULL;
	HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	Enumerator_t413487DCCACC376393F93AF90282B4527081B999 V_15;
	memset((&V_15), 0, sizeof(V_15));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	Enumerator_t413487DCCACC376393F93AF90282B4527081B999 V_23;
	memset((&V_23), 0, sizeof(V_23));
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_26;
	memset((&V_26), 0, sizeof(V_26));
	bool V_27 = false;
	TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 V_28;
	memset((&V_28), 0, sizeof(V_28));
	{
		// float realTimeSinceStartup = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		V_0 = L_0;
		// if (realTimeSinceStartup - m_TimeOffsetInfo.lastOffsetCalculationTime > 1)
		float L_1 = V_0;
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_2 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo_5);
		float L_3 = L_2->___lastOffsetCalculationTime_0;
		V_4 = (bool)((((float)((float)il2cpp_codegen_subtract(L_1, L_3))) > ((float)(1.0f)))? 1 : 0);
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		// m_TimeOffsetInfo.lastOffsetCalculationTime = realTimeSinceStartup;
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_5 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo_5);
		float L_6 = V_0;
		L_5->___lastOffsetCalculationTime_0 = L_6;
		// long xrTime = NativeLib.GetCurrentQpcTimeAsXrTime();
		int64_t L_7;
		L_7 = NativeLib_GetCurrentQpcTimeAsXrTime_m88ED8DA9E9B9761C91CF2D6E4A64B1AF0DC08CE0(NULL);
		V_5 = L_7;
		// m_TimeOffsetInfo.offset = realTimeSinceStartup - (xrTime / (float)1e9);
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_8 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo_5);
		float L_9 = V_0;
		int64_t L_10 = V_5;
		L_8->___offset_1 = ((float)il2cpp_codegen_subtract(L_9, ((float)(((float)L_10)/(1.0E+09f)))));
	}

IL_004c:
	{
		// uint numAddedMarkers = 0;
		V_1 = 0;
		// uint numUpdatedMarkers = 0;
		V_2 = 0;
		// uint numRemovedMarkers = 0;
		V_3 = 0;
		// NativeLib.GetNumMarkerChanges(FrameTime.OnUpdate, ref numAddedMarkers, ref numUpdatedMarkers, ref numRemovedMarkers);
		NativeLib_GetNumMarkerChanges_m040A1C5B968567A22997E479824C891CA964684C(0, (&V_1), (&V_2), (&V_3), NULL);
		// using (var addedNativeMarkers = new NativeArray<NativeMarker>((int)numAddedMarkers, allocator, NativeArrayOptions.UninitializedMemory))
		uint32_t L_11 = V_1;
		int32_t L_12 = ___1_allocator;
		NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262((&V_6), L_11, L_12, 0, NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_RuntimeMethod_var);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_030c:
			{// begin finally (depth: 1)
				NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7((&V_6), NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (var updatedNativeMarkers = new NativeArray<NativeMarker>((int)numUpdatedMarkers, allocator, NativeArrayOptions.UninitializedMemory))
				uint32_t L_13 = V_2;
				int32_t L_14 = ___1_allocator;
				NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262((&V_7), L_13, L_14, 0, NativeArray_1__ctor_m4453FA30F2EFF30147505B49EA2E983051936262_RuntimeMethod_var);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_02fd_1:
					{// begin finally (depth: 2)
						NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7((&V_7), NativeArray_1_Dispose_m753E2A58E6C1BDD8F1C85FF19F65FFAF5BFB15B7_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (var removedNativeMarkers = new NativeArray<Guid>((int)numRemovedMarkers, allocator, NativeArrayOptions.UninitializedMemory))
						uint32_t L_15 = V_3;
						int32_t L_16 = ___1_allocator;
						NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6((&V_8), L_15, L_16, 0, NativeArray_1__ctor_mF73A5DA50C043A341E9948B988BD48252204D4A6_RuntimeMethod_var);
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_02ee_2:
							{// begin finally (depth: 3)
								NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250((&V_8), NativeArray_1_Dispose_mA05C9946B5B5F40525277432C838AC8F4A64E250_RuntimeMethod_var);
								return;
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// if (numAddedMarkers + numUpdatedMarkers + numRemovedMarkers > 0)
								uint32_t L_17 = V_1;
								uint32_t L_18 = V_2;
								uint32_t L_19 = V_3;
								V_13 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)), (int32_t)L_19))) <= ((uint32_t)0)))? 1 : 0);
								bool L_20 = V_13;
								if (!L_20)
								{
									goto IL_00ca_3;
								}
							}
							{
								// NativeLib.GetMarkerChanges(
								//     (uint)(numAddedMarkers * sizeof(NativeMarker)),
								//     NativeArrayUnsafeUtility.GetUnsafePtr(addedNativeMarkers),
								//     (uint)(numUpdatedMarkers * sizeof(NativeMarker)),
								//     NativeArrayUnsafeUtility.GetUnsafePtr(updatedNativeMarkers),
								//     (uint)(numRemovedMarkers * sizeof(Guid)),
								//     NativeArrayUnsafeUtility.GetUnsafePtr(removedNativeMarkers));
								uint32_t L_21 = V_1;
								uint32_t L_22 = sizeof(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0);
								NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE L_23 = V_6;
								void* L_24;
								L_24 = NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66(L_23, NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_RuntimeMethod_var);
								uint32_t L_25 = V_2;
								uint32_t L_26 = sizeof(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0);
								NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE L_27 = V_7;
								void* L_28;
								L_28 = NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66(L_27, NativeArrayUnsafeUtility_GetUnsafePtr_TisNativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0_mFD5E6855D47C92D8001F08A675EFCACFAD237D66_RuntimeMethod_var);
								uint32_t L_29 = V_3;
								uint32_t L_30 = sizeof(Guid_t);
								NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 L_31 = V_8;
								void* L_32;
								L_32 = NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA(L_31, NativeArrayUnsafeUtility_GetUnsafePtr_TisGuid_t_mD368FDB245534A15FF4CC92F2D785391B9E8E4CA_RuntimeMethod_var);
								NativeLib_GetMarkerChanges_m7667F23DCFFCD310EEC8AA72EE636816F01E741C(((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_21), ((int64_t)((int32_t)L_22))))), L_24, ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_25), ((int64_t)((int32_t)L_26))))), L_28, ((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_29), ((int64_t)((int32_t)L_30))))), L_32, NULL);
							}

IL_00ca_3:
							{
								// var addedMarkers = HandleAddedMarkers(addedNativeMarkers);
								NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE L_33 = V_6;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_34;
								L_34 = OpenXRProvider_HandleAddedMarkers_mF4B821358D290648E05F13D47CDB9F3696C38511(__this, L_33, NULL);
								V_9 = L_34;
								// var updatedMarkers = HandleUpdatedMarkers(updatedNativeMarkers);
								NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE L_35 = V_7;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_36;
								L_36 = OpenXRProvider_HandleUpdatedMarkers_mE0BD2DDB1A7D9559291ABDF10083C71736088C80(__this, L_35, NULL);
								V_10 = L_36;
								// var removedMarkers = HandleRemovedMarkers(removedNativeMarkers);
								NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 L_37 = V_8;
								TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_38;
								L_38 = OpenXRProvider_HandleRemovedMarkers_m3C7AC3CC49565AA5D723CAAFD9B29AAF2A412C4E(__this, L_37, NULL);
								V_11 = L_38;
								// if (m_PendingTransforms.Count > 0)
								Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_39 = __this->___m_PendingTransforms_4;
								NullCheck(L_39);
								int32_t L_40;
								L_40 = Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC(L_39, Dictionary_2_get_Count_mE611784C8B2BF45DD5B8969565FFE8DDB95220FC_RuntimeMethod_var);
								V_14 = (bool)((((int32_t)L_40) > ((int32_t)0))? 1 : 0);
								bool L_41 = V_14;
								if (!L_41)
								{
									goto IL_0194_3;
								}
							}
							{
								// foreach (var trackableId in m_PendingTransforms.Keys.ToList())
								Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_42 = __this->___m_PendingTransforms_4;
								NullCheck(L_42);
								KeyCollection_t03A7FB59EF988EBD45BEFDC1EDFF1A8BA91DACB9* L_43;
								L_43 = Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07(L_42, Dictionary_2_get_Keys_m37ED1CFE8CBE452AC84176BBD88C3887F1873C07_RuntimeMethod_var);
								List_1_t160F335B05E7692BA4234AFD249D62316B990635* L_44;
								L_44 = Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B(L_43, Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_RuntimeMethod_var);
								NullCheck(L_44);
								Enumerator_t413487DCCACC376393F93AF90282B4527081B999 L_45;
								L_45 = List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1(L_44, List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_RuntimeMethod_var);
								V_15 = L_45;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_0178_3:
									{// begin finally (depth: 4)
										Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D((&V_15), Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_RuntimeMethod_var);
										return;
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										goto IL_016d_4;
									}

IL_011a_4:
									{
										// foreach (var trackableId in m_PendingTransforms.Keys.ToList())
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_46;
										L_46 = Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_inline((&V_15), Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_RuntimeMethod_var);
										V_16 = L_46;
										// XRMarker xrMarker = m_Markers[trackableId];
										Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_47 = __this->___m_Markers_3;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_48 = V_16;
										NullCheck(L_47);
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_49;
										L_49 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_47, L_48, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
										V_17 = L_49;
										// xrMarker.transformMode = m_PendingTransforms[trackableId];
										Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_50 = __this->___m_PendingTransforms_4;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_51 = V_16;
										NullCheck(L_50);
										int32_t L_52;
										L_52 = Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632(L_50, L_51, Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var);
										il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
										XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline((&V_17), L_52, NULL);
										// xrMarker = ApplyTransform(xrMarker);
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_53 = V_17;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_54;
										L_54 = OpenXRProvider_ApplyTransform_mC47D48E167009A7AC3F69FAC7F337BC2F9818227(__this, L_53, NULL);
										V_17 = L_54;
										// updatedMarkers.Add(xrMarker);
										List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_55 = V_10;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_56 = V_17;
										NullCheck(L_55);
										List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline(L_55, L_56, List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
										// m_Markers[trackableId] = xrMarker;
										Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_57 = __this->___m_Markers_3;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_58 = V_16;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_59 = V_17;
										NullCheck(L_57);
										Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2(L_57, L_58, L_59, Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
									}

IL_016d_4:
									{
										// foreach (var trackableId in m_PendingTransforms.Keys.ToList())
										bool L_60;
										L_60 = Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D((&V_15), Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_RuntimeMethod_var);
										if (L_60)
										{
											goto IL_011a_4;
										}
									}
									{
										goto IL_0187_3;
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}

IL_0187_3:
							{
								// m_PendingTransforms.Clear();
								Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_61 = __this->___m_PendingTransforms_4;
								NullCheck(L_61);
								Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325(L_61, Dictionary_2_Clear_m431780744734EE4EC182BF5151096E066DB55325_RuntimeMethod_var);
							}

IL_0194_3:
							{
								// HashSet<TrackableId> handledMarkers = new HashSet<TrackableId>();
								HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* L_62 = (HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B*)il2cpp_codegen_object_new(HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B_il2cpp_TypeInfo_var);
								NullCheck(L_62);
								HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705(L_62, HashSet_1__ctor_m9C4751E6D978C5B862FAD4EBBD3BD342754B2705_RuntimeMethod_var);
								V_12 = L_62;
								// for (int i = 0; i < updatedMarkers.Count; ++i)
								V_18 = 0;
								goto IL_0219_3;
							}

IL_01a0_3:
							{
								// handledMarkers.Add(updatedMarkers[i].trackableId);
								HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* L_63 = V_12;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_64 = V_10;
								int32_t L_65 = V_18;
								NullCheck(L_64);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_66;
								L_66 = List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD(L_64, L_65, List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
								V_19 = L_66;
								il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
								TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_67;
								L_67 = XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline((&V_19), NULL);
								NullCheck(L_63);
								bool L_68;
								L_68 = HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA(L_63, L_67, HashSet_1_Add_mCBD4575BD0A5EF520E35E17AA318A9999E9F5CBA_RuntimeMethod_var);
								// if (IsLastSeenTimeTooOld(updatedMarkers[i]))
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_69 = V_10;
								int32_t L_70 = V_18;
								NullCheck(L_69);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_71;
								L_71 = List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD(L_69, L_70, List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
								bool L_72;
								L_72 = OpenXRProvider_IsLastSeenTimeTooOld_mC9BBE6C8FD3AEBF16C5AC66E85EC9351A07B9416(__this, L_71, NULL);
								V_20 = L_72;
								bool L_73 = V_20;
								if (!L_73)
								{
									goto IL_0212_3;
								}
							}
							{
								// XRMarker xrMarker = updatedMarkers[i];
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_74 = V_10;
								int32_t L_75 = V_18;
								NullCheck(L_74);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_76;
								L_76 = List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD(L_74, L_75, List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
								V_21 = L_76;
								// xrMarker.trackingState = TrackingState.Limited;
								il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
								XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline((&V_21), 1, NULL);
								// updatedMarkers[i] = xrMarker;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_77 = V_10;
								int32_t L_78 = V_18;
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_79 = V_21;
								NullCheck(L_77);
								List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE(L_77, L_78, L_79, List_1_set_Item_m6FA2FCD46A3382FA72F57CFE2B5E85D0787117BE_RuntimeMethod_var);
								// m_Markers[updatedMarkers[i].trackableId] = xrMarker;
								Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_80 = __this->___m_Markers_3;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_81 = V_10;
								int32_t L_82 = V_18;
								NullCheck(L_81);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_83;
								L_83 = List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD(L_81, L_82, List_1_get_Item_m3F86EEA2EE5EFFD9AE1927319B6D77E4F8DF82DD_RuntimeMethod_var);
								V_19 = L_83;
								TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_84;
								L_84 = XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline((&V_19), NULL);
								XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_85 = V_21;
								NullCheck(L_80);
								Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2(L_80, L_84, L_85, Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
							}

IL_0212_3:
							{
								// for (int i = 0; i < updatedMarkers.Count; ++i)
								int32_t L_86 = V_18;
								V_18 = ((int32_t)il2cpp_codegen_add(L_86, 1));
							}

IL_0219_3:
							{
								// for (int i = 0; i < updatedMarkers.Count; ++i)
								int32_t L_87 = V_18;
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_88 = V_10;
								NullCheck(L_88);
								int32_t L_89;
								L_89 = List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_inline(L_88, List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_RuntimeMethod_var);
								V_22 = (bool)((((int32_t)L_87) < ((int32_t)L_89))? 1 : 0);
								bool L_90 = V_22;
								if (L_90)
								{
									goto IL_01a0_3;
								}
							}
							{
								// foreach (var trackableId in m_Markers.Keys.ToList())
								Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_91 = __this->___m_Markers_3;
								NullCheck(L_91);
								KeyCollection_t9E060C86D70A5E2DABBB5BBFBBE4F1B9F583705F* L_92;
								L_92 = Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756(L_91, Dictionary_2_get_Keys_m5C581F51050334465053446FE9C159CD3AB59756_RuntimeMethod_var);
								List_1_t160F335B05E7692BA4234AFD249D62316B990635* L_93;
								L_93 = Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B(L_92, Enumerable_ToList_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m2F673F14126CDE80375D6C2D5B8FC5A27E694B6B_RuntimeMethod_var);
								NullCheck(L_93);
								Enumerator_t413487DCCACC376393F93AF90282B4527081B999 L_94;
								L_94 = List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1(L_93, List_1_GetEnumerator_m324E7A7CD9476D65BA62D991A48E39EEBCA54AC1_RuntimeMethod_var);
								V_23 = L_94;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_02b3_3:
									{// begin finally (depth: 4)
										Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D((&V_23), Enumerator_Dispose_m04FF651FBDB31735823C27E350F83EBBD864673D_RuntimeMethod_var);
										return;
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									{
										goto IL_02a8_4;
									}

IL_0247_4:
									{
										// foreach (var trackableId in m_Markers.Keys.ToList())
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_95;
										L_95 = Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_inline((&V_23), Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_RuntimeMethod_var);
										V_24 = L_95;
										// if (!handledMarkers.Contains(trackableId))
										HashSet_1_t334D266E4EE1D734DA9BE394D4C70C23DF6CDE7B* L_96 = V_12;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_97 = V_24;
										NullCheck(L_96);
										bool L_98;
										L_98 = HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A(L_96, L_97, HashSet_1_Contains_m3B99CDB9A1D2168E059A5CCF5D68BD8111D7904A_RuntimeMethod_var);
										V_25 = (bool)((((int32_t)L_98) == ((int32_t)0))? 1 : 0);
										bool L_99 = V_25;
										if (!L_99)
										{
											goto IL_02a7_4;
										}
									}
									{
										// XRMarker xrMarker = m_Markers[trackableId];
										Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_100 = __this->___m_Markers_3;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_101 = V_24;
										NullCheck(L_100);
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_102;
										L_102 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_100, L_101, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
										V_26 = L_102;
										// if (IsLastSeenTimeTooOld(xrMarker))
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_103 = V_26;
										bool L_104;
										L_104 = OpenXRProvider_IsLastSeenTimeTooOld_mC9BBE6C8FD3AEBF16C5AC66E85EC9351A07B9416(__this, L_103, NULL);
										V_27 = L_104;
										bool L_105 = V_27;
										if (!L_105)
										{
											goto IL_02a6_4;
										}
									}
									{
										// xrMarker.trackingState = TrackingState.Limited;
										il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
										XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline((&V_26), 1, NULL);
										// updatedMarkers.Add(xrMarker);
										List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_106 = V_10;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_107 = V_26;
										NullCheck(L_106);
										List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline(L_106, L_107, List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
										// m_Markers[trackableId] = xrMarker;
										Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_108 = __this->___m_Markers_3;
										TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_109 = V_24;
										XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_110 = V_26;
										NullCheck(L_108);
										Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2(L_108, L_109, L_110, Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
									}

IL_02a6_4:
									{
									}

IL_02a7_4:
									{
									}

IL_02a8_4:
									{
										// foreach (var trackableId in m_Markers.Keys.ToList())
										bool L_111;
										L_111 = Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D((&V_23), Enumerator_MoveNext_m64144FA26440B5BC78A43D948FA6CD77E7B32C4D_RuntimeMethod_var);
										if (L_111)
										{
											goto IL_0247_4;
										}
									}
									{
										goto IL_02c2_3;
									}
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}

IL_02c2_3:
							{
								// return TrackableChanges<XRMarker>.CopyFrom(
								//     new NativeArray<XRMarker>(addedMarkers.ToArray(), allocator),
								//     new NativeArray<XRMarker>(updatedMarkers.ToArray(), allocator),
								//     new NativeArray<TrackableId>(removedMarkers, allocator),
								//     allocator);
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_112 = V_9;
								NullCheck(L_112);
								XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_113;
								L_113 = List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1(L_112, List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_RuntimeMethod_var);
								int32_t L_114 = ___1_allocator;
								NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 L_115;
								memset((&L_115), 0, sizeof(L_115));
								NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5((&L_115), L_113, L_114, /*hidden argument*/NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_RuntimeMethod_var);
								List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_116 = V_10;
								NullCheck(L_116);
								XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_117;
								L_117 = List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1(L_116, List_1_ToArray_m54F232CCA2D4C159E105596ABC5A5E7BF58EC3C1_RuntimeMethod_var);
								int32_t L_118 = ___1_allocator;
								NativeArray_1_t42422AB7B494DF10049EABAD779F6BCEACCB3496 L_119;
								memset((&L_119), 0, sizeof(L_119));
								NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5((&L_119), L_117, L_118, /*hidden argument*/NativeArray_1__ctor_m33F89C2694D7E4CA9CCA6FA3B1E05233D251CBB5_RuntimeMethod_var);
								TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_120 = V_11;
								int32_t L_121 = ___1_allocator;
								NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E L_122;
								memset((&L_122), 0, sizeof(L_122));
								NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715((&L_122), L_120, L_121, /*hidden argument*/NativeArray_1__ctor_mE5B4873EB834E43222296A9B379A231FCDAB6715_RuntimeMethod_var);
								int32_t L_123 = ___1_allocator;
								TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_124;
								L_124 = TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C(L_115, L_119, L_122, L_123, TrackableChanges_1_CopyFrom_m9CC036563CA29B66DCEFBA5D882AC7573B3C0C2C_RuntimeMethod_var);
								V_28 = L_124;
								goto IL_031b;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_031b:
	{
		// }
		TrackableChanges_1_t0E69E6CC281ECC91E76F52C2D6B8344538247FD1 L_125 = V_28;
		return L_125;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::SetTransformMode(UnityEngine.XR.ARSubsystems.TrackableId,Microsoft.MixedReality.OpenXR.TransformMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_SetTransformMode_mCA4D978B62F621F20D6F00A2047C5F6D1B014677 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_transformMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		// if (m_Markers.ContainsKey(trackableId) && m_Markers[trackableId].transformMode != transformMode)
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_0 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_0, L_1, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_3 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_trackableId;
		NullCheck(L_3);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_5;
		L_5 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_3, L_4, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		V_1 = L_5;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&V_1), NULL);
		int32_t L_7 = ___1_transformMode;
		G_B3_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B3_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// m_PendingTransforms.Add(trackableId, transformMode);
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_9 = __this->___m_PendingTransforms_4;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_10 = ___0_trackableId;
		int32_t L_11 = ___1_transformMode;
		NullCheck(L_9);
		Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652(L_9, L_10, L_11, Dictionary_2_Add_m8A445EAF16A7CD3D15D43F73605AFDAF9E6A4652_RuntimeMethod_var);
	}

IL_0040:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<System.Byte> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::GetRawData(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF OpenXRProvider_GetRawData_m7705E5184CBD15DD81C60052E111B8D0D3AFDC78 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (m_Markers.ContainsKey(trackableId))
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_0 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_0, L_1, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		// Guid guid = FeatureUtils.ToGuid(trackableId);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_trackableId;
		Guid_t L_5;
		L_5 = FeatureUtils_ToGuid_mE584D409DA9B609AD40CD86340655B9E8996FFE9(L_4, NULL);
		V_1 = L_5;
		// int rawDataSize = (int)NativeLib.GetMarkerRawDataSize(guid);
		Guid_t L_6 = V_1;
		uint32_t L_7;
		L_7 = NativeLib_GetMarkerRawDataSize_m48B9EE302FB55610AF2739137D14465DFAA005D0(L_6, NULL);
		V_2 = L_7;
		// if (rawDataSize > 0)
		int32_t L_8 = V_2;
		V_3 = (bool)((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// NativeArray<byte> rawData = new NativeArray<byte>(rawDataSize, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_10 = V_2;
		int32_t L_11 = ___1_allocator;
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_4), L_10, L_11, 0, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		// NativeLib.GetMarkerRawData(guid, NativeArrayUnsafeUtility.GetUnsafePtr(rawData), (uint)rawDataSize);
		Guid_t L_12 = V_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_13 = V_4;
		void* L_14;
		L_14 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_13, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		int32_t L_15 = V_2;
		NativeLib_GetMarkerRawData_m544920DF405472FA3A93CDA3919894C630F65AFF(L_12, L_14, L_15, NULL);
		// return rawData;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_16 = V_4;
		V_5 = L_16;
		goto IL_0055;
	}

IL_0048:
	{
	}

IL_0049:
	{
		// return new NativeArray<byte>(0, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_17 = ___1_allocator;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_18;
		memset((&L_18), 0, sizeof(L_18));
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&L_18), 0, L_17, 0, /*hidden argument*/NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		V_5 = L_18;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_19 = V_5;
		return L_19;
	}
}
// System.String Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::GetDecodedString(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenXRProvider_GetDecodedString_mB7CC6E4074243EDC78723C1F457B974E9A5D99DA (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	StringBuilder_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// if (m_Markers.ContainsKey(trackableId))
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_0 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_0, L_1, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		// Guid guid = FeatureUtils.ToGuid(trackableId);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_trackableId;
		Guid_t L_5;
		L_5 = FeatureUtils_ToGuid_mE584D409DA9B609AD40CD86340655B9E8996FFE9(L_4, NULL);
		V_1 = L_5;
		// int decodedStringLength = (int)NativeLib.GetMarkerDecodedStringLength(guid);
		Guid_t L_6 = V_1;
		uint32_t L_7;
		L_7 = NativeLib_GetMarkerDecodedStringLength_m2A8FE807631CBDE22CC9B137501621E3D8208F8F(L_6, NULL);
		V_2 = L_7;
		// if (decodedStringLength > 0)
		int32_t L_8 = V_2;
		V_3 = (bool)((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// StringBuilder stringBuilder = new StringBuilder(decodedStringLength);
		int32_t L_10 = V_2;
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_11, L_10, NULL);
		V_4 = L_11;
		// NativeLib.GetMarkerDecodedString(guid, stringBuilder, (uint)stringBuilder.Capacity);
		Guid_t L_12 = V_1;
		StringBuilder_t* L_13 = V_4;
		StringBuilder_t* L_14 = V_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E(L_14, NULL);
		NativeLib_GetMarkerDecodedString_m4BB563331785D9535720B2E6DA32AD3BE3A9CC56(L_12, L_13, L_15, NULL);
		// return stringBuilder.ToString();
		StringBuilder_t* L_16 = V_4;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		V_5 = L_17;
		goto IL_0052;
	}

IL_004c:
	{
	}

IL_004d:
	{
		// return null;
		V_5 = (String_t*)NULL;
		goto IL_0052;
	}

IL_0052:
	{
		// }
		String_t* L_18 = V_5;
		return L_18;
	}
}
// Microsoft.MixedReality.OpenXR.QRCodeProperties Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::GetQRCodeProperties(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D OpenXRProvider_GetQRCodeProperties_mB95383244F7A0DF9045B041B4A6BD7F1C1DA4390 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D V_2;
	memset((&V_2), 0, sizeof(V_2));
	QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Guid guid = FeatureUtils.ToGuid(trackableId);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		Guid_t L_1;
		L_1 = FeatureUtils_ToGuid_mE584D409DA9B609AD40CD86340655B9E8996FFE9(L_0, NULL);
		V_0 = L_1;
		// NativeQRCodeProperties nativeQRCodeProperties = new NativeQRCodeProperties();
		il2cpp_codegen_initobj((&V_1), sizeof(NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0));
		// QRCodeProperties qrCodeProperties = new QRCodeProperties();
		il2cpp_codegen_initobj((&V_2), sizeof(QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D));
		// NativeLib.GetMarkerQRCodeProperties(guid, &nativeQRCodeProperties, (uint)sizeof(NativeQRCodeProperties));
		Guid_t L_2 = V_0;
		uint32_t L_3 = sizeof(NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0);
		NativeLib_GetMarkerQRCodeProperties_mD9680AB8A4C493CCE95ED165DA2EED444522B3EA(L_2, (NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0*)((uintptr_t)(&V_1)), L_3, NULL);
		// qrCodeProperties.version = nativeQRCodeProperties.version;
		NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0 L_4 = V_1;
		uint32_t L_5 = L_4.___version_1;
		(&V_2)->___version_0 = L_5;
		// qrCodeProperties.type = (QRCodeType)nativeQRCodeProperties.type;
		NativeQRCodeProperties_tAC6DDE341B65C1EDBB0A04D80370B97E73640FE0 L_6 = V_1;
		int32_t L_7 = L_6.___type_0;
		(&V_2)->___type_1 = L_7;
		// return qrCodeProperties;
		QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D L_8 = V_2;
		V_3 = L_8;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		QRCodeProperties_tEB4D07F18C478CED5A78B58211D938E03B78824D L_9 = V_3;
		return L_9;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Start_m926535B2BF9CD9FC5B89F080889CD31EF5D2FFD8 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		// NativeLib.StartMarkerSubsystem();
		NativeLib_StartMarkerSubsystem_mA841DE4225E92CED4461DFF2A5CB471097AFB1FF(NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRProvider_Stop_m3BDD4C2FEF1281CF33E648546996FC07331A993B (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, const RuntimeMethod* method) 
{
	{
		// NativeLib.StopMarkerSubsystem();
		NativeLib_StopMarkerSubsystem_mCEA7FD09C6F70CB89F200256896C0BA2088CE6C6(NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::HandleAddedMarkers(Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t511BD97C45CE630FB76E68532C127583B647161F* OpenXRProvider_HandleAddedMarkers_mF4B821358D290648E05F13D47CDB9F3696C38511 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_addedNativeMarkers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_0 = NULL;
	int32_t V_1 = 0;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_5 = NULL;
	{
		// var addedMarkers = new List<XRMarker>();
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_0 = (List_1_t511BD97C45CE630FB76E68532C127583B647161F*)il2cpp_codegen_object_new(List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E(L_0, List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < addedNativeMarkers.Length; ++i)
		V_1 = 0;
		goto IL_0054;
	}

IL_000b:
	{
		// XRMarker xrMarker = ToXRMarker(addedNativeMarkers[i]);
		int32_t L_1 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_addedNativeMarkers))->___m_Buffer_0, L_1);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_3;
		L_3 = OpenXRProvider_ToXRMarker_m0D07122261B7A914500FAABD63D0D12B1F5E752F(__this, L_2, NULL);
		V_2 = L_3;
		// if (xrMarker.transformMode == TransformMode.Center)
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&V_2), NULL);
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// xrMarker = ApplyCenterTransform(xrMarker);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_6 = V_2;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_7;
		L_7 = OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86(__this, L_6, NULL);
		V_2 = L_7;
	}

IL_0033:
	{
		// m_Markers.Add(xrMarker.trackableId, xrMarker);
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_8 = __this->___m_Markers_3;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_9;
		L_9 = XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline((&V_2), NULL);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_10 = V_2;
		NullCheck(L_8);
		Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103(L_8, L_9, L_10, Dictionary_2_Add_mCE7E4DDDBB265D1DA73EC746C78893E20115B103_RuntimeMethod_var);
		// addedMarkers.Add(xrMarker);
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_11 = V_0;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_12 = V_2;
		NullCheck(L_11);
		List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline(L_11, L_12, List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
		// for (int i = 0; i < addedNativeMarkers.Length; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < addedNativeMarkers.Length; ++i)
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_addedNativeMarkers))->___m_Length_1);
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_000b;
		}
	}
	{
		// return addedMarkers;
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_17 = V_0;
		V_5 = L_17;
		goto IL_0069;
	}

IL_0069:
	{
		// }
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_18 = V_5;
		return L_18;
	}
}
// System.Collections.Generic.List`1<Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker> Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::HandleUpdatedMarkers(Unity.Collections.NativeArray`1<Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t511BD97C45CE630FB76E68532C127583B647161F* OpenXRProvider_HandleUpdatedMarkers_mE0BD2DDB1A7D9559291ABDF10083C71736088C80 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8B6926CCF639200C7747EF7B9417C08E68EB4DAE ___0_updatedNativeMarkers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_0 = NULL;
	int32_t V_1 = 0;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	List_1_t511BD97C45CE630FB76E68532C127583B647161F* V_9 = NULL;
	{
		// var updatedMarkers = new List<XRMarker>();
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_0 = (List_1_t511BD97C45CE630FB76E68532C127583B647161F*)il2cpp_codegen_object_new(List_1_t511BD97C45CE630FB76E68532C127583B647161F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E(L_0, List_1__ctor_m3AF2ACCE115E6BDFF364F086F8FF99089146153E_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < updatedNativeMarkers.Length; ++i)
		V_1 = 0;
		goto IL_0152;
	}

IL_000e:
	{
		// TrackableId updatedId = FeatureUtils.ToTrackableId(updatedNativeMarkers[i].id);
		int32_t L_1 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer_0, L_1);
		Guid_t L_3 = L_2.___id_0;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4;
		L_4 = FeatureUtils_ToTrackableId_m152DF710A98CD5C7264C3322770E841EFDB4CEBF(L_3, NULL);
		V_2 = L_4;
		// if (m_Markers.ContainsKey(updatedId))
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_5 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = V_2;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_5, L_6, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_014d;
		}
	}
	{
		// XRMarker xrMarker = m_Markers[updatedId];
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_9 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_10 = V_2;
		NullCheck(L_9);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_11;
		L_11 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_9, L_10, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		V_4 = L_11;
		// Pose xrMarkerPose = xrMarker.pose;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_12;
		L_12 = XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline((&V_4), NULL);
		V_5 = L_12;
		// xrMarkerPose.position = updatedNativeMarkers[i].position;
		int32_t L_13 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer_0, L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___position_1;
		(&V_5)->___position_0 = L_15;
		// xrMarkerPose.rotation = updatedNativeMarkers[i].rotation;
		int32_t L_16 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_17;
		L_17 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer_0, L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = L_17.___rotation_2;
		(&V_5)->___rotation_1 = L_18;
		// xrMarker.pose = xrMarkerPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = V_5;
		XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline((&V_4), L_19, NULL);
		// xrMarker.center = updatedNativeMarkers[i].center;
		int32_t L_20 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer_0, L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = L_21.___center_4;
		XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline((&V_4), L_22, NULL);
		// xrMarker.size = updatedNativeMarkers[i].size;
		int32_t L_23 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer_0, L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = L_24.___size_5;
		XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline((&V_4), L_25, NULL);
		// xrMarker.lastSeenTime = GetLastSeenTimeAsRealTimeSinceStartup(updatedNativeMarkers[i].lastSeenTime);
		int32_t L_26 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_27;
		L_27 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer_0, L_26);
		int64_t L_28 = L_27.___lastSeenTime_6;
		float L_29;
		L_29 = OpenXRProvider_GetLastSeenTimeAsRealTimeSinceStartup_m56A4FD097CA3F7083477A18441159374001A96EC(__this, L_28, NULL);
		XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline((&V_4), L_29, NULL);
		// xrMarker.trackingState = updatedNativeMarkers[i].trackingState;
		int32_t L_30 = V_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0, ((&___0_updatedNativeMarkers))->___m_Buffer_0, L_30);
		int32_t L_32 = L_31.___trackingState_3;
		XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline((&V_4), L_32, NULL);
		// if (m_PendingTransforms.ContainsKey(updatedId))
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_33 = __this->___m_PendingTransforms_4;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_34 = V_2;
		NullCheck(L_33);
		bool L_35;
		L_35 = Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF(L_33, L_34, Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var);
		V_6 = L_35;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_010e;
		}
	}
	{
		// xrMarker.transformMode = m_PendingTransforms[updatedId];
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_37 = __this->___m_PendingTransforms_4;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_38 = V_2;
		NullCheck(L_37);
		int32_t L_39;
		L_39 = Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632(L_37, L_38, Dictionary_2_get_Item_m81F13A0651D8C3119A4261E2DB5EDEC36CC67632_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline((&V_4), L_39, NULL);
		// m_PendingTransforms.Remove(updatedId);
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_40 = __this->___m_PendingTransforms_4;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_41 = V_2;
		NullCheck(L_40);
		bool L_42;
		L_42 = Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15(L_40, L_41, Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var);
	}

IL_010e:
	{
		// if (xrMarker.transformMode == TransformMode.Center)
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_43;
		L_43 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&V_4), NULL);
		V_7 = (bool)((((int32_t)L_43) == ((int32_t)1))? 1 : 0);
		bool L_44 = V_7;
		if (!L_44)
		{
			goto IL_012a;
		}
	}
	{
		// xrMarker = ApplyCenterTransform(xrMarker);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_45 = V_4;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_46;
		L_46 = OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86(__this, L_45, NULL);
		V_4 = L_46;
	}

IL_012a:
	{
		// m_Markers[updatedId] = xrMarker;
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_47 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_48 = V_2;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_49 = V_4;
		NullCheck(L_47);
		Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2(L_47, L_48, L_49, Dictionary_2_set_Item_m767B1A8D00B286A3B39E7F38D58DF0C915CA73B2_RuntimeMethod_var);
		// updatedMarkers.Add(m_Markers[updatedId]);
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_50 = V_0;
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_51 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_52 = V_2;
		NullCheck(L_51);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_53;
		L_53 = Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E(L_51, L_52, Dictionary_2_get_Item_m6701132BDA56D30BE0F8CD7F1285DF874151945E_RuntimeMethod_var);
		NullCheck(L_50);
		List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_inline(L_50, L_53, List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_RuntimeMethod_var);
	}

IL_014d:
	{
		// for (int i = 0; i < updatedNativeMarkers.Length; ++i)
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0152:
	{
		// for (int i = 0; i < updatedNativeMarkers.Length; ++i)
		int32_t L_55 = V_1;
		int32_t L_56;
		L_56 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_updatedNativeMarkers))->___m_Length_1);
		V_8 = (bool)((((int32_t)L_55) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_8;
		if (L_57)
		{
			goto IL_000e;
		}
	}
	{
		// return updatedMarkers;
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_58 = V_0;
		V_9 = L_58;
		goto IL_016a;
	}

IL_016a:
	{
		// }
		List_1_t511BD97C45CE630FB76E68532C127583B647161F* L_59 = V_9;
		return L_59;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId[] Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::HandleRemovedMarkers(Unity.Collections.NativeArray`1<System.Guid>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* OpenXRProvider_HandleRemovedMarkers_m3C7AC3CC49565AA5D723CAAFD9B29AAF2A412C4E (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeArray_1_t8EF2DFBA2A5DED59E875AECA3EB9F1BBEA7EFCF8 ___0_removedNativeMarkers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* V_0 = NULL;
	int32_t V_1 = 0;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* V_6 = NULL;
	{
		// var removedMarkers = new TrackableId[removedNativeMarkers.Length];
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_removedNativeMarkers))->___m_Length_1);
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_1 = (TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0*)(TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0*)SZArrayNew(TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (int i = 0; i < removedNativeMarkers.Length; ++i)
		V_1 = 0;
		goto IL_006e;
	}

IL_0012:
	{
		// TrackableId removedId = FeatureUtils.ToTrackableId(removedNativeMarkers[i]);
		int32_t L_2 = V_1;
		Guid_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_ITEM(Guid_t, ((&___0_removedNativeMarkers))->___m_Buffer_0, L_2);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4;
		L_4 = FeatureUtils_ToTrackableId_m152DF710A98CD5C7264C3322770E841EFDB4CEBF(L_3, NULL);
		V_2 = L_4;
		// if (m_Markers.ContainsKey(removedId))
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_5 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = V_2;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3(L_5, L_6, Dictionary_2_ContainsKey_mC1DAB2B8D8F9B80B9988453E080AB4B8F4E5A0B3_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// m_Markers.Remove(removedId);
		Dictionary_2_tA967EE42E9DAD9AEF85904C61E47670D0C5B2B6F* L_9 = __this->___m_Markers_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_10 = V_2;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594(L_9, L_10, Dictionary_2_Remove_mD593334AB2D37306843FBFB0052346953414E594_RuntimeMethod_var);
	}

IL_0040:
	{
		// if (m_PendingTransforms.ContainsKey(removedId))
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_12 = __this->___m_PendingTransforms_4;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF(L_12, L_13, Dictionary_2_ContainsKey_m98B8D02CCF63B9E76FCC2BE8FA6A6FFEA16364FF_RuntimeMethod_var);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		// m_PendingTransforms.Remove(removedId);
		Dictionary_2_tAF999A3D4CCAE490F7B805D33A2DBD3DBB4CDDDA* L_16 = __this->___m_PendingTransforms_4;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_17 = V_2;
		NullCheck(L_16);
		bool L_18;
		L_18 = Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15(L_16, L_17, Dictionary_2_Remove_m38283E00C6BBAED167431266E49302A4FB2E9C15_RuntimeMethod_var);
	}

IL_0061:
	{
		// removedMarkers[i] = removedId;
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_19 = V_0;
		int32_t L_20 = V_1;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_21 = V_2;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7)L_21);
		// for (int i = 0; i < removedNativeMarkers.Length; ++i)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_006e:
	{
		// for (int i = 0; i < removedNativeMarkers.Length; ++i)
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_removedNativeMarkers))->___m_Length_1);
		V_5 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (L_25)
		{
			goto IL_0012;
		}
	}
	{
		// return removedMarkers;
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_26 = V_0;
		V_6 = L_26;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		TrackableIdU5BU5D_tDB6E301F3B66EC6C487F725B5811B3A581ED4FD0* L_27 = V_6;
		return L_27;
	}
}
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ApplyTransform(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyTransform_mC47D48E167009A7AC3F69FAC7F337BC2F9818227 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (xrMarker.transformMode == TransformMode.Center)
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&___0_xrMarker), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return ApplyCenterTransform(xrMarker);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_2 = ___0_xrMarker;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_3;
		L_3 = OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86(__this, L_2, NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_001a:
	{
		// return ApplyStableTransform(xrMarker);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_4 = ___0_xrMarker;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_5;
		L_5 = OpenXRProvider_ApplyStableTransform_m1AD398C75E69AA99410219F8A47C6DAD10F92402(__this, L_4, NULL);
		V_1 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_6 = V_1;
		return L_6;
	}
}
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ApplyCenterTransform(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyCenterTransform_m00ED833682C6A353DBE5CE0AE796EAC65C888A86 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (xrMarker.transformMode == TransformMode.Center)
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&___0_xrMarker), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// Pose newPose = xrMarker.pose;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline((&___0_xrMarker), NULL);
		V_1 = L_2;
		// newPose.position.x += xrMarker.size.x / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&(&V_1)->___position_0);
		float* L_4 = (float*)(&L_3->___x_2);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline((&___0_xrMarker), NULL);
		float L_8 = L_7.___x_0;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, ((float)(L_8/(2.0f)))));
		// newPose.position.y -= xrMarker.size.y / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&(&V_1)->___position_0);
		float* L_10 = (float*)(&L_9->___y_3);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline((&___0_xrMarker), NULL);
		float L_14 = L_13.___y_1;
		*((float*)L_11) = (float)((float)il2cpp_codegen_subtract(L_12, ((float)(L_14/(2.0f)))));
		// xrMarker.pose = newPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_1;
		XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline((&___0_xrMarker), L_15, NULL);
	}

IL_0066:
	{
		// return xrMarker;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_16 = ___0_xrMarker;
		V_2 = L_16;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_17 = V_2;
		return L_17;
	}
}
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ApplyStableTransform(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ApplyStableTransform_m1AD398C75E69AA99410219F8A47C6DAD10F92402 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (xrMarker.transformMode == TransformMode.MostStable)
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline((&___0_xrMarker), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		// Pose newPose = xrMarker.pose;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline((&___0_xrMarker), NULL);
		V_1 = L_2;
		// newPose.position.x -= xrMarker.size.x / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&(&V_1)->___position_0);
		float* L_4 = (float*)(&L_3->___x_2);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline((&___0_xrMarker), NULL);
		float L_8 = L_7.___x_0;
		*((float*)L_5) = (float)((float)il2cpp_codegen_subtract(L_6, ((float)(L_8/(2.0f)))));
		// newPose.position.y += xrMarker.size.y / 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&(&V_1)->___position_0);
		float* L_10 = (float*)(&L_9->___y_3);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline((&___0_xrMarker), NULL);
		float L_14 = L_13.___y_1;
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, ((float)(L_14/(2.0f)))));
		// xrMarker.pose = newPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_1;
		XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline((&___0_xrMarker), L_15, NULL);
	}

IL_0066:
	{
		// return xrMarker;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_16 = ___0_xrMarker;
		V_2 = L_16;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_17 = V_2;
		return L_17;
	}
}
// Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ToXRMarker(Microsoft.MixedReality.OpenXR.ARSubsystems.NativeMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 OpenXRProvider_ToXRMarker_m0D07122261B7A914500FAABD63D0D12B1F5E752F (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 ___0_nativeMarker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new XRMarker(
		//     FeatureUtils.ToTrackableId(nativeMarker.id),
		//     new Pose(nativeMarker.position, nativeMarker.rotation),
		//     nativeMarker.trackingState,
		//     nativeMarker.center,
		//     nativeMarker.size,
		//     GetLastSeenTimeAsRealTimeSinceStartup(nativeMarker.lastSeenTime),
		//     m_defaultTransformMode,
		//     (ARMarkerType)nativeMarker.type,
		//     IntPtr.Zero);
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_0 = ___0_nativeMarker;
		Guid_t L_1 = L_0.___id_0;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2;
		L_2 = FeatureUtils_ToTrackableId_m152DF710A98CD5C7264C3322770E841EFDB4CEBF(L_1, NULL);
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_3 = ___0_nativeMarker;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3.___position_1;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_5 = ___0_nativeMarker;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5.___rotation_2;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_7), L_4, L_6, /*hidden argument*/NULL);
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_8 = ___0_nativeMarker;
		int32_t L_9 = L_8.___trackingState_3;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_10 = ___0_nativeMarker;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = L_10.___center_4;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_12 = ___0_nativeMarker;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = L_12.___size_5;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_14 = ___0_nativeMarker;
		int64_t L_15 = L_14.___lastSeenTime_6;
		float L_16;
		L_16 = OpenXRProvider_GetLastSeenTimeAsRealTimeSinceStartup_m56A4FD097CA3F7083477A18441159374001A96EC(__this, L_15, NULL);
		int32_t L_17 = __this->___m_defaultTransformMode_2;
		NativeMarker_t2C13145419767E28C6DD3CCF236D69BD63CD0FE0 L_18 = ___0_nativeMarker;
		int32_t L_19 = L_18.___type_7;
		intptr_t L_20 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_21;
		memset((&L_21), 0, sizeof(L_21));
		XRMarker__ctor_m333BD0462FA9858789857B3B6127D56926E6932E((&L_21), L_2, L_7, L_9, L_11, L_13, L_16, L_17, L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_22 = V_0;
		return L_22;
	}
}
// Microsoft.MixedReality.OpenXR.ARSubsystems.XrSceneMarkerTypeMSFT[] Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::ToXrSceneMarkerTypeMSFT(Microsoft.MixedReality.OpenXR.ARMarkerType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* OpenXRProvider_ToXrSceneMarkerTypeMSFT_m433281740A18B0C24D39984CABD5AA7A8F5D3802 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* ___0_markerTypes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* V_3 = NULL;
	{
		// var xrSceneMarkerTypeMSFTs = new XrSceneMarkerTypeMSFT[markerTypes.Length];
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_0 = ___0_markerTypes;
		NullCheck(L_0);
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_1 = (XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541*)(XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541*)SZArrayNew(XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		// for (int i = 0; i < markerTypes.Length; ++i)
		V_1 = 0;
		goto IL_001a;
	}

IL_000e:
	{
		// xrSceneMarkerTypeMSFTs[i] = (XrSceneMarkerTypeMSFT)markerTypes[i];
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_2 = V_0;
		int32_t L_3 = V_1;
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_4 = ___0_markerTypes;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (int32_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_7);
		// for (int i = 0; i < markerTypes.Length; ++i)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < markerTypes.Length; ++i)
		int32_t L_9 = V_1;
		ARMarkerTypeU5BU5D_t53BF2E92B4EF65E04D03C4ECC958B4E122483801* L_10 = ___0_markerTypes;
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_000e;
		}
	}
	{
		// return xrSceneMarkerTypeMSFTs;
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_12 = V_0;
		V_3 = L_12;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		XrSceneMarkerTypeMSFTU5BU5D_t0B39FF762B85E5A8CB0DC7B35F792EDE1465A541* L_13 = V_3;
		return L_13;
	}
}
// System.Single Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::GetLastSeenTimeAsRealTimeSinceStartup(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OpenXRProvider_GetLastSeenTimeAsRealTimeSinceStartup_m56A4FD097CA3F7083477A18441159374001A96EC (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, int64_t ___0_lastSeenTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return lastSeenTime / (float)1e9 + m_TimeOffsetInfo.offset;
		int64_t L_0 = ___0_lastSeenTime;
		TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9* L_1 = (TimeOffsetInfo_t3818936A9324A94E1BE7F383A7BAF994457653D9*)(&__this->___m_TimeOffsetInfo_5);
		float L_2 = L_1->___offset_1;
		V_0 = ((float)il2cpp_codegen_add(((float)(((float)L_0)/(1.0E+09f))), L_2));
		goto IL_0018;
	}

IL_0018:
	{
		// }
		float L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystem/OpenXRProvider::IsLastSeenTimeTooOld(Microsoft.MixedReality.OpenXR.ARSubsystems.XRMarker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRProvider_IsLastSeenTimeTooOld_mC9BBE6C8FD3AEBF16C5AC66E85EC9351A07B9416 (OpenXRProvider_tAF649A642AF425A406CED3DAD542B942132873FA* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_xrMarker, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return (Time.realtimeSinceStartup - xrMarker.lastSeenTime) > 2 && xrMarker.trackingState == TrackingState.Tracking;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_inline((&___0_xrMarker), NULL);
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) > ((float)(2.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_inline((&___0_xrMarker), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		bool L_3 = V_0;
		return L_3;
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
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::.ctor(Microsoft.MixedReality.OpenXR.IOpenXRContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController__ctor_mE834221E79C5A9097B7294175A4A96B05B912DBC (MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7* __this, RuntimeObject* ___0_context, const RuntimeMethod* method) 
{
	{
		// public MarkerSubsystemController(IOpenXRContext context) : base(context)
		RuntimeObject* L_0 = ___0_context;
		SubsystemController__ctor_m860DC323501E43007757630E4E5AE907CC3DBBA4(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::OnSubsystemCreate(Microsoft.MixedReality.OpenXR.ISubsystemPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController_OnSubsystemCreate_m63487805481D8DAE4482D8121087105B6876F5D8 (MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7* __this, RuntimeObject* ___0_plugin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemPlugin_CreateSubsystem_TisXRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m1A23BDF123AF771DE0E0D8BC99000A2698E7D48A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DC94C1A21957C047FE1EB19F86F440997C76E7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (OpenXRRuntime.IsExtensionEnabled("XR_MSFT_scene_marker"))
		bool L_0;
		L_0 = OpenXRRuntime_IsExtensionEnabled_mF0C6FC95EDFD8DA6C5A838EA2053C06F657A2EE5(_stringLiteral23DC94C1A21957C047FE1EB19F86F440997C76E7, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// plugin.CreateSubsystem<XRMarkerSubsystemDescriptor, XRMarkerSubsystem>(s_MarkerDescriptors, MarkerSubsystem.Id);
		RuntimeObject* L_2 = ___0_plugin;
		il2cpp_codegen_runtime_class_init_inline(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var);
		List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* L_3 = ((MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields*)il2cpp_codegen_static_fields_for(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var))->___s_MarkerDescriptors_1;
		NullCheck(L_2);
		GenericInterfaceActionInvoker2< List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35*, String_t* >::Invoke(ISubsystemPlugin_CreateSubsystem_TisXRMarkerSubsystemDescriptor_t715496976A18AD6956A17832EEF59785900C0DD6_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m1A23BDF123AF771DE0E0D8BC99000A2698E7D48A_RuntimeMethod_var, L_2, L_3, _stringLiteral0DE17B7149CFC4AD2D8D4499DED4098286557720);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::OnSubsystemDestroy(Microsoft.MixedReality.OpenXR.ISubsystemPlugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController_OnSubsystemDestroy_m7784FD85FB3DFF1ADD45A5D92E9779490BE5208D (MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7* __this, RuntimeObject* ___0_plugin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemPlugin_DestroySubsystem_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m29E429B7340A8A442182BD2DAA371BE7A9443B36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// plugin.DestroySubsystem<XRMarkerSubsystem>();
		RuntimeObject* L_0 = ___0_plugin;
		NullCheck(L_0);
		GenericInterfaceActionInvoker0::Invoke(ISubsystemPlugin_DestroySubsystem_TisXRMarkerSubsystem_t5233A26F1CE4D4DD3DFCCCFC32FDA9C4D992A357_m29E429B7340A8A442182BD2DAA371BE7A9443B36_RuntimeMethod_var, L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.OpenXR.ARSubsystems.MarkerSubsystemController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarkerSubsystemController__cctor_mE0C003AAFAEC4F66A9C97677AD06326098443E8B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRMarkerSubsystemDescriptor> s_MarkerDescriptors = new List<XRMarkerSubsystemDescriptor>();
		List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35* L_0 = (List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35*)il2cpp_codegen_object_new(List_1_tC22825AB237DE70BB25C7CB8743604D331C95C35_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580(L_0, List_1__ctor_mC591BF6C7964B9359D62D7D0BD6AD4461C35F580_RuntimeMethod_var);
		((MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields*)il2cpp_codegen_static_fields_for(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var))->___s_MarkerDescriptors_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_StaticFields*)il2cpp_codegen_static_fields_for(MarkerSubsystemController_t9FD2C3CD0E501738ED6930D1D649CF44D8547CC7_il2cpp_TypeInfo_var))->___s_MarkerDescriptors_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97* OpenXRContext_get_Current_m80D4A82031916348CFA840AA4970EBCC7B3972B2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static OpenXRContext Current { get; } = new OpenXRContext();
		il2cpp_codegen_runtime_class_init_inline(OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97_il2cpp_TypeInfo_var);
		OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97* L_0 = ((OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97_StaticFields*)il2cpp_codegen_static_fields_for(OpenXRContext_tC6AA0873D46F507E6FD99151DD5FAB93A0845D97_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRAnchor_get_nativePtr_mC0551FA7E8DB8A0DA1EAE02D9B0BFD9D47389C26_inline (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_pose_m87E148B64A7EB29C96DC2FD61E9EF92F218278C8_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; internal set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___U3CposeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_trackingState_m4BD0134128A6C5770D8AFDBC95C9DE1DF8C18CFC_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState { get; internal set; }
		int32_t L_0 = ___0_value;
		__this->___U3CtrackingStateU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_center_m0B4C7F5910FB4076003888A1060012F8BDC32A57_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 center { get; internal set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CcenterU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_size_m8F91E0C1C6FD00F4125D4DACF3AABEAFDEB30F82_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 size { get; internal set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_lastSeenTime_m5BB8E4F70A100B6732DB0E0E08F408FD71819ABD_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float lastSeenTime { get; internal set; }
		float L_0 = ___0_value;
		__this->___U3ClastSeenTimeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRMarker_set_transformMode_mF035A77F1869A415E1C30748DF8BE62991915EA4_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TransformMode transformMode { get; internal set; }
		int32_t L_0 = ___0_value;
		__this->___U3CtransformModeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRMarker_get_trackableId_m631071587AB3A81FF304F9513B854F6A96355BA4_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId { get; }
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___U3CtrackableIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRMarker_get_pose_m8F4C00DE68619C010A4450B02622257F33E049CB_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose { get; internal set; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___U3CposeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_trackingState_mAD3BB40B3E6FC7580159A8BE7FEB2A4D242D9CB6_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState { get; internal set; }
		int32_t L_0 = __this->___U3CtrackingStateU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_center_m5DEEB5EB8BCD66CB7521828747174DA596A8CD0F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 center { get; internal set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CcenterU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 XRMarker_get_size_m74D038CACCDD79E6467F78EC28FF607B205EE813_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 size { get; internal set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CsizeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRMarker_get_lastSeenTime_m20EFAEA942299F041B9896C2B77424EA947D00E6_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public float lastSeenTime { get; internal set; }
		float L_0 = __this->___U3ClastSeenTimeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_transformMode_m09F145F1FC5644AD9A9CDE3E506C1A5D6FE1283F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public TransformMode transformMode { get; internal set; }
		int32_t L_0 = __this->___U3CtransformModeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRMarker_get_markerType_mE7671C1EC6EEA640492B85F356413914C05ED58F_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public ARMarkerType markerType { get; }
		int32_t L_0 = __this->___U3CmarkerTypeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRMarker_get_nativePtr_m0D1149446102E59DB3825856A661976B79A9B03A_inline (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr { get; }
		intptr_t L_0 = __this->___U3CnativePtrU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 XRMarker_get_defaultValue_m049879891BEA32B4545D12BFEA87D0A0D0C9D8C9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static XRMarker defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var);
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_0 = ((XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_StaticFields*)il2cpp_codegen_static_fields_for(XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m6E690900279C4DFDDF3F0D8E3D09239186A5A425_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		// internal string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m01F87D7B1B8127E85BDD4DE8780A7BCCF0211193_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		// internal Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m04EEF98E63B64B109946B84990FD2E44A4C0F8FB_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, const RuntimeMethod* method) 
{
	{
		// internal Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCD91F95E6762BC58E3E8DD561E2F98289E8ED649_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m8C571769BF340ED36876835311F45366779C9704_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m721A0464565A1EE0F02F4D2470E628509BDC5A29_inline (Cinfo_tEA94A70F644FDBCEAA78A2CED682330EBAD1CFCD* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemLifecycleManager_3_get_subsystem_mD3D899C68170AAB80E8086C46FC5C6C033A07C21_gshared_inline (SubsystemLifecycleManager_3_t499D76783B0F91C52B19F7183F077FAD1985AD55* __this, const RuntimeMethod* method) 
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject* L_0 = __this->___U3CsubsystemU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 Enumerator_get_Current_mAA8C4186892182C66A019347989291351AEA117B_gshared_inline (Enumerator_t413487DCCACC376393F93AF90282B4527081B999* __this, const RuntimeMethod* method) 
{
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD7C105A5E5B0FA6436293FECF9922AB7C4194630_gshared_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 ___0_item, const RuntimeMethod* method) 
{
	XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		XRMarkerU5BU5D_tB3891073F3756F2E150E4C86FC473D84D8736AFC* L_6 = V_0;
		int32_t L_7 = V_1;
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0)L_8);
		return;
	}

IL_0034:
	{
		XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0 L_9 = ___0_item;
		((  void (*) (List_1_t511BD97C45CE630FB76E68532C127583B647161F*, XRMarker_tC69AEF430F3DDBB39A40C04AAB33CBE39F5833D0, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m48CD3CF61FDD9A377C0C95816E46015C515F3070_gshared_inline (List_1_t511BD97C45CE630FB76E68532C127583B647161F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
