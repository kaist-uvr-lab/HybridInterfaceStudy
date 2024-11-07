#include "pch-cpp.hpp"

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

// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<UnityEngine.UIElements.Panel>
struct Action_1_tEFD4B3570567C07AE1CC4A2D290987F4347F2F01;
// UnityEngine.UIElements.UIR.BasicNodePool`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNodePool_1_tEF610BEFE1094E5737DC6F71292C727C8FFD0828;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator>
struct Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123;
// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.VisualElement,UnityEngine.Vector2>
struct Dictionary_2_t2E2FD115F34FFA7AE5B80FD5398843049FCBF05E;
// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2>
struct Func_2_t33ED521BE3A7E943FA8D764514952EDF1AF1C0FA;
// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.RenderChainCommand>
struct LinkedPool_1_t2089E962DBA7DCED47F5B21A93012A52E885E94F;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.BitmapAllocator32/Page>
struct List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain/RenderNodeData>
struct List_1_tAF3B3F03351330B5C2EA012DB4C7E417DC6551AB;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.RuntimeType[]
struct RuntimeTypeU5BU5D_tC404B7F55FB8F6C64CB37ECD01379D36A9238146;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UIElements.AtlasBase
struct AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC;
// UnityEngine.UIElements.UIR.BaseShaderInfoStorage
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
// UnityEngine.UIElements.EventDispatcher
struct EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398;
// UnityEngine.UIElements.FocusController
struct FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UIElements.GetViewDataDictionary
struct GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638;
// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
// UnityEngine.UIElements.IMGUIContainer
struct IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26;
// System.Resources.IResourceReader
struct IResourceReader_tE9C9534BA3C840A720AD53C004CF02E41A9684D8;
// UnityEngine.UIElements.IStylePropertyAnimationSystem
struct IStylePropertyAnimationSystem_t120D77C8BFB230CA7DBF45D3FB1F5AFBA0504DE2;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// UnityEngine.UIElements.LoadResourceFunction
struct LoadResourceFunction_tA999A2DDCB9CDCF68E4274A58336A39ABB7AF850;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.UIElements.PanelSettings
struct PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
// System.Resources.ResourceReader
struct ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930;
// Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct SafeRegistryHandle_tE1299DE3CB586878E1B1FF4469F01903A526B0FF;
// UnityEngine.UIElements.SavePersistentViewData
struct SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.UIElements.TextureRegistry
struct TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B;
// UnityEngine.UIElements.TimeMsFunction
struct TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B;
// UnityEngine.UIElements.TimerEventScheduler
struct TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862;
// UnityEngine.UIElements.UIR.Implementation.UIRStylePainter
struct UIRStylePainter_t406D6C9F30B975CCE0D55D800B5A97504F26FEC8;
// UnityEngine.UIElements.UIR.Implementation.UIRTextUpdatePainter
struct UIRTextUpdatePainter_t4C6DD44519F677FBCFCB2B6D38C129BB8E21460F;
// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D;
// UnityEngine.UIElements.UIR.VectorImageManager
struct VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0;
struct Guid_t;
struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274;
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18;
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48;
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05;
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C(IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue) = 0;
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

// System.Security.Cryptography.DeriveBytes
struct DeriveBytes_t385A92C1BE5732BD434FBD449B8BFA1A7702A179  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Resources.ResourceFallbackManager
struct ResourceFallbackManager_tA9AEF3A7D4BA4E858760C519D387C56908A2E422  : public RuntimeObject
{
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager::m_startingCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_startingCulture_0;
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager::m_neutralResourcesCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_neutralResourcesCulture_1;
	// System.Boolean System.Resources.ResourceFallbackManager::m_useParents
	bool ___m_useParents_2;
};

// System.Resources.ResourceReader
struct ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930  : public RuntimeObject
{
	// System.IO.BinaryReader System.Resources.ResourceReader::_store
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ____store_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.ResourceReader::_resCache
	Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123* ____resCache_1;
	// System.Int64 System.Resources.ResourceReader::_nameSectionOffset
	int64_t ____nameSectionOffset_2;
	// System.Int64 System.Resources.ResourceReader::_dataSectionOffset
	int64_t ____dataSectionOffset_3;
	// System.Int32[] System.Resources.ResourceReader::_nameHashes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____nameHashes_4;
	// System.Int32* System.Resources.ResourceReader::_nameHashesPtr
	int32_t* ____nameHashesPtr_5;
	// System.Int32[] System.Resources.ResourceReader::_namePositions
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____namePositions_6;
	// System.Int32* System.Resources.ResourceReader::_namePositionsPtr
	int32_t* ____namePositionsPtr_7;
	// System.RuntimeType[] System.Resources.ResourceReader::_typeTable
	RuntimeTypeU5BU5D_tC404B7F55FB8F6C64CB37ECD01379D36A9238146* ____typeTable_8;
	// System.Int32[] System.Resources.ResourceReader::_typeNamePositions
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____typeNamePositions_9;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Resources.ResourceReader::_objFormatter
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* ____objFormatter_10;
	// System.Int32 System.Resources.ResourceReader::_numResources
	int32_t ____numResources_11;
	// System.IO.UnmanagedMemoryStream System.Resources.ResourceReader::_ums
	UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D* ____ums_12;
	// System.Int32 System.Resources.ResourceReader::_version
	int32_t ____version_13;
};

