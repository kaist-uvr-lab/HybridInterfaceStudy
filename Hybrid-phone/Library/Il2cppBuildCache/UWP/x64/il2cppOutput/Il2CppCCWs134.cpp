﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<UnityEngine.UIElements.Button>
struct ActionQueryMatcher_tD7D20786576B980AD47A41BAB219E412B0F21716;
// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<UnityEngine.UIElements.VisualElement>
struct ActionQueryMatcher_tBA08813774EDD8920F40BFFC2F27B8329C7923DD;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct Dictionary_2_tD54822E12FBBB5E788C7292513B6AEFC3DE5AFDE;
// System.Collections.Generic.Dictionary`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E;
// System.Collections.Generic.Dictionary`2<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct Dictionary_2_t8091F626E5A7E204DAB23971D178D7D6AF84B6C1;
// System.Collections.Generic.Dictionary`2<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct Dictionary_2_t78BB4AB79147554FB4A3B1B71F8D2A3C8243E47A;
// System.Collections.Generic.Dictionary`2<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct Dictionary_2_t62AA46485660DD8DB8E7BBF0EAA8FC2737959ED2;
// System.Collections.Generic.Dictionary`2<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct Dictionary_2_t75FFE3F6BED7F70BBDC68DE11993DD314970C37C;
// System.Collections.Generic.Dictionary`2<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct Dictionary_2_t467D38EF36E14BAADE32BA9DCE084C24F16AAA96;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Collider,UnityEngine.Camera>,System.Boolean>
struct Dictionary_2_t92A394197A650ADB6E7F4366DFA2B2A8588A9DEF;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.String>,System.Runtime.InteropServices.ICustomMarshaler>
struct Dictionary_2_t4CE53C8BCD6558009650AFE413B37A773593BC7B;
// System.Collections.Generic.Dictionary`2<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>
struct Dictionary_2_t23873C09BC7EDC402FB8FA63CB9FB618EA3147DF;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Collections.Generic.HashSet`1<Photon.Realtime.Player>>
struct Dictionary_2_t7D76206BD93A89671FA8560AD28B52EC35EFE739;
// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.CustomType>
struct Dictionary_2_tF2AE32278B121CA758D0805AB8A2CF22CC7C1D81;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Pun.UtilityScripts.PhotonTeam>
struct Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12;
// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct Dictionary_2_tCFBC3A1899FD0D74189EB13D76050BD36EBFF0B7;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.Int32>
struct Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1<Photon.Realtime.Player>>
struct ICollection_1_t89CB7F509AC57E4ADA01E09DE6DD6C19B173CEF9;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ICollection_1_t891F0076A088342CBA67A4DC84F16B0626FFB6B7;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ICollection_1_tE8ED8685751D85581CEABA486BB0BAF904CE52C0;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ICollection_1_t365C274085DEB217BDE0941B80C1FFEA0CE4EF73;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ICollection_1_t3090A03C895EF8AEBA1FBAE4BC6B983B31D31459;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ICollection_1_t28236C3929BA522BD9196EB7DDCDC3E8B81D5EC7;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ICollection_1_t6739F5F6D6A30318160BF4C18C36E2E4C7504CD7;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ICollection_1_t5D6B18B1DDCB2D07C97829E9212F4A14D9302285;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ICollection_1_t861CC3599E8ABFF779F52B58569E6F1E0971F28A;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.LinkedListNode`1<System.Action>>
struct ICollection_1_t1B9A7FE7CA235A01E5BA22C80427B24A7469A00E;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_tA15C88CD562D52ED6B4D981EC7F4A5558BD52C6A;
// System.Collections.Generic.ICollection`1<ExitGames.Client.Photon.CustomType>
struct ICollection_1_tEE3323BC093E5F1B20F7D14F7668A1445783CC34;
// System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ICustomMarshaler>
struct ICollection_1_t115C697EAF9A290B2310ADE7E1C15340C0753EDD;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.ICollection`1<Photon.Pun.UtilityScripts.PhotonTeam>
struct ICollection_1_tC6EC1DF42FAB6AEB8A72E2D1E82C8E9D373A63CF;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_tD890B0F65ABAD0B3D3FDCE92EDC9BC15264F36B0;
// System.Collections.Generic.ICollection`1<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>
struct ICollection_1_t0DB94319625D375C60369D2B86AAF4CF416C52ED;
// System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>
struct ICollection_1_tCCD73A23372E3EA9BBA407278A40E3F57BB42E37;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<UnityEngine.UIElements.Button,UnityEngine.UIElements.Button>
struct ListQueryMatcher_1_t44416FB09BEC1F22831789BEBD5863453D5B26D7;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<UnityEngine.UIElements.Button,UnityEngine.UIElements.VisualElement>
struct ListQueryMatcher_1_t3E77BB32612DEE7807DB2D68ACCBA1B0E3350580;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement>
struct ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940;
// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_tA522288A50DBBA4F2B2C1B7903E790568AC5E651;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task>
struct TaskFactory_1_t5DDD425C30A76CA8F6F29A896C7DA59363A13CC2;
// System.Threading.Tasks.TaskFactory`1<System.UInt32>
struct TaskFactory_1_t13F924BE259FDF3ABF1144CA41338C34578B3600;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebSockets.WebSocketReceiveResult>
struct TaskFactory_1_tDF44923F8546D9F436C6170729E85A2BE7377D99;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct TaskFactory_1_t473B37BD2E5B3F5EC2F0AF2DBC05A0C31BDAED38;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch>
struct TaskFactory_1_t2B7DA4216E44C1E42CEE1D70612CA89BFCD53E62;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct TaskFactory_1_t7497705228D6176D013E91CDB40EBE2469B1BE64;
// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Windows.Media.Capture.AppCapture
struct AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Windows.Media.Capture.IAppCaptureStatics
struct IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10;
// Windows.Media.Capture.IAppCaptureStatics2
struct IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87;
// Windows.UI.ViewManagement.IInputPaneStatics
struct IInputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D;
// Windows.UI.ViewManagement.IInputPaneStatics2
struct IInputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct ISpatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
struct ISpatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B;
// Windows.UI.ViewManagement.InputPane
struct InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72;
// Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
struct InputPaneVisibilityEventArgs_t7979346BA6BCA7DFF9EA412E117945F4BD239E77;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE;
// Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
struct SpatialInteractionSourceEventArgs_t88E5FE3A52CE1B2DD6554F752EEFA73714FBEBC3;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.WebSockets.WebSocketReceiveResult
struct WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C;
// Microsoft.MixedReality.OpenXR.XRAnchorStore
struct XRAnchorStore_tA17A979992A57D87A09540CA7959CAC6DBADAC93;
// Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch
struct XRAnchorTransferBatch_tF7C999BAAEEDDCD90FACC5C70ABC712F2035046F;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputPaneVisibilityEventArgs_t7979346BA6BCA7DFF9EA412E117945F4BD239E77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialInteractionSourceEventArgs_t88E5FE3A52CE1B2DD6554F752EEFA73714FBEBC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAppCapture_t8F6DC5C58F8A3768617B430364EF1DE652227BAD;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IInputPaneVisibilityEventArgs_t8D5F5025776C3A5F67586AD877D11B35E9951421;
struct IInputPane_tD8941595473EF11F6EF097EE1F28CBA7CAFE32A5;
struct IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95;
struct IIterator_1_t1AA7E7CB52E112209BFF10217944E684E4EB5F6C;
struct IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B;
struct IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925;
struct IIterator_1_t761BDD46271F92D6403C4C5F252B5ADB1B3BF73D;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct IPerceptionTimestamp_tB0128B44FA321063E14619076C95B2D0B6E478BC;
struct ISpatialInteractionManager_t821A82A320E03A01E400678AD9988006DE884DB3;
struct ISpatialInteractionSourceEventArgs_t09299E0FE2F250A82178C0EDAB2093F4A65A2FF4;
struct ISpatialInteractionSourceState_t14E7135B91784619B414104B584D8E803B5ED8CC;
struct ITypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper;
struct ITypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper;
struct ITypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper;
struct IVectorView_1_tFC7029211F8E4D03C675418A67FC3B6148BAE3BD;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct NOVTABLE IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Boolean>
struct NOVTABLE IIterable_1_tCAFA4E75D253EE3858A657CFBFB7D2EDF178284A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB7B23B9C01A02FB87FD2D5ADF203F7690E83D912(IIterator_1_t761BDD46271F92D6403C4C5F252B5ADB1B3BF73D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int32>
struct NOVTABLE IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52(IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Type>
struct NOVTABLE IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D(IIterator_1_t1AA7E7CB52E112209BFF10217944E684E4EB5F6C** comReturnValue) = 0;
};
// Windows.Media.Capture.IAppCaptureStatics
struct NOVTABLE IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics_GetForCurrentView_m68C26806F50AB61919F50B47E6A6B6C52F9F1713(IAppCapture_t8F6DC5C58F8A3768617B430364EF1DE652227BAD** comReturnValue) = 0;
};
// Windows.Media.Capture.IAppCaptureStatics2
struct NOVTABLE IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCaptureStatics2_U24__Stripped0_SetAllowedAsync_mACD53A434072BA32F7CFF07D1F2600002E4AD1B3() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() = 0;
};
// Windows.UI.ViewManagement.IInputPaneStatics
struct NOVTABLE IInputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPaneStatics_GetForCurrentView_mBF3A79136DFF28B92E46E46E045EE906D1679585(IInputPane_tD8941595473EF11F6EF097EE1F28CBA7CAFE32A5** comReturnValue) = 0;
};
// Windows.UI.ViewManagement.IInputPaneStatics2
struct NOVTABLE IInputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPaneStatics2_U24__Stripped0_GetForUIContext_mE15CA4F92D6D96FD19042DA1C8D44F0B3DD51D3C() = 0;
};
// Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs
struct NOVTABLE IInputPaneVisibilityEventArgs_t8D5F5025776C3A5F67586AD877D11B35E9951421 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPaneVisibilityEventArgs_U24__Stripped0_get_OccludedRect_mDEE950B3BE7428343B8F9863F62AAC5AAA8578D5() = 0;
	virtual il2cpp_hresult_t STDCALL IInputPaneVisibilityEventArgs_U24__Stripped1_put_EnsuredFocusedElementInView_mEDE22439DC3E3F04B7A783023BA9595DDDE845E4() = 0;
	virtual il2cpp_hresult_t STDCALL IInputPaneVisibilityEventArgs_U24__Stripped2_get_EnsuredFocusedElementInView_m3CD6A5AF7BC5879100C1DE4BDBD5CF79D794084F() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct NOVTABLE ISpatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics_GetForCurrentView_mECC8D9FA43C824126B56EF1BB0A5542D70F40A46(ISpatialInteractionManager_t821A82A320E03A01E400678AD9988006DE884DB3** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
struct NOVTABLE ISpatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics2_IsSourceKindSupported_mC539EFD8471E86391ECF6A2DBDA578C39DD45E65(int32_t ___kind0, bool* comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs
struct NOVTABLE ISpatialInteractionSourceEventArgs_t09299E0FE2F250A82178C0EDAB2093F4A65A2FF4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceEventArgs_get_State_m3AEB71ED76C04BA8FB2B361B02533EB7252DF162(ISpatialInteractionSourceState_t14E7135B91784619B414104B584D8E803B5ED8CC** comReturnValue) = 0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ValueCollection_t3BFF27504589AF59E625A4A90A58B49145220170  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tD54822E12FBBB5E788C7292513B6AEFC3DE5AFDE* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ValueCollection_t9477A4C53E0F5BB5E3679E9FB375C65D3E50776C  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ValueCollection_t382C403AF2317C70990FF7E344CC2521081FF88F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ValueCollection_t003DA30BB059888CC910A948288E5F7DA6E186EB  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ValueCollection_t4B9E36C51298D244BF765F9C81E60F66A5A81AC6  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t8091F626E5A7E204DAB23971D178D7D6AF84B6C1* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ValueCollection_tDE751EBB3525078970D6A8AE2688BF615428AAC6  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ValueCollection_t481091454C55272AC35B551644C8AD81E8D6EE41  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t78BB4AB79147554FB4A3B1B71F8D2A3C8243E47A* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ValueCollection_t912EA440BC47F0BC02CC0E0D76EF5C5FDC894EDF  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ValueCollection_tC558324488E5D5F27B3E04928D6FB59C59436856  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t62AA46485660DD8DB8E7BBF0EAA8FC2737959ED2* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ValueCollection_tA67B050103F1443C27BCC727DECA7FD05BA4920A  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ValueCollection_t3D79F0BFB90820611A9BFCF8826282CAF06851A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t75FFE3F6BED7F70BBDC68DE11993DD314970C37C* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ValueCollection_t1B346AD56068C8E4252CD5EBFE6A188E0FD4D80E  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct ValueCollection_tED7CA11D0B69FA9AC39888819B4D1518244818ED  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t467D38EF36E14BAADE32BA9DCE084C24F16AAA96* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct ValueCollection_tFF3F94BFD8EF59536BF8304ECF86C8019FA5F33D  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ValueTuple`2<UnityEngine.Collider,UnityEngine.Camera>,System.Boolean>
struct ValueCollection_tF1ADA8D642FA7AAB4B1A0755E6436504E7B26A31  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t92A394197A650ADB6E7F4366DFA2B2A8588A9DEF* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.ValueTuple`2<UnityEngine.Collider,UnityEngine.Camera>,System.Boolean>
struct ValueCollection_tA55BD6D5B850FF2FB61177968E615013A9D9733D  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.ValueTuple`2<System.Type,System.String>,System.Runtime.InteropServices.ICustomMarshaler>
struct ValueCollection_t8E3D9B94B12C94BE5595AF9909EAFA91A098B04F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t4CE53C8BCD6558009650AFE413B37A773593BC7B* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.ValueTuple`2<System.Type,System.String>,System.Runtime.InteropServices.ICustomMarshaler>
struct ValueCollection_tA55380C45489CAA615DBA9A3DF2C3DD8CDE6FED7  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t256D834E777628043876023A6881E1448AFE7A4B* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct ValueCollection_t108D85C668C775202AE555D11FB1C2291EB3346E  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>
struct ValueCollection_tBFBFD9B484D7E00929EF362A111DC964BF4197E2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t23873C09BC7EDC402FB8FA63CB9FB618EA3147DF* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>
struct ValueCollection_tCD2640D08ED8455F20B64990D9376EEFD6DCDAE3  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Collections.Generic.HashSet`1<Photon.Realtime.Player>>
struct ValueCollection_t46805F0AD37F00B7924E52160FFF61DDC2BCA7A2  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t7D76206BD93A89671FA8560AD28B52EC35EFE739* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Byte,System.Collections.Generic.HashSet`1<Photon.Realtime.Player>>
struct ValueCollection_t18657CAE468DE5239055629974243C6506CF9449  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,ExitGames.Client.Photon.CustomType>
struct ValueCollection_t52D3A6C783B141A6BECB42F03245534B946F56CF  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tF2AE32278B121CA758D0805AB8A2CF22CC7C1D81* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Byte,ExitGames.Client.Photon.CustomType>
struct ValueCollection_t58A1928ED6F6F1486048C1BBDE9E0A96431E9C83  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_tDB5D856F817B145C555EF44204740713ECF55F95  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,Photon.Pun.UtilityScripts.PhotonTeam>
struct ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Byte,Photon.Pun.UtilityScripts.PhotonTeam>
struct ValueCollection_tD80E52A63455628899FA97CDC9BA4D20C475514F  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_tEE04130FCA650722D8F6F42E36690836F792A7F0  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct ValueCollection_tAD299E06216B9D045DBD60A588E728E13C65C1F3  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct ValueCollection_t621D690D7BE49C0DB8F8D219FC062FA609413663  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t6AC338B3CEB934A66B363042F19213FE666F6818* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2B1FAABC1016394A798F2FAE62D45917FAA50E2A  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ValueCollection_t61C9C4E26BC6D2EDCA8254E79F9A037D9C9080B1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tCFBC3A1899FD0D74189EB13D76050BD36EBFF0B7* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ValueCollection_t16E4A94B8E88DBC51566279510C9B0A5E1418047  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,System.Int32>
struct ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tECA53E61DAB68E3E567ED8D25539CC2ED041E740* ____dictionary_0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.GameObject,System.Int32>
struct ValueCollection_t8F15096CB3332EC9F622D90026FD248411C789BD  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
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
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C 
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

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>
struct NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_result_22;
};

struct Task_1_t06484715029D51A4420723456D165BAC63798F8D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tA522288A50DBBA4F2B2C1B7903E790568AC5E651* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_result_22;
};

struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t5DDD425C30A76CA8F6F29A896C7DA59363A13CC2* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	uint32_t ___m_result_22;
};

struct Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t13F924BE259FDF3ABF1144CA41338C34578B3600* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>
struct Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	WebSocketReceiveResult_t31FCE9F2E53843C065CD57BE10581EE47D6FAD2C* ___m_result_22;
};

struct Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tDF44923F8546D9F436C6170729E85A2BE7377D99* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	XRAnchorStore_tA17A979992A57D87A09540CA7959CAC6DBADAC93* ___m_result_22;
};

struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t473B37BD2E5B3F5EC2F0AF2DBC05A0C31BDAED38* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch>
struct Task_1_t695EF29C4348145E21C633B35998AA2411B59661  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	XRAnchorTransferBatch_tF7C999BAAEEDDCD90FACC5C70ABC712F2035046F* ___m_result_22;
};

struct Task_1_t695EF29C4348145E21C633B35998AA2411B59661_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t2B7DA4216E44C1E42CEE1D70612CA89BFCD53E62* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct Task_1_tDBDEC59AB9F519B03DBBC5B6C83CAF78D9849649  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

struct Task_1_tDBDEC59AB9F519B03DBBC5B6C83CAF78D9849649_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7497705228D6176D013E91CDB40EBE2469B1BE64* ___s_defaultFactory_23;
};

// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.Button>
struct UQueryState_1_t1550C5670F954371DAE8049056B473B627371A22 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryState`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryState`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_2;
};

struct UQueryState_1_t1550C5670F954371DAE8049056B473B627371A22_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<T> UnityEngine.UIElements.UQueryState`1::s_Action
	ActionQueryMatcher_tD7D20786576B980AD47A41BAB219E412B0F21716* ___s_Action_0;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,T> UnityEngine.UIElements.UQueryState`1::s_List
	ListQueryMatcher_1_t44416FB09BEC1F22831789BEBD5863453D5B26D7* ___s_List_3;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryState`1::s_EnumerationList
	ListQueryMatcher_1_t3E77BB32612DEE7807DB2D68ACCBA1B0E3350580* ___s_EnumerationList_4;
};

// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>
struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryState`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryState`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_2;
};

struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<T> UnityEngine.UIElements.UQueryState`1::s_Action
	ActionQueryMatcher_tBA08813774EDD8920F40BFFC2F27B8329C7923DD* ___s_Action_0;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,T> UnityEngine.UIElements.UQueryState`1::s_List
	ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940* ___s_List_3;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryState`1::s_EnumerationList
	ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940* ___s_EnumerationList_4;
};

// Windows.Media.Capture.AppCapture
struct AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518  : public Il2CppComObject
{
};

struct AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics2
	IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87* ____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87;
	// Cached pointer to Windows.Media.Capture.IAppCaptureStatics
	IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10* ____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.AppCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87* get_____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87()
	{
		IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87* returnValue = ____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics2_t06B63A1548281B88A98D808A5523AC634F99CA87;
			}
		}
		return returnValue;
	}

	inline IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10* get_____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10()
	{
		IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10* returnValue = ____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IAppCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iappCaptureStatics_t9BC8ABA580F16484E3D5F80A66152C5AC5696F10;
			}
		}
		return returnValue;
	}
};

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B 
{
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;
};

// Windows.UI.ViewManagement.InputPane
struct InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72  : public Il2CppComObject
{
};

struct InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.ViewManagement.IInputPaneStatics
	IInputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D* ____iinputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D;
	// Cached pointer to Windows.UI.ViewManagement.IInputPaneStatics2
	IInputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB* ____iinputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.ViewManagement.InputPane"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IInputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D* get_____iinputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D()
	{
		IInputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D* returnValue = ____iinputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iinputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputPaneStatics_tEA58BC9ECA763B0543325788B93FC13AC8543E0D;
			}
		}
		return returnValue;
	}

	inline IInputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB* get_____iinputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB()
	{
		IInputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB* returnValue = ____iinputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iinputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputPaneStatics2_t98B79D114B2768DE6B9EF65E6194ECA5DADB20FB;
			}
		}
		return returnValue;
	}
};

// Windows.UI.ViewManagement.InputPaneVisibilityEventArgs
struct InputPaneVisibilityEventArgs_t7979346BA6BCA7DFF9EA412E117945F4BD239E77  : public Il2CppComObject
{
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

// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE  : public Il2CppComObject
{
};

struct SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE_StaticFields
{
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
	ISpatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A* ____ispatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
	ISpatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B* ____ispatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B;
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialInteractionManager"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A* get_____ispatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A()
	{
		ISpatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A* returnValue = ____ispatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics_t283D48BD460922F8AFCD94F2B7CC176341E2886A;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B* get_____ispatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B()
	{
		ISpatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B* returnValue = ____ispatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics2_tE06EC22AF3CF022158D0AF5171B7292FB9ADAE6B;
			}
		}
		return returnValue;
	}
};

// Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
struct SpatialInteractionSourceEventArgs_t88E5FE3A52CE1B2DD6554F752EEFA73714FBEBC3  : public Il2CppComObject
{
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

// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result_22;
};

struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C* ___s_defaultFactory_23;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct TrackableChanges_1_t03BF8B384A61E7421A4748384189C50C3A2C323F 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>
struct TrackableChanges_1_t244050823CF4D8F3C9DFAE4AB0CEFA639C719119 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct TrackableChanges_1_tAB0D56187755251BCF253FBC179ABFC1B18E00C6 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct TrackableChanges_1_t2CDAB668CF6C2AB6D755F9C2911626A1C9140179 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct TrackableChanges_1_t33787F6E969DAC65E8C2FD57FE6AAC9119CFDB89 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct TrackableChanges_1_t570BA80B84560BB489FE51A45629812BC8E0B02F 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct TrackableChanges_1_t5289D1DB76FBCB9C1A7B387927387F4299599C1E 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct TrackableChanges_1_tBC4635C00390DED792828CD9C45501D0F38AFEE6 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
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
// Windows.Media.Capture.IAppCapture
struct NOVTABLE IAppCapture_t8F6DC5C58F8A3768617B430364EF1DE652227BAD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAppCapture_U24__Stripped0_get_IsCapturingAudio_m0DD6B918884AF978F3E5C436BD78C4B8921132E6() = 0;
	virtual il2cpp_hresult_t STDCALL IAppCapture_get_IsCapturingVideo_mEB89B0062817FBA10956B140B5803F4ECAABD6E7(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAppCapture_add_CapturingChanged_m00AE179C80F85E55806C870FDAACE57FF2D8E81A(ITypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAppCapture_remove_CapturingChanged_m888D4B71C8FA267ED75A223077E48BB53B32579B(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0) = 0;
};
// Windows.UI.ViewManagement.IInputPane
struct NOVTABLE IInputPane_tD8941595473EF11F6EF097EE1F28CBA7CAFE32A5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputPane_add_Showing_m391FD0C246147F000CCB0256DC72926BC3CCD973(ITypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_remove_Showing_mD4A45351A8C10AB3745A306D4A1110C8C6AEA0D1(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_add_Hiding_mF35F8694E5D8DBD06EE05CB5B60ABC58A7C825DE(ITypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_remove_Hiding_mFB9976EA799FE396E7CF81A3F0338B5008B0AF2B(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IInputPane_U24__Stripped0_get_OccludedRect_mF6AF7A84235125C23567068A0639FB27999D4423() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManager
struct NOVTABLE ISpatialInteractionManager_t821A82A320E03A01E400678AD9988006DE884DB3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped0_add_SourceDetected_mEBDFDF9103A0153633DB27D789FF3173F94DBFE5() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped1_remove_SourceDetected_mC98B1FE4B0526893FE161BED980757EEEE5E1771() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped2_add_SourceLost_mC2CBE11474EB94528BD092B00862F88B026DC442() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped3_remove_SourceLost_m3DFA3C1515CE08668D33BDB6E6A40389D6A2D7A4() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped4_add_SourceUpdated_mCAC10FC38802715A617B98EB9643E0F99B741D2B() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped5_remove_SourceUpdated_m3245E6A56FC4990C938DEFD399324F793D85A241() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_add_SourcePressed_m74C1D453E4528673D80937CDD75732F06A765C02(ITypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper* ___handler0, EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_remove_SourcePressed_m170B16E077BE8E22EC89F1DF5EEAF347B70C3C51(EventRegistrationToken_tFEB6E75BA7C6603DB3207E3ABA9156228EB87F1B ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped6_add_SourceReleased_mB0D2B32642DE2421C93A8BFE83003619B2F4CFAB() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped7_remove_SourceReleased_mE512D01D1091CD825EAE21B8F6631E7B1B8E284B() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped8_add_InteractionDetected_mB816F0FF778EC3E1253A6C9DF275FB37B6ABDA4A() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped9_remove_InteractionDetected_m25E9512FD5CB56CF43AAAF74572EBD40D196C765() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_GetDetectedSourcesAtTimestamp_m442DC1DA17BE9D0B06B8E181CC0407B8A476C687(IPerceptionTimestamp_tB0128B44FA321063E14619076C95B2D0B6E478BC* ___timeStamp0, IVectorView_1_tFC7029211F8E4D03C675418A67FC3B6148BAE3BD** comReturnValue) = 0;
};

// System.Threading.Tasks.UnwrapPromise`1<System.Threading.Tasks.VoidTaskResult>
struct UnwrapPromise_1_tDB8B43FF9D828EED5C0396FB685493DFBF091E31  : public Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17
{
	// System.Byte System.Threading.Tasks.UnwrapPromise`1::_state
	uint8_t ____state_24;
	// System.Boolean System.Threading.Tasks.UnwrapPromise`1::_lookForOce
	bool ____lookForOce_25;
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

// Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct ITypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAppCapture_t8F6DC5C58F8A3768617B430364EF1DE652227BAD* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct ITypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IInputPane_tD8941595473EF11F6EF097EE1F28CBA7CAFE32A5* ___sender0, IInputPaneVisibilityEventArgs_t8D5F5025776C3A5F67586AD877D11B35E9951421* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct ITypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct ITypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(ISpatialInteractionManager_t821A82A320E03A01E400678AD9988006DE884DB3* ___sender0, ISpatialInteractionSourceEventArgs_t09299E0FE2F250A82178C0EDAB2093F4A65A2FF4* ___args1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mB7B23B9C01A02FB87FD2D5ADF203F7690E83D912_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t761BDD46271F92D6403C4C5F252B5ADB1B3BF73D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t1AA7E7CB52E112209BFF10217944E684E4EB5F6C** comReturnValue);

// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypedEventHandler_2_Invoke_m21CBC8780368C07950C29A9155026BFC53770835_gshared_inline (TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83* __this, RuntimeObject* ___sender0, RuntimeObject* ___args1, const RuntimeMethod* method) ;

// System.Void Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m225810940EF1E92B8EC902D61C736390AD8E0F69_inline (TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F* __this, AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* ___sender0, RuntimeObject* ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F*, AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518*, RuntimeObject*, const RuntimeMethod*))TypedEventHandler_2_Invoke_m21CBC8780368C07950C29A9155026BFC53770835_gshared_inline)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m97D0232DD66FE6A7721203CCEB7307C679876976_inline (TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45* __this, InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72* ___sender0, InputPaneVisibilityEventArgs_t7979346BA6BCA7DFF9EA412E117945F4BD239E77* ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45*, InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72*, InputPaneVisibilityEventArgs_t7979346BA6BCA7DFF9EA412E117945F4BD239E77*, const RuntimeMethod*))TypedEventHandler_2_Invoke_m21CBC8780368C07950C29A9155026BFC53770835_gshared_inline)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m21CBC8780368C07950C29A9155026BFC53770835_inline (TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83* __this, RuntimeObject* ___sender0, RuntimeObject* ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))TypedEventHandler_2_Invoke_m21CBC8780368C07950C29A9155026BFC53770835_gshared_inline)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m98FB31E48826326F3E53CC6C6C2DA3E38060D1A1_inline (TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F* __this, SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE* ___sender0, SpatialInteractionSourceEventArgs_t88E5FE3A52CE1B2DD6554F752EEFA73714FBEBC3* ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F*, SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE*, SpatialInteractionSourceEventArgs_t88E5FE3A52CE1B2DD6554F752EEFA73714FBEBC3*, const RuntimeMethod*))TypedEventHandler_2_Invoke_m21CBC8780368C07950C29A9155026BFC53770835_gshared_inline)(__this, ___sender0, ___args1, method);
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t06484715029D51A4420723456D165BAC63798F8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t06484715029D51A4420723456D165BAC63798F8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t65B0CFA55427D8F65292A36D9BE1B7C5D949EE11_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>
struct Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t7A5D3E6F94872974689076E6A3A64E3104677A40_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorStore>
struct Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t5F3E15336E6CDDD42F4B03EF04F4AB90FD1712A1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.XRAnchorTransferBatch>
struct Task_1_t695EF29C4348145E21C633B35998AA2411B59661_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t695EF29C4348145E21C633B35998AA2411B59661_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_t695EF29C4348145E21C633B35998AA2411B59661_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t695EF29C4348145E21C633B35998AA2411B59661_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t695EF29C4348145E21C633B35998AA2411B59661(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t695EF29C4348145E21C633B35998AA2411B59661_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t695EF29C4348145E21C633B35998AA2411B59661_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct Task_1_tDBDEC59AB9F519B03DBBC5B6C83CAF78D9849649_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tDBDEC59AB9F519B03DBBC5B6C83CAF78D9849649_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Task_1_tDBDEC59AB9F519B03DBBC5B6C83CAF78D9849649_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tDBDEC59AB9F519B03DBBC5B6C83CAF78D9849649_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tDBDEC59AB9F519B03DBBC5B6C83CAF78D9849649(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tDBDEC59AB9F519B03DBBC5B6C83CAF78D9849649_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tDBDEC59AB9F519B03DBBC5B6C83CAF78D9849649_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t6971CD7F709E7353F4365FE06A109B21A0F0C931_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct TrackableChanges_1_t03BF8B384A61E7421A4748384189C50C3A2C323F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t03BF8B384A61E7421A4748384189C50C3A2C323F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_t03BF8B384A61E7421A4748384189C50C3A2C323F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t03BF8B384A61E7421A4748384189C50C3A2C323F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t03BF8B384A61E7421A4748384189C50C3A2C323F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t03BF8B384A61E7421A4748384189C50C3A2C323F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t03BF8B384A61E7421A4748384189C50C3A2C323F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRFace>
struct TrackableChanges_1_t244050823CF4D8F3C9DFAE4AB0CEFA639C719119_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t244050823CF4D8F3C9DFAE4AB0CEFA639C719119_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_t244050823CF4D8F3C9DFAE4AB0CEFA639C719119_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t244050823CF4D8F3C9DFAE4AB0CEFA639C719119_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t244050823CF4D8F3C9DFAE4AB0CEFA639C719119(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t244050823CF4D8F3C9DFAE4AB0CEFA639C719119_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t244050823CF4D8F3C9DFAE4AB0CEFA639C719119_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct TrackableChanges_1_tAB0D56187755251BCF253FBC179ABFC1B18E00C6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tAB0D56187755251BCF253FBC179ABFC1B18E00C6_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_tAB0D56187755251BCF253FBC179ABFC1B18E00C6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tAB0D56187755251BCF253FBC179ABFC1B18E00C6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_tAB0D56187755251BCF253FBC179ABFC1B18E00C6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_tAB0D56187755251BCF253FBC179ABFC1B18E00C6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_tAB0D56187755251BCF253FBC179ABFC1B18E00C6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct TrackableChanges_1_t2CDAB668CF6C2AB6D755F9C2911626A1C9140179_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t2CDAB668CF6C2AB6D755F9C2911626A1C9140179_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_t2CDAB668CF6C2AB6D755F9C2911626A1C9140179_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t2CDAB668CF6C2AB6D755F9C2911626A1C9140179_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t2CDAB668CF6C2AB6D755F9C2911626A1C9140179(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t2CDAB668CF6C2AB6D755F9C2911626A1C9140179_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t2CDAB668CF6C2AB6D755F9C2911626A1C9140179_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct TrackableChanges_1_t33787F6E969DAC65E8C2FD57FE6AAC9119CFDB89_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t33787F6E969DAC65E8C2FD57FE6AAC9119CFDB89_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_t33787F6E969DAC65E8C2FD57FE6AAC9119CFDB89_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t33787F6E969DAC65E8C2FD57FE6AAC9119CFDB89_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t33787F6E969DAC65E8C2FD57FE6AAC9119CFDB89(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t33787F6E969DAC65E8C2FD57FE6AAC9119CFDB89_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t33787F6E969DAC65E8C2FD57FE6AAC9119CFDB89_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct TrackableChanges_1_t570BA80B84560BB489FE51A45629812BC8E0B02F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t570BA80B84560BB489FE51A45629812BC8E0B02F_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_t570BA80B84560BB489FE51A45629812BC8E0B02F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t570BA80B84560BB489FE51A45629812BC8E0B02F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t570BA80B84560BB489FE51A45629812BC8E0B02F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t570BA80B84560BB489FE51A45629812BC8E0B02F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t570BA80B84560BB489FE51A45629812BC8E0B02F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct TrackableChanges_1_t5289D1DB76FBCB9C1A7B387927387F4299599C1E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t5289D1DB76FBCB9C1A7B387927387F4299599C1E_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_t5289D1DB76FBCB9C1A7B387927387F4299599C1E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_t5289D1DB76FBCB9C1A7B387927387F4299599C1E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_t5289D1DB76FBCB9C1A7B387927387F4299599C1E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_t5289D1DB76FBCB9C1A7B387927387F4299599C1E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_t5289D1DB76FBCB9C1A7B387927387F4299599C1E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct TrackableChanges_1_tBC4635C00390DED792828CD9C45501D0F38AFEE6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tBC4635C00390DED792828CD9C45501D0F38AFEE6_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline TrackableChanges_1_tBC4635C00390DED792828CD9C45501D0F38AFEE6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrackableChanges_1_tBC4635C00390DED792828CD9C45501D0F38AFEE6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrackableChanges_1_tBC4635C00390DED792828CD9C45501D0F38AFEE6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrackableChanges_1_tBC4635C00390DED792828CD9C45501D0F38AFEE6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrackableChanges_1_tBC4635C00390DED792828CD9C45501D0F38AFEE6_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
struct TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper>, ITypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper
{
	inline TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.Media.Capture.AppCapture,System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAppCapture_t8F6DC5C58F8A3768617B430364EF1DE652227BAD* ___sender0, Il2CppIInspectable* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518* ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518>(___sender0, AppCapture_t053EACB2089D0B11989E1C6810A8B63855CCD518_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), IAppCapture_t8F6DC5C58F8A3768617B430364EF1DE652227BAD::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		RuntimeObject* ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___args1, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), Il2CppIInspectable::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F* __thisValue = (TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F*)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m225810940EF1E92B8EC902D61C736390AD8E0F69_inline(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_t9B118434C59C99BDDD7ADFCC4DCAA528A1A4123F_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
struct TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper>, ITypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper
{
	inline TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.InputPane,Windows.UI.ViewManagement.InputPaneVisibilityEventArgs>
	virtual il2cpp_hresult_t STDCALL Invoke(IInputPane_tD8941595473EF11F6EF097EE1F28CBA7CAFE32A5* ___sender0, IInputPaneVisibilityEventArgs_t8D5F5025776C3A5F67586AD877D11B35E9951421* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputPaneVisibilityEventArgs_t7979346BA6BCA7DFF9EA412E117945F4BD239E77_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72* ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72>(___sender0, InputPane_tFEF83C169CBF6F3D7C7A7E3373CF2478A72FAB72_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), IInputPane_tD8941595473EF11F6EF097EE1F28CBA7CAFE32A5::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		InputPaneVisibilityEventArgs_t7979346BA6BCA7DFF9EA412E117945F4BD239E77* ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<InputPaneVisibilityEventArgs_t7979346BA6BCA7DFF9EA412E117945F4BD239E77>(___args1, InputPaneVisibilityEventArgs_t7979346BA6BCA7DFF9EA412E117945F4BD239E77_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), IInputPaneVisibilityEventArgs_t8D5F5025776C3A5F67586AD877D11B35E9951421::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45* __thisValue = (TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45*)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m97D0232DD66FE6A7721203CCEB7307C679876976_inline(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_tE60BE28E42B3D44A57E6B066FED82A5543ED8F45_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper>, ITypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper
{
	inline TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		RuntimeObject* ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___sender0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), Il2CppIInspectable::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		RuntimeObject* ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___args1, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), Il2CppIInspectable::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83* __thisValue = (TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83*)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m21CBC8780368C07950C29A9155026BFC53770835_inline(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper>, ITypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper
{
	inline TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper(RuntimeObject* obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
	virtual il2cpp_hresult_t STDCALL Invoke(ISpatialInteractionManager_t821A82A320E03A01E400678AD9988006DE884DB3* ___sender0, ISpatialInteractionSourceEventArgs_t09299E0FE2F250A82178C0EDAB2093F4A65A2FF4* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpatialInteractionSourceEventArgs_t88E5FE3A52CE1B2DD6554F752EEFA73714FBEBC3_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE* ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE>(___sender0, SpatialInteractionManager_t3C36EB3E0C6F6CFDFBC086782543CED7694A1AFE_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), ISpatialInteractionManager_t821A82A320E03A01E400678AD9988006DE884DB3::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		SpatialInteractionSourceEventArgs_t88E5FE3A52CE1B2DD6554F752EEFA73714FBEBC3* ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionSourceEventArgs_t88E5FE3A52CE1B2DD6554F752EEFA73714FBEBC3>(___args1, SpatialInteractionSourceEventArgs_t88E5FE3A52CE1B2DD6554F752EEFA73714FBEBC3_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), ISpatialInteractionSourceEventArgs_t09299E0FE2F250A82178C0EDAB2093F4A65A2FF4::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F* __thisValue = (TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F*)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m98FB31E48826326F3E53CC6C6C2DA3E38060D1A1_inline(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_tDBCF13D8CC254870E369ECD1AAA8E0628F36AD8F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.Button>
struct UQueryState_1_t1550C5670F954371DAE8049056B473B627371A22_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UQueryState_1_t1550C5670F954371DAE8049056B473B627371A22_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline UQueryState_1_t1550C5670F954371DAE8049056B473B627371A22_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UQueryState_1_t1550C5670F954371DAE8049056B473B627371A22_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UQueryState_1_t1550C5670F954371DAE8049056B473B627371A22(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UQueryState_1_t1550C5670F954371DAE8049056B473B627371A22_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UQueryState_1_t1550C5670F954371DAE8049056B473B627371A22_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>
struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.UnwrapPromise`1<System.Threading.Tasks.VoidTaskResult>
struct UnwrapPromise_1_tDB8B43FF9D828EED5C0396FB685493DFBF091E31_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_tDB8B43FF9D828EED5C0396FB685493DFBF091E31_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline UnwrapPromise_1_tDB8B43FF9D828EED5C0396FB685493DFBF091E31_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_tDB8B43FF9D828EED5C0396FB685493DFBF091E31_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnwrapPromise_1_tDB8B43FF9D828EED5C0396FB685493DFBF091E31(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnwrapPromise_1_tDB8B43FF9D828EED5C0396FB685493DFBF091E31_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnwrapPromise_1_tDB8B43FF9D828EED5C0396FB685493DFBF091E31_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ValueCollection_t3BFF27504589AF59E625A4A90A58B49145220170_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t3BFF27504589AF59E625A4A90A58B49145220170_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t3BFF27504589AF59E625A4A90A58B49145220170_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t3BFF27504589AF59E625A4A90A58B49145220170_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t3BFF27504589AF59E625A4A90A58B49145220170(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t3BFF27504589AF59E625A4A90A58B49145220170_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t3BFF27504589AF59E625A4A90A58B49145220170_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<System.Boolean>,System.Collections.Generic.LinkedListNode`1<System.Action`1<System.Boolean>>>
struct ValueCollection_t9477A4C53E0F5BB5E3679E9FB375C65D3E50776C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t9477A4C53E0F5BB5E3679E9FB375C65D3E50776C_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t9477A4C53E0F5BB5E3679E9FB375C65D3E50776C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t9477A4C53E0F5BB5E3679E9FB375C65D3E50776C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t9477A4C53E0F5BB5E3679E9FB375C65D3E50776C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t9477A4C53E0F5BB5E3679E9FB375C65D3E50776C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t9477A4C53E0F5BB5E3679E9FB375C65D3E50776C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ValueCollection_t382C403AF2317C70990FF7E344CC2521081FF88F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t382C403AF2317C70990FF7E344CC2521081FF88F_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t382C403AF2317C70990FF7E344CC2521081FF88F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t382C403AF2317C70990FF7E344CC2521081FF88F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t382C403AF2317C70990FF7E344CC2521081FF88F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t382C403AF2317C70990FF7E344CC2521081FF88F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t382C403AF2317C70990FF7E344CC2521081FF88F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct ValueCollection_t003DA30BB059888CC910A948288E5F7DA6E186EB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t003DA30BB059888CC910A948288E5F7DA6E186EB_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t003DA30BB059888CC910A948288E5F7DA6E186EB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t003DA30BB059888CC910A948288E5F7DA6E186EB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t003DA30BB059888CC910A948288E5F7DA6E186EB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t003DA30BB059888CC910A948288E5F7DA6E186EB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t003DA30BB059888CC910A948288E5F7DA6E186EB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ValueCollection_t4B9E36C51298D244BF765F9C81E60F66A5A81AC6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t4B9E36C51298D244BF765F9C81E60F66A5A81AC6_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t4B9E36C51298D244BF765F9C81E60F66A5A81AC6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t4B9E36C51298D244BF765F9C81E60F66A5A81AC6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t4B9E36C51298D244BF765F9C81E60F66A5A81AC6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t4B9E36C51298D244BF765F9C81E60F66A5A81AC6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t4B9E36C51298D244BF765F9C81E60F66A5A81AC6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Material>>>
struct ValueCollection_tDE751EBB3525078970D6A8AE2688BF615428AAC6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tDE751EBB3525078970D6A8AE2688BF615428AAC6_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tDE751EBB3525078970D6A8AE2688BF615428AAC6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tDE751EBB3525078970D6A8AE2688BF615428AAC6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tDE751EBB3525078970D6A8AE2688BF615428AAC6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tDE751EBB3525078970D6A8AE2688BF615428AAC6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tDE751EBB3525078970D6A8AE2688BF615428AAC6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ValueCollection_t481091454C55272AC35B551644C8AD81E8D6EE41_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t481091454C55272AC35B551644C8AD81E8D6EE41_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t481091454C55272AC35B551644C8AD81E8D6EE41_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t481091454C55272AC35B551644C8AD81E8D6EE41_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t481091454C55272AC35B551644C8AD81E8D6EE41(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t481091454C55272AC35B551644C8AD81E8D6EE41_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t481091454C55272AC35B551644C8AD81E8D6EE41_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Boolean,UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,UnityEngine.Object>>>
struct ValueCollection_t912EA440BC47F0BC02CC0E0D76EF5C5FDC894EDF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t912EA440BC47F0BC02CC0E0D76EF5C5FDC894EDF_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t912EA440BC47F0BC02CC0E0D76EF5C5FDC894EDF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t912EA440BC47F0BC02CC0E0D76EF5C5FDC894EDF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t912EA440BC47F0BC02CC0E0D76EF5C5FDC894EDF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t912EA440BC47F0BC02CC0E0D76EF5C5FDC894EDF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t912EA440BC47F0BC02CC0E0D76EF5C5FDC894EDF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ValueCollection_tC558324488E5D5F27B3E04928D6FB59C59436856_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tC558324488E5D5F27B3E04928D6FB59C59436856_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tC558324488E5D5F27B3E04928D6FB59C59436856_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tC558324488E5D5F27B3E04928D6FB59C59436856_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tC558324488E5D5F27B3E04928D6FB59C59436856(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tC558324488E5D5F27B3E04928D6FB59C59436856_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tC558324488E5D5F27B3E04928D6FB59C59436856_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>,System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Object,TMPro.Compute_DT_EventArgs>>>
struct ValueCollection_tA67B050103F1443C27BCC727DECA7FD05BA4920A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tA67B050103F1443C27BCC727DECA7FD05BA4920A_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tA67B050103F1443C27BCC727DECA7FD05BA4920A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tA67B050103F1443C27BCC727DECA7FD05BA4920A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tA67B050103F1443C27BCC727DECA7FD05BA4920A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tA67B050103F1443C27BCC727DECA7FD05BA4920A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tA67B050103F1443C27BCC727DECA7FD05BA4920A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ValueCollection_t3D79F0BFB90820611A9BFCF8826282CAF06851A7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t3D79F0BFB90820611A9BFCF8826282CAF06851A7_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t3D79F0BFB90820611A9BFCF8826282CAF06851A7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t3D79F0BFB90820611A9BFCF8826282CAF06851A7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t3D79F0BFB90820611A9BFCF8826282CAF06851A7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t3D79F0BFB90820611A9BFCF8826282CAF06851A7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t3D79F0BFB90820611A9BFCF8826282CAF06851A7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>,System.Collections.Generic.LinkedListNode`1<System.Action`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>>>
struct ValueCollection_t1B346AD56068C8E4252CD5EBFE6A188E0FD4D80E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t1B346AD56068C8E4252CD5EBFE6A188E0FD4D80E_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t1B346AD56068C8E4252CD5EBFE6A188E0FD4D80E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t1B346AD56068C8E4252CD5EBFE6A188E0FD4D80E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t1B346AD56068C8E4252CD5EBFE6A188E0FD4D80E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t1B346AD56068C8E4252CD5EBFE6A188E0FD4D80E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t1B346AD56068C8E4252CD5EBFE6A188E0FD4D80E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct ValueCollection_tED7CA11D0B69FA9AC39888819B4D1518244818ED_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tED7CA11D0B69FA9AC39888819B4D1518244818ED_ComCallableWrapper>, IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tED7CA11D0B69FA9AC39888819B4D1518244818ED_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tED7CA11D0B69FA9AC39888819B4D1518244818ED_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52(IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tED7CA11D0B69FA9AC39888819B4D1518244818ED(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tED7CA11D0B69FA9AC39888819B4D1518244818ED_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tED7CA11D0B69FA9AC39888819B4D1518244818ED_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Tuple`2<Microsoft.MixedReality.Toolkit.Input.KeyBinding/KeyType,System.Int32>,System.Int32>
struct ValueCollection_tFF3F94BFD8EF59536BF8304ECF86C8019FA5F33D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tFF3F94BFD8EF59536BF8304ECF86C8019FA5F33D_ComCallableWrapper>, IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tFF3F94BFD8EF59536BF8304ECF86C8019FA5F33D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tFF3F94BFD8EF59536BF8304ECF86C8019FA5F33D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52(IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tFF3F94BFD8EF59536BF8304ECF86C8019FA5F33D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tFF3F94BFD8EF59536BF8304ECF86C8019FA5F33D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tFF3F94BFD8EF59536BF8304ECF86C8019FA5F33D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.ValueTuple`2<UnityEngine.Collider,UnityEngine.Camera>,System.Boolean>
struct ValueCollection_tF1ADA8D642FA7AAB4B1A0755E6436504E7B26A31_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tF1ADA8D642FA7AAB4B1A0755E6436504E7B26A31_ComCallableWrapper>, IIterable_1_tCAFA4E75D253EE3858A657CFBFB7D2EDF178284A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tF1ADA8D642FA7AAB4B1A0755E6436504E7B26A31_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tF1ADA8D642FA7AAB4B1A0755E6436504E7B26A31_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tCAFA4E75D253EE3858A657CFBFB7D2EDF178284A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tCAFA4E75D253EE3858A657CFBFB7D2EDF178284A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tCAFA4E75D253EE3858A657CFBFB7D2EDF178284A::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB7B23B9C01A02FB87FD2D5ADF203F7690E83D912(IIterator_1_t761BDD46271F92D6403C4C5F252B5ADB1B3BF73D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mB7B23B9C01A02FB87FD2D5ADF203F7690E83D912_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tF1ADA8D642FA7AAB4B1A0755E6436504E7B26A31(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tF1ADA8D642FA7AAB4B1A0755E6436504E7B26A31_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tF1ADA8D642FA7AAB4B1A0755E6436504E7B26A31_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.ValueTuple`2<UnityEngine.Collider,UnityEngine.Camera>,System.Boolean>
struct ValueCollection_tA55BD6D5B850FF2FB61177968E615013A9D9733D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tA55BD6D5B850FF2FB61177968E615013A9D9733D_ComCallableWrapper>, IIterable_1_tCAFA4E75D253EE3858A657CFBFB7D2EDF178284A, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tA55BD6D5B850FF2FB61177968E615013A9D9733D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tA55BD6D5B850FF2FB61177968E615013A9D9733D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tCAFA4E75D253EE3858A657CFBFB7D2EDF178284A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tCAFA4E75D253EE3858A657CFBFB7D2EDF178284A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tCAFA4E75D253EE3858A657CFBFB7D2EDF178284A::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mB7B23B9C01A02FB87FD2D5ADF203F7690E83D912(IIterator_1_t761BDD46271F92D6403C4C5F252B5ADB1B3BF73D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mB7B23B9C01A02FB87FD2D5ADF203F7690E83D912_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tA55BD6D5B850FF2FB61177968E615013A9D9733D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tA55BD6D5B850FF2FB61177968E615013A9D9733D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tA55BD6D5B850FF2FB61177968E615013A9D9733D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.ValueTuple`2<System.Type,System.String>,System.Runtime.InteropServices.ICustomMarshaler>
struct ValueCollection_t8E3D9B94B12C94BE5595AF9909EAFA91A098B04F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t8E3D9B94B12C94BE5595AF9909EAFA91A098B04F_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t8E3D9B94B12C94BE5595AF9909EAFA91A098B04F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t8E3D9B94B12C94BE5595AF9909EAFA91A098B04F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t8E3D9B94B12C94BE5595AF9909EAFA91A098B04F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t8E3D9B94B12C94BE5595AF9909EAFA91A098B04F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t8E3D9B94B12C94BE5595AF9909EAFA91A098B04F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.ValueTuple`2<System.Type,System.String>,System.Runtime.InteropServices.ICustomMarshaler>
struct ValueCollection_tA55380C45489CAA615DBA9A3DF2C3DD8CDE6FED7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tA55380C45489CAA615DBA9A3DF2C3DD8CDE6FED7_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tA55380C45489CAA615DBA9A3DF2C3DD8CDE6FED7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tA55380C45489CAA615DBA9A3DF2C3DD8CDE6FED7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tA55380C45489CAA615DBA9A3DF2C3DD8CDE6FED7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tA55380C45489CAA615DBA9A3DF2C3DD8CDE6FED7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tA55380C45489CAA615DBA9A3DF2C3DD8CDE6FED7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t87DD4B266557E06F2868068218E4610DDED7F85C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Action,System.Collections.Generic.LinkedListNode`1<System.Action>>
struct ValueCollection_t108D85C668C775202AE555D11FB1C2291EB3346E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t108D85C668C775202AE555D11FB1C2291EB3346E_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t108D85C668C775202AE555D11FB1C2291EB3346E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t108D85C668C775202AE555D11FB1C2291EB3346E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t108D85C668C775202AE555D11FB1C2291EB3346E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t108D85C668C775202AE555D11FB1C2291EB3346E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t108D85C668C775202AE555D11FB1C2291EB3346E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>
struct ValueCollection_tBFBFD9B484D7E00929EF362A111DC964BF4197E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tBFBFD9B484D7E00929EF362A111DC964BF4197E2_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tBFBFD9B484D7E00929EF362A111DC964BF4197E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tBFBFD9B484D7E00929EF362A111DC964BF4197E2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tBFBFD9B484D7E00929EF362A111DC964BF4197E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tBFBFD9B484D7E00929EF362A111DC964BF4197E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tBFBFD9B484D7E00929EF362A111DC964BF4197E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Audio.AudioLoFiSourceQuality,Microsoft.MixedReality.Toolkit.Audio.AudioLoFiEffect/AudioLoFiFilterSettings>
struct ValueCollection_tCD2640D08ED8455F20B64990D9376EEFD6DCDAE3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tCD2640D08ED8455F20B64990D9376EEFD6DCDAE3_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tCD2640D08ED8455F20B64990D9376EEFD6DCDAE3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tCD2640D08ED8455F20B64990D9376EEFD6DCDAE3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tCD2640D08ED8455F20B64990D9376EEFD6DCDAE3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tCD2640D08ED8455F20B64990D9376EEFD6DCDAE3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tCD2640D08ED8455F20B64990D9376EEFD6DCDAE3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Collections.Generic.HashSet`1<Photon.Realtime.Player>>
struct ValueCollection_t46805F0AD37F00B7924E52160FFF61DDC2BCA7A2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t46805F0AD37F00B7924E52160FFF61DDC2BCA7A2_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t46805F0AD37F00B7924E52160FFF61DDC2BCA7A2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t46805F0AD37F00B7924E52160FFF61DDC2BCA7A2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t46805F0AD37F00B7924E52160FFF61DDC2BCA7A2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t46805F0AD37F00B7924E52160FFF61DDC2BCA7A2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t46805F0AD37F00B7924E52160FFF61DDC2BCA7A2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Byte,System.Collections.Generic.HashSet`1<Photon.Realtime.Player>>
struct ValueCollection_t18657CAE468DE5239055629974243C6506CF9449_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t18657CAE468DE5239055629974243C6506CF9449_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t18657CAE468DE5239055629974243C6506CF9449_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t18657CAE468DE5239055629974243C6506CF9449_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t18657CAE468DE5239055629974243C6506CF9449(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t18657CAE468DE5239055629974243C6506CF9449_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t18657CAE468DE5239055629974243C6506CF9449_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,ExitGames.Client.Photon.CustomType>
struct ValueCollection_t52D3A6C783B141A6BECB42F03245534B946F56CF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t52D3A6C783B141A6BECB42F03245534B946F56CF_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t52D3A6C783B141A6BECB42F03245534B946F56CF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t52D3A6C783B141A6BECB42F03245534B946F56CF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t52D3A6C783B141A6BECB42F03245534B946F56CF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t52D3A6C783B141A6BECB42F03245534B946F56CF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t52D3A6C783B141A6BECB42F03245534B946F56CF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Byte,ExitGames.Client.Photon.CustomType>
struct ValueCollection_t58A1928ED6F6F1486048C1BBDE9E0A96431E9C83_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t58A1928ED6F6F1486048C1BBDE9E0A96431E9C83_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t58A1928ED6F6F1486048C1BBDE9E0A96431E9C83_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t58A1928ED6F6F1486048C1BBDE9E0A96431E9C83_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t58A1928ED6F6F1486048C1BBDE9E0A96431E9C83(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t58A1928ED6F6F1486048C1BBDE9E0A96431E9C83_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t58A1928ED6F6F1486048C1BBDE9E0A96431E9C83_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_tDB5D856F817B145C555EF44204740713ECF55F95_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tDB5D856F817B145C555EF44204740713ECF55F95_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tDB5D856F817B145C555EF44204740713ECF55F95_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tDB5D856F817B145C555EF44204740713ECF55F95_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tDB5D856F817B145C555EF44204740713ECF55F95(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tDB5D856F817B145C555EF44204740713ECF55F95_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tDB5D856F817B145C555EF44204740713ECF55F95_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,Photon.Pun.UtilityScripts.PhotonTeam>
struct ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Byte,Photon.Pun.UtilityScripts.PhotonTeam>
struct ValueCollection_tD80E52A63455628899FA97CDC9BA4D20C475514F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tD80E52A63455628899FA97CDC9BA4D20C475514F_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tD80E52A63455628899FA97CDC9BA4D20C475514F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tD80E52A63455628899FA97CDC9BA4D20C475514F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tD80E52A63455628899FA97CDC9BA4D20C475514F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tD80E52A63455628899FA97CDC9BA4D20C475514F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tD80E52A63455628899FA97CDC9BA4D20C475514F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_tEE04130FCA650722D8F6F42E36690836F792A7F0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tEE04130FCA650722D8F6F42E36690836F792A7F0_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tEE04130FCA650722D8F6F42E36690836F792A7F0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tEE04130FCA650722D8F6F42E36690836F792A7F0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tEE04130FCA650722D8F6F42E36690836F792A7F0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tEE04130FCA650722D8F6F42E36690836F792A7F0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tEE04130FCA650722D8F6F42E36690836F792A7F0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68_ComCallableWrapper>, IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52(IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct ValueCollection_tAD299E06216B9D045DBD60A588E728E13C65C1F3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tAD299E06216B9D045DBD60A588E728E13C65C1F3_ComCallableWrapper>, IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tAD299E06216B9D045DBD60A588E728E13C65C1F3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tAD299E06216B9D045DBD60A588E728E13C65C1F3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52(IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tAD299E06216B9D045DBD60A588E728E13C65C1F3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tAD299E06216B9D045DBD60A588E728E13C65C1F3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tAD299E06216B9D045DBD60A588E728E13C65C1F3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E_ComCallableWrapper>, IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D(IIterator_1_t1AA7E7CB52E112209BFF10217944E684E4EB5F6C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct ValueCollection_t621D690D7BE49C0DB8F8D219FC062FA609413663_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t621D690D7BE49C0DB8F8D219FC062FA609413663_ComCallableWrapper>, IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t621D690D7BE49C0DB8F8D219FC062FA609413663_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t621D690D7BE49C0DB8F8D219FC062FA609413663_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t3973B44BF9B2638A4D47697662390AFFB261C95F::IID;
		interfaceIds[1] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D(IIterator_1_t1AA7E7CB52E112209BFF10217944E684E4EB5F6C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m5FC0431B0800FF002AE53EBA78F63E562A455C5D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t621D690D7BE49C0DB8F8D219FC062FA609413663(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t621D690D7BE49C0DB8F8D219FC062FA609413663_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t621D690D7BE49C0DB8F8D219FC062FA609413663_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tD787DE628A7B4562857DC9DC6F9AF03C95D591A7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2B1FAABC1016394A798F2FAE62D45917FAA50E2A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t2B1FAABC1016394A798F2FAE62D45917FAA50E2A_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t2B1FAABC1016394A798F2FAE62D45917FAA50E2A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t2B1FAABC1016394A798F2FAE62D45917FAA50E2A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t2B1FAABC1016394A798F2FAE62D45917FAA50E2A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t2B1FAABC1016394A798F2FAE62D45917FAA50E2A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t2B1FAABC1016394A798F2FAE62D45917FAA50E2A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ValueCollection_t61C9C4E26BC6D2EDCA8254E79F9A037D9C9080B1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t61C9C4E26BC6D2EDCA8254E79F9A037D9C9080B1_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t61C9C4E26BC6D2EDCA8254E79F9A037D9C9080B1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t61C9C4E26BC6D2EDCA8254E79F9A037D9C9080B1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t61C9C4E26BC6D2EDCA8254E79F9A037D9C9080B1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t61C9C4E26BC6D2EDCA8254E79F9A037D9C9080B1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t61C9C4E26BC6D2EDCA8254E79F9A037D9C9080B1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ValueCollection_t16E4A94B8E88DBC51566279510C9B0A5E1418047_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t16E4A94B8E88DBC51566279510C9B0A5E1418047_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA, IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t16E4A94B8E88DBC51566279510C9B0A5E1418047_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t16E4A94B8E88DBC51566279510C9B0A5E1418047_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D::IID;
		interfaceIds[1] = IIterable_1_t7CD9E0AADA81D3633E6CA45CED37E0D2F873A3EA::IID;
		interfaceIds[2] = IIterable_1_t901AF7A9305BBB392D1BC72F5EE14612A9786011::IID;
		interfaceIds[3] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8(IIterator_1_t237555B994ADF912C47BF2A88863C7FFA1EBAA3B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE1912BE81B8B48A51906B614143DB2C5E65720B8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64(IIterator_1_t04C72867FEDCC8C661CDD86E3029B3BB0AE70A95** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m58EF279DBDFD39F1F59C3E0FC0E7AD131910EA64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t16E4A94B8E88DBC51566279510C9B0A5E1418047(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t16E4A94B8E88DBC51566279510C9B0A5E1418047_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t16E4A94B8E88DBC51566279510C9B0A5E1418047_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.GameObject,System.Int32>
struct ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB_ComCallableWrapper>, IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52(IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tA0B99B998FFAE32F578C33765C611F3525EA83EB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.GameObject,System.Int32>
struct ValueCollection_t8F15096CB3332EC9F622D90026FD248411C789BD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t8F15096CB3332EC9F622D90026FD248411C789BD_ComCallableWrapper>, IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ValueCollection_t8F15096CB3332EC9F622D90026FD248411C789BD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t8F15096CB3332EC9F622D90026FD248411C789BD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tA41E013D75239E8CF5D90C342477FB03D8D477EC::IID;
		interfaceIds[1] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52(IIterator_1_t48E0DED97AB1D2133B95C8B4EF2944BA7D206925** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m78139ADFF5FE80ABD7C852457E456C05CF261D52_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t8F15096CB3332EC9F622D90026FD248411C789BD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t8F15096CB3332EC9F622D90026FD248411C789BD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t8F15096CB3332EC9F622D90026FD248411C789BD_ComCallableWrapper(obj));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypedEventHandler_2_Invoke_m21CBC8780368C07950C29A9155026BFC53770835_gshared_inline (TypedEventHandler_2_t6B82D27B2ED38E7ADDA1ADD5B208073B69D39B83* __this, RuntimeObject* ___sender0, RuntimeObject* ___args1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___args1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