// System.Resources.ResourceSet
struct ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D  : public RuntimeObject
{
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___Table_1;
	// System.Collections.Hashtable System.Resources.ResourceSet::_caseInsensitiveTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____caseInsensitiveTable_2;
};

// System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19  : public RuntimeObject
{
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.RijndaelManagedTransform::m_cipherMode
	int32_t ___m_cipherMode_0;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.RijndaelManagedTransform::m_paddingValue
	int32_t ___m_paddingValue_1;
	// System.Security.Cryptography.RijndaelManagedTransformMode System.Security.Cryptography.RijndaelManagedTransform::m_transformMode
	int32_t ___m_transformMode_2;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_blockSizeBits
	int32_t ___m_blockSizeBits_3;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_blockSizeBytes
	int32_t ___m_blockSizeBytes_4;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_inputBlockSize
	int32_t ___m_inputBlockSize_5;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_outputBlockSize
	int32_t ___m_outputBlockSize_6;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_encryptKeyExpansion
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_encryptKeyExpansion_7;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_decryptKeyExpansion
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_decryptKeyExpansion_8;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_Nr
	int32_t ___m_Nr_9;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_Nb
	int32_t ___m_Nb_10;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::m_Nk
	int32_t ___m_Nk_11;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_encryptindex
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_encryptindex_12;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_decryptindex
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_decryptindex_13;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_IV
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_IV_14;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::m_lastBlockBuffer
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_lastBlockBuffer_15;
	// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::m_depadBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_depadBuffer_16;
	// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::m_shiftRegister
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_shiftRegister_17;
};

struct RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_StaticFields
{
	// System.Byte[] System.Security.Cryptography.RijndaelManagedTransform::s_Sbox
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_Sbox_18;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_Rcon
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_Rcon_19;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_T
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_T_20;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_TF
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_TF_21;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_iT
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_iT_22;
	// System.Int32[] System.Security.Cryptography.RijndaelManagedTransform::s_iTF
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_iTF_23;
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

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
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

// Unity.Collections.NativeArray`1<UnityEngine.UIElements.UIR.Transform3x4>
struct NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// UnityEngine.UIElements.UIR.BitmapAllocator32
struct BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 
{
	// System.Int32 UnityEngine.UIElements.UIR.BitmapAllocator32::m_PageHeight
	int32_t ___m_PageHeight_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.BitmapAllocator32/Page> UnityEngine.UIElements.UIR.BitmapAllocator32::m_Pages
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ___m_Pages_1;
	// System.Collections.Generic.List`1<System.UInt32> UnityEngine.UIElements.UIR.BitmapAllocator32::m_AllocMap
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_AllocMap_2;
	// System.Int32 UnityEngine.UIElements.UIR.BitmapAllocator32::m_EntryWidth
	int32_t ___m_EntryWidth_3;
	// System.Int32 UnityEngine.UIElements.UIR.BitmapAllocator32::m_EntryHeight
	int32_t ___m_EntryHeight_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.BitmapAllocator32
struct BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke
{
	int32_t ___m_PageHeight_0;
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ___m_Pages_1;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_AllocMap_2;
	int32_t ___m_EntryWidth_3;
	int32_t ___m_EntryHeight_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.BitmapAllocator32
struct BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com
{
	int32_t ___m_PageHeight_0;
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ___m_Pages_1;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_AllocMap_2;
	int32_t ___m_EntryWidth_3;
	int32_t ___m_EntryHeight_4;
};

// UnityEngine.UIElements.UIR.ChainBuilderStats
struct ChainBuilderStats_t6E755490CE0B312AE16FEBC6734C7F2836A8067C 
{
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::elementsAdded
	uint32_t ___elementsAdded_0;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::elementsRemoved
	uint32_t ___elementsRemoved_1;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveClipUpdates
	uint32_t ___recursiveClipUpdates_2;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveClipUpdatesExpanded
	uint32_t ___recursiveClipUpdatesExpanded_3;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::nonRecursiveClipUpdates
	uint32_t ___nonRecursiveClipUpdates_4;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveTransformUpdates
	uint32_t ___recursiveTransformUpdates_5;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveTransformUpdatesExpanded
	uint32_t ___recursiveTransformUpdatesExpanded_6;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveOpacityUpdates
	uint32_t ___recursiveOpacityUpdates_7;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveOpacityUpdatesExpanded
	uint32_t ___recursiveOpacityUpdatesExpanded_8;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::colorUpdates
	uint32_t ___colorUpdates_9;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::colorUpdatesExpanded
	uint32_t ___colorUpdatesExpanded_10;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveVisualUpdates
	uint32_t ___recursiveVisualUpdates_11;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveVisualUpdatesExpanded
	uint32_t ___recursiveVisualUpdatesExpanded_12;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::nonRecursiveVisualUpdates
	uint32_t ___nonRecursiveVisualUpdates_13;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::dirtyProcessed
	uint32_t ___dirtyProcessed_14;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::nudgeTransformed
	uint32_t ___nudgeTransformed_15;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::boneTransformed
	uint32_t ___boneTransformed_16;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::skipTransformed
	uint32_t ___skipTransformed_17;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::visualUpdateTransformed
	uint32_t ___visualUpdateTransformed_18;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::updatedMeshAllocations
	uint32_t ___updatedMeshAllocations_19;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::newMeshAllocations
	uint32_t ___newMeshAllocations_20;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::groupTransformElementsChanged
	uint32_t ___groupTransformElementsChanged_21;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::immedateRenderersActive
	uint32_t ___immedateRenderersActive_22;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::textUpdates
	uint32_t ___textUpdates_23;
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

// Windows.Foundation.DateTime
struct DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0 
{
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;
};

// UnityEngine.EventInterests
struct EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8 
{
	// System.Boolean UnityEngine.EventInterests::<wantsMouseMove>k__BackingField
	bool ___U3CwantsMouseMoveU3Ek__BackingField_0;
	// System.Boolean UnityEngine.EventInterests::<wantsMouseEnterLeaveWindow>k__BackingField
	bool ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	// System.Boolean UnityEngine.EventInterests::<wantsLessLayoutEvents>k__BackingField
	bool ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventInterests
struct EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_pinvoke
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.EventInterests
struct EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8_marshaled_com
{
	int32_t ___U3CwantsMouseMoveU3Ek__BackingField_0;
	int32_t ___U3CwantsMouseEnterLeaveWindowU3Ek__BackingField_1;
	int32_t ___U3CwantsLessLayoutEventsU3Ek__BackingField_2;
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

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F 
{
	// System.String System.Security.Cryptography.HashAlgorithmName::_name
	String_t* ____name_0;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshaled_pinvoke
{
	char* ____name_0;
};
// Native definition for COM marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F_marshaled_com
{
	Il2CppChar* ____name_0;
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

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Windows.Foundation.Point
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 
{
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;
};

// Windows.Foundation.Rect
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 
{
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;
};

// Windows.Foundation.Rect
struct Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4 
{
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;
};

// System.Security.Cryptography.Rijndael
struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

struct Rijndael_t282661761E53E282457A31F5675ACF53D64EE807_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Rijndael::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_t04003C4E7A5C66FE65D482897E4E23468BD0DB45  : public ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_resCache
	Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123* ____resCache_4;
	// System.Resources.ResourceReader System.Resources.RuntimeResourceSet::_defaultReader
	ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930* ____defaultReader_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_caseInsensitiveTable
	Dictionary_2_t4AA150E5587EBF39D6592B59866FCF1AE7848123* ____caseInsensitiveTable_6;
	// System.Boolean System.Resources.RuntimeResourceSet::_haveReadFromReader
	bool ____haveReadFromReader_7;
};

// Windows.Foundation.Size
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 
{
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
struct DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4 
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::heads
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___heads_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::tails
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___tails_1;
	// System.Int32[] UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::minDepths
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___minDepths_2;
	// System.Int32[] UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::maxDepths
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___maxDepths_3;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::dirtyID
	uint32_t ___dirtyID_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
struct DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_pinvoke
{
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___heads_0;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___tails_1;
	Il2CppSafeArray/*NONE*/* ___minDepths_2;
	Il2CppSafeArray/*NONE*/* ___maxDepths_3;
	uint32_t ___dirtyID_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
struct DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_com
{
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___heads_0;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___tails_1;
	Il2CppSafeArray/*NONE*/* ___minDepths_2;
	Il2CppSafeArray/*NONE*/* ___maxDepths_3;
	uint32_t ___dirtyID_4;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m5B8F42C1F8D45A2811F550E4E9680D663965B4B0(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE64C87276C694C4AFA983D2A6D150B817A856614(Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4* comReturnValue) = 0;
};
// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___value0ArraySize, Guid_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___value0ArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___value0ArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___value0ArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___value0ArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___value0ArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___value0) = 0;
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

// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Microsoft.Win32.RegistryKey
struct RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// Microsoft.Win32.SafeHandles.SafeRegistryHandle modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.Win32.RegistryKey::_hkey
	SafeRegistryHandle_tE1299DE3CB586878E1B1FF4469F01903A526B0FF* ____hkey_9;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.Win32.RegistryKey::_keyName
	String_t* ____keyName_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.Win32.RegistryKey::_remoteKey
	bool ____remoteKey_11;
	// Microsoft.Win32.RegistryKey/StateFlags modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.Win32.RegistryKey::_state
	int32_t ____state_12;
	// Microsoft.Win32.RegistryKeyPermissionCheck modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.Win32.RegistryKey::_checkMode
	int32_t ____checkMode_13;
	// Microsoft.Win32.RegistryView modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.Win32.RegistryKey::_regView
	int32_t ____regView_14;
};

struct RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_StaticFields
{
	// System.IntPtr Microsoft.Win32.RegistryKey::HKEY_CLASSES_ROOT
	intptr_t ___HKEY_CLASSES_ROOT_1;
	// System.IntPtr Microsoft.Win32.RegistryKey::HKEY_CURRENT_USER
	intptr_t ___HKEY_CURRENT_USER_2;
	// System.IntPtr Microsoft.Win32.RegistryKey::HKEY_LOCAL_MACHINE
	intptr_t ___HKEY_LOCAL_MACHINE_3;
	// System.IntPtr Microsoft.Win32.RegistryKey::HKEY_USERS
	intptr_t ___HKEY_USERS_4;
	// System.IntPtr Microsoft.Win32.RegistryKey::HKEY_PERFORMANCE_DATA
	intptr_t ___HKEY_PERFORMANCE_DATA_5;
	// System.IntPtr Microsoft.Win32.RegistryKey::HKEY_CURRENT_CONFIG
	intptr_t ___HKEY_CURRENT_CONFIG_6;
	// System.IntPtr Microsoft.Win32.RegistryKey::HKEY_DYN_DATA
	intptr_t ___HKEY_DYN_DATA_7;
	// System.String[] Microsoft.Win32.RegistryKey::s_hkeyNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_hkeyNames_8;
};

// System.Security.Cryptography.Rfc2898DeriveBytes
struct Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB  : public DeriveBytes_t385A92C1BE5732BD434FBD449B8BFA1A7702A179
{
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_password
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____password_1;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_salt
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____salt_2;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::_iterations
	uint32_t ____iterations_3;
	// System.Security.Cryptography.HMAC System.Security.Cryptography.Rfc2898DeriveBytes::_hmac
	HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684* ____hmac_4;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_blockSize
	int32_t ____blockSize_5;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_6;
	// System.UInt32 System.Security.Cryptography.Rfc2898DeriveBytes::_block
	uint32_t ____block_7;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_startIndex
	int32_t ____startIndex_8;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_endIndex
	int32_t ____endIndex_9;
	// System.Security.Cryptography.HashAlgorithmName System.Security.Cryptography.Rfc2898DeriveBytes::<HashAlgorithm>k__BackingField
	HashAlgorithmName_t7FCDC65C37365F7AFAAA96952D14F51676480A3F ___U3CHashAlgorithmU3Ek__BackingField_10;
};

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39  : public Rijndael_t282661761E53E282457A31F5675ACF53D64EE807
{
};

// UnityEngine.UIElements.UIR.TextCoreSettings
struct TextCoreSettings_t3D724CD0811298B5AB1EA2041CE799CC25CDD115 
{
	// UnityEngine.Color UnityEngine.UIElements.UIR.TextCoreSettings::faceColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___faceColor_0;
	// UnityEngine.Color UnityEngine.UIElements.UIR.TextCoreSettings::outlineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___outlineColor_1;
	// System.Single UnityEngine.UIElements.UIR.TextCoreSettings::outlineWidth
	float ___outlineWidth_2;
	// UnityEngine.Color UnityEngine.UIElements.UIR.TextCoreSettings::underlayColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___underlayColor_3;
	// UnityEngine.Vector2 UnityEngine.UIElements.UIR.TextCoreSettings::underlayOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___underlayOffset_4;
	// System.Single UnityEngine.UIElements.UIR.TextCoreSettings::underlaySoftness
	float ___underlaySoftness_5;
};

// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_5;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField_6;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_7;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField_8;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged_13;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial_14;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged_15;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF 
{
	// UnityEngine.UIElements.UIR.BaseShaderInfoStorage UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_Storage
	BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* ___m_Storage_0;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_TransformAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_TransformAllocator_1;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_ClipRectAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_ClipRectAllocator_2;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_OpacityAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_OpacityAllocator_3;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_ColorAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_ColorAllocator_4;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_TextSettingsAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_TextSettingsAllocator_5;
	// System.Boolean UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_StorageReallyCreated
	bool ___m_StorageReallyCreated_6;
	// System.Boolean UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_VertexTexturingEnabled
	bool ___m_VertexTexturingEnabled_7;
	// Unity.Collections.NativeArray`1<UnityEngine.UIElements.UIR.Transform3x4> UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_Transforms
	NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 ___m_Transforms_8;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_ClipRects
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_ClipRects_9;
};

struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___identityTransformTexel_10;
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::infiniteClipRectTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___infiniteClipRectTexel_11;
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::fullOpacityTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___fullOpacityTexel_12;
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::clearColorTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___clearColorTexel_13;
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::defaultTextCoreSettingsTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___defaultTextCoreSettingsTexel_14;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformValue
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityTransformValue_15;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformRow0Value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___identityTransformRow0Value_16;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformRow1Value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___identityTransformRow1Value_17;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformRow2Value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___identityTransformRow2Value_18;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::infiniteClipRectValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___infiniteClipRectValue_19;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::fullOpacityValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___fullOpacityValue_20;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::clearColorValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clearColorValue_21;
	// UnityEngine.UIElements.UIR.TextCoreSettings UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::defaultTextCoreSettingsValue
	TextCoreSettings_t3D724CD0811298B5AB1EA2041CE799CC25CDD115 ___defaultTextCoreSettingsValue_22;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransform
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___identityTransform_23;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::infiniteClipRect
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___infiniteClipRect_24;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::fullOpacity
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___fullOpacity_25;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::clearColor
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clearColor_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::defaultTextCoreSettings
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___defaultTextCoreSettings_27;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshaled_pinvoke
{
	BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* ___m_Storage_0;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_TransformAllocator_1;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_ClipRectAllocator_2;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_OpacityAllocator_3;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_ColorAllocator_4;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_TextSettingsAllocator_5;
	int32_t ___m_StorageReallyCreated_6;
	int32_t ___m_VertexTexturingEnabled_7;
	NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 ___m_Transforms_8;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_ClipRects_9;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshaled_com
{
	BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* ___m_Storage_0;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_TransformAllocator_1;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_ClipRectAllocator_2;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_OpacityAllocator_3;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_ColorAllocator_4;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_TextSettingsAllocator_5;
	int32_t ___m_StorageReallyCreated_6;
	int32_t ___m_VertexTexturingEnabled_7;
	NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 ___m_Transforms_8;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_ClipRects_9;
};

// UnityEngine.UIElements.Panel
struct Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9  : public BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.Panel::m_RootContainer
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_RootContainer_17;
	// UnityEngine.UIElements.VisualTreeUpdater UnityEngine.UIElements.Panel::m_VisualTreeUpdater
	VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* ___m_VisualTreeUpdater_18;
	// UnityEngine.UIElements.IStylePropertyAnimationSystem UnityEngine.UIElements.Panel::m_StylePropertyAnimationSystem
	RuntimeObject* ___m_StylePropertyAnimationSystem_19;
	// System.String UnityEngine.UIElements.Panel::m_PanelName
	String_t* ___m_PanelName_20;
	// System.UInt32 UnityEngine.UIElements.Panel::m_Version
	uint32_t ___m_Version_21;
	// System.UInt32 UnityEngine.UIElements.Panel::m_RepaintVersion
	uint32_t ___m_RepaintVersion_22;
	// System.UInt32 UnityEngine.UIElements.Panel::m_HierarchyVersion
	uint32_t ___m_HierarchyVersion_23;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerBeforeUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_MarkerBeforeUpdate_24;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_MarkerUpdate_25;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerLayout
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_MarkerLayout_26;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerBindings
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_MarkerBindings_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::m_MarkerAnimations
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___m_MarkerAnimations_28;
	// UnityEngine.UIElements.EventDispatcher UnityEngine.UIElements.Panel::<dispatcher>k__BackingField
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___U3CdispatcherU3Ek__BackingField_30;
	// UnityEngine.UIElements.TimerEventScheduler UnityEngine.UIElements.Panel::m_Scheduler
	TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862* ___m_Scheduler_31;
	// UnityEngine.ScriptableObject UnityEngine.UIElements.Panel::<ownerObject>k__BackingField
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ___U3CownerObjectU3Ek__BackingField_32;
	// UnityEngine.UIElements.ContextType UnityEngine.UIElements.Panel::<contextType>k__BackingField
	int32_t ___U3CcontextTypeU3Ek__BackingField_33;
	// UnityEngine.UIElements.SavePersistentViewData UnityEngine.UIElements.Panel::<saveViewData>k__BackingField
	SavePersistentViewData_tFE77B8450170D95B16B3017D62F81F2139D4F716* ___U3CsaveViewDataU3Ek__BackingField_34;
	// UnityEngine.UIElements.GetViewDataDictionary UnityEngine.UIElements.Panel::<getViewDataDictionary>k__BackingField
	GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638* ___U3CgetViewDataDictionaryU3Ek__BackingField_35;
	// UnityEngine.UIElements.FocusController UnityEngine.UIElements.Panel::<focusController>k__BackingField
	FocusController_t5D2E45F2CCBE3B7082DE4088EE03C2E8F736011A* ___U3CfocusControllerU3Ek__BackingField_36;
	// UnityEngine.EventInterests UnityEngine.UIElements.Panel::<IMGUIEventInterests>k__BackingField
	EventInterests_tF375F3296A6689BC4B016F237123DB5457515EC8 ___U3CIMGUIEventInterestsU3Ek__BackingField_37;
	// System.Int32 UnityEngine.UIElements.Panel::<IMGUIContainersCount>k__BackingField
	int32_t ___U3CIMGUIContainersCountU3Ek__BackingField_40;
	// UnityEngine.UIElements.IMGUIContainer UnityEngine.UIElements.Panel::<rootIMGUIContainer>k__BackingField
	IMGUIContainer_t2BB1312DCDFA8AC98E9ADA9EA696F2328A598A26* ___U3CrootIMGUIContainerU3Ek__BackingField_41;
	// UnityEngine.Shader UnityEngine.UIElements.Panel::m_StandardShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_StandardShader_42;
	// UnityEngine.UIElements.AtlasBase UnityEngine.UIElements.Panel::m_Atlas
	AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC* ___m_Atlas_43;
	// System.Boolean UnityEngine.UIElements.Panel::m_ValidatingLayout
	bool ___m_ValidatingLayout_44;
};

struct Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.Panel::s_MarkerPickAll
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerPickAll_29;
	// UnityEngine.UIElements.LoadResourceFunction UnityEngine.UIElements.Panel::<loadResourceFunc>k__BackingField
	LoadResourceFunction_tA999A2DDCB9CDCF68E4274A58336A39ABB7AF850* ___U3CloadResourceFuncU3Ek__BackingField_38;
	// UnityEngine.UIElements.TimeMsFunction UnityEngine.UIElements.Panel::<TimeSinceStartup>k__BackingField
	TimeMsFunction_t1893856976EB95CF5608ACC3642AD8B79994CA2B* ___U3CTimeSinceStartupU3Ek__BackingField_39;
	// System.Action`1<UnityEngine.UIElements.Panel> UnityEngine.UIElements.Panel::beforeAnyRepaint
	Action_1_tEFD4B3570567C07AE1CC4A2D290987F4347F2F01* ___beforeAnyRepaint_45;
};

// UnityEngine.UIElements.UIR.RenderChain
struct RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363  : public RuntimeObject
{
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChain::m_FirstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___m_FirstCommand_0;
	// UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking UnityEngine.UIElements.UIR.RenderChain::m_DirtyTracker
	DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4 ___m_DirtyTracker_1;
	// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.RenderChainCommand> UnityEngine.UIElements.UIR.RenderChain::m_CommandPool
	LinkedPool_1_t2089E962DBA7DCED47F5B21A93012A52E885E94F* ___m_CommandPool_2;
	// UnityEngine.UIElements.UIR.BasicNodePool`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChain::m_TexturePool
	BasicNodePool_1_tEF610BEFE1094E5737DC6F71292C727C8FFD0828* ___m_TexturePool_3;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain/RenderNodeData> UnityEngine.UIElements.UIR.RenderChain::m_RenderNodesData
	List_1_tAF3B3F03351330B5C2EA012DB4C7E417DC6551AB* ___m_RenderNodesData_4;
	// UnityEngine.Shader UnityEngine.UIElements.UIR.RenderChain::m_DefaultShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DefaultShader_5;
	// UnityEngine.Shader UnityEngine.UIElements.UIR.RenderChain::m_DefaultWorldSpaceShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DefaultWorldSpaceShader_6;
	// UnityEngine.Material UnityEngine.UIElements.UIR.RenderChain::m_DefaultMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DefaultMat_7;
	// UnityEngine.Material UnityEngine.UIElements.UIR.RenderChain::m_DefaultWorldSpaceMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DefaultWorldSpaceMat_8;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::m_BlockDirtyRegistration
	bool ___m_BlockDirtyRegistration_9;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_StaticIndex
	int32_t ___m_StaticIndex_10;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_ActiveRenderNodes
	int32_t ___m_ActiveRenderNodes_11;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_CustomMaterialCommands
	int32_t ___m_CustomMaterialCommands_12;
	// UnityEngine.UIElements.UIR.ChainBuilderStats UnityEngine.UIElements.UIR.RenderChain::m_Stats
	ChainBuilderStats_t6E755490CE0B312AE16FEBC6734C7F2836A8067C ___m_Stats_13;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChain::m_StatsElementsAdded
	uint32_t ___m_StatsElementsAdded_14;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChain::m_StatsElementsRemoved
	uint32_t ___m_StatsElementsRemoved_15;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChain::m_FirstTextElement
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_FirstTextElement_16;
	// UnityEngine.UIElements.UIR.Implementation.UIRTextUpdatePainter UnityEngine.UIElements.UIR.RenderChain::m_TextUpdatePainter
	UIRTextUpdatePainter_t4C6DD44519F677FBCFCB2B6D38C129BB8E21460F* ___m_TextUpdatePainter_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_TextElementCount
	int32_t ___m_TextElementCount_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_DirtyTextStartIndex
	int32_t ___m_DirtyTextStartIndex_19;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_DirtyTextRemaining
	int32_t ___m_DirtyTextRemaining_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::m_FontWasReset
	bool ___m_FontWasReset_21;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.VisualElement,UnityEngine.Vector2> UnityEngine.UIElements.UIR.RenderChain::m_LastGroupTransformElementScale
	Dictionary_2_t2E2FD115F34FFA7AE5B80FD5398843049FCBF05E* ___m_LastGroupTransformElementScale_22;
	// UnityEngine.UIElements.TextureRegistry UnityEngine.UIElements.UIR.RenderChain::m_TextureRegistry
	TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* ___m_TextureRegistry_23;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_31;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.UIR.RenderChain::<panel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CpanelU3Ek__BackingField_33;
	// UnityEngine.UIElements.UIR.UIRenderDevice UnityEngine.UIElements.UIR.RenderChain::<device>k__BackingField
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___U3CdeviceU3Ek__BackingField_34;
	// UnityEngine.UIElements.AtlasBase UnityEngine.UIElements.UIR.RenderChain::<atlas>k__BackingField
	AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC* ___U3CatlasU3Ek__BackingField_35;
	// UnityEngine.UIElements.UIR.VectorImageManager UnityEngine.UIElements.UIR.RenderChain::<vectorImageManager>k__BackingField
	VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED* ___U3CvectorImageManagerU3Ek__BackingField_36;
	// UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator UnityEngine.UIElements.UIR.RenderChain::shaderInfoAllocator
	UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF ___shaderInfoAllocator_37;
	// UnityEngine.UIElements.UIR.Implementation.UIRStylePainter UnityEngine.UIElements.UIR.RenderChain::<painter>k__BackingField
	UIRStylePainter_t406D6C9F30B975CCE0D55D800B5A97504F26FEC8* ___U3CpainterU3Ek__BackingField_38;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::<drawStats>k__BackingField
	bool ___U3CdrawStatsU3Ek__BackingField_39;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::<drawInCameras>k__BackingField
	bool ___U3CdrawInCamerasU3Ek__BackingField_40;
};

struct RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerProcess
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerProcess_24;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerClipProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerClipProcessing_25;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerOpacityProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerOpacityProcessing_26;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerColorsProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerColorsProcessing_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerTransformProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTransformProcessing_28;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerVisualsProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerVisualsProcessing_29;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerTextRegen
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTextRegen_30;
	// System.Action UnityEngine.UIElements.UIR.RenderChain::OnPreRender
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnPreRender_32;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.UIElements.BaseRuntimePanel
struct BaseRuntimePanel_tEDFA512CC6692082EBBB87E5DC446A88D2E75DC4  : public Panel_t2B0DCF68A7A5EBC347FAE66F046EA98B53AF1AB9
{
	// UnityEngine.GameObject UnityEngine.UIElements.BaseRuntimePanel::m_SelectableGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_SelectableGameObject_46;
	// System.Int32 UnityEngine.UIElements.BaseRuntimePanel::m_RuntimePanelCreationIndex
	int32_t ___m_RuntimePanelCreationIndex_48;
	// System.Single UnityEngine.UIElements.BaseRuntimePanel::m_SortingPriority
	float ___m_SortingPriority_49;
	// System.Action UnityEngine.UIElements.BaseRuntimePanel::destroyed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___destroyed_50;
	// UnityEngine.Shader UnityEngine.UIElements.BaseRuntimePanel::m_StandardWorldSpaceShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_StandardWorldSpaceShader_51;
	// System.Boolean UnityEngine.UIElements.BaseRuntimePanel::m_DrawToCameras
	bool ___m_DrawToCameras_52;
	// UnityEngine.RenderTexture UnityEngine.UIElements.BaseRuntimePanel::targetTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___targetTexture_53;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.BaseRuntimePanel::panelToWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___panelToWorld_54;
	// System.Int32 UnityEngine.UIElements.BaseRuntimePanel::<targetDisplay>k__BackingField
	int32_t ___U3CtargetDisplayU3Ek__BackingField_55;
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2> UnityEngine.UIElements.BaseRuntimePanel::m_ScreenToPanelSpace
	Func_2_t33ED521BE3A7E943FA8D764514952EDF1AF1C0FA* ___m_ScreenToPanelSpace_57;
};

struct BaseRuntimePanel_tEDFA512CC6692082EBBB87E5DC446A88D2E75DC4_StaticFields
{
	// System.Int32 UnityEngine.UIElements.BaseRuntimePanel::s_CurrentRuntimePanelCounter
	int32_t ___s_CurrentRuntimePanelCounter_47;
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Vector2> UnityEngine.UIElements.BaseRuntimePanel::DefaultScreenToPanelSpace
	Func_2_t33ED521BE3A7E943FA8D764514952EDF1AF1C0FA* ___DefaultScreenToPanelSpace_56;
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

// UnityEngine.UIElements.RuntimePanel
struct RuntimePanel_t2ED2270758B54860F1289847C0C78A7D31565346  : public BaseRuntimePanel_tEDFA512CC6692082EBBB87E5DC446A88D2E75DC4
{
	// UnityEngine.UIElements.PanelSettings UnityEngine.UIElements.RuntimePanel::m_PanelSettings
	PanelSettings_t0621207D5DD3BB89DB587440E8F9E07234283DEC* ___m_PanelSettings_59;
};

struct RuntimePanel_t2ED2270758B54860F1289847C0C78A7D31565346_StaticFields
{
	// UnityEngine.UIElements.EventDispatcher UnityEngine.UIElements.RuntimePanel::s_EventDispatcher
	EventDispatcher_t9BC38CC96E93EAD1D818EE751260FE4687B0D398* ___s_EventDispatcher_58;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m3C4CBD4CBFF5D217BC350258F4FA9D1AC8B7F76C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCD324A8CB8C6E90BDFF46D5256D8DDCC46C41274** comReturnValue);



// COM Callable Wrapper for Windows.Foundation.Rect
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper>, IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43, IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF
{
	inline Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF*>(this);
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
		interfaceIds[0] = IReference_1_t3FFA5266A854A5B84B5894F2DBBF1A5F79652D43::IID;
		interfaceIds[1] = IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m5B8F42C1F8D45A2811F550E4E9680D663965B4B0(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 returnValue;
		try
		{
			returnValue = *static_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(UnBox(GetManagedObjectInline(), Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 19;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 returnValue;
		try
		{
			returnValue = *static_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(UnBox(GetManagedObjectInline(), Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___value0ArraySize, Guid_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___value0ArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___value0ArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___value0ArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___value0ArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___value0ArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Rect
struct Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper>, IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6, IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF
{
	inline Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF*>(this);
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
		interfaceIds[0] = IReference_1_tC49772D31D468A05AAC85214B02EE97DEA11D4D6::IID;
		interfaceIds[1] = IPropertyValue_t5108EBA6BAA9289BD53DB4C9BC6EC2CFD3C71CFF::IID;

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

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE64C87276C694C4AFA983D2A6D150B817A856614(Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4 returnValue;
		try
		{
			returnValue = *static_cast<Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4*>(UnBox(GetManagedObjectInline(), Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_mCCFDCAF3EF47FD26636DF1752C7D0D0F04AF17E5(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 19;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m5AA58745E3403667AD93842BD84E1BF3C56C6923(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
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

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_mA78B64B2D18688A14857A3385C11D3FBC3DCA0BF(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m893A5F46553C28727129D19D2C657BFD7A82C8EB(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mFB50772016E5FDE5548016B10D8BF8F72BAEE51A(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m81E687870E8D71B0B56C0F98B9CE901173541F0E(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m4242C2EB038EC37544C26EC11B33AD7CA1D0315B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m69E32181A31DEE4BEB361BB9E81FA3D949862FC9(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_mAB342E494DC39A847B6430F96A8F02FB9F9774E4(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mABFDF8CFBAAFF7EEE22AF429911B22EC2DE5318A(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mF1DDF1999B7F877B2BA609D09149288E345D45AE(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m4B1428420CFDB7DD73878EAB4C8EFEBFBE026EEC(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m89F937F65167C4337FD9E4A8B0A54369AE41D89D(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_mD2C842F7378384AE6BC0A93033FEE0A85C9E1F28(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m560A172386BD6DFC3DEB00D2DF3070EE67DF7B71(Guid_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_mC3F8B04EF7625215AF66FB7B5C4EFDDC4163967D(DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m5B8EF6C6B2BE4370F48B6AA715236DDD019A657A(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m6DE3D27C8479F2C44665EF1D86D76E004AC3B00D(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_mD27A291FCF475860FD4C5CC19C1C361902537662(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_mF069EFA36FB5E7469FABE6CC04471B4434E507AE(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_mEEA85229904BFBD5DD63209A9F4858EA6A36C484(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_mAF964E8DCE5EE8D9703DB63D5181CD92C344FAA9(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_mE6ECF01E37BD858FF14518C8EC0605D1BFD4CAC6(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m27D54E06B02528F7056A07F224A1552A36FDEB46(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_mAF7ECA68A945A7AA0F35D3A3962A4EA49954CEAE(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_mDC9606845A993ED32A95F889C71B67C8A05DF4BC(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_mB59E8769BB20C16BBAC4D08A3861B7019B9D2514(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_mDF81FCE06AA984ACED460A1989102C889F64393A(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m1D5F8B05C90C3FE9B82785940DEA3A3EDD6F2EC5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_mB80F78E0307BC79A3FDF3502A94F8B9D4BBD686A(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_mF47B2C131AAB62D7EDB2DEE4713E553291E5583A(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m0F0B933A1405F7B389626D274F3BB20CA2255E40(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m9B1D04C961C0519436B081BAE72B6FE53D6204D6(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mD0732FEB8CB64CA04C55CEEE8386EF3FDA97BED4(uint32_t* ___value0ArraySize, Guid_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m54798F11C9EA77AC614259146DF99355026ED0A9(uint32_t* ___value0ArraySize, DateTime_tB8F64A9E141FDC202144C06531C4E7D4B6C59CB0** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mDF0D9EC3E55742BA1132885596FDF3F478E8AC2A(uint32_t* ___value0ArraySize, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m9ECDF8442D5EF1FCB65095A1AC779596920F9890(uint32_t* ___value0ArraySize, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m57C92EBB76BF7B6D400D8045192ED76ED41BC403(uint32_t* ___value0ArraySize, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_mC4F618B7AEF3B6AB1BB2AFFEED0C2BBB28E48178(uint32_t* ___value0ArraySize, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Rect", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Rect_t0A47F76AD229933EFD5801FBE42869083DC922B4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Win32.RegistryKey
struct RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RegistryKey_t6C03DFFA88F25DC8E413D3383F05157099B2D757_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.UIR.RenderChain
struct RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.ResourceFallbackManager
struct ResourceFallbackManager_tA9AEF3A7D4BA4E858760C519D387C56908A2E422_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ResourceFallbackManager_tA9AEF3A7D4BA4E858760C519D387C56908A2E422_ComCallableWrapper>, IIterable_1_t19EB3EB244CE5A0D42C41D17F13AA3B06D3C850D, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ResourceFallbackManager_tA9AEF3A7D4BA4E858760C519D387C56908A2E422_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ResourceFallbackManager_tA9AEF3A7D4BA4E858760C519D387C56908A2E422_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ResourceFallbackManager_tA9AEF3A7D4BA4E858760C519D387C56908A2E422(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ResourceFallbackManager_tA9AEF3A7D4BA4E858760C519D387C56908A2E422_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ResourceFallbackManager_tA9AEF3A7D4BA4E858760C519D387C56908A2E422_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.ResourceReader
struct ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[1] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ResourceReader_t681F002277727FF2F8848B3F14C2ACD331171930_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.ResourceSet
struct ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper>(obj) {}

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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ResourceSet_tA2F16C08175368D3899938AD0FFCDC07B32B518D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.Rfc2898DeriveBytes
struct Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Rfc2898DeriveBytes_t0614FA7A5D23F6A9C781F7CA38E07BD8295256FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RijndaelManaged_t67DFB0E9542F21D9EED0227003A19D9F5ECF2E39_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Security.Cryptography.RijndaelManagedTransform
struct RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RijndaelManagedTransform_t4A8EE6780840A49B73D54C22252FD85038B7DA19_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UIElements.RuntimePanel
struct RuntimePanel_t2ED2270758B54860F1289847C0C78A7D31565346_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RuntimePanel_t2ED2270758B54860F1289847C0C78A7D31565346_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301
{
	inline RuntimePanel_t2ED2270758B54860F1289847C0C78A7D31565346_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RuntimePanel_t2ED2270758B54860F1289847C0C78A7D31565346_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RuntimePanel_t2ED2270758B54860F1289847C0C78A7D31565346(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RuntimePanel_t2ED2270758B54860F1289847C0C78A7D31565346_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RuntimePanel_t2ED2270758B54860F1289847C0C78A7D31565346_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.RuntimeResourceSet
struct RuntimeResourceSet_t04003C4E7A5C66FE65D482897E4E23468BD0DB45_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RuntimeResourceSet_t04003C4E7A5C66FE65D482897E4E23468BD0DB45_ComCallableWrapper>, IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline RuntimeResourceSet_t04003C4E7A5C66FE65D482897E4E23468BD0DB45_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RuntimeResourceSet_t04003C4E7A5C66FE65D482897E4E23468BD0DB45_ComCallableWrapper>(obj) {}

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
		interfaceIds[0] = IClosable_t408735E2F18F562F8A87A4C359E73D7C30A1D301::IID;
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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88() IL2CPP_OVERRIDE
	{
		return IClosable_Close_mCB0DF137CDDDCC22063CF8D95ECE3BC9B8FA0D88_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RuntimeResourceSet_t04003C4E7A5C66FE65D482897E4E23468BD0DB45(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RuntimeResourceSet_t04003C4E7A5C66FE65D482897E4E23468BD0DB45_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RuntimeResourceSet_t04003C4E7A5C66FE65D482897E4E23468BD0DB45_ComCallableWrapper(obj));
}
