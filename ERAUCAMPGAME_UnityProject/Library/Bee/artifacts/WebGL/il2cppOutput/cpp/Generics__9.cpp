﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

struct Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8;
struct Action_1_tC7DA3F3177E0ABC8E0B6FB2D4D2F72C303E1A04F;
struct Action_2_t240BAEB1DC7A6558995FFCB7E0186F2ABB2CE346;
struct Action_2_t5F23CC3B7A8A73A4EA03ECC4C0C36453937843DB;
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
struct Action_3_tD4FEFC6A317A295868086BEB12578A006464E2D5;
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB;
struct DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A;
struct DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E;
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644;
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5;
struct DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B;
struct DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F;
struct DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7;
struct DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD;
struct DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4;
struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9;
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27;
struct Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043;
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3;
struct Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F;
struct Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0;
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
struct Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Dictionary_2_tBA28DDE9EBD7869B2D9C725CB660A33231C09054;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B;
struct EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E;
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36;
struct GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3;
struct GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerator_1_tAA9E173D47F9A415DBE8F74E8C3F53E27F513950;
struct IEnumerator_1_tA0A2C7BBDB4802D2AFF0ECD6A1020DB449D91FCB;
struct IEnumerator_1_t9A8C78329AA40049674038374240306FDCB5663E;
struct IEnumerator_1_tFD827CF8F93411879A9A270098B457F6F4A61173;
struct IEnumerator_1_t2EA3AC13270BB56026B7097A0024DD3CCA3CF9EC;
struct IEnumerator_1_t0003EC9F1922ECBB54EB7E71B85E13FBC8357DD6;
struct IEnumerator_1_t327FF232159D9644239A65F54312F684DB7BE375;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_tDACC7D28FFD11A83A9FC39CC18863F52A3E7E88F;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IList_1_t3C981BB2E5E26A467A42AF86513CF54136025701;
struct IList_1_t1F79F22F068EBEEE2FC8D080E405FD5F950258E3;
struct IList_1_tF939437DA6A736B0D418E652C678C909E9D54240;
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
struct IList_1_tE1DBB5F3DF28BD7B0DD590F3E34EEB324610B113;
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123;
struct KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C;
struct KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A;
struct KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298;
struct KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04;
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F;
struct List_1_tDD673E02B713760331F9D857C7B1D1C4A07194EF;
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963;
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA;
struct Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098;
struct Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6;
struct Tables_tD895B223685217918C345ED5D52074F7E29E5F95;
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96;
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E;
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F;
struct ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9;
struct ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF;
struct ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B;
struct ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171;
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744;
struct EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E;
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500;
struct EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7;
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C;
struct KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC;
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6;
struct KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C;
struct KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C;
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SortColumnDescriptionU5BU5D_tCC3DBACAFBA412B6F1EA1C4027A27E92D9153948;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0;
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE;
struct BestFitAllocator_t92B43D0CAA763D9109779450069EBB389A57ECC7;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768;
struct Columns_t487EAF3B634F6D919D58F1927099A8883964831B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6;
struct MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA;
struct String_t;
struct TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteral2A57163F65B0EE8A44DC4359CBCD332A446966AA;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral73281EEC82D37C63F7B37551C86CE8D602A926A0;
IL2CPP_EXTERN_C String_t* _stringLiteral8E3E292F86AACF17B735D4B90BCC2F77DC92C7ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9;
struct EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744;
struct EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E;
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500;
struct EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7;
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460;
struct KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C;
struct KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC;
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6;
struct KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C;
struct KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF  : public RuntimeObject
{
	Tables_t14D3B197594232ACFA76B87EB205EB3661F6EAA6* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812  : public RuntimeObject
{
	Tables_tD895B223685217918C345ED5D52074F7E29E5F95* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A  : public RuntimeObject
{
	RuntimeObject* ____enumerator;
};
struct DictionaryKeyCollectionDebugView_2_tA967A5CC2E1F95032AE886F39B1005E56173D9D2  : public RuntimeObject
{
};
struct DictionaryValueCollectionDebugView_2_tE2C8C453C326A08B63223B59D5D010EFFE30BEF3  : public RuntimeObject
{
};
struct Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* ____keys;
	ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* ____keys;
	ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* ____keys;
	ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* ____keys;
	ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* ____keys;
	ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys;
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E  : public RuntimeObject
{
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C  : public RuntimeObject
{
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ____dictionary;
};
struct KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A  : public RuntimeObject
{
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ____dictionary;
};
struct KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298  : public RuntimeObject
{
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary;
};
struct KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04  : public RuntimeObject
{
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ____dictionary;
};
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436  : public RuntimeObject
{
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____dictionary;
};
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F  : public RuntimeObject
{
	SortColumnDescriptionU5BU5D_tCC3DBACAFBA412B6F1EA1C4027A27E92D9153948* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F  : public RuntimeObject
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
};
struct ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9  : public RuntimeObject
{
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ____dictionary;
};
struct ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF  : public RuntimeObject
{
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ____dictionary;
};
struct ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B  : public RuntimeObject
{
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary;
};
struct ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171  : public RuntimeObject
{
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ____dictionary;
};
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28  : public RuntimeObject
{
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____dictionary;
};
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768  : public RuntimeObject
{
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_View;
	RuntimeObject* ___m_ItemsSource;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged;
};
struct Columns_t487EAF3B634F6D919D58F1927099A8883964831B  : public RuntimeObject
{
	RuntimeObject* ___m_Columns;
	List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4* ___m_DisplayColumns;
	List_1_tD1A1A4E269D550491A33C35C61E549EBA163D6F4* ___m_VisibleColumns;
	bool ___m_VisibleColumnsDirty;
	int32_t ___m_StretchMode;
	bool ___m_Reorderable;
	bool ___m_Resizable;
	bool ___m_ResizePreview;
	String_t* ___m_PrimaryColumnName;
	Action_1_tC7DA3F3177E0ABC8E0B6FB2D4D2F72C303E1A04F* ___changed;
	Action_2_t5F23CC3B7A8A73A4EA03ECC4C0C36453937843DB* ___columnAdded;
	Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8* ___columnRemoved;
	Action_2_t240BAEB1DC7A6558995FFCB7E0186F2ABB2CE346* ___columnChanged;
	Action_1_t1EA00726877CBFFB94EE52CCD9672A96472984B8* ___columnResized;
	Action_3_tD4FEFC6A317A295868086BEB12578A006464E2D5* ___columnReordered;
};
struct GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48  : public RuntimeObject
{
	BestFitAllocator_t92B43D0CAA763D9109779450069EBB389A57ECC7* ___m_Low;
	BestFitAllocator_t92B43D0CAA763D9109779450069EBB389A57ECC7* ___m_High;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA  : public RuntimeObject
{
	RuntimeObject* ___m_Descriptions;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___changed;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC 
{
	float ___sum;
	int32_t ___count;
};
struct CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* ___m_Getter;
	PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* ___m_Setter;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	bool ___value;
};
struct Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	Il2CppChar ___value;
};
struct Entry_tA212E7034D981AC2F7E219C600769EE485919684 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	int32_t ___value;
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 
{
	int32_t ___key;
	bool ___value;
};
struct KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF 
{
	int32_t ___key;
	Il2CppChar ___value;
};
struct KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 
{
	int32_t ___key;
	int32_t ___value;
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE 
{
	RuntimeObject* ___m_RootItemIds;
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___m_Tree;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds;
};
struct TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 
{
	RuntimeObject* ___m_RootItemIds;
	Dictionary_2_tEBE1E11ABD22357FDFD12EF5F2F7CDC6378162C0* ___m_Tree;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_ParentIds;
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___m_ChildrenIds;
};
struct TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 
{
	int32_t ___U3CidU3Ek__BackingField;
	RuntimeObject* ___m_Data;
	RuntimeObject* ___m_Children;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0  : public CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768
{
	Dictionary_2_tBA28DDE9EBD7869B2D9C725CB660A33231C09054* ___m_TreeItems;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_RootIndices;
	List_1_tDD673E02B713760331F9D857C7B1D1C4A07194EF* ___m_ItemWrappers;
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_TreeItemIdsWithItemWrappers;
	List_1_tDD673E02B713760331F9D857C7B1D1C4A07194EF* ___m_WrapperInsertionList;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
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
struct DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* ___gpuData;
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___cpuData;
	NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___updateRanges;
	GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48* ___allocator;
	uint32_t ___m_UpdateRangePoolSize;
	uint32_t ___m_ElemStride;
	uint32_t ___m_UpdateRangeMin;
	uint32_t ___m_UpdateRangeMax;
	uint32_t ___m_UpdateRangesEnqueued;
	uint32_t ___m_UpdateRangesBatchStart;
	bool ___m_UpdateRangesSaturated;
};
struct DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* ___gpuData;
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___cpuData;
	NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___updateRanges;
	GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48* ___allocator;
	uint32_t ___m_UpdateRangePoolSize;
	uint32_t ___m_ElemStride;
	uint32_t ___m_UpdateRangeMin;
	uint32_t ___m_UpdateRangeMax;
	uint32_t ___m_UpdateRangesEnqueued;
	uint32_t ___m_UpdateRangesBatchStart;
	bool ___m_UpdateRangesSaturated;
};
struct DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
	GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* ___gpuData;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___cpuData;
	NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___updateRanges;
	GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48* ___allocator;
	uint32_t ___m_UpdateRangePoolSize;
	uint32_t ___m_ElemStride;
	uint32_t ___m_UpdateRangeMin;
	uint32_t ___m_UpdateRangeMax;
	uint32_t ___m_UpdateRangesEnqueued;
	uint32_t ___m_UpdateRangesBatchStart;
	bool ___m_UpdateRangesSaturated;
};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 
{
	int32_t ___hashCode;
	int32_t ___next;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value;
};
struct Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___key;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value;
};
struct Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 
{
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 
{
	Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB 
{
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ____current;
	int32_t ____getEnumeratorRetType;
};
struct GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36  : public RuntimeObject
{
	intptr_t ___buffer;
	int32_t ___elemCount;
	int32_t ___elemStride;
};
struct GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3  : public RuntimeObject
{
	intptr_t ___buffer;
	int32_t ___elemCount;
	int32_t ___elemStride;
};
struct GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86  : public RuntimeObject
{
	intptr_t ___buffer;
	int32_t ___elemCount;
	int32_t ___elemStride;
};
struct KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD 
{
	int32_t ___key;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___value;
};
struct KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED 
{
	int32_t ___key;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___value;
};
struct TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96  : public RuntimeObject
{
	TreeData_1_t52F9997F4F3827B6D2DDD108B0B5F8007C1054DE ___m_TreeData;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack;
};
struct TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E  : public RuntimeObject
{
	TreeData_1_tA6CE8DFD2D1FAE745298DC264034D9D608994998 ___m_TreeData;
	Stack_1_tB1C6241D46041BB92ED43EB56011E433FC3AD098* ___m_IteratorStack;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
};
struct MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC  : public BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0
{
	MultiColumnController_t25BFE9B50BC0D69925EC7EEE090F256FFE1244B6* ___m_ColumnController;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A  : public BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0
{
};
struct DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B  : public MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* ___m_TreeDataController;
};
struct DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F  : public MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* ___m_TreeDataController;
};
struct DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7  : public TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* ___m_TreeDataController;
};
struct DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD  : public TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* ___m_TreeDataController;
};
struct Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 
{
	Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F 
{
	Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 
{
	Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ____current;
	int32_t ____getEnumeratorRetType;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963  : public MulticastDelegate_t
{
};
struct PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields
{
	EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* ___defaultComparer;
};
struct EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields
{
	EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* ___defaultComparer;
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F_StaticFields
{
	SortColumnDescriptionU5BU5D_tCC3DBACAFBA412B6F1EA1C4027A27E92D9153948* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___K_ExpandItemByIndex;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CreateWrappers;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 m_Items[1];

	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
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
struct KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 m_Items[1];

	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___key))->___Item2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
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
struct EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C m_Items[1];

	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD m_Items[1];

	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 m_Items[1];

	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Children), (void*)NULL);
		#endif
	}
	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Children), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED m_Items[1];

	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Children), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___m_Children), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE m_Items[1];

	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 m_Items[1];

	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 m_Items[1];

	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227 value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF m_Items[1];

	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tA212E7034D981AC2F7E219C600769EE485919684 m_Items[1];

	inline Entry_tA212E7034D981AC2F7E219C600769EE485919684 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tA212E7034D981AC2F7E219C600769EE485919684* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tA212E7034D981AC2F7E219C600769EE485919684 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Entry_tA212E7034D981AC2F7E219C600769EE485919684 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tA212E7034D981AC2F7E219C600769EE485919684* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tA212E7034D981AC2F7E219C600769EE485919684 value)
	{
		m_Items[index] = value;
	}
};
struct KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 m_Items[1];

	inline KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_gshared_inline (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomStyleProperty_1_set_name_m7C0A88005DEA599E3703800307F998198E1C9CC2_gshared_inline (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomStyleProperty_1__ctor_mEE25B55510091D4D0F2DE7ECD847051717703E0B_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_mFF633E9B54E32338FB0616B0B8D456519F46CBBF_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_m6AC3123473A9CFC83109100C8FF5AF3034AD27A6_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomStyleProperty_1_GetHashCode_mDB44377AA1557C56C0ACC5BE8E62DB4FEDAE23CD_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_gshared_inline (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomStyleProperty_1_set_name_m128DA7EEB8E111A1A7663926E2A9A2252B9C604D_gshared_inline (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomStyleProperty_1__ctor_mA325D95E8AD8AC0AF58A16CBD6763CA32BC435E4_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_m1B985DCC4857EB0C23853405505909A3871B8B69_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_mF63A0757FEF926B3B388187A68DEEFA305C73C9D_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomStyleProperty_1_GetHashCode_mC25D7595E855CCCB2C339AB6AE8B651744E52872_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m0854CB7E93086BB018F00956EE37E700057D1DEB_gshared_inline (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomStyleProperty_1_set_name_m799831D93960394105AEC1C47B11B81C08A46861_gshared_inline (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomStyleProperty_1__ctor_m51F05AE8977374556253B23F63CF84C76FB546AA_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_m23B71AC52884B6CBB0E91A337DC513D835679203_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_m7BBDFACAA54A231C503EA95081A02CB77E8F2F02_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomStyleProperty_1_GetHashCode_m728F3D620894896FF88E08CECC1BC9BC2E9BDAA0_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBuffer_1__ctor_m887A7C2A1E63120AF0BBC893FA15DBF5BF10A5A5_gshared (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* __this, int32_t ___0_elementCount, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2617672C9529B57F07A18828D26F410F5207483B_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GPUBuffer_1_get_ElementStride_m4817CE74F792E8E82E60F8E09341E01B1A7AA9B8_gshared (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25_gshared (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_Dispose_m90593CA4035DAA8C3C8AC2DB5146E23B739173CA_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSet_1_get_disposed_m1CDD97F62FB7D308CDD0BA7B889A6205C3F88A95_gshared_inline (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBuffer_1_Dispose_mA35B93CBE6373AAD9513AAE3F3DEAD09AED17624_gshared (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m1B103C4931EFC035BF435240AD0CBAEA1AE916E8_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420_gshared (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataSet_1_set_disposed_m6E5BD4BFBA25E3167C283E5230479D137D48509F_gshared_inline (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEE155357C8BB83BD4B7D34471587738A86B0D851_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m25D2FEAD1520E2DEEBA11E8A6BF32EFCEC42D9EA_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSet_1_HasMappedBufferRange_mF35963F8A8F935B5C3C691804A4EE85500317178_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendPartialRanges_m87137AD7DDCB1611EBFA0F3FCE782E70D5CD0973_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendFullRange_m9AE9D73BC1CD97EA6325271EF1B1356A87220675_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8E5335741788115AF07635B3B9C543C6BA1F2D3C_gshared (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_gshared (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBuffer_1_UpdateRanges_m803C38D03A139CAAB5056161B62A3E96C48BF55E_gshared (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* __this, NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_ranges, int32_t ___1_rangesMin, int32_t ___2_rangesMax, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_ResetUpdateState_m7ECCC15503B9AE382D59B311EF10D44C32F9504A_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBuffer_1__ctor_m7FED8993FD0D99C3A1166596920E67A1F222FF3D_gshared (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* __this, int32_t ___0_elementCount, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE3B1C6D032AF42228A24E43A0F4CF2F261A52189_gshared (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GPUBuffer_1_get_ElementStride_mDCC5F4E2A919C976FB49727901EFDDDDCAC8A3E8_gshared (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_Dispose_m7BEE8813222BBCE8FBB1CCFE324750E87CB4D636_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSet_1_get_disposed_mD8A87D3D0B54327F20A175C926FBDBB64A6CD1AE_gshared_inline (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBuffer_1_Dispose_m7FE1433944303E41F530D60E704C70CF10818DC0_gshared (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m46C1F3A5DF2013F65AA709A58C45D36CC411D276_gshared (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataSet_1_set_disposed_m4C7C5F68C0DA96DC663909C22EAD6599D682ED99_gshared_inline (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m0D7D6BAB64810308797BD6D6C898432E45D4AC4C_gshared (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mBA68ADCEE03FE9686B3E1093209D25043E18946D_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSet_1_HasMappedBufferRange_mAA1FA654423EBCAF25BE87B51C495E8CAF2938AA_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendPartialRanges_mFAA112DB810A113A66765CBBE53012692668D64F_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendFullRange_mD3261CCB43378E1AE61E954FCCB4C914EE2DD895_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m3687E938D6A361C1C9500F894455AD0E14BBF0C8_gshared (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBuffer_1_UpdateRanges_m3C82F04A4DBF59CADF1675AE1EEB5467303B118D_gshared (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* __this, NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_ranges, int32_t ___1_rangesMin, int32_t ___2_rangesMax, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_ResetUpdateState_m3E76857D00FB6B3D1B6FAE2B3805CD187428A045_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootItems, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA_gshared (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306_gshared (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384_gshared (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_gshared_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_gshared_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26_gshared (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885_gshared (Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_m1CB4F3E56295F4B5567E64280A4ACECF3FC671D6_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00_gshared (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F_gshared (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_gshared_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_gshared_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3_gshared (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063_gshared (Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4_m66F50948C6CBCA9CDB992356871C2622CA4ED150_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893_gshared (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8_gshared (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E_gshared (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED_gshared (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B_gshared (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9_gshared (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_gshared_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_gshared_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3_gshared (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583_gshared (Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m9BEB74E540B5227D9158B950F96B2D55EA20E8BF_gshared (KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m027D33CB7E5F90E2A8083C0264FFAC4F6A17E288_gshared (ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_gshared_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_gshared_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m3C86D5D8BB0D1118068E83ED43D64F4E64E7C221_gshared (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9_gshared (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared (const RuntimeMethod* method) ;

inline String_t* CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_inline (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*, const RuntimeMethod*))CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_gshared_inline)(__this, method);
}
inline void CustomStyleProperty_1_set_name_m7C0A88005DEA599E3703800307F998198E1C9CC2_inline (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*, String_t*, const RuntimeMethod*))CustomStyleProperty_1_set_name_m7C0A88005DEA599E3703800307F998198E1C9CC2_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void CustomStyleProperty_1__ctor_mEE25B55510091D4D0F2DE7ECD847051717703E0B (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, String_t* ___0_propertyName, const RuntimeMethod* method)
{
	((  void (*) (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*, String_t*, const RuntimeMethod*))CustomStyleProperty_1__ctor_mEE25B55510091D4D0F2DE7ECD847051717703E0B_gshared)(__this, ___0_propertyName, method);
}
inline bool CustomStyleProperty_1_Equals_mFF633E9B54E32338FB0616B0B8D456519F46CBBF (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*, CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266, const RuntimeMethod*))CustomStyleProperty_1_Equals_mFF633E9B54E32338FB0616B0B8D456519F46CBBF_gshared)(__this, ___0_other, method);
}
inline bool CustomStyleProperty_1_Equals_m6AC3123473A9CFC83109100C8FF5AF3034AD27A6 (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*, RuntimeObject*, const RuntimeMethod*))CustomStyleProperty_1_Equals_m6AC3123473A9CFC83109100C8FF5AF3034AD27A6_gshared)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
inline int32_t CustomStyleProperty_1_GetHashCode_mDB44377AA1557C56C0ACC5BE8E62DB4FEDAE23CD (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*, const RuntimeMethod*))CustomStyleProperty_1_GetHashCode_mDB44377AA1557C56C0ACC5BE8E62DB4FEDAE23CD_gshared)(__this, method);
}
inline String_t* CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_inline (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*, const RuntimeMethod*))CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_gshared_inline)(__this, method);
}
inline void CustomStyleProperty_1_set_name_m128DA7EEB8E111A1A7663926E2A9A2252B9C604D_inline (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*, String_t*, const RuntimeMethod*))CustomStyleProperty_1_set_name_m128DA7EEB8E111A1A7663926E2A9A2252B9C604D_gshared_inline)(__this, ___0_value, method);
}
inline void CustomStyleProperty_1__ctor_mA325D95E8AD8AC0AF58A16CBD6763CA32BC435E4 (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, String_t* ___0_propertyName, const RuntimeMethod* method)
{
	((  void (*) (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*, String_t*, const RuntimeMethod*))CustomStyleProperty_1__ctor_mA325D95E8AD8AC0AF58A16CBD6763CA32BC435E4_gshared)(__this, ___0_propertyName, method);
}
inline bool CustomStyleProperty_1_Equals_m1B985DCC4857EB0C23853405505909A3871B8B69 (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*, CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493, const RuntimeMethod*))CustomStyleProperty_1_Equals_m1B985DCC4857EB0C23853405505909A3871B8B69_gshared)(__this, ___0_other, method);
}
inline bool CustomStyleProperty_1_Equals_mF63A0757FEF926B3B388187A68DEEFA305C73C9D (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*, RuntimeObject*, const RuntimeMethod*))CustomStyleProperty_1_Equals_mF63A0757FEF926B3B388187A68DEEFA305C73C9D_gshared)(__this, ___0_obj, method);
}
inline int32_t CustomStyleProperty_1_GetHashCode_mC25D7595E855CCCB2C339AB6AE8B651744E52872 (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*, const RuntimeMethod*))CustomStyleProperty_1_GetHashCode_mC25D7595E855CCCB2C339AB6AE8B651744E52872_gshared)(__this, method);
}
inline String_t* CustomStyleProperty_1_get_name_m0854CB7E93086BB018F00956EE37E700057D1DEB_inline (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, const RuntimeMethod*))CustomStyleProperty_1_get_name_m0854CB7E93086BB018F00956EE37E700057D1DEB_gshared_inline)(__this, method);
}
inline void CustomStyleProperty_1_set_name_m799831D93960394105AEC1C47B11B81C08A46861_inline (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, String_t*, const RuntimeMethod*))CustomStyleProperty_1_set_name_m799831D93960394105AEC1C47B11B81C08A46861_gshared_inline)(__this, ___0_value, method);
}
inline void CustomStyleProperty_1__ctor_m51F05AE8977374556253B23F63CF84C76FB546AA (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, String_t* ___0_propertyName, const RuntimeMethod* method)
{
	((  void (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, String_t*, const RuntimeMethod*))CustomStyleProperty_1__ctor_m51F05AE8977374556253B23F63CF84C76FB546AA_gshared)(__this, ___0_propertyName, method);
}
inline bool CustomStyleProperty_1_Equals_m23B71AC52884B6CBB0E91A337DC513D835679203 (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, RuntimeObject*, const RuntimeMethod*))CustomStyleProperty_1_Equals_m23B71AC52884B6CBB0E91A337DC513D835679203_gshared)(__this, ___0_obj, method);
}
inline bool CustomStyleProperty_1_Equals_m7BBDFACAA54A231C503EA95081A02CB77E8F2F02 (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F, const RuntimeMethod*))CustomStyleProperty_1_Equals_m7BBDFACAA54A231C503EA95081A02CB77E8F2F02_gshared)(__this, ___0_other, method);
}
inline int32_t CustomStyleProperty_1_GetHashCode_m728F3D620894896FF88E08CECC1BC9BC2E9BDAA0 (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, const RuntimeMethod*))CustomStyleProperty_1_GetHashCode_m728F3D620894896FF88E08CECC1BC9BC2E9BDAA0_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void GPUBuffer_1__ctor_m887A7C2A1E63120AF0BBC893FA15DBF5BF10A5A5 (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* __this, int32_t ___0_elementCount, int32_t ___1_type, const RuntimeMethod* method)
{
	((  void (*) (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36*, int32_t, int32_t, const RuntimeMethod*))GPUBuffer_1__ctor_m887A7C2A1E63120AF0BBC893FA15DBF5BF10A5A5_gshared)(__this, ___0_elementCount, ___1_type, method);
}
inline void NativeArray_1__ctor_m2617672C9529B57F07A18828D26F410F5207483B (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2617672C9529B57F07A18828D26F410F5207483B_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUBufferAllocator__ctor_m989E13DFCA8CAA59F399FAD27F7F5E0253C2E62E (GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48* __this, uint32_t ___0_maxSize, const RuntimeMethod* method) ;
inline int32_t GPUBuffer_1_get_ElementStride_m4817CE74F792E8E82E60F8E09341E01B1A7AA9B8 (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36*, const RuntimeMethod*))GPUBuffer_1_get_ElementStride_m4817CE74F792E8E82E60F8E09341E01B1A7AA9B8_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25 (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void DataSet_1_Dispose_m90593CA4035DAA8C3C8AC2DB5146E23B739173CA (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, bool ___0_disposing, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB*, bool, const RuntimeMethod*))DataSet_1_Dispose_m90593CA4035DAA8C3C8AC2DB5146E23B739173CA_gshared)(__this, ___0_disposing, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline bool DataSet_1_get_disposed_m1CDD97F62FB7D308CDD0BA7B889A6205C3F88A95_inline (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB*, const RuntimeMethod*))DataSet_1_get_disposed_m1CDD97F62FB7D308CDD0BA7B889A6205C3F88A95_gshared_inline)(__this, method);
}
inline void GPUBuffer_1_Dispose_mA35B93CBE6373AAD9513AAE3F3DEAD09AED17624 (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* __this, const RuntimeMethod* method)
{
	((  void (*) (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36*, const RuntimeMethod*))GPUBuffer_1_Dispose_mA35B93CBE6373AAD9513AAE3F3DEAD09AED17624_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_m1B103C4931EFC035BF435240AD0CBAEA1AE916E8 (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934*, const RuntimeMethod*))NativeArray_1_Dispose_m1B103C4931EFC035BF435240AD0CBAEA1AE916E8_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420 (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*, const RuntimeMethod*))NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420_gshared)(__this, method);
}
inline void DataSet_1_set_disposed_m6E5BD4BFBA25E3167C283E5230479D137D48509F_inline (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB*, bool, const RuntimeMethod*))DataSet_1_set_disposed_m6E5BD4BFBA25E3167C283E5230479D137D48509F_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7 (uint32_t ___0_val1, uint32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121 (uint32_t ___0_val1, uint32_t ___1_val2, const RuntimeMethod* method) ;
inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEE155357C8BB83BD4B7D34471587738A86B0D851 (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A (*) (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934, int32_t, int32_t, const RuntimeMethod*))NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEE155357C8BB83BD4B7D34471587738A86B0D851_gshared)(___0_thisArray, ___1_start, ___2_length, method);
}
inline void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m25D2FEAD1520E2DEEBA11E8A6BF32EFCEC42D9EA (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m25D2FEAD1520E2DEEBA11E8A6BF32EFCEC42D9EA_gshared)(___0_nativeSlice, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline (uintptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_HasMappedBufferRange_mA6C2F771F01D644C872729B38BA8B5AEC6BA5ABB (const RuntimeMethod* method) ;
inline bool DataSet_1_HasMappedBufferRange_mF35963F8A8F935B5C3C691804A4EE85500317178 (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB*, const RuntimeMethod*))DataSet_1_HasMappedBufferRange_mF35963F8A8F935B5C3C691804A4EE85500317178_gshared)(__this, method);
}
inline void DataSet_1_SendPartialRanges_m87137AD7DDCB1611EBFA0F3FCE782E70D5CD0973 (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB*, const RuntimeMethod*))DataSet_1_SendPartialRanges_m87137AD7DDCB1611EBFA0F3FCE782E70D5CD0973_gshared)(__this, method);
}
inline void DataSet_1_SendFullRange_m9AE9D73BC1CD97EA6325271EF1B1356A87220675 (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB*, const RuntimeMethod*))DataSet_1_SendFullRange_m9AE9D73BC1CD97EA6325271EF1B1356A87220675_gshared)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8E5335741788115AF07635B3B9C543C6BA1F2D3C (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8E5335741788115AF07635B3B9C543C6BA1F2D3C_gshared)(___0_nativeArray, method);
}
inline NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F (*) (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421, int32_t, int32_t, const RuntimeMethod*))NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_gshared)(___0_thisArray, ___1_start, ___2_length, method);
}
inline void GPUBuffer_1_UpdateRanges_m803C38D03A139CAAB5056161B62A3E96C48BF55E (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* __this, NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_ranges, int32_t ___1_rangesMin, int32_t ___2_rangesMax, const RuntimeMethod* method)
{
	((  void (*) (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36*, NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F, int32_t, int32_t, const RuntimeMethod*))GPUBuffer_1_UpdateRanges_m803C38D03A139CAAB5056161B62A3E96C48BF55E_gshared)(__this, ___0_ranges, ___1_rangesMin, ___2_rangesMax, method);
}
inline void DataSet_1_ResetUpdateState_m7ECCC15503B9AE382D59B311EF10D44C32F9504A (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB*, const RuntimeMethod*))DataSet_1_ResetUpdateState_m7ECCC15503B9AE382D59B311EF10D44C32F9504A_gshared)(__this, method);
}
inline void GPUBuffer_1__ctor_m7FED8993FD0D99C3A1166596920E67A1F222FF3D (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* __this, int32_t ___0_elementCount, int32_t ___1_type, const RuntimeMethod* method)
{
	((  void (*) (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3*, int32_t, int32_t, const RuntimeMethod*))GPUBuffer_1__ctor_m7FED8993FD0D99C3A1166596920E67A1F222FF3D_gshared)(__this, ___0_elementCount, ___1_type, method);
}
inline void NativeArray_1__ctor_mE3B1C6D032AF42228A24E43A0F4CF2F261A52189 (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE3B1C6D032AF42228A24E43A0F4CF2F261A52189_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline int32_t GPUBuffer_1_get_ElementStride_mDCC5F4E2A919C976FB49727901EFDDDDCAC8A3E8 (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3*, const RuntimeMethod*))GPUBuffer_1_get_ElementStride_mDCC5F4E2A919C976FB49727901EFDDDDCAC8A3E8_gshared)(__this, method);
}
inline void DataSet_1_Dispose_m7BEE8813222BBCE8FBB1CCFE324750E87CB4D636 (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, bool ___0_disposing, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A*, bool, const RuntimeMethod*))DataSet_1_Dispose_m7BEE8813222BBCE8FBB1CCFE324750E87CB4D636_gshared)(__this, ___0_disposing, method);
}
inline bool DataSet_1_get_disposed_mD8A87D3D0B54327F20A175C926FBDBB64A6CD1AE_inline (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A*, const RuntimeMethod*))DataSet_1_get_disposed_mD8A87D3D0B54327F20A175C926FBDBB64A6CD1AE_gshared_inline)(__this, method);
}
inline void GPUBuffer_1_Dispose_m7FE1433944303E41F530D60E704C70CF10818DC0 (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* __this, const RuntimeMethod* method)
{
	((  void (*) (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3*, const RuntimeMethod*))GPUBuffer_1_Dispose_m7FE1433944303E41F530D60E704C70CF10818DC0_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_m46C1F3A5DF2013F65AA709A58C45D36CC411D276 (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81*, const RuntimeMethod*))NativeArray_1_Dispose_m46C1F3A5DF2013F65AA709A58C45D36CC411D276_gshared)(__this, method);
}
inline void DataSet_1_set_disposed_m4C7C5F68C0DA96DC663909C22EAD6599D682ED99_inline (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A*, bool, const RuntimeMethod*))DataSet_1_set_disposed_m4C7C5F68C0DA96DC663909C22EAD6599D682ED99_gshared_inline)(__this, ___0_value, method);
}
inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m0D7D6BAB64810308797BD6D6C898432E45D4AC4C (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 (*) (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81, int32_t, int32_t, const RuntimeMethod*))NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m0D7D6BAB64810308797BD6D6C898432E45D4AC4C_gshared)(___0_thisArray, ___1_start, ___2_length, method);
}
inline void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mBA68ADCEE03FE9686B3E1093209D25043E18946D (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mBA68ADCEE03FE9686B3E1093209D25043E18946D_gshared)(___0_nativeSlice, method);
}
inline bool DataSet_1_HasMappedBufferRange_mAA1FA654423EBCAF25BE87B51C495E8CAF2938AA (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A*, const RuntimeMethod*))DataSet_1_HasMappedBufferRange_mAA1FA654423EBCAF25BE87B51C495E8CAF2938AA_gshared)(__this, method);
}
inline void DataSet_1_SendPartialRanges_mFAA112DB810A113A66765CBBE53012692668D64F (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A*, const RuntimeMethod*))DataSet_1_SendPartialRanges_mFAA112DB810A113A66765CBBE53012692668D64F_gshared)(__this, method);
}
inline void DataSet_1_SendFullRange_mD3261CCB43378E1AE61E954FCCB4C914EE2DD895 (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A*, const RuntimeMethod*))DataSet_1_SendFullRange_mD3261CCB43378E1AE61E954FCCB4C914EE2DD895_gshared)(__this, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m3687E938D6A361C1C9500F894455AD0E14BBF0C8 (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m3687E938D6A361C1C9500F894455AD0E14BBF0C8_gshared)(___0_nativeArray, method);
}
inline void GPUBuffer_1_UpdateRanges_m3C82F04A4DBF59CADF1675AE1EEB5467303B118D (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* __this, NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F ___0_ranges, int32_t ___1_rangesMin, int32_t ___2_rangesMax, const RuntimeMethod* method)
{
	((  void (*) (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3*, NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F, int32_t, int32_t, const RuntimeMethod*))GPUBuffer_1_UpdateRanges_m3C82F04A4DBF59CADF1675AE1EEB5467303B118D_gshared)(__this, ___0_ranges, ___1_rangesMin, ___2_rangesMax, method);
}
inline void DataSet_1_ResetUpdateState_m3E76857D00FB6B3D1B6FAE2B3805CD187428A045 (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method)
{
	((  void (*) (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A*, const RuntimeMethod*))DataSet_1_ResetUpdateState_m3E76857D00FB6B3D1B6FAE2B3805CD187428A045_gshared)(__this, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, const RuntimeMethod* method)
{
	((  void (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, const RuntimeMethod*))TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiColumnTreeViewController__ctor_m705FE6CEF71CB478F8FC5A951A337FF5A7B2F919 (MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC* __this, Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___0_columns, SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* ___1_sortDescriptions, List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* ___2_sortedColumns, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B (BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0* __this, const RuntimeMethod* method) ;
inline void DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365 (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_items, const RuntimeMethod* method)
{
	((  void (*) (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B*, RuntimeObject*, const RuntimeMethod*))DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365_gshared)(__this, ___0_items, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, const RuntimeMethod* method)
{
	return ((  TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* (*) (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B*, const RuntimeMethod*))DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A_gshared)(__this, method);
}
inline void TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootItems, const RuntimeMethod* method)
{
	((  void (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, RuntimeObject*, const RuntimeMethod*))TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E_gshared)(__this, ___0_rootItems, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB (BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734 (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* __this, const RuntimeMethod* method) ;
inline RuntimeObject* TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC_gshared)(__this, ___0_id, method);
}
inline int32_t TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5_gshared)(__this, ___0_id, method);
}
inline bool TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  bool (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC_gshared)(__this, ___0_id, method);
}
inline RuntimeObject* TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, const RuntimeMethod*))TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93_gshared)(__this, ___0_id, method);
}
inline bool DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245 (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B*, int32_t, int32_t, const RuntimeMethod*))DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245_gshared)(__this, ___0_childId, ___1_id, method);
}
inline void TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, const RuntimeMethod* method)
{
	((  void (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, int32_t, int32_t, const RuntimeMethod*))TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1_gshared)(__this, ___0_id, ___1_newParentId, ___2_childIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionViewController_RaiseItemIndexChanged_mE12A41E7F1E29A78B60EDE6E02A9D3728D944E77 (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* __this, int32_t ___0_srcIndex, int32_t ___1_dstIndex, const RuntimeMethod* method) ;
inline bool TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25 (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method)
{
	return ((  bool (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, int32_t, int32_t, const RuntimeMethod*))TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25_gshared)(__this, ___0_childId, ___1_id, method);
}
inline RuntimeObject* TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*, RuntimeObject*, const RuntimeMethod*))TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA_gshared)(__this, ___0_rootIds, method);
}
inline void DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_items, const RuntimeMethod* method)
{
	((  void (*) (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7*, RuntimeObject*, const RuntimeMethod*))DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B_gshared)(__this, ___0_items, method);
}
inline TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method)
{
	return ((  TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* (*) (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7*, const RuntimeMethod*))DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F_gshared)(__this, method);
}
inline bool DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67 (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method)
{
	return ((  bool (*) (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7*, int32_t, int32_t, const RuntimeMethod*))DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67_gshared)(__this, ___0_childId, ___1_id, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeViewController_RaiseItemParentChanged_m3D91BCB67E4577C1373C9A8A9122C8D7F0457322 (BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0* __this, int32_t ___0_id, int32_t ___1_newParentId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeViewController__ctor_m0BA584E2BFF10F466D94E3ED33E4FB9840907AF2 (TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A* __this, const RuntimeMethod* method) ;
inline RuntimeObject* ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320 (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF*, const RuntimeMethod*))ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320_gshared)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257 (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9*, const RuntimeMethod*))DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared)(__this, method);
}
inline void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___0_key, ___1_value, method);
}
inline void KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6 (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7 (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline)(__this, method);
}
inline RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, const RuntimeMethod*))KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1 (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164 (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9* __this, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9*, Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, const RuntimeMethod*))Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared)(__this, ___0_array, ___1_index, method);
}
inline int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, const RuntimeMethod*))Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared)(__this, method);
}
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0 (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline void KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306 (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C*, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384 (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9*, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD*, const RuntimeMethod*))KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_gshared_inline)(__this, method);
}
inline ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method)
{
	return ((  ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC (*) (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD*, const RuntimeMethod*))KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, const RuntimeMethod*))Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26 (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, const RuntimeMethod*))KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885 (Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F* __this, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F*, Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, const RuntimeMethod*))Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_m1CB4F3E56295F4B5567E64280A4ACECF3FC671D6 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_m1CB4F3E56295F4B5567E64280A4ACECF3FC671D6_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, const RuntimeMethod*))Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005 (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00 (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A*, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF*, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED*, const RuntimeMethod*))KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_gshared_inline)(__this, method);
}
inline TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method)
{
	return ((  TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 (*) (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED*, const RuntimeMethod*))KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, const RuntimeMethod*))Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3 (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, const RuntimeMethod*))KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063 (Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9* __this, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9*, Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, const RuntimeMethod*))Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4_m66F50948C6CBCA9CDB992356871C2622CA4ED150 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4_m66F50948C6CBCA9CDB992356871C2622CA4ED150_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333 (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, const RuntimeMethod*))Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893 (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8 (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, const RuntimeMethod*))KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_gshared_inline)(__this, method);
}
inline bool KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, const RuntimeMethod*))KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213*, int32_t, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969* __this, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969*, Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04*, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9 (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171*, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, Il2CppChar, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF*, const RuntimeMethod*))KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_gshared_inline)(__this, method);
}
inline Il2CppChar KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF*, const RuntimeMethod*))KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, Il2CppChar, const RuntimeMethod*))Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4_gshared)(__this, ___0_key, ___1_value, method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline)(method);
}
inline bool Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3 (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF*, int32_t, Il2CppChar, const RuntimeMethod*))KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583 (Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88* __this, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88*, Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, const RuntimeMethod*))Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, Il2CppChar, const RuntimeMethod*))Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354 (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F_gshared)(__this, ___0_capacity, method);
}
inline void KeyCollection__ctor_m9BEB74E540B5227D9158B950F96B2D55EA20E8BF (KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436*, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))KeyCollection__ctor_m9BEB74E540B5227D9158B950F96B2D55EA20E8BF_gshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m027D33CB7E5F90E2A8083C0264FFAC4F6A17E288 (ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28*, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))ValueCollection__ctor_m027D33CB7E5F90E2A8083C0264FFAC4F6A17E288_gshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
inline int32_t KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189*, const RuntimeMethod*))KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_gshared_inline)(__this, method);
}
inline int32_t KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189*, const RuntimeMethod*))KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_gshared_inline)(__this, method);
}
inline void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A_gshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m3C86D5D8BB0D1118068E83ED43D64F4E64E7C221 (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189*, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3C86D5D8BB0D1118068E83ED43D64F4E64E7C221_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9 (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB* __this, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB*, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, const RuntimeMethod*))Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline bool Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB_gshared)(___0_key, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared)(___0_value, ___1_argName, method);
}
inline void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared)(__this, ___0_key, method);
}
inline EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE_gshared)(method);
}
inline EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9_gshared)(method);
}
inline EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66_gshared)(method);
}
inline EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomStyleProperty_1_set_name_m7C0A88005DEA599E3703800307F998198E1C9CC2_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void CustomStyleProperty_1_set_name_m7C0A88005DEA599E3703800307F998198E1C9CC2_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*>(__this + _offset);
	CustomStyleProperty_1_set_name_m7C0A88005DEA599E3703800307F998198E1C9CC2_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomStyleProperty_1__ctor_mEE25B55510091D4D0F2DE7ECD847051717703E0B_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___0_propertyName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___0_propertyName;
		bool L_3;
		L_3 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_2, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_5 = ___0_propertyName;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E3E292F86AACF17B735D4B90BCC2F77DC92C7ED)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73281EEC82D37C63F7B37551C86CE8D602A926A0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0034:
	{
		String_t* L_8 = ___0_propertyName;
		CustomStyleProperty_1_set_name_m7C0A88005DEA599E3703800307F998198E1C9CC2_inline(__this, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void CustomStyleProperty_1__ctor_mEE25B55510091D4D0F2DE7ECD847051717703E0B_AdjustorThunk (RuntimeObject* __this, String_t* ___0_propertyName, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*>(__this + _offset);
	CustomStyleProperty_1__ctor_mEE25B55510091D4D0F2DE7ECD847051717703E0B(_thisAdjusted, ___0_propertyName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_m6AC3123473A9CFC83109100C8FF5AF3034AD27A6_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_obj;
		bool L_3;
		L_3 = CustomStyleProperty_1_Equals_mFF633E9B54E32338FB0616B0B8D456519F46CBBF(__this, ((*(CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*)((CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*)(CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*)UnBox(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool CustomStyleProperty_1_Equals_m6AC3123473A9CFC83109100C8FF5AF3034AD27A6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*>(__this + _offset);
	bool _returnValue;
	_returnValue = CustomStyleProperty_1_Equals_m6AC3123473A9CFC83109100C8FF5AF3034AD27A6(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_mFF633E9B54E32338FB0616B0B8D456519F46CBBF_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0;
		L_0 = CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1;
		L_1 = CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_inline((&___0_other), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool CustomStyleProperty_1_Equals_mFF633E9B54E32338FB0616B0B8D456519F46CBBF_AdjustorThunk (RuntimeObject* __this, CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266 ___0_other, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*>(__this + _offset);
	bool _returnValue;
	_returnValue = CustomStyleProperty_1_Equals_mFF633E9B54E32338FB0616B0B8D456519F46CBBF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomStyleProperty_1_GetHashCode_mDB44377AA1557C56C0ACC5BE8E62DB4FEDAE23CD_gshared (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t CustomStyleProperty_1_GetHashCode_mDB44377AA1557C56C0ACC5BE8E62DB4FEDAE23CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CustomStyleProperty_1_GetHashCode_mDB44377AA1557C56C0ACC5BE8E62DB4FEDAE23CD(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomStyleProperty_1_set_name_m128DA7EEB8E111A1A7663926E2A9A2252B9C604D_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void CustomStyleProperty_1_set_name_m128DA7EEB8E111A1A7663926E2A9A2252B9C604D_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*>(__this + _offset);
	CustomStyleProperty_1_set_name_m128DA7EEB8E111A1A7663926E2A9A2252B9C604D_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomStyleProperty_1__ctor_mA325D95E8AD8AC0AF58A16CBD6763CA32BC435E4_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___0_propertyName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___0_propertyName;
		bool L_3;
		L_3 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_2, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_5 = ___0_propertyName;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E3E292F86AACF17B735D4B90BCC2F77DC92C7ED)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73281EEC82D37C63F7B37551C86CE8D602A926A0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0034:
	{
		String_t* L_8 = ___0_propertyName;
		CustomStyleProperty_1_set_name_m128DA7EEB8E111A1A7663926E2A9A2252B9C604D_inline(__this, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void CustomStyleProperty_1__ctor_mA325D95E8AD8AC0AF58A16CBD6763CA32BC435E4_AdjustorThunk (RuntimeObject* __this, String_t* ___0_propertyName, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*>(__this + _offset);
	CustomStyleProperty_1__ctor_mA325D95E8AD8AC0AF58A16CBD6763CA32BC435E4(_thisAdjusted, ___0_propertyName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_mF63A0757FEF926B3B388187A68DEEFA305C73C9D_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_obj;
		bool L_3;
		L_3 = CustomStyleProperty_1_Equals_m1B985DCC4857EB0C23853405505909A3871B8B69(__this, ((*(CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*)((CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*)(CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*)UnBox(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool CustomStyleProperty_1_Equals_mF63A0757FEF926B3B388187A68DEEFA305C73C9D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*>(__this + _offset);
	bool _returnValue;
	_returnValue = CustomStyleProperty_1_Equals_mF63A0757FEF926B3B388187A68DEEFA305C73C9D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_m1B985DCC4857EB0C23853405505909A3871B8B69_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0;
		L_0 = CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1;
		L_1 = CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_inline((&___0_other), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool CustomStyleProperty_1_Equals_m1B985DCC4857EB0C23853405505909A3871B8B69_AdjustorThunk (RuntimeObject* __this, CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493 ___0_other, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*>(__this + _offset);
	bool _returnValue;
	_returnValue = CustomStyleProperty_1_Equals_m1B985DCC4857EB0C23853405505909A3871B8B69(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomStyleProperty_1_GetHashCode_mC25D7595E855CCCB2C339AB6AE8B651744E52872_gshared (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t CustomStyleProperty_1_GetHashCode_mC25D7595E855CCCB2C339AB6AE8B651744E52872_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CustomStyleProperty_1_GetHashCode_mC25D7595E855CCCB2C339AB6AE8B651744E52872(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m0854CB7E93086BB018F00956EE37E700057D1DEB_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* CustomStyleProperty_1_get_name_m0854CB7E93086BB018F00956EE37E700057D1DEB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = CustomStyleProperty_1_get_name_m0854CB7E93086BB018F00956EE37E700057D1DEB_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomStyleProperty_1_set_name_m799831D93960394105AEC1C47B11B81C08A46861_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void CustomStyleProperty_1_set_name_m799831D93960394105AEC1C47B11B81C08A46861_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*>(__this + _offset);
	CustomStyleProperty_1_set_name_m799831D93960394105AEC1C47B11B81C08A46861_inline(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomStyleProperty_1__ctor_m51F05AE8977374556253B23F63CF84C76FB546AA_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___0_propertyName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___0_propertyName;
		bool L_3;
		L_3 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_2, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_5 = ___0_propertyName;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E3E292F86AACF17B735D4B90BCC2F77DC92C7ED)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73281EEC82D37C63F7B37551C86CE8D602A926A0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0034:
	{
		String_t* L_8 = ___0_propertyName;
		((  void (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(__this, L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void CustomStyleProperty_1__ctor_m51F05AE8977374556253B23F63CF84C76FB546AA_AdjustorThunk (RuntimeObject* __this, String_t* ___0_propertyName, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*>(__this + _offset);
	CustomStyleProperty_1__ctor_m51F05AE8977374556253B23F63CF84C76FB546AA(_thisAdjusted, ___0_propertyName, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_m23B71AC52884B6CBB0E91A337DC513D835679203_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_obj;
		bool L_3;
		L_3 = ((  bool (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(__this, ((*(CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*)((CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*)(CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*)UnBox(L_2, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool CustomStyleProperty_1_Equals_m23B71AC52884B6CBB0E91A337DC513D835679203_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*>(__this + _offset);
	bool _returnValue;
	_returnValue = CustomStyleProperty_1_Equals_m23B71AC52884B6CBB0E91A337DC513D835679203(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomStyleProperty_1_Equals_m7BBDFACAA54A231C503EA95081A02CB77E8F2F02_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0;
		L_0 = ((  String_t* (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1;
		L_1 = ((  String_t* (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))((&___0_other), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool CustomStyleProperty_1_Equals_m7BBDFACAA54A231C503EA95081A02CB77E8F2F02_AdjustorThunk (RuntimeObject* __this, CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F ___0_other, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*>(__this + _offset);
	bool _returnValue;
	_returnValue = CustomStyleProperty_1_Equals_m7BBDFACAA54A231C503EA95081A02CB77E8F2F02(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CustomStyleProperty_1_GetHashCode_m728F3D620894896FF88E08CECC1BC9BC2E9BDAA0_gshared (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = ((  String_t* (*) (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t CustomStyleProperty_1_GetHashCode_m728F3D620894896FF88E08CECC1BC9BC2E9BDAA0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CustomStyleProperty_1_GetHashCode_m728F3D620894896FF88E08CECC1BC9BC2E9BDAA0(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1__ctor_mDB98ABB84CC77BAB847C2EFE1F7090C3E3DBD1A6_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, int32_t ___0_bufferType, uint32_t ___1_totalCount, uint32_t ___2_maxQueuedFrameCount, uint32_t ___3_updateRangePoolSize, bool ___4_mockBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___4_mockBuffer;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		uint32_t L_2 = ___1_totalCount;
		int32_t L_3 = ___0_bufferType;
		GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* L_4 = (GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		GPUBuffer_1__ctor_m887A7C2A1E63120AF0BBC893FA15DBF5BF10A5A5(L_4, (int32_t)L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___gpuData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gpuData), (void*)L_4);
	}

IL_001e:
	{
		uint32_t L_5 = ___1_totalCount;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_6;
		memset((&L_6), 0, sizeof(L_6));
		NativeArray_1__ctor_m2617672C9529B57F07A18828D26F410F5207483B((&L_6), (int32_t)L_5, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___cpuData = L_6;
		uint32_t L_7 = ___1_totalCount;
		GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48* L_8 = (GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48*)il2cpp_codegen_object_new(GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48_il2cpp_TypeInfo_var);
		GPUBufferAllocator__ctor_m989E13DFCA8CAA59F399FAD27F7F5E0253C2E62E(L_8, L_7, NULL);
		__this->___allocator = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allocator), (void*)L_8);
		bool L_9 = ___4_mockBuffer;
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* L_11 = __this->___gpuData;
		int32_t L_12;
		L_12 = GPUBuffer_1_get_ElementStride_m4817CE74F792E8E82E60F8E09341E01B1A7AA9B8(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___m_ElemStride = (uint32_t)L_12;
	}

IL_0052:
	{
		uint32_t L_13 = ___3_updateRangePoolSize;
		__this->___m_UpdateRangePoolSize = L_13;
		uint32_t L_14 = __this->___m_UpdateRangePoolSize;
		uint32_t L_15 = ___2_maxQueuedFrameCount;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15));
		uint32_t L_16 = V_0;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_17;
		memset((&L_17), 0, sizeof(L_17));
		NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25((&L_17), (int32_t)L_16, (int32_t)4, (int32_t)0, NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25_RuntimeMethod_var);
		__this->___updateRanges = L_17;
		__this->___m_UpdateRangeMin = (uint32_t)(-1);
		__this->___m_UpdateRangeMax = (uint32_t)0;
		__this->___m_UpdateRangesEnqueued = (uint32_t)0;
		__this->___m_UpdateRangesBatchStart = (uint32_t)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSet_1_get_disposed_m1CDD97F62FB7D308CDD0BA7B889A6205C3F88A95_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_set_disposed_m6E5BD4BFBA25E3167C283E5230479D137D48509F_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CdisposedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_Dispose_mE9997AB02B091EDA67677B46C117C46B57E2BC01_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataSet_1_Dispose_m90593CA4035DAA8C3C8AC2DB5146E23B739173CA(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_Dispose_m90593CA4035DAA8C3C8AC2DB5146E23B739173CA_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* G_B5_0 = NULL;
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* G_B4_0 = NULL;
	{
		bool L_0;
		L_0 = DataSet_1_get_disposed_m1CDD97F62FB7D308CDD0BA7B889A6205C3F88A95_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0048;
	}

IL_000d:
	{
		bool L_2 = ___0_disposing;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* L_4 = __this->___gpuData;
		GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* L_5 = L_4;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001f;
		}
		G_B4_0 = L_5;
	}
	{
		goto IL_0025;
	}

IL_001f:
	{
		GPUBuffer_1_Dispose_mA35B93CBE6373AAD9513AAE3F3DEAD09AED17624(G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_0025:
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* L_6 = (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934*)(&__this->___cpuData);
		NativeArray_1_Dispose_m1B103C4931EFC035BF435240AD0CBAEA1AE916E8(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_7 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420(L_7, NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420_RuntimeMethod_var);
		goto IL_0040;
	}

IL_0040:
	{
		DataSet_1_set_disposed_m6E5BD4BFBA25E3167C283E5230479D137D48509F_inline(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0048:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_RegisterUpdate_mBB1E17474C6B85A5F7E5596EA5C8CF98F9BB1744_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, uint32_t ___0_start, uint32_t ___1_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uintptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint32_t V_5 = 0;
	bool V_6 = false;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	{
		uint32_t L_0 = ___0_start;
		uint32_t L_1 = ___1_size;
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* L_2 = (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934*)(&__this->___cpuData);
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))))) > ((int64_t)((int64_t)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		uint32_t L_4 = __this->___m_UpdateRangesBatchStart;
		uint32_t L_5 = __this->___m_UpdateRangesEnqueued;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		uint32_t L_6 = __this->___m_UpdateRangesEnqueued;
		V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_9 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_10 = V_3;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_9)->___m_Buffer, L_10);
		V_4 = L_11;
		uint32_t L_12 = ___0_start;
		uint32_t L_13 = __this->___m_ElemStride;
		V_5 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)L_13));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_14 = V_4;
		uint32_t L_15 = L_14.___offsetFromWriteStart;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_16 = V_4;
		uint32_t L_17 = L_16.___size;
		uint32_t L_18 = V_5;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_17))) == ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_20 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_21 = V_3;
		il2cpp_codegen_initobj((&V_7), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_22 = V_4;
		uintptr_t L_23 = L_22.___source;
		(&V_7)->___source = L_23;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_24 = V_4;
		uint32_t L_25 = L_24.___offsetFromWriteStart;
		(&V_7)->___offsetFromWriteStart = L_25;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_26 = V_4;
		uint32_t L_27 = L_26.___size;
		uint32_t L_28 = ___1_size;
		uint32_t L_29 = __this->___m_ElemStride;
		(&V_7)->___size = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, ((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)L_29))));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_30 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_20)->___m_Buffer, L_21, (L_30));
		uint32_t L_31 = __this->___m_UpdateRangeMax;
		uint32_t L_32 = ___0_start;
		uint32_t L_33 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_34;
		L_34 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_31, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), NULL);
		__this->___m_UpdateRangeMax = L_34;
		goto IL_017d;
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		uint32_t L_35 = __this->___m_UpdateRangeMin;
		uint32_t L_36 = ___0_start;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_37;
		L_37 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_35, L_36, NULL);
		__this->___m_UpdateRangeMin = L_37;
		uint32_t L_38 = __this->___m_UpdateRangeMax;
		uint32_t L_39 = ___0_start;
		uint32_t L_40 = ___1_size;
		uint32_t L_41;
		L_41 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_38, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40)), NULL);
		__this->___m_UpdateRangeMax = L_41;
		uint32_t L_42 = __this->___m_UpdateRangesEnqueued;
		uint32_t L_43 = __this->___m_UpdateRangePoolSize;
		V_8 = (bool)((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_0119;
		}
	}
	{
		__this->___m_UpdateRangesSaturated = (bool)1;
		goto IL_017d;
	}

IL_0119:
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_45 = __this->___cpuData;
		uint32_t L_46 = ___0_start;
		uint32_t L_47 = ___1_size;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_48;
		L_48 = NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEE155357C8BB83BD4B7D34471587738A86B0D851(L_45, (int32_t)L_46, (int32_t)L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		void* L_49;
		L_49 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m25D2FEAD1520E2DEEBA11E8A6BF32EFCEC42D9EA(L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline((&V_1), L_49, NULL);
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_50 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_51 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		uintptr_t L_52 = V_1;
		(&V_7)->___source = L_52;
		uint32_t L_53 = ___0_start;
		uint32_t L_54 = __this->___m_ElemStride;
		(&V_7)->___offsetFromWriteStart = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_53, (int32_t)L_54));
		uint32_t L_55 = ___1_size;
		uint32_t L_56 = __this->___m_ElemStride;
		(&V_7)->___size = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_55, (int32_t)L_56));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_57 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_50)->___m_Buffer, L_51, (L_57));
		uint32_t L_58 = __this->___m_UpdateRangesEnqueued;
		__this->___m_UpdateRangesEnqueued = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, 1));
	}

IL_017d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSet_1_HasMappedBufferRange_mF35963F8A8F935B5C3C691804A4EE85500317178_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Utility_HasMappedBufferRange_mA6C2F771F01D644C872729B38BA8B5AEC6BA5ABB(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendUpdates_mA2707FFFFEEA7BADB5F7EBD5102913D14AB9ED78_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = DataSet_1_HasMappedBufferRange_mF35963F8A8F935B5C3C691804A4EE85500317178(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		DataSet_1_SendPartialRanges_m87137AD7DDCB1611EBFA0F3FCE782E70D5CD0973(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_001b;
	}

IL_0014:
	{
		DataSet_1_SendFullRange_m9AE9D73BC1CD97EA6325271EF1B1356A87220675(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendFullRange_m9AE9D73BC1CD97EA6325271EF1B1356A87220675_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_1;
	memset((&V_1), 0, sizeof(V_1));
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* G_B2_0 = NULL;
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* G_B1_0 = NULL;
	{
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934* L_0 = (NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934*)(&__this->___cpuData);
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_0)->___m_Length);
		uint32_t L_2 = __this->___m_ElemStride;
		V_0 = (uint32_t)((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)(uint64_t)L_2))));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_3 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		uint32_t L_4 = __this->___m_UpdateRangesBatchStart;
		il2cpp_codegen_initobj((&V_1), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_5 = __this->___cpuData;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8E5335741788115AF07635B3B9C543C6BA1F2D3C(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		uintptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline((&L_7), L_6, NULL);
		(&V_1)->___source = L_7;
		(&V_1)->___offsetFromWriteStart = (uint32_t)0;
		uint32_t L_8 = V_0;
		(&V_1)->___size = L_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_9 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_3)->___m_Buffer, (int32_t)L_4, (L_9));
		GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* L_10 = __this->___gpuData;
		GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* L_11 = L_10;
		if (L_11)
		{
			G_B2_0 = L_11;
			goto IL_0065;
		}
		G_B1_0 = L_11;
	}
	{
		goto IL_007f;
	}

IL_0065:
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_12 = __this->___updateRanges;
		uint32_t L_13 = __this->___m_UpdateRangesBatchStart;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_14;
		L_14 = NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF(L_12, (int32_t)L_13, 1, NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		uint32_t L_15 = V_0;
		GPUBuffer_1_UpdateRanges_m803C38D03A139CAAB5056161B62A3E96C48BF55E(G_B2_0, L_14, 0, (int32_t)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
	}

IL_007f:
	{
		DataSet_1_ResetUpdateState_m7ECCC15503B9AE382D59B311EF10D44C32F9504A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendPartialRanges_m87137AD7DDCB1611EBFA0F3FCE782E70D5CD0973_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	uint32_t V_4 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* G_B11_0 = NULL;
	GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* G_B10_0 = NULL;
	{
		uint32_t L_0 = __this->___m_UpdateRangesEnqueued;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0186;
	}

IL_0013:
	{
		bool L_2 = __this->___m_UpdateRangesSaturated;
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0099;
		}
	}
	{
		uint32_t L_4 = __this->___m_UpdateRangeMax;
		uint32_t L_5 = __this->___m_UpdateRangeMin;
		V_4 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5));
		__this->___m_UpdateRangesEnqueued = (uint32_t)1;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_6 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		uint32_t L_7 = __this->___m_UpdateRangesBatchStart;
		il2cpp_codegen_initobj((&V_5), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 L_8 = __this->___cpuData;
		uint32_t L_9 = __this->___m_UpdateRangeMin;
		uint32_t L_10 = V_4;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_11;
		L_11 = NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEE155357C8BB83BD4B7D34471587738A86B0D851(L_8, (int32_t)L_9, (int32_t)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		void* L_12;
		L_12 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m25D2FEAD1520E2DEEBA11E8A6BF32EFCEC42D9EA(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		uintptr_t L_13;
		memset((&L_13), 0, sizeof(L_13));
		UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline((&L_13), L_12, NULL);
		(&V_5)->___source = L_13;
		uint32_t L_14 = __this->___m_UpdateRangeMin;
		uint32_t L_15 = __this->___m_ElemStride;
		(&V_5)->___offsetFromWriteStart = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15));
		uint32_t L_16 = V_4;
		uint32_t L_17 = __this->___m_ElemStride;
		(&V_5)->___size = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_17));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_18 = V_5;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_6)->___m_Buffer, (int32_t)L_7, (L_18));
	}

IL_0099:
	{
		uint32_t L_19 = __this->___m_UpdateRangeMin;
		uint32_t L_20 = __this->___m_ElemStride;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20));
		uint32_t L_21 = __this->___m_UpdateRangeMax;
		uint32_t L_22 = __this->___m_ElemStride;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)L_22));
		uint32_t L_23 = V_0;
		V_6 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_0154;
		}
	}
	{
		V_7 = (uint32_t)0;
		goto IL_0140;
	}

IL_00c8:
	{
		uint32_t L_25 = V_7;
		uint32_t L_26 = __this->___m_UpdateRangesBatchStart;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_27 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_28 = V_8;
		il2cpp_codegen_initobj((&V_5), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_29 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_30 = V_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_29)->___m_Buffer, L_30);
		uintptr_t L_32 = L_31.___source;
		(&V_5)->___source = L_32;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_33 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_34 = V_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_35;
		L_35 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_33)->___m_Buffer, L_34);
		uint32_t L_36 = L_35.___offsetFromWriteStart;
		uint32_t L_37 = V_0;
		(&V_5)->___offsetFromWriteStart = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_38 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_39 = V_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_40;
		L_40 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_38)->___m_Buffer, L_39);
		uint32_t L_41 = L_40.___size;
		(&V_5)->___size = L_41;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_42 = V_5;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_27)->___m_Buffer, L_28, (L_42));
		uint32_t L_43 = V_7;
		V_7 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, 1));
	}

IL_0140:
	{
		uint32_t L_44 = V_7;
		uint32_t L_45 = __this->___m_UpdateRangesEnqueued;
		V_9 = (bool)((!(((uint32_t)L_44) >= ((uint32_t)L_45)))? 1 : 0);
		bool L_46 = V_9;
		if (L_46)
		{
			goto IL_00c8;
		}
	}
	{
	}

IL_0154:
	{
		GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* L_47 = __this->___gpuData;
		GPUBuffer_1_tB27A42EE52EA38FD7117C4EC0B1E42703FFE4C36* L_48 = L_47;
		if (L_48)
		{
			G_B11_0 = L_48;
			goto IL_0160;
		}
		G_B10_0 = L_48;
	}
	{
		goto IL_017f;
	}

IL_0160:
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_49 = __this->___updateRanges;
		uint32_t L_50 = __this->___m_UpdateRangesBatchStart;
		uint32_t L_51 = __this->___m_UpdateRangesEnqueued;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_52;
		L_52 = NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF(L_49, (int32_t)L_50, (int32_t)L_51, NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		uint32_t L_53 = V_0;
		uint32_t L_54 = V_1;
		GPUBuffer_1_UpdateRanges_m803C38D03A139CAAB5056161B62A3E96C48BF55E(G_B11_0, L_52, (int32_t)L_53, (int32_t)L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
	}

IL_017f:
	{
		DataSet_1_ResetUpdateState_m7ECCC15503B9AE382D59B311EF10D44C32F9504A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_0186:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_ResetUpdateState_m7ECCC15503B9AE382D59B311EF10D44C32F9504A_gshared (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		__this->___m_UpdateRangeMin = (uint32_t)(-1);
		__this->___m_UpdateRangeMax = (uint32_t)0;
		__this->___m_UpdateRangesEnqueued = (uint32_t)0;
		uint32_t L_0 = __this->___m_UpdateRangesBatchStart;
		uint32_t L_1 = __this->___m_UpdateRangePoolSize;
		__this->___m_UpdateRangesBatchStart = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		uint32_t L_2 = __this->___m_UpdateRangesBatchStart;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_3 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		V_0 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)L_4)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		__this->___m_UpdateRangesBatchStart = (uint32_t)0;
	}

IL_004c:
	{
		__this->___m_UpdateRangesSaturated = (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1__ctor_mF445E1E08DB3B7E56E177FC19E422A94F47274A6_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, int32_t ___0_bufferType, uint32_t ___1_totalCount, uint32_t ___2_maxQueuedFrameCount, uint32_t ___3_updateRangePoolSize, bool ___4_mockBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___4_mockBuffer;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		uint32_t L_2 = ___1_totalCount;
		int32_t L_3 = ___0_bufferType;
		GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* L_4 = (GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		GPUBuffer_1__ctor_m7FED8993FD0D99C3A1166596920E67A1F222FF3D(L_4, (int32_t)L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___gpuData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gpuData), (void*)L_4);
	}

IL_001e:
	{
		uint32_t L_5 = ___1_totalCount;
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_6;
		memset((&L_6), 0, sizeof(L_6));
		NativeArray_1__ctor_mE3B1C6D032AF42228A24E43A0F4CF2F261A52189((&L_6), (int32_t)L_5, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___cpuData = L_6;
		uint32_t L_7 = ___1_totalCount;
		GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48* L_8 = (GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48*)il2cpp_codegen_object_new(GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48_il2cpp_TypeInfo_var);
		GPUBufferAllocator__ctor_m989E13DFCA8CAA59F399FAD27F7F5E0253C2E62E(L_8, L_7, NULL);
		__this->___allocator = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allocator), (void*)L_8);
		bool L_9 = ___4_mockBuffer;
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* L_11 = __this->___gpuData;
		int32_t L_12;
		L_12 = GPUBuffer_1_get_ElementStride_mDCC5F4E2A919C976FB49727901EFDDDDCAC8A3E8(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___m_ElemStride = (uint32_t)L_12;
	}

IL_0052:
	{
		uint32_t L_13 = ___3_updateRangePoolSize;
		__this->___m_UpdateRangePoolSize = L_13;
		uint32_t L_14 = __this->___m_UpdateRangePoolSize;
		uint32_t L_15 = ___2_maxQueuedFrameCount;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15));
		uint32_t L_16 = V_0;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_17;
		memset((&L_17), 0, sizeof(L_17));
		NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25((&L_17), (int32_t)L_16, (int32_t)4, (int32_t)0, NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25_RuntimeMethod_var);
		__this->___updateRanges = L_17;
		__this->___m_UpdateRangeMin = (uint32_t)(-1);
		__this->___m_UpdateRangeMax = (uint32_t)0;
		__this->___m_UpdateRangesEnqueued = (uint32_t)0;
		__this->___m_UpdateRangesBatchStart = (uint32_t)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSet_1_get_disposed_mD8A87D3D0B54327F20A175C926FBDBB64A6CD1AE_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_set_disposed_m4C7C5F68C0DA96DC663909C22EAD6599D682ED99_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CdisposedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_Dispose_mD12AA80FA56001813C547DECAE9061F84CE98807_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataSet_1_Dispose_m7BEE8813222BBCE8FBB1CCFE324750E87CB4D636(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_Dispose_m7BEE8813222BBCE8FBB1CCFE324750E87CB4D636_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* G_B5_0 = NULL;
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* G_B4_0 = NULL;
	{
		bool L_0;
		L_0 = DataSet_1_get_disposed_mD8A87D3D0B54327F20A175C926FBDBB64A6CD1AE_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0048;
	}

IL_000d:
	{
		bool L_2 = ___0_disposing;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* L_4 = __this->___gpuData;
		GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* L_5 = L_4;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001f;
		}
		G_B4_0 = L_5;
	}
	{
		goto IL_0025;
	}

IL_001f:
	{
		GPUBuffer_1_Dispose_m7FE1433944303E41F530D60E704C70CF10818DC0(G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_0025:
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* L_6 = (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81*)(&__this->___cpuData);
		NativeArray_1_Dispose_m46C1F3A5DF2013F65AA709A58C45D36CC411D276(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_7 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420(L_7, NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420_RuntimeMethod_var);
		goto IL_0040;
	}

IL_0040:
	{
		DataSet_1_set_disposed_m4C7C5F68C0DA96DC663909C22EAD6599D682ED99_inline(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0048:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_RegisterUpdate_mA4D1CC618747094CDCA3CE176693E52901898085_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, uint32_t ___0_start, uint32_t ___1_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uintptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint32_t V_5 = 0;
	bool V_6 = false;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	{
		uint32_t L_0 = ___0_start;
		uint32_t L_1 = ___1_size;
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* L_2 = (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81*)(&__this->___cpuData);
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))))) > ((int64_t)((int64_t)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		uint32_t L_4 = __this->___m_UpdateRangesBatchStart;
		uint32_t L_5 = __this->___m_UpdateRangesEnqueued;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		uint32_t L_6 = __this->___m_UpdateRangesEnqueued;
		V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_9 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_10 = V_3;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_9)->___m_Buffer, L_10);
		V_4 = L_11;
		uint32_t L_12 = ___0_start;
		uint32_t L_13 = __this->___m_ElemStride;
		V_5 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)L_13));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_14 = V_4;
		uint32_t L_15 = L_14.___offsetFromWriteStart;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_16 = V_4;
		uint32_t L_17 = L_16.___size;
		uint32_t L_18 = V_5;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_17))) == ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_20 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_21 = V_3;
		il2cpp_codegen_initobj((&V_7), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_22 = V_4;
		uintptr_t L_23 = L_22.___source;
		(&V_7)->___source = L_23;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_24 = V_4;
		uint32_t L_25 = L_24.___offsetFromWriteStart;
		(&V_7)->___offsetFromWriteStart = L_25;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_26 = V_4;
		uint32_t L_27 = L_26.___size;
		uint32_t L_28 = ___1_size;
		uint32_t L_29 = __this->___m_ElemStride;
		(&V_7)->___size = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, ((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)L_29))));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_30 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_20)->___m_Buffer, L_21, (L_30));
		uint32_t L_31 = __this->___m_UpdateRangeMax;
		uint32_t L_32 = ___0_start;
		uint32_t L_33 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_34;
		L_34 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_31, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), NULL);
		__this->___m_UpdateRangeMax = L_34;
		goto IL_017d;
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		uint32_t L_35 = __this->___m_UpdateRangeMin;
		uint32_t L_36 = ___0_start;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_37;
		L_37 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_35, L_36, NULL);
		__this->___m_UpdateRangeMin = L_37;
		uint32_t L_38 = __this->___m_UpdateRangeMax;
		uint32_t L_39 = ___0_start;
		uint32_t L_40 = ___1_size;
		uint32_t L_41;
		L_41 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_38, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40)), NULL);
		__this->___m_UpdateRangeMax = L_41;
		uint32_t L_42 = __this->___m_UpdateRangesEnqueued;
		uint32_t L_43 = __this->___m_UpdateRangePoolSize;
		V_8 = (bool)((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_0119;
		}
	}
	{
		__this->___m_UpdateRangesSaturated = (bool)1;
		goto IL_017d;
	}

IL_0119:
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_45 = __this->___cpuData;
		uint32_t L_46 = ___0_start;
		uint32_t L_47 = ___1_size;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_48;
		L_48 = NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m0D7D6BAB64810308797BD6D6C898432E45D4AC4C(L_45, (int32_t)L_46, (int32_t)L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		void* L_49;
		L_49 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mBA68ADCEE03FE9686B3E1093209D25043E18946D(L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline((&V_1), L_49, NULL);
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_50 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_51 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		uintptr_t L_52 = V_1;
		(&V_7)->___source = L_52;
		uint32_t L_53 = ___0_start;
		uint32_t L_54 = __this->___m_ElemStride;
		(&V_7)->___offsetFromWriteStart = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_53, (int32_t)L_54));
		uint32_t L_55 = ___1_size;
		uint32_t L_56 = __this->___m_ElemStride;
		(&V_7)->___size = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_55, (int32_t)L_56));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_57 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_50)->___m_Buffer, L_51, (L_57));
		uint32_t L_58 = __this->___m_UpdateRangesEnqueued;
		__this->___m_UpdateRangesEnqueued = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, 1));
	}

IL_017d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSet_1_HasMappedBufferRange_mAA1FA654423EBCAF25BE87B51C495E8CAF2938AA_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Utility_HasMappedBufferRange_mA6C2F771F01D644C872729B38BA8B5AEC6BA5ABB(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendUpdates_m54AC68C6CC27A8E17D832740AF1818D548F8FC16_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = DataSet_1_HasMappedBufferRange_mAA1FA654423EBCAF25BE87B51C495E8CAF2938AA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		DataSet_1_SendPartialRanges_mFAA112DB810A113A66765CBBE53012692668D64F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_001b;
	}

IL_0014:
	{
		DataSet_1_SendFullRange_mD3261CCB43378E1AE61E954FCCB4C914EE2DD895(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendFullRange_mD3261CCB43378E1AE61E954FCCB4C914EE2DD895_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_1;
	memset((&V_1), 0, sizeof(V_1));
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* G_B2_0 = NULL;
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* G_B1_0 = NULL;
	{
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81* L_0 = (NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81*)(&__this->___cpuData);
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_0)->___m_Length);
		uint32_t L_2 = __this->___m_ElemStride;
		V_0 = (uint32_t)((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)(uint64_t)L_2))));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_3 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		uint32_t L_4 = __this->___m_UpdateRangesBatchStart;
		il2cpp_codegen_initobj((&V_1), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_5 = __this->___cpuData;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m3687E938D6A361C1C9500F894455AD0E14BBF0C8(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		uintptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline((&L_7), L_6, NULL);
		(&V_1)->___source = L_7;
		(&V_1)->___offsetFromWriteStart = (uint32_t)0;
		uint32_t L_8 = V_0;
		(&V_1)->___size = L_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_9 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_3)->___m_Buffer, (int32_t)L_4, (L_9));
		GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* L_10 = __this->___gpuData;
		GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* L_11 = L_10;
		if (L_11)
		{
			G_B2_0 = L_11;
			goto IL_0065;
		}
		G_B1_0 = L_11;
	}
	{
		goto IL_007f;
	}

IL_0065:
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_12 = __this->___updateRanges;
		uint32_t L_13 = __this->___m_UpdateRangesBatchStart;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_14;
		L_14 = NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF(L_12, (int32_t)L_13, 1, NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		uint32_t L_15 = V_0;
		GPUBuffer_1_UpdateRanges_m3C82F04A4DBF59CADF1675AE1EEB5467303B118D(G_B2_0, L_14, 0, (int32_t)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
	}

IL_007f:
	{
		DataSet_1_ResetUpdateState_m3E76857D00FB6B3D1B6FAE2B3805CD187428A045(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendPartialRanges_mFAA112DB810A113A66765CBBE53012692668D64F_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	uint32_t V_4 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* G_B11_0 = NULL;
	GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* G_B10_0 = NULL;
	{
		uint32_t L_0 = __this->___m_UpdateRangesEnqueued;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0186;
	}

IL_0013:
	{
		bool L_2 = __this->___m_UpdateRangesSaturated;
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0099;
		}
	}
	{
		uint32_t L_4 = __this->___m_UpdateRangeMax;
		uint32_t L_5 = __this->___m_UpdateRangeMin;
		V_4 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5));
		__this->___m_UpdateRangesEnqueued = (uint32_t)1;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_6 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		uint32_t L_7 = __this->___m_UpdateRangesBatchStart;
		il2cpp_codegen_initobj((&V_5), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 L_8 = __this->___cpuData;
		uint32_t L_9 = __this->___m_UpdateRangeMin;
		uint32_t L_10 = V_4;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_11;
		L_11 = NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m0D7D6BAB64810308797BD6D6C898432E45D4AC4C(L_8, (int32_t)L_9, (int32_t)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		void* L_12;
		L_12 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mBA68ADCEE03FE9686B3E1093209D25043E18946D(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		uintptr_t L_13;
		memset((&L_13), 0, sizeof(L_13));
		UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline((&L_13), L_12, NULL);
		(&V_5)->___source = L_13;
		uint32_t L_14 = __this->___m_UpdateRangeMin;
		uint32_t L_15 = __this->___m_ElemStride;
		(&V_5)->___offsetFromWriteStart = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15));
		uint32_t L_16 = V_4;
		uint32_t L_17 = __this->___m_ElemStride;
		(&V_5)->___size = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_17));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_18 = V_5;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_6)->___m_Buffer, (int32_t)L_7, (L_18));
	}

IL_0099:
	{
		uint32_t L_19 = __this->___m_UpdateRangeMin;
		uint32_t L_20 = __this->___m_ElemStride;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20));
		uint32_t L_21 = __this->___m_UpdateRangeMax;
		uint32_t L_22 = __this->___m_ElemStride;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)L_22));
		uint32_t L_23 = V_0;
		V_6 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_0154;
		}
	}
	{
		V_7 = (uint32_t)0;
		goto IL_0140;
	}

IL_00c8:
	{
		uint32_t L_25 = V_7;
		uint32_t L_26 = __this->___m_UpdateRangesBatchStart;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_27 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_28 = V_8;
		il2cpp_codegen_initobj((&V_5), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_29 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_30 = V_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_29)->___m_Buffer, L_30);
		uintptr_t L_32 = L_31.___source;
		(&V_5)->___source = L_32;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_33 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_34 = V_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_35;
		L_35 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_33)->___m_Buffer, L_34);
		uint32_t L_36 = L_35.___offsetFromWriteStart;
		uint32_t L_37 = V_0;
		(&V_5)->___offsetFromWriteStart = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_38 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_39 = V_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_40;
		L_40 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_38)->___m_Buffer, L_39);
		uint32_t L_41 = L_40.___size;
		(&V_5)->___size = L_41;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_42 = V_5;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_27)->___m_Buffer, L_28, (L_42));
		uint32_t L_43 = V_7;
		V_7 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, 1));
	}

IL_0140:
	{
		uint32_t L_44 = V_7;
		uint32_t L_45 = __this->___m_UpdateRangesEnqueued;
		V_9 = (bool)((!(((uint32_t)L_44) >= ((uint32_t)L_45)))? 1 : 0);
		bool L_46 = V_9;
		if (L_46)
		{
			goto IL_00c8;
		}
	}
	{
	}

IL_0154:
	{
		GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* L_47 = __this->___gpuData;
		GPUBuffer_1_tA6A8BA754BA691383F7FA4302803FC11DA7373F3* L_48 = L_47;
		if (L_48)
		{
			G_B11_0 = L_48;
			goto IL_0160;
		}
		G_B10_0 = L_48;
	}
	{
		goto IL_017f;
	}

IL_0160:
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_49 = __this->___updateRanges;
		uint32_t L_50 = __this->___m_UpdateRangesBatchStart;
		uint32_t L_51 = __this->___m_UpdateRangesEnqueued;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_52;
		L_52 = NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF(L_49, (int32_t)L_50, (int32_t)L_51, NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		uint32_t L_53 = V_0;
		uint32_t L_54 = V_1;
		GPUBuffer_1_UpdateRanges_m3C82F04A4DBF59CADF1675AE1EEB5467303B118D(G_B11_0, L_52, (int32_t)L_53, (int32_t)L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
	}

IL_017f:
	{
		DataSet_1_ResetUpdateState_m3E76857D00FB6B3D1B6FAE2B3805CD187428A045(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_0186:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_ResetUpdateState_m3E76857D00FB6B3D1B6FAE2B3805CD187428A045_gshared (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		__this->___m_UpdateRangeMin = (uint32_t)(-1);
		__this->___m_UpdateRangeMax = (uint32_t)0;
		__this->___m_UpdateRangesEnqueued = (uint32_t)0;
		uint32_t L_0 = __this->___m_UpdateRangesBatchStart;
		uint32_t L_1 = __this->___m_UpdateRangePoolSize;
		__this->___m_UpdateRangesBatchStart = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		uint32_t L_2 = __this->___m_UpdateRangesBatchStart;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_3 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		V_0 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)L_4)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		__this->___m_UpdateRangesBatchStart = (uint32_t)0;
	}

IL_004c:
	{
		__this->___m_UpdateRangesSaturated = (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1__ctor_m28064C840B1363D41E46A9C603F99094D99DDC76_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, int32_t ___0_bufferType, uint32_t ___1_totalCount, uint32_t ___2_maxQueuedFrameCount, uint32_t ___3_updateRangePoolSize, bool ___4_mockBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___4_mockBuffer;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		uint32_t L_2 = ___1_totalCount;
		int32_t L_3 = ___0_bufferType;
		GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* L_4 = (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_4, (int32_t)L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___gpuData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gpuData), (void*)L_4);
	}

IL_001e:
	{
		uint32_t L_5 = ___1_totalCount;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		memset((&L_6), 0, sizeof(L_6));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_6), (int32_t)L_5, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		__this->___cpuData = L_6;
		uint32_t L_7 = ___1_totalCount;
		GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48* L_8 = (GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48*)il2cpp_codegen_object_new(GPUBufferAllocator_tF80B451375FD15F0C2A169E686269C5312DE9C48_il2cpp_TypeInfo_var);
		GPUBufferAllocator__ctor_m989E13DFCA8CAA59F399FAD27F7F5E0253C2E62E(L_8, L_7, NULL);
		__this->___allocator = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allocator), (void*)L_8);
		bool L_9 = ___4_mockBuffer;
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* L_11 = __this->___gpuData;
		int32_t L_12;
		L_12 = ((  int32_t (*) (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___m_ElemStride = (uint32_t)L_12;
	}

IL_0052:
	{
		uint32_t L_13 = ___3_updateRangePoolSize;
		__this->___m_UpdateRangePoolSize = L_13;
		uint32_t L_14 = __this->___m_UpdateRangePoolSize;
		uint32_t L_15 = ___2_maxQueuedFrameCount;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15));
		uint32_t L_16 = V_0;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_17;
		memset((&L_17), 0, sizeof(L_17));
		NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25((&L_17), (int32_t)L_16, (int32_t)4, (int32_t)0, NativeArray_1__ctor_mE6E8B8F798392D6872A9BF0124039EC660532B25_RuntimeMethod_var);
		__this->___updateRanges = L_17;
		__this->___m_UpdateRangeMin = (uint32_t)(-1);
		__this->___m_UpdateRangeMax = (uint32_t)0;
		__this->___m_UpdateRangesEnqueued = (uint32_t)0;
		__this->___m_UpdateRangesBatchStart = (uint32_t)0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSet_1_get_disposed_m50538A1EE7DCC21957B6D9748663423C8AA2F05E_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_set_disposed_m54372C6A82545B910701EC09304C661AF9A9F8CA_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CdisposedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_Dispose_mD9E8D0266A0401BEE8195553FAFEF45F7E5305D5_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((  void (*) (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_Dispose_mB57CE3C19F880D2F0865A4764745C5B7D44173FB_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* G_B5_0 = NULL;
	GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* G_B4_0 = NULL;
	{
		bool L_0;
		L_0 = ((  bool (*) (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0048;
	}

IL_000d:
	{
		bool L_2 = ___0_disposing;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* L_4 = __this->___gpuData;
		GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* L_5 = L_4;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001f;
		}
		G_B4_0 = L_5;
	}
	{
		goto IL_0025;
	}

IL_001f:
	{
		((  void (*) (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(G_B5_0, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_0025:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___cpuData);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_7 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420(L_7, NativeArray_1_Dispose_m0631C917E9C8476BD255A892F70999545005C420_RuntimeMethod_var);
		goto IL_0040;
	}

IL_0040:
	{
		((  void (*) (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_0048:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_RegisterUpdate_mA73DB834887ABB724CE2E2543B69ADE2D60AA444_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, uint32_t ___0_start, uint32_t ___1_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uintptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint32_t V_5 = 0;
	bool V_6 = false;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	{
		uint32_t L_0 = ___0_start;
		uint32_t L_1 = ___1_size;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___cpuData);
		int32_t L_3;
		L_3 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))))) > ((int64_t)((int64_t)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		uint32_t L_4 = __this->___m_UpdateRangesBatchStart;
		uint32_t L_5 = __this->___m_UpdateRangesEnqueued;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		uint32_t L_6 = __this->___m_UpdateRangesEnqueued;
		V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_8 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_9 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_10 = V_3;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_9)->___m_Buffer, L_10);
		V_4 = L_11;
		uint32_t L_12 = ___0_start;
		uint32_t L_13 = __this->___m_ElemStride;
		V_5 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)L_13));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_14 = V_4;
		uint32_t L_15 = L_14.___offsetFromWriteStart;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_16 = V_4;
		uint32_t L_17 = L_16.___size;
		uint32_t L_18 = V_5;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_17))) == ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00d4;
		}
	}
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_20 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_21 = V_3;
		il2cpp_codegen_initobj((&V_7), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_22 = V_4;
		uintptr_t L_23 = L_22.___source;
		(&V_7)->___source = L_23;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_24 = V_4;
		uint32_t L_25 = L_24.___offsetFromWriteStart;
		(&V_7)->___offsetFromWriteStart = L_25;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_26 = V_4;
		uint32_t L_27 = L_26.___size;
		uint32_t L_28 = ___1_size;
		uint32_t L_29 = __this->___m_ElemStride;
		(&V_7)->___size = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, ((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)L_29))));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_30 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_20)->___m_Buffer, L_21, (L_30));
		uint32_t L_31 = __this->___m_UpdateRangeMax;
		uint32_t L_32 = ___0_start;
		uint32_t L_33 = ___1_size;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_34;
		L_34 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_31, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)), NULL);
		__this->___m_UpdateRangeMax = L_34;
		goto IL_017d;
	}

IL_00d4:
	{
	}

IL_00d5:
	{
		uint32_t L_35 = __this->___m_UpdateRangeMin;
		uint32_t L_36 = ___0_start;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_37;
		L_37 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_35, L_36, NULL);
		__this->___m_UpdateRangeMin = L_37;
		uint32_t L_38 = __this->___m_UpdateRangeMax;
		uint32_t L_39 = ___0_start;
		uint32_t L_40 = ___1_size;
		uint32_t L_41;
		L_41 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_38, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40)), NULL);
		__this->___m_UpdateRangeMax = L_41;
		uint32_t L_42 = __this->___m_UpdateRangesEnqueued;
		uint32_t L_43 = __this->___m_UpdateRangePoolSize;
		V_8 = (bool)((((int32_t)L_42) == ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_0119;
		}
	}
	{
		__this->___m_UpdateRangesSaturated = (bool)1;
		goto IL_017d;
	}

IL_0119:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_45 = __this->___cpuData;
		uint32_t L_46 = ___0_start;
		uint32_t L_47 = ___1_size;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_48;
		L_48 = ((  NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_45, (int32_t)L_46, (int32_t)L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		void* L_49;
		L_49 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline((&V_1), L_49, NULL);
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_50 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_51 = V_0;
		il2cpp_codegen_initobj((&V_7), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		uintptr_t L_52 = V_1;
		(&V_7)->___source = L_52;
		uint32_t L_53 = ___0_start;
		uint32_t L_54 = __this->___m_ElemStride;
		(&V_7)->___offsetFromWriteStart = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_53, (int32_t)L_54));
		uint32_t L_55 = ___1_size;
		uint32_t L_56 = __this->___m_ElemStride;
		(&V_7)->___size = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_55, (int32_t)L_56));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_57 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_50)->___m_Buffer, L_51, (L_57));
		uint32_t L_58 = __this->___m_UpdateRangesEnqueued;
		__this->___m_UpdateRangesEnqueued = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, 1));
	}

IL_017d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSet_1_HasMappedBufferRange_m86746DBD72D2B5B94018367E1811C9C6764C71F9_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Utility_HasMappedBufferRange_mA6C2F771F01D644C872729B38BA8B5AEC6BA5ABB(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendUpdates_mCB87D4D23BA2EBA9F6E82901E1FDB32033D1AAA8_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = ((  bool (*) (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		((  void (*) (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_001b;
	}

IL_0014:
	{
		((  void (*) (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendFullRange_m51D36BB81832FA9D7272E6F96A4C5C13F8C7A28E_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_1;
	memset((&V_1), 0, sizeof(V_1));
	GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* G_B2_0 = NULL;
	GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* G_B1_0 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___cpuData);
		int32_t L_1;
		L_1 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		uint32_t L_2 = __this->___m_ElemStride;
		V_0 = (uint32_t)((int32_t)(uint32_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)(uint64_t)L_2))));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_3 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		uint32_t L_4 = __this->___m_UpdateRangesBatchStart;
		il2cpp_codegen_initobj((&V_1), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = __this->___cpuData;
		void* L_6;
		L_6 = ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		uintptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline((&L_7), L_6, NULL);
		(&V_1)->___source = L_7;
		(&V_1)->___offsetFromWriteStart = (uint32_t)0;
		uint32_t L_8 = V_0;
		(&V_1)->___size = L_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_9 = V_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_3)->___m_Buffer, (int32_t)L_4, (L_9));
		GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* L_10 = __this->___gpuData;
		GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* L_11 = L_10;
		if (L_11)
		{
			G_B2_0 = L_11;
			goto IL_0065;
		}
		G_B1_0 = L_11;
	}
	{
		goto IL_007f;
	}

IL_0065:
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_12 = __this->___updateRanges;
		uint32_t L_13 = __this->___m_UpdateRangesBatchStart;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_14;
		L_14 = NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF(L_12, (int32_t)L_13, 1, NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		uint32_t L_15 = V_0;
		((  void (*) (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86*, NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(G_B2_0, L_14, 0, (int32_t)L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
	}

IL_007f:
	{
		((  void (*) (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_SendPartialRanges_mB4D7FFBC98FF98DA829C7F326EE370662229DA9D_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	uint32_t V_4 = 0;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* G_B11_0 = NULL;
	GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* G_B10_0 = NULL;
	{
		uint32_t L_0 = __this->___m_UpdateRangesEnqueued;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0186;
	}

IL_0013:
	{
		bool L_2 = __this->___m_UpdateRangesSaturated;
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0099;
		}
	}
	{
		uint32_t L_4 = __this->___m_UpdateRangeMax;
		uint32_t L_5 = __this->___m_UpdateRangeMin;
		V_4 = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5));
		__this->___m_UpdateRangesEnqueued = (uint32_t)1;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_6 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		uint32_t L_7 = __this->___m_UpdateRangesBatchStart;
		il2cpp_codegen_initobj((&V_5), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = __this->___cpuData;
		uint32_t L_9 = __this->___m_UpdateRangeMin;
		uint32_t L_10 = V_4;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_11;
		L_11 = ((  NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_8, (int32_t)L_9, (int32_t)L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		void* L_12;
		L_12 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		uintptr_t L_13;
		memset((&L_13), 0, sizeof(L_13));
		UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline((&L_13), L_12, NULL);
		(&V_5)->___source = L_13;
		uint32_t L_14 = __this->___m_UpdateRangeMin;
		uint32_t L_15 = __this->___m_ElemStride;
		(&V_5)->___offsetFromWriteStart = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)L_15));
		uint32_t L_16 = V_4;
		uint32_t L_17 = __this->___m_ElemStride;
		(&V_5)->___size = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_17));
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_18 = V_5;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_6)->___m_Buffer, (int32_t)L_7, (L_18));
	}

IL_0099:
	{
		uint32_t L_19 = __this->___m_UpdateRangeMin;
		uint32_t L_20 = __this->___m_ElemStride;
		V_0 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20));
		uint32_t L_21 = __this->___m_UpdateRangeMax;
		uint32_t L_22 = __this->___m_ElemStride;
		V_1 = (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)L_22));
		uint32_t L_23 = V_0;
		V_6 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_0154;
		}
	}
	{
		V_7 = (uint32_t)0;
		goto IL_0140;
	}

IL_00c8:
	{
		uint32_t L_25 = V_7;
		uint32_t L_26 = __this->___m_UpdateRangesBatchStart;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_27 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_28 = V_8;
		il2cpp_codegen_initobj((&V_5), sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_29 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_30 = V_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_29)->___m_Buffer, L_30);
		uintptr_t L_32 = L_31.___source;
		(&V_5)->___source = L_32;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_33 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_34 = V_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_35;
		L_35 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_33)->___m_Buffer, L_34);
		uint32_t L_36 = L_35.___offsetFromWriteStart;
		uint32_t L_37 = V_0;
		(&V_5)->___offsetFromWriteStart = (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_38 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_39 = V_8;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_40;
		L_40 = IL2CPP_NATIVEARRAY_GET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_38)->___m_Buffer, L_39);
		uint32_t L_41 = L_40.___size;
		(&V_5)->___size = L_41;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_42 = V_5;
		IL2CPP_NATIVEARRAY_SET_ITEM(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C, (L_27)->___m_Buffer, L_28, (L_42));
		uint32_t L_43 = V_7;
		V_7 = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, 1));
	}

IL_0140:
	{
		uint32_t L_44 = V_7;
		uint32_t L_45 = __this->___m_UpdateRangesEnqueued;
		V_9 = (bool)((!(((uint32_t)L_44) >= ((uint32_t)L_45)))? 1 : 0);
		bool L_46 = V_9;
		if (L_46)
		{
			goto IL_00c8;
		}
	}
	{
	}

IL_0154:
	{
		GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* L_47 = __this->___gpuData;
		GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86* L_48 = L_47;
		if (L_48)
		{
			G_B11_0 = L_48;
			goto IL_0160;
		}
		G_B10_0 = L_48;
	}
	{
		goto IL_017f;
	}

IL_0160:
	{
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421 L_49 = __this->___updateRanges;
		uint32_t L_50 = __this->___m_UpdateRangesBatchStart;
		uint32_t L_51 = __this->___m_UpdateRangesEnqueued;
		NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F L_52;
		L_52 = NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF(L_49, (int32_t)L_50, (int32_t)L_51, NativeSliceExtensions_Slice_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mC56CDE15F76977EC66E76AA6F18258BDFFCC76AF_RuntimeMethod_var);
		uint32_t L_53 = V_0;
		uint32_t L_54 = V_1;
		((  void (*) (GPUBuffer_1_tB799E550DAF939E606A31722DEC8AD338C447E86*, NativeSlice_1_t2584A7E323E2DAA0F082C26AD9D0DE0FC661F85F, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(G_B11_0, L_52, (int32_t)L_53, (int32_t)L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
	}

IL_017f:
	{
		((  void (*) (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_0186:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSet_1_ResetUpdateState_mC1C28EA24CA71982B1E66141D85EBE803E8CBF62_gshared (DataSet_1_t328F87CD2D146E4FB8C0C72C068F29173C0B277E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		__this->___m_UpdateRangeMin = (uint32_t)(-1);
		__this->___m_UpdateRangeMax = (uint32_t)0;
		__this->___m_UpdateRangesEnqueued = (uint32_t)0;
		uint32_t L_0 = __this->___m_UpdateRangesBatchStart;
		uint32_t L_1 = __this->___m_UpdateRangePoolSize;
		__this->___m_UpdateRangesBatchStart = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		uint32_t L_2 = __this->___m_UpdateRangesBatchStart;
		NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421* L_3 = (NativeArray_1_t70CC53B5D3DD2663B4FA4C73609D8D98EFDB2421*)(&__this->___updateRanges);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		V_0 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)L_4)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		__this->___m_UpdateRangesBatchStart = (uint32_t)0;
	}

IL_004c:
	{
		__this->___m_UpdateRangesSaturated = (bool)0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m1F20F6C75C2B1F09A3CDF201579A52C44E2CAFD2_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_1 = ___0_x;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		V_0 = (RuntimeObject*)L_3;
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		int32_t L_6 = ___1_y;
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
		return L_7;
	}

IL_0029:
	{
		int32_t L_8 = ___0_x;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_9);
		int32_t L_11 = ___1_y;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_12);
		bool L_14;
		L_14 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_10, L_13);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m3608055BEFF92A8B1E02C3960D5EC0DB6D0EAA4D_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_obj;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultComparer_1_Equals_m38EFDD8C102634417E24C322106E302D76D92AF2_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_11 = L_0;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_0012:
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		bool L_10;
		L_10 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_9: *(void**)L_9));
		return L_10;
	}

IL_0029:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_11);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_13);
		bool L_15;
		L_15 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_12, L_14);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultComparer_1_GetHashCode_m763329D490F675E16A666B61F387D5F323EEC697_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_obj : &___0_obj), SizeOf_T_t25D6ED7DCA825D17E8E43E3B0CA2E0AD9FECE196);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_gshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* V_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B2_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B1_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_2 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1__ctor_mEF1EB1BEB2B62059619A9D5173A4FCE5FE59C7F2_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___0_columns, SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* ___1_sortDescriptions, List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* ___2_sortedColumns, const RuntimeMethod* method) 
{
	{
		Columns_t487EAF3B634F6D919D58F1927099A8883964831B* L_0 = ___0_columns;
		SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* L_1 = ___1_sortDescriptions;
		List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* L_2 = ___2_sortedColumns;
		MultiColumnTreeViewController__ctor_m705FE6CEF71CB478F8FC5A951A337FF5A7B2F919((MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC*)__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_get_itemsSource_m0FEE1F09C7345F832CEE268DBA030C8B48AA0E57_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_set_itemsSource_m00398B664F385BF360325A450ED02EF7F1217564_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_SetRootItems_mC165F2F9CC0A77110F243D924CCD101C5E85C365_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3;
		L_3 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetItemForIndex_m24FA04020D9DB5B5265B6262A223B7F0C1D6C3C5_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		RuntimeObject* L_3;
		L_3 = TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC(L_0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultMultiColumnTreeViewController_1_GetParentId_mD961D2E3546DDB3B2206BF56CC9E62E64BE4FE94_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		int32_t L_2;
		L_2 = TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_HasChildren_mBE1315291BDB87D95FC31927A655E49DFA5B7D01_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		bool L_2;
		L_2 = TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetChildrenIds_m0194CDFB1B744C13CE7E3F234A7923F74A80D638_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_Move_m55164A409C0B824E2458CA1EBB94BD04C9B44B57_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_7;
		L_7 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		CollectionViewController_RaiseItemIndexChanged_mE12A41E7F1E29A78B60EDE6E02A9D3728D944E77((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_IsChildOf_m5578110A47C2FEF49D77F3483BA28A5883AB5245_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetAllItemIds_mD0F7EF4794F673CAE28004E8C9AC8895D869DE85_gshared (DefaultMultiColumnTreeViewController_1_t0AB237E3A16ABF695C0971BC0606DEA7DC479E5B* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultMultiColumnTreeViewController_1_get_treeDataController_mF31A778522F1CD7D1DFAAC05FB82CEEBC293874A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* DefaultMultiColumnTreeViewController_1_get_treeDataController_mDB47A4F064CBFF164239CF868BB935E4AF48917B_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* V_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B2_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B1_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_2 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1__ctor_mD82A3F301FC391E9C4B868B7FEF687E15A7F3906_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, Columns_t487EAF3B634F6D919D58F1927099A8883964831B* ___0_columns, SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* ___1_sortDescriptions, List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* ___2_sortedColumns, const RuntimeMethod* method) 
{
	{
		Columns_t487EAF3B634F6D919D58F1927099A8883964831B* L_0 = ___0_columns;
		SortColumnDescriptions_tDC3FDF948D96F26E0BCB2C971C6EDA1E02BAB1EA* L_1 = ___1_sortDescriptions;
		List_1_t75E66FBE18EAE33E2DBD8F2C48C54549332A997F* L_2 = ___2_sortedColumns;
		MultiColumnTreeViewController__ctor_m705FE6CEF71CB478F8FC5A951A337FF5A7B2F919((MultiColumnTreeViewController_t9FFDEDF1F2C2F5476271370488740DB7A8C70BAC*)__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_get_itemsSource_m3014D39CACB92A87B8EBD61F2D631F25545807C4_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_set_itemsSource_mBD91C2CF4E535ED5914CC200626851F26A26D9E9_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		((  void (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_SetRootItems_m16AF10D0A53B12BADB73620CDCDEC0992451E623_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3;
		L_3 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetItemForIndex_m8EB76F61313576AA8E82AB8F063D0C9A4A3AFD29_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t00BE912088ED26BF719AD2BEEA04F0F8D3849672 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t00BE912088ED26BF719AD2BEEA04F0F8D3849672);
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_0, L_2, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_3);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultMultiColumnTreeViewController_1_GetParentId_mA7FAE2E5FD0141501FEEFEFA9578C0F9BF6DDE33_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		int32_t L_2;
		L_2 = ((  int32_t (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_HasChildren_m55D6A2CF819D7FC5F312ACA9FAA9B80EDCF5EB16_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		bool L_2;
		L_2 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetChildrenIds_m6F787ABA5F8B8468FE1E740DDF44D629BD559F52_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultMultiColumnTreeViewController_1_Move_m749329237478F8277C929B5BD54C96E62B3DF281_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = ((  bool (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_7;
		L_7 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		CollectionViewController_RaiseItemIndexChanged_mE12A41E7F1E29A78B60EDE6E02A9D3728D944E77((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultMultiColumnTreeViewController_1_IsChildOf_mFDA0E743A2F237D1DC7AC4B8062D113C1EFEEACB_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultMultiColumnTreeViewController_1_GetAllItemIds_mB75CA248757BEF1F74ACC068896292759120BC09_gshared (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultMultiColumnTreeViewController_1_tC40FA6F7AF6429DC0BA099D2A6F5B784DF74933F*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* V_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B2_0 = NULL;
	TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* G_B1_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_2 = (TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		TreeDataController_1__ctor_mD3A1E315AE26FC698CD393C0859C66D9B8BF0F25(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_get_itemsSource_mD5E0009C4175B06DA4D3841F020E1228BAB1DC1F_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_set_itemsSource_m990048927FAD48D4BE8FDD2592E0C4F99CFECC2A_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_SetRootItems_m46AC656FEBC2C1FB661CC09B9995E68E83C6812B_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_3;
		L_3 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		TreeDataController_1_SetRootItems_m6F7F0EB984FB0EF74568F95CBA33ED5E1F2F3A8E(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetItemForIndex_m51774EE1EAD0593BB5AF57EC6D82361FBD11531D_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		RuntimeObject* L_3;
		L_3 = TreeDataController_1_GetDataForId_m572DC40BD7C71F7401122216BD7A18BFA94679FC(L_0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultTreeViewController_1_GetParentId_mDA7CEA92A43CD8EF80F5F0D0163171ABFC5834EE_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		int32_t L_2;
		L_2 = TreeDataController_1_GetParentId_m33B7D7BB1E817DF15E621F535C6E7EE3290A73D5(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_HasChildren_mB043EC1AC806DFDF4AFCD8F904F93FBF22D7C1DC_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		bool L_2;
		L_2 = TreeDataController_1_HasChildren_m2978AF4CB8A5BDDE630F44B9DE471D892C4340BC(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetChildrenIds_mCD860DA6AF532B8BD7FE27462C3D775259E564E1_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetChildrenIds_m0C39B4E828DE3829426145460DC781C94E340B93(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_Move_m3428B20395A4FA811B2B7622F933BC23EEE2ACD8_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_7;
		L_7 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		TreeDataController_1_Move_m1D23573D5813A158772DAB8463B815F342129BA1(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		BaseTreeViewController_RaiseItemParentChanged_m3D91BCB67E4577C1373C9A8A9122C8D7F0457322((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_IsChildOf_mAF258044FD18F70420B2C73D4C80CD98BCBFDB67_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = TreeDataController_1_IsChildOf_m05D9AEDF18CD63F505385C5586B346B59103DD25(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetAllItemIds_mC4A7FF2401C847EC7F3F2F95CAB289808E3BE69B_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tCB161E2BF359B123532DAB4C774AB4C11AB29D96* L_0;
		L_0 = DefaultTreeViewController_1_get_treeDataController_mBC7530EA0F5C02E6863FCAFA5544122B9990198F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		RuntimeObject* L_2;
		L_2 = TreeDataController_1_GetAllItemIds_m61EF8ED75DD1C3A82895DCB9F39050770BEDE3AA(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1__ctor_m5FA5A68E68E1486756E09EB2EC660B072666BE61_gshared (DefaultTreeViewController_1_tA28EE955C3FA4A6CD739A872CAAE2DF78097BDF7* __this, const RuntimeMethod* method) 
{
	{
		TreeViewController__ctor_m0BA584E2BFF10F466D94E3ED33E4FB9840907AF2((TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* DefaultTreeViewController_1_get_treeDataController_m7E9E89E1B23E11E0E80778544AED21FCA6CBF54F_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, const RuntimeMethod* method) 
{
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* V_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B2_0 = NULL;
	TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* G_B1_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0 = __this->___m_TreeDataController;
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
		G_B1_0 = L_1;
	}
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_2 = (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3 = L_2;
		V_0 = L_3;
		__this->___m_TreeDataController = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TreeDataController), (void*)L_3);
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_get_itemsSource_m71A06943FE19EC53AA0A693BFCA3FEC2D3E5B771_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_set_itemsSource_m397219E85DD9564F50C85B2B01A91C6EB41C9BF2_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		((  void (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_value;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		RuntimeObject* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_5 = V_1;
		((  void (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		goto IL_004c;
	}

IL_0030:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD6F226D28002C2F1DC22087B3E6B50E09BC4F4A8, (RuntimeObject*)L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_8, NULL);
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_SetRootItems_mFBC214CF0F4E0C67B0114A7D9051268B96D00E2F_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, RuntimeObject* ___0_items, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_items;
		RuntimeObject* L_1;
		L_1 = BaseTreeViewController_get_itemsSource_m255C08213C616F6B7B7988736AC7733F3C3C2B6B((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002b;
	}

IL_0010:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_3;
		L_3 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_4 = ___0_items;
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		CollectionViewController_RaiseItemsSourceChanged_mFA839DFF187864594DA98808C07A4358060CD734((CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, NULL);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetItemForIndex_m3388DAB31BA3720C4F56BEED24E87A70619E0241_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t70CA3447B7982C0A826E2C517DFA26A303EC7378 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t70CA3447B7982C0A826E2C517DFA26A303EC7378);
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, (CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768*)__this, L_1);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_0, L_2, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_3);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultTreeViewController_1_GetParentId_m91D4EF4603F4E16AEB6DA0D366AC81142A60BEAE_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		int32_t L_2;
		L_2 = ((  int32_t (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_HasChildren_m7099101A6CE7573FFDE1160588465D7BE7642BEC_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		bool L_2;
		L_2 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetChildrenIds_mC3602866202DF0714EAE6574A5A3CE531ED6D353_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_id;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1_Move_m6072DEBDF2580333A0B88C4C3645D7826B513582_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_id, int32_t ___1_newParentId, int32_t ___2_childIndex, bool ___3_rebuildTree, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_newParentId;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		goto IL_0040;
	}

IL_000b:
	{
		int32_t L_3 = ___1_newParentId;
		int32_t L_4 = ___0_id;
		bool L_5;
		L_5 = ((  bool (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0040;
	}

IL_0019:
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_7;
		L_7 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_8 = ___0_id;
		int32_t L_9 = ___1_newParentId;
		int32_t L_10 = ___2_childIndex;
		((  void (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		bool L_11 = ___3_rebuildTree;
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		BaseTreeViewController_RebuildTree_m62236909D5F390B5E64E3A61FF2765A11C3A9ADB((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, NULL);
		int32_t L_13 = ___0_id;
		int32_t L_14 = ___1_newParentId;
		BaseTreeViewController_RaiseItemParentChanged_m3D91BCB67E4577C1373C9A8A9122C8D7F0457322((BaseTreeViewController_t8359BFF7DA01FF2425D81CB17628B4B43AC6E5C0*)__this, L_13, L_14, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultTreeViewController_1_IsChildOf_m998BC86C72F8779A402B14C89999F49007091CA4_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, int32_t ___0_childId, int32_t ___1_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		int32_t L_1 = ___0_childId;
		int32_t L_2 = ___1_id;
		bool L_3;
		L_3 = ((  bool (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultTreeViewController_1_GetAllItemIds_mFC937CE83D745461C0116D83CD7B4BD95C070C5A_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, RuntimeObject* ___0_rootIds, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* L_0;
		L_0 = ((  TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E* (*) (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_1 = ___0_rootIds;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (TreeDataController_1_tF42ED79D54F18D58AE50474BB489E97D5A1FAB4E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTreeViewController_1__ctor_m45900DF251FCCA1508967C774740F0DA99D6F0AC_gshared (DefaultTreeViewController_1_t801E81FA573E9777E5EA48EFDC9BBE4068FDEFAD* __this, const RuntimeMethod* method) 
{
	{
		TreeViewController__ctor_m0BA584E2BFF10F466D94E3ED33E4FB9840907AF2((TreeViewController_t2A6E23D78D68A63B7DBFE6AE3B40DBD847F5034A*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DelegateProperty_2_get_Name_mEED824A0D241861F8FC2831C7A27631DDE0459B0_gshared (DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_2__ctor_mCC0F3ACE346BA3B05952715FFDB8B276B2F0B6FA_gshared (DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* __this, String_t* ___0_name, PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* ___1_getter, PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* ___2_setter, const RuntimeMethod* method) 
{
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* G_B2_0 = NULL;
	DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* G_B2_1 = NULL;
	PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* G_B1_0 = NULL;
	DelegateProperty_2_t01193E1768A8EAF3454CBFF6D25951EB24A714D4* G_B1_1 = NULL;
	{
		((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		String_t* L_0 = ___0_name;
		__this->___U3CNameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)L_0);
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* L_1 = ___1_getter;
		PropertyGetter_2_tD8230F45A3604AE20647869510A7F5AB8FD35963* L_2 = L_1;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0020;
		}
		G_B1_0 = L_2;
		G_B1_1 = __this;
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2A57163F65B0EE8A44DC4359CBCD332A446966AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0020:
	{
		G_B2_1->___m_Getter = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_Getter), (void*)G_B2_0);
		PropertySetter_2_t797AB5E970C439127F7C26A99ECABAEB82F8DDDA* L_4 = ___2_setter;
		__this->___m_Setter = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Setter), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mED6D481F16E8597DF1F8FD3F1A173ED8F0D4D8E9_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* L_0 = ___0_dictionary;
		RuntimeObject* L_1;
		L_1 = ConcurrentDictionary_2_GetEnumerator_m12EC3080C7512F05099338965FD8626ACB343320(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		RuntimeObject* L_3 = __this->____enumerator;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_4;
		L_4 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m8D259867AB5E2DC9BB7842AF3E12D610D928B673_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_m7EC80AD0D446500C9824A6B681B418A5D0684717_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____enumerator;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_inline((&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m7501DF54C4E255F50E90B671CD323B1CD34C65C8_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = DictionaryEnumerator_get_Entry_m3D603D6F0FFDE77F0366C90242C43563CEBB3257(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mB31588BC8CD43AFACC8AA4951D86F21B677419CB_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mB5B330221AC0A9B73F3C3D3297A3E499C6353D10_gshared (DictionaryEnumerator_tBF822449C5FD8462D9DB8BF961E29F69C2F913A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator__ctor_mE63FC46E53E46535C7DD59172E65E42BD570D5F3_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* L_0 = ___0_dictionary;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____enumerator = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enumerator), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB DictionaryEnumerator_get_Entry_m6EB9062A7B59C89B18B6B61214B707BE4AA44086_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_2);
		RuntimeObject* L_4 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_4, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_6);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Key_m0990C99F94EA95C5392CA5485B4BFD344BAED6FE_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t41C513A174F5F1C2B7E599C2ECFAF69540C6C9C7);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Value_mD790494FF5E50257030CC045B516A70513EE98A8_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5));
	const uint32_t SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t9F4D688327705ABBE7AC2FE14F9F923B56192632);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_1 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_0 = alloca(SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	memset(V_0, 0, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_0, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_1);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_KeyValuePair_2_t7B799B8ED9C86E8E9BC5354DE4FDABD0184FF6B7);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_0, (Il2CppFullySharedGenericAny*)L_2);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEnumerator_get_Current_m84A050320869FF83584304FF56D3BA05368095F2_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = ((  DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB (*) (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryEnumerator_MoveNext_mCD670B5AE8886409051790844BF74853977F5846_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEnumerator_Reset_mBAC7702D03B6B7A6496AA713EC06CE6162127B2C_gshared (DictionaryEnumerator_t50968DBECB732082714E6294722DC51777C8A22A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____enumerator;
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DictionaryPropertyBag_2_get_InstantiationKind_m641573CD1323CD15A7F099323BA1B2546F063182_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* DictionaryPropertyBag_2_Instantiate_m7778199CDF045586687AB5A9F377D8FB3786C1E0_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_gshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC25FF6793652922985BFAA4DC8F11A4B0B090CF8_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA647361FB5882A25C765F596760030CB84824C97_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF092F25D416129BCC755E245CEC88345A7E17540_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m18EC2EB0F8F881C57774CFDDE6414E33F26F1539_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_5;
		L_5 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1E17FF0178C889BBACDC95DECEB4EF50BB31F65F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* Dictionary_2_get_Keys_m48AD1CD8EB0B41F2D58FDFA10B92A85DB9933FF2_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_1 = (KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_mEFFF76B810FF7EC07A4071049F088B68FFD484C6(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t90C2F9D22B44E6B189DB7B61265585A859F93123* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* Dictionary_2_get_Values_mC54912268568667F725754EBE2356518610AE832_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_1 = (ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m1B8096B8C7A5D20948283B1AD3A1C2B6032B93B7(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t5221C67954BD6EEB65BAE1FFD366E7538FDA0E1F* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m04A4017ED4A293A5D3A2164CBCD6A6CB8BCCA116_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_6 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4EEACDC46AD23A0E7FA39004DBEDA017B8687FAF_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mA39A0BE52118902D1EC9ED983321B0D8B415DF24_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4DB7A9F0B32B7B8DD0D41B3F6611E7B03B9436CA_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0;
		L_0 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3;
		L_3 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		RuntimeObject* L_7;
		L_7 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_9;
		L_9 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m07051E2711DEDC818DC462838A3D89CDD0959D9A_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m2E1A55234F27A4F98C337C2202E8241F8E42ED04_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_0 = __this->____entries;
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = V_0;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003b:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->____count;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_2;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_12 = V_0;
		int32_t L_13 = V_3;
		int32_t L_14 = ((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_15;
		L_15 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_16 = V_0;
		int32_t L_17 = V_3;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->____count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_24;
		L_24 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_4 = L_24;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_28 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_0;
		int32_t L_30 = V_5;
		RuntimeObject* L_31 = ((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___value;
		RuntimeObject* L_32 = ___0_value;
		bool L_33;
		L_33 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(8, L_28, L_31, L_32);
		if (!L_33)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_1;
		int32_t L_15 = V_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_17 = V_1;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 Dictionary_2_GetEnumerator_m1C2674F51BACC5E23084DA0374A70B0EBB20CB1F_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mF90BAD88410B5EEFD79B8D5A86638D03C61B08AC_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mE2783EE614A6743CAC1102BE510AF8978CE8C547_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_6;
		L_6 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = (KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)(KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_15 = V_0;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_6;
	memset((&V_6), 0, sizeof(V_6));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_19;
		L_19 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_2;
		int32_t L_21 = V_0;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_2;
		int32_t L_47 = V_0;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_10 = NULL;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_11;
	memset((&V_11), 0, sizeof(V_11));
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_24;
		L_24 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_0;
		int32_t L_26 = V_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_31 = V_0;
		int32_t L_32 = V_5;
		RuntimeObject* L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value), (void*)L_33);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_35 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_51 = V_0;
		int32_t L_52 = V_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_57 = V_0;
		int32_t L_58 = V_5;
		RuntimeObject* L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value), (void*)L_59);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_61 = ___0_key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_94 = V_10;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_95 = ___0_key;
		L_94->___key = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_94->___key))->___Item2), (void*)NULL);
		#endif
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_96 = V_10;
		RuntimeObject* L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___value), (void*)L_97);
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m40CC8AF5495433361FFFBAE6BF3EB27D6A9C9E05_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m7165BFCECD406FEF2F6EA0DCDDF34B2450CA12E4(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_19 = V_3;
		int32_t L_20 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_21;
		L_21 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_22 = V_3;
		int32_t L_23 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_24;
		L_24 = KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_25 = V_3;
		int32_t L_26 = V_4;
		RuntimeObject* L_27;
		L_27 = KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mDD9B32011F99913F7C26C8CE44D64E35574D047E(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m9C011EE1497A08BE38724E92602B8E81D73D2212_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2D68A88747287ED742784209B25878766AF538DB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_1 = NULL;
	int32_t V_2 = 0;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_3 = (EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)(EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_15 = V_1;
		int32_t L_16 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_17 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m955C32400B1E624FFFA1E18F46FFBBB5963705B9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_20;
		L_20 = EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_21 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_22 = L_21->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_25 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_26 = L_25->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_41 = V_4;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* L_42 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(&L_41->___key);
		il2cpp_codegen_initobj(L_42, sizeof(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A));
	}

IL_00ff:
	{
	}
	{
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_43 = V_4;
		RuntimeObject** L_44 = (RuntimeObject**)(&L_43->___value);
		il2cpp_codegen_initobj(L_44, sizeof(RuntimeObject*));
	}

IL_0113:
	{
		int32_t L_45 = V_3;
		__this->____freeList = L_45;
		int32_t L_46 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_47, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_48 = V_3;
		V_2 = L_48;
		Entry_t9E54CCBCBF389A3EB228FFF39B2963CCB6661448* L_49 = V_4;
		int32_t L_50 = L_49->___next;
		V_3 = L_50;
	}

IL_0142:
	{
		int32_t L_51 = V_3;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m65316B5BBBCA1E7FA03561A97E22F2860B92FDF5_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject** L_3 = ___1_value;
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		RuntimeObject* L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(RuntimeObject**)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		RuntimeObject** L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mCFE3B0F6F63ADFF26FB4623C8EAB4B8920D257EB_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mC32565FBB5F884CC065F1EE7E2BE4F250DF6AECD(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m08F8980BA41D175D9D5755E520ECEC499FAECF65_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8B6070F6B012031518CAF9D85C4AA0880199C5E9_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m3F00D474C864259E96AE8A127C47D3AA12CBC787_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC9C0153BE4100526AEB467BE880EFBD8FB00D56F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tF0A0AABC82DE189C18BE91E0D9CC0C01C2449460* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m154D895C0AEC517A3F2A7C886C23633368AFCFC3(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_25 = V_2;
		int32_t L_26 = V_3;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_30 = V_2;
		int32_t L_31 = V_3;
		RuntimeObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_29, L_32, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_41 = V_6;
			int32_t L_42 = V_7;
			int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_47 = V_6;
			int32_t L_48 = V_7;
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_49 = ((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_50 = V_6;
			int32_t L_51 = V_7;
			RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m7D13D8559B135D9A99FBA279CF4C2BDCB990CCF1((&L_53), L_49, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_54);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m904B76BE6F9CA0FC90A3E300E03FACB2CD5C8BDE_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m106E312F89A7FF2E8CF9BF88DA09FD2AD89E9652_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m578F26947EC223AF042037DF6D88F725A17C1CD4_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m934C298F9973F16F2A755D65E374A6EE37302D63(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t520AA07AED73E0A49370ECDF320E581859F860A9* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		return L_7;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m36BF55AAF072CC8471B04911DF96474EA3BC8825_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m4C8CF6E01F44588133C83CC2DF0C9F47F1644BD0(__this, L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mAA97B6F0E3AA42F45BBCE847BCADC2D626F21112_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mBADA2F1594D5A4B02B457440963FC7AFCDCB6861(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m784FD7E9B0EA6F7F56F90480CDDE24E7FFBBC46D(__this, ((*(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)((ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)(ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE7E563DCFA8A83D43D1077B358C6DC613F78738B_gshared (Dictionary_2_t75B3851683946D9E81C88EB6AE173C2857737B27* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m283889D2E2926F56ECD2EEA3767F2A21F0488164((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t4C98DC0014F7B9B79F0AE8FCB4EC3987119C58D9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m59A7EFBF7B0FC8B63DBAC6B03A6CB6E57A5F87A9_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0F1AB56ECA1606FE8A53BC82796BD02C02AA1E34_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF0A2E435DFBAD656D52EE8728441B6C97D43F2D9_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6289671CF9C2AE755A8ED3278FE9CA56171DEF17_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8144453FACA7DFE3A4D1B31C9F87598477D841EB_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* Dictionary_2_get_Keys_m51677F3B9C4444ABDCE7161B61DB5210D2378079_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_1 = (KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m04155234C1C90297F973F2DD3B892015CF860306(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t1C0270D8CA819EF870A1AB2BDF71FF7D9967AC6C* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* Dictionary_2_get_Values_m74C6223AC7113C9B84D4B02CA148920B7DC43C69_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* L_1 = (ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m6F4F3F916020065EFA67C145A6EDA70F624A5384(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t1A840A8972E8AE9C8564CF9D1EEC5519261BAFA9* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC Dictionary_2_get_Item_m7FE06CA7DF0622D9DEE2DCA26996DE20D0746105_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC));
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE31EBE06CE0AB7973D3FF1BBEF932B812E71F03A_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1;
		L_1 = KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m614BE4328C148EBAC4896C3D75540A989D0DE9F2_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_3;
		L_3 = EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_7;
		L_7 = KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mC6F5CA7050C579B5D38CE75E318EC4F2DEE960C1_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_3;
		L_3 = EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_7;
		L_7 = KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2693A3949C762703B337E2BC4BE5CC025D849694_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mE6119A0F542C166EC5BE4529BF6098117D5CF8DD_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_0 = NULL;
	int32_t V_1 = 0;
	ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_6;
		L_6 = EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_7 = V_0;
		int32_t L_8 = V_3;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_17 = V_1;
		int32_t L_18 = V_2;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F Dictionary_2_GetEnumerator_m22DA3CD90EB07F7C718497BBFF48C1FA052D9D55_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m7B8442FC6D45FEA025D708CAC58C738960F22E82_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m8F154E032EE72EE0A36FE4E0496905346CF80430_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_14 = (KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*)(KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_15 = V_0;
		Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_5 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)(EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_31 = V_0;
		int32_t L_32 = V_5;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_57 = V_0;
		int32_t L_58 = V_5;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_96 = V_10;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m4E0339D1C754720275A6A4934959C5A5CC367387_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mA242B14841D13E405394EAB63CE60D83F0F5251B(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_25 = V_3;
		int32_t L_26 = V_4;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_27;
		L_27 = KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m2E83AB53AA4F67FD870D568B7E0F5269F3C9EF2F(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m49A6E36229F30CC88FA8BD6C75190330D88E7D7D_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD4C4C781B27ECB1928BEBC290BFC10D191798670_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_3 = (EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)(EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_5 = __this->____entries;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7EF408E5FE0D4F747EC426DE23450F54F779E67A_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t36D828B685CBBFA5F4D6FBBA12A076C10A21AB3C* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m860D445B386D5BA2AE21A6B60439EFC39B9E2A07_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC* L_3 = ___1_value;
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF4B8E73BB789A5AB56B8BEDA4F33674B52C332A8_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, int32_t ___0_key, ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m099201DE2E21B09B51345FF7EF0960AC8BD70E0E(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m30E4598809515FAF33D59BC09883EAB82AAD1DAE_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m137070BEE38BF2BABE2721EFDFDE3A71F36D31DE_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m400327205767918A55B346926B0A0E2DF6C80F55_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m4816BCB730A3F3AF171687270CB4619FB3C44E1C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t65371EF32BF577225115397A64E346AE93FE927C* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m99769053B2973A908BB5E1F3B7547EA43A30C52B(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_30 = V_2;
		int32_t L_31 = V_3;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_49 = V_6;
			int32_t L_50 = V_7;
			int32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_52 = V_6;
			int32_t L_53 = V_7;
			ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mE1295E1EB09A4C3624F079C94EE6A9ED1D66EE26((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mCF29C2218E6DE77AB4C54CD3B862EEC5AED93582_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m79A9BCF1D58852835CD84DC50F7B19104B5FD0D0_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m233C2AF87E76D637D1BCCC2496D9C58FFCDD4781_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mD8B748D3A92124B5F9D01A9C0557BEEB772BD673(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t103180204D286AA5897443F7674A3782622F8744* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m583833307F5DED869F8195A64580CD04EAA71510_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC_m1CB4F3E56295F4B5567E64280A4ACECF3FC671D6(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mA2D31862FA96D8794126CAA7B1E178B08B6BB566(__this, L_3, ((*(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC*)((ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC*)(ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mCA0B5A2672FEA304CD418B553276B650FDC7D015_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m078096C30896035127EB311E1323AD6D04F7B024(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m39C81870CD15FA7F0BD586D3BCF55C5B1D7D4005(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m0B0ACC95E2DC87125EFA4C17CD2F32454F489864_gshared (Dictionary_2_t4D7978E5F7E236382AF32684305AC72452D49043* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m31B9A15C37D5A017654810B5B55B5C415CBAF885((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tB7C64CFA6D1E8072BF063A54A9F6CB6B8021170F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF44352189C213E301670BCDA03E8864D98CBC16_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m88A9D12036C80CB033298F11A288715B9127F81A_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7B9030C930A4ACE472083DEEF86A3CF0CA37D40F_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEDCF6D7DF49A4332BEC24CFBE3157E2598FC54F5_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m779242666134EFB1D49EC3D16454815C845F0917_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* Dictionary_2_get_Keys_mCA75818A897B564BAA7874AA2D7F8E257A06BF0B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_1 = (KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m6454D86CFBA0EE602C78B5A4BB6612FE16D59D00(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t27A4E9C75C7D4062FA62AB82C4F9EBE443BD465A* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* Dictionary_2_get_Values_mA9AAA6A442AC42421A6D1627081EC9886220C9B2_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* L_1 = (ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m6BB7131D664E022D2E39E555E28E3E1E6675325F(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t155E307D9195A7BE8C4DE53C867A8CEBA24805BF* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 Dictionary_2_get_Item_mDBD227A6DCB15DFCFCE56FF91917592519DC25EE_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m91ED4428222F628232971AF05FB7F78EC3F046EB_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1;
		L_1 = KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m41A535BB3AA16BE4EB22975CF60C24CFD322A6A7_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_3;
		L_3 = EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_7;
		L_7 = KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mA2362FD46C17F2D1A4B93EB8AB3DD739C1289011_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_3;
		L_3 = EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_7;
		L_7 = KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m43644FC8C5F85236223BAB42745A03B62371A088_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7BB14CD563E10A97497C49F092CC2D3E530F43D9_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_0 = NULL;
	int32_t V_1 = 0;
	TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_6;
		L_6 = EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_7 = V_0;
		int32_t L_8 = V_3;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_17 = V_1;
		int32_t L_18 = V_2;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 Dictionary_2_GetEnumerator_m20680CE0696850F2F87A0FE24A96103B26B64EB1_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8A3103D106B48F543372C608E0E88A902B490D92_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m2B5803060A3008B1796980A1AD7EEFBD957D4C0B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_14 = (KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*)(KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_15 = V_0;
		Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_5 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)(EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_31 = V_0;
		int32_t L_32 = V_5;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value))->___m_Children), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_57 = V_0;
		int32_t L_58 = V_5;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value))->___m_Children), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_96 = V_10;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_97 = ___1_value;
		L_96->___value = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_96->___value))->___m_Children), (void*)NULL);
		#endif
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mA10B2AAFE70FC180E181DB8C4AA07AD2015F2B5B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m55DBA94CA01715093AF33B0FF44EB7AFD5AEAB36(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_25 = V_3;
		int32_t L_26 = V_4;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_27;
		L_27 = KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_mFE603469AB888F7C8EF9DE3392E9461867390BDC(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m6D62C4293D7571986913FF1E505B0090DF1D96B8_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mDA2C2B2AA9D036744EA1510458F902ACF49E6658_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_3 = (EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)(EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_5 = __this->____entries;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0ABB3BBBBDA393DEDC19A0F0943D8AF9E58F785B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
	}
	{
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_41 = V_4;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_42 = (TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)(&L_41->___value);
		il2cpp_codegen_initobj(L_42, sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
	}

IL_0113:
	{
		int32_t L_43 = V_3;
		__this->____freeList = L_43;
		int32_t L_44 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_45, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_46 = V_3;
		V_2 = L_46;
		Entry_t3C43C931209AE339471E46F5C5C78DFFAD543BC9* L_47 = V_4;
		int32_t L_48 = L_47->___next;
		V_3 = L_48;
	}

IL_0142:
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9A36DBD18366FC1E845B485401B66A846B96103E_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_3 = ___1_value;
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)L_3)->___m_Data), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)L_3)->___m_Children), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6D4D58FA2DCDB91F5AD8AA61953D28DBD73E1DF5_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, int32_t ___0_key, TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mAC235DEF75BD8560A1598E0744B7CC55359D6B4B(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mE5A34ADBCA667FAE11A0320D4EF6D33BC9FD40F7_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mEDAEFB5BC29EE059E6ABB1181415F84B5DB54299_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mC89F377B9C22C4689FA374FB2F766DDD27DBC42B_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mB6EB1F2269F19C3B1119FD6DDA8B51155F7BE2E3(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4A52453D810EE41FD9E873C0FA5C9F4500832CAC* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mB0FEE83321F8E70FC1A5D1847B0EBFA5507A67E1(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_30 = V_2;
		int32_t L_31 = V_3;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_49 = V_6;
			int32_t L_50 = V_7;
			int32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_52 = V_6;
			int32_t L_53 = V_7;
			TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mFF17374CE90C7FE231E65EAFF2287053FA1C9AC3((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m01BDFC129DFFBB226B2FA7677A55FA3AE7541DD4_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mB8233567B1913DB15FF31976DD4C98D1A6381809_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m0AEC2FDE585FCD73D60143064015E7347EAF13B8_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mB1F48D02466EA489E158922AAE99F45DB56C9FB9(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tD89AF257A311DB3C41DA1BEE9D8F0B2E5EA7E86E* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mAF23364001EC1FD490C24A65A8E74F5BBC523DC6_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4_m66F50948C6CBCA9CDB992356871C2622CA4ED150(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m6ACCDAA15A3D3B734405727DF8AD5AD09BA14333(__this, L_3, ((*(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)((TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)(TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m7342F42FE0F456A0479060BFF4C6C3DDC10A790C_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mF8A281EB724D891BD9DF117DFFE2CC104420759C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m66D807D27A003B8D2BAC644F46131821F92790CE(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m51499F5113E0BB3E02B497BF3D3ED1809AB53B81_gshared (Dictionary_2_tC44035903CD447F30151D3470629A0598D22856F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m05BF5395EAD892FD0CB4F3C6C33C783FEBD9F063((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t0BE77930571D15651FEF9D9D38DBD8CCC82633B9 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m06B53BFC9A627FEE633CC1D4E73314B2CFF4B48B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mABB854F1C48C5B03B68B0A413FFB9656F9153025_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB9E422F28BC7E8D1302E87AA7D8AC6CFC64950EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2D9BC134A4251C2BCCD1C4F37FB14A2797C464AC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* Dictionary_2_get_Keys_mEDBAB5200E3CD3202D5F94E16F4DABEFF601DE5F_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_1 = (KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m40D5DDD959361A7EBD659D91722CA5F015FDB893(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* Dictionary_2_get_Values_mD84044BD83C2E0E89780F9F680E6EAEAADE6C21B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_1 = (ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m0031187CE28F9C4C0F5A5253924C7F751164DFA8(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mFEABB1F5BA99558C75E330D9F550473FD42C4DFD_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		bool L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		bool L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m88AD79C266834E07C99A1DE00A3297F9CD2B82EF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_1;
		L_1 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4462F865217031D600D34D4B5E5D0FA1BA7BDD7D_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		bool L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20A4B81A426018B486687D643DC8F024F7761D1B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3;
		L_3 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		bool L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		bool L_7;
		L_7 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE2925B42DE92CB95771AB4BADE479B7701671EB8_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mFCD8AD6170953392F984E4F03BF8DDF3A9EF11BD_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, bool ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_6;
		L_6 = EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_7 = V_0;
		int32_t L_8 = V_3;
		bool L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		bool L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, bool, bool >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_17 = V_1;
		int32_t L_18 = V_2;
		bool L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 Dictionary_2_GetEnumerator_mF19575B85A328947B27BABD4D104052B8F97FAC7_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m550E8A7B8C25429EBEA96D1DD7A0059CC7CB6CEC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m851F69AFEAA2AC71E6B21B50C7449A9D238049C8_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_14 = (KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)(KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_15 = V_0;
		Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)(EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_31 = V_0;
		int32_t L_32 = V_5;
		bool L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_57 = V_0;
		int32_t L_58 = V_5;
		bool L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_96 = V_10;
		bool L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m1838CBCE52011AAC0D92A0DED3DC325ABC7EDCC2_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m94BC29643E386903C4BD1E14BFA63BE82988EE68(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_25 = V_3;
		int32_t L_26 = V_4;
		bool L_27;
		L_27 = KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m15404AE1ED9C4C7CF89DAEAB8C5F3280C7D115EB(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m42FE4F09323494303E7B94C675C478CDCD657809_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8D3990FBC5AE9011BF34BCC6E1CC7C4AF00A84E4_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_3 = (EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)(EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = __this->____entries;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m516AA9DF9B695BC792DA56C301B4B069DE8E8F9E_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t740F919D5BA6D1FE201C58777E6EB966B35EE2EE* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		bool* L_3 = ___1_value;
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		bool L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(bool*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		bool* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(bool));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m6F6DB11A61412ED7F25E26A206C82AC9AA051756_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA1983D94216DE51D98CCD30629282266CCAFE97E(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m61FB537A534F56E61FCCFA872BC66EE438782242_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mF13795C1185ADAB240A05D015AECD78F34E7AE00_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBA9A0E8FB559E2D0FABD8C7A67552B9B885D383B_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mC916574C49D9A72EAB6F28C2C25FDB0614CE1C5E(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t00F1189D6659F8334E1D51B328A743FBD809CFB6* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m4E3689D9CDB6B183A42A99057BD45A0337224455(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_30 = V_2;
		int32_t L_31 = V_3;
		bool L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		bool L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_49 = V_6;
			int32_t L_50 = V_7;
			int32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_52 = V_6;
			int32_t L_53 = V_7;
			bool L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m593E407EEF9038F9C3E26BBE93DD316684F8BC7E((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4A26B359A35B4E503C91AE2CAFB686510830C118_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m34240AA3DCE5F7E234EA8F837E60359527F0FFBA_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m1934F06A0FDFB3B728445676E52E60E2DD61EF26_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mE1DD9E6586FB9B0C19DFB7EE7A3A9D8386D5D5D1(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		bool L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mD38B5DA87751A8D7F05EEB6939B74A8B202D60FC_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m92ED6D35EB625EDC96D474780EA2DBE2E0A38D3B(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48(__this, L_3, ((*(bool*)((bool*)(bool*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m2A20A4DC1297F17CA75CE556E9478BDCD7A24E97_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m93B719F22129BB5DA700F0F45427E1B8AD39C562(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5A6361833F0EDADF18530A95D2CF315A0319D8E0(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4747AFBC242472C9FA82C860560FF507CC992117_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2F677A930996556C63EB1D62D1929C1CF70BC4ED((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t06874F6DC6BF37190C0F4C5F3BB89A8F4D960969 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD0F72A65D09EB22E0C7720CD0E099163B97AA00_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF2BA68FB228BDE702DC230A810FDA729A76D4F3_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB13762744A0270086CAF9AB771351442D4224E28_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC6F01298B65357F322BEE96EE6AF4DC68C22B832_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9E8599FAC86967646C846E377B65E99DACA301F4_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* Dictionary_2_get_Keys_m28C150C463713CAC4B143915504A3B0597A68CDC_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_1 = (KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m757446853A294CCE931D15B5EB195BB85CBA306B(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t3E33C2EB31F1F1EF4ADE3FFFBB7D11E563134D04* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* Dictionary_2_get_Values_m689FE14DC17D484526F45F974E8DAE9122B08CCF_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* L_1 = (ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_mE012744172537231AC72E669D4FACA17961169E9(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tDBED056C1C402E2288827E2C0299F425713D8171* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Dictionary_2_get_Item_m49A20DF302FC15423AC5B1A834A2E2D66A4D1FC3_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		Il2CppChar L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppChar));
		Il2CppChar L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mCE1006F57A966B17A3F965FFBCC7544CEF873CE9_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		Il2CppChar L_1;
		L_1 = KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8139B845362053338B95E27DF5BBEF984CC85CA8_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppChar L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppChar L_7;
		L_7 = KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mCA71989B1F1402CF8B643015618FC85D45343133_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3;
		L_3 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppChar L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		Il2CppChar L_7;
		L_7 = KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m6BDE066E698E26ADC17687AFDD39842931DD0964_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7263044603C4DEE99F08FA1E6F44FF03B507DB97_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppChar));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_6;
		L_6 = EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_7 = V_0;
		int32_t L_8 = V_3;
		Il2CppChar L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		Il2CppChar L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_17 = V_1;
		int32_t L_18 = V_2;
		Il2CppChar L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 Dictionary_2_GetEnumerator_m6AB3286FC3E7FC8009B0AB9A451197694FAA20D6_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m0D14665D7E84AE8738DB040BE859821315EC5CBF_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m23E18C07EB51B0FD2C6FEDF9F5F447D11A9BB07B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_14 = (KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*)(KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_15 = V_0;
		Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_5 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)(EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_31 = V_0;
		int32_t L_32 = V_5;
		Il2CppChar L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_57 = V_0;
		int32_t L_58 = V_5;
		Il2CppChar L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_96 = V_10;
		Il2CppChar L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mEF8ECAF59AA42CE3D3A269911284B63EF9DFF37B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m6E2468392BEC356F498A9CC84BE3FEBCC80DBF0C(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_25 = V_3;
		int32_t L_26 = V_4;
		Il2CppChar L_27;
		L_27 = KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m65C453F1100868C469A8E4794AE6DCD76F6AA1A4(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA87ED035CFF022A4C8B2B4E6D720EEB965ACE893_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mAA34C20A111880E1891639C7022D73FED4DCE18B_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_3 = (EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)(EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_5 = __this->____entries;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3AF2AA4CD90907190268440760E0B2BBF55FAD21_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_t5A1DD43C826878A3853C7DF32E971C3D19805227* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD7A8027D1603995D29CED33BA6D2744225ACE8D9_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppChar* L_3 = ___1_value;
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Il2CppChar L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(Il2CppChar*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		Il2CppChar* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(Il2CppChar));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m5B32E99FB1B38FF9D422591B53CA714C9BCAD75F_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, int32_t ___0_key, Il2CppChar ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		Il2CppChar L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mE950A0E7B2E2D06C4599AB4713A970E9CF17C711(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_mD2EA2825812C20B3E1BA7FE2E75A258CCBF36788_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m856951A0B56F903C9592D3087A585CE09AE94D1C_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m973C3365D2059E55538E47CD0395CF7A0EBE24F5_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mF62BC02D0DF4F1E37D59F0D850131620B1FC4EEE(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t185EF1C22979145FBA3233EFBDF557ECDC08113C* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m4D5CDF938A4188C7DC837512841EF76830A24F2A(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_30 = V_2;
		int32_t L_31 = V_3;
		Il2CppChar L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		Il2CppChar L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_49 = V_6;
			int32_t L_50 = V_7;
			int32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_52 = V_6;
			int32_t L_53 = V_7;
			Il2CppChar L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_mF66F658CB0111305E284C4FD64B6FC4AD62EB5E3((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m89815F8FD7028F44F17A4A2DAF3443B5A497CC49_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mE6A186CA8935AD82FF029A56322475E1152ED441_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m3332DFAD89172F54DB55CE3C425F875B65298BAF_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m58E23BFC0BDBD1CC8AC1AD38C4A42190F024EF62(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t74939D41FA6DAF2CD4F7462D8AD016D48B99B8B7* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Il2CppChar L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		Il2CppChar L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m318AA83F8C30DDFD88939DFB6B0496BDF2C4B66E_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m824F1B8830C5D9946D6CDF297C66FABC7E1A94F2(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mCDEFF5FEE05146FB5547F35FA1AC420B6E750E5F(__this, L_3, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mBB1A1F78009CC0D30B633824428CA3BD1A3FEF7E_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mEA7DD561D5EC989C7D6E52D8242DAA108CC884CA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mFEF31529C09939D463552C900419ABCC2B05B354(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mE5CA18A4E6E24CC24BDA5CFD2CADA8E274315655_gshared (Dictionary_2_t760E9A9490B53715AE11CA76450386C19A39A0C8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m06C5648CD941BE733FD754C942F410D9C85C3583((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tCC8CFFFAC493A1DF0C77EE34CD9E2F5A669A0D88 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAF56F61CBD9F77BAFCE5E2591712018424E7DB22_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m32070AC27049F48388F0C7487840A63412E4656B_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m11ABF6F203AEB436DCD08F7FA1280F23A301EDD2_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97((int32_t)((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_5;
		L_5 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE78B97A95ADF0BF964CFD2F3B70BE603AFF8F1CB_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* Dictionary_2_get_Keys_mB64A9185E49CABD8BF51D2289F8EB04EBB87C331_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* L_1 = (KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		KeyCollection__ctor_m9BEB74E540B5227D9158B950F96B2D55EA20E8BF(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* L_2 = __this->____keys;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* Dictionary_2_get_Values_mAE21DED790C614A179EA5E708FCDD9CDEC2F3E02_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* L_1 = (ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		ValueCollection__ctor_m027D33CB7E5F90E2A8083C0264FFAC4F6A17E288(L_1, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* L_2 = __this->____values;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m8B87B804DF06D6420B1DCE028675738AA8F3310F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = ___0_key;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_7);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_8, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		int32_t L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A(__this, L_0, L_1, (uint8_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A(__this, L_0, L_1, (uint8_t)2, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mFCDC4362DAC6FD22B833B66259CAE6BB665EE15E_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ___0_keyValuePair, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mCA81C2C0CD6BAD9B80340962A0A04324250A34AE_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m779A3D9C98E3829A07D68770CA8270930E4AE046_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 ___0_keyValuePair, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3;
		L_3 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		int32_t L_7;
		L_7 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9;
		L_9 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline((&___0_keyValuePair), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		bool L_10;
		L_10 = Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m9821889E928BB7EAEE9A7E81EDFC59651F7CBDD0_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0041:
	{
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mFAF6C96BF35F553B575E0A2CBE74C283BF39E7D9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_3 = V_0;
		int32_t L_4 = V_3;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_7 = V_0;
		int32_t L_8 = V_3;
		int32_t L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		int32_t L_10 = ___0_value;
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_2 = ___0_array;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_3 = ___0_array;
		int32_t L_4 = ___1_index;
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_0027:
	{
		int32_t L_6 = __this->____count;
		V_0 = L_6;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_7 = __this->____entries;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		___1_index = ((int32_t)il2cpp_codegen_add(L_13, 1));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___key;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___value;
		KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 L_20;
		memset((&L_20), 0, sizeof(L_20));
		KeyValuePair_2__ctor_m3C86D5D8BB0D1118068E83ED43D64F4E64E7C221((&L_20), L_16, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189)L_20);
	}

IL_0071:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0075:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB Dictionary_2_GetEnumerator_mE1C266F4F6B385185FEFFB31F9A0ED0B23549568_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12BE341A8649D6FAA2500F44C227A5A9649642FA_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m19669D2C8CDE68418838D9DAFFE944C970783CF0_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_6;
		L_6 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____buckets;
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_13;
		L_13 = Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_14 = (KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C*)(KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 33), (uint32_t)L_13);
		V_0 = L_14;
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_15 = V_0;
		Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA(__this, L_15, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___0_info;
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_17, L_19, NULL);
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		goto IL_000e;
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_8%((int32_t)(((RuntimeArray*)L_9)->max_length))));
		int32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
	}

IL_0066:
	{
		int32_t L_13 = V_0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_14 = V_2;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_15 = V_2;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___hashCode;
		int32_t L_18 = V_5;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_19;
		L_19 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_20 = V_2;
		int32_t L_21 = V_0;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_19, L_22, L_23);
		if (L_24)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_25 = V_2;
		int32_t L_26 = V_0;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_0 = L_27;
		int32_t L_28 = V_3;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_0066;
	}

IL_0110:
	{
		RuntimeObject* L_31 = V_4;
		int32_t L_32 = ___0_key;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_31, L_32);
		V_8 = ((int32_t)(L_33&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		int32_t L_37 = ((int32_t)(L_35%((int32_t)(((RuntimeArray*)L_36)->max_length))));
		int32_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
	}

IL_012b:
	{
		int32_t L_39 = V_0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_40 = V_2;
		if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_41 = V_2;
		int32_t L_42 = V_0;
		int32_t L_43 = ((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
		int32_t L_44 = V_8;
		if ((!(((uint32_t)L_43) == ((uint32_t)L_44))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_45 = V_4;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_46 = V_2;
		int32_t L_47 = V_0;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___key;
		int32_t L_49 = ___0_key;
		bool L_50;
		L_50 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_45, L_48, L_49);
		if (L_50)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_51 = V_2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___next;
		V_0 = L_53;
		int32_t L_54 = V_3;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_55 = V_2;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_57 = V_0;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_5 = (EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA*)(EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tA212E7034D981AC2F7E219C600769EE485919684* V_10 = NULL;
	int32_t V_11 = 0;
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
	}

IL_002c:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		int32_t L_8 = ___0_key;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%((int32_t)(((RuntimeArray*)L_13)->max_length)))))));
		int32_t* L_14 = V_4;
		int32_t L_15 = *((int32_t*)L_14);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		RuntimeObject* L_16 = V_1;
		if (L_16)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
	}

IL_0091:
	{
		int32_t L_18 = V_5;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_19 = V_0;
		if ((!(((uint32_t)L_18) < ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_20 = V_0;
		int32_t L_21 = V_5;
		int32_t L_22 = ((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21)))->___hashCode;
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_24;
		L_24 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_25 = V_0;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = ___0_key;
		bool L_29;
		L_29 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_24, L_27, L_28);
		if (!L_29)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_30 = ___2_behavior;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_31 = V_0;
		int32_t L_32 = V_5;
		int32_t L_33 = ___1_value;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___value = L_33;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_34 = ___2_behavior;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_35 = ___0_key;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_36);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_38 = V_0;
		int32_t L_39 = V_5;
		int32_t L_40 = ((L_38)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_42 = V_0;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		goto IL_0091;
	}

IL_0187:
	{
		int32_t L_44 = V_5;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_45 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)((int32_t)(((RuntimeArray*)L_45)->max_length))))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_46 = V_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hashCode;
		int32_t L_49 = V_2;
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_50 = V_1;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = ((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52)))->___key;
		int32_t L_54 = ___0_key;
		bool L_55;
		L_55 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_50, L_53, L_54);
		if (!L_55)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_56 = ___2_behavior;
		if ((!(((uint32_t)L_56) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_57 = V_0;
		int32_t L_58 = V_5;
		int32_t L_59 = ___1_value;
		((L_57)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_58)))->___value = L_59;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_60 = ___2_behavior;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		int32_t L_61 = ___0_key;
		int32_t L_62 = L_61;
		RuntimeObject* L_63 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_62);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_63, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_64 = V_0;
		int32_t L_65 = V_5;
		int32_t L_66 = ((L_64)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_65)))->___next;
		V_5 = L_66;
		int32_t L_67 = V_3;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_68 = V_0;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_70 = __this->____freeCount;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_71 = __this->____freeList;
		V_8 = L_71;
		V_7 = (bool)1;
		int32_t L_72 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_73 = __this->____count;
		V_13 = L_73;
		int32_t L_74 = V_13;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_75 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_76 = V_13;
		V_8 = L_76;
		int32_t L_77 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_77, 1));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_78 = __this->____entries;
		V_0 = L_78;
	}

IL_0250:
	{
		bool L_79 = V_6;
		if (L_79)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_80 = V_4;
		G_B51_0 = L_80;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->____buckets;
		int32_t L_82 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->____buckets;
		G_B51_0 = ((L_81)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_82%((int32_t)(((RuntimeArray*)L_83)->max_length)))))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_84 = V_0;
		int32_t L_85 = V_8;
		V_10 = ((L_84)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_85)));
		bool L_86 = V_7;
		if (!L_86)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_87 = V_10;
		int32_t L_88 = L_87->___next;
		__this->____freeList = L_88;
	}

IL_028a:
	{
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_89 = V_10;
		int32_t L_90 = V_2;
		L_89->___hashCode = L_90;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_91 = V_10;
		int32_t* L_92 = V_9;
		int32_t L_93 = *((int32_t*)L_92);
		L_91->___next = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_94 = V_10;
		int32_t L_95 = ___0_key;
		L_94->___key = L_95;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_96 = V_10;
		int32_t L_97 = ___1_value;
		L_96->___value = L_97;
		int32_t* L_98 = V_9;
		int32_t L_99 = V_8;
		*((int32_t*)L_98) = (int32_t)((int32_t)il2cpp_codegen_add(L_99, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mEB601086B047FF294BB47EBC11FEE564AC5568EC_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 32)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mCF6E618B933BB9983317A52B01F9C0C39104673F(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 35)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16((int32_t)((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_19 = V_3;
		int32_t L_20 = V_4;
		int32_t L_21;
		L_21 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline(((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		goto IL_009a;
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24;
		L_24 = KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_inline(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23))), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_25 = V_3;
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_inline(((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		Dictionary_2_Add_m72902A2BCD2D0374D5A7C1E45739C6E95C42A59C(__this, L_24, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_31 = V_1;
		__this->____version = L_31;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_32;
		L_32 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		bool L_33;
		L_33 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_32, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m146D1D81098AE80BB9D2686E10CA504B5090F602_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E(__this, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m4B26258E61CE07511EA0B884948B9FB2EBCED57E_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_3 = (EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA*)(EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 40), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_5 = __this->____entries;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		int32_t L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)false&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_13 = V_1;
		int32_t L_14 = V_4;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_15 = V_1;
		int32_t L_16 = V_4;
		int32_t* L_17 = (int32_t*)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		int32_t L_18;
		L_18 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_22 = V_1;
		int32_t L_23 = V_5;
		int32_t L_24 = ((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_25 = V_1;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_29 = V_1;
		int32_t L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m6862124076457E217895F9A6113FEA9756F8CCC5_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tA212E7034D981AC2F7E219C600769EE485919684* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		goto IL_000e;
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		int32_t L_4;
		L_4 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_key), il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		V_1 = ((int32_t)(L_7%((int32_t)(((RuntimeArray*)L_8)->max_length))));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_13 = __this->____entries;
		int32_t L_14 = V_3;
		V_4 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_15 = V_4;
		int32_t L_16 = L_15->___hashCode;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_18 = __this->____comparer;
		RuntimeObject* L_19 = L_18;
		if (L_19)
		{
			G_B10_0 = L_19;
			goto IL_0095;
		}
		G_B9_0 = L_19;
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_20;
		L_20 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_21 = V_4;
		int32_t L_22 = L_21->___key;
		int32_t L_23 = ___0_key;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(8, L_20, L_22, L_23);
		G_B11_0 = L_24;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_25 = V_4;
		int32_t L_26 = L_25->___key;
		int32_t L_27 = ___0_key;
		bool L_28;
		L_28 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), G_B10_0, L_26, L_27);
		G_B11_0 = L_28;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_29 = V_2;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = V_1;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_32 = V_4;
		int32_t L_33 = L_32->___next;
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)il2cpp_codegen_add(L_33, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_34 = __this->____entries;
		int32_t L_35 = V_2;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_36 = V_4;
		int32_t L_37 = L_36->___next;
		((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35)))->___next = L_37;
	}

IL_00d6:
	{
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_38 = V_4;
		L_38->___hashCode = (-1);
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_39 = V_4;
		int32_t L_40 = __this->____freeList;
		L_39->___next = L_40;
		goto IL_00ff;
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_41 = V_3;
		__this->____freeList = L_41;
		int32_t L_42 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_43, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_44 = V_3;
		V_2 = L_44;
		Entry_tA212E7034D981AC2F7E219C600769EE485919684* L_45 = V_4;
		int32_t L_46 = L_45->___next;
		V_3 = L_46;
	}

IL_0142:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t* L_3 = ___1_value;
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		int32_t L_6 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(int32_t*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		int32_t* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mFB1B8FE3D03CB2B3D204AEA592204998B4F2958A_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m0A7D01E76A9128FCC4872C680F4D6A63E92DC26A(__this, L_0, L_1, (uint8_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8F28AFD57D4692326B4B3AE90E056FB552DB3FD8_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mE114363144C235AE56C962F604961D915AB0E09E_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mD8D298AC4B5A5A3B983B7C8148328A614490822E_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mD88F18E0B2065189516BF168F521E531BE54384A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 26)));
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t45BAFB41C049BDC49B00275E5A255BB6DEB1396C* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m57B285E9A005A1653FCA61A14D219521E76AACEA(__this, L_14, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInst((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_19 = V_2;
		int32_t L_20 = V_3;
		int32_t L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_25 = V_2;
		int32_t L_26 = V_3;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11), &L_28);
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_33);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_35;
		memset((&L_35), 0, sizeof(L_35));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_35), L_29, L_34, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_35);
	}

IL_00b5:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b9:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->____count;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_39 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_39, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = V_4;
		if (L_40)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_41 = __this->____count;
			V_5 = L_41;
			EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_42 = __this->____entries;
			V_6 = L_42;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_43 = V_6;
			int32_t L_44 = V_7;
			int32_t L_45 = ((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44)))->___hashCode;
			if ((((int32_t)L_45) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_4;
			int32_t L_47 = ___1_index;
			int32_t L_48 = L_47;
			___1_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
			EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_49 = V_6;
			int32_t L_50 = V_7;
			int32_t L_51 = ((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50)))->___key;
			EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_52 = V_6;
			int32_t L_53 = V_7;
			int32_t L_54 = ((L_52)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_53)))->___value;
			KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 L_55;
			memset((&L_55), 0, sizeof(L_55));
			KeyValuePair_2__ctor_m3C86D5D8BB0D1118068E83ED43D64F4E64E7C221((&L_55), L_51, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
			KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189 L_56 = L_55;
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 17), &L_56);
			ArrayElementTypeCheck (L_46, L_57);
			(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (RuntimeObject*)L_57);
		}

IL_012a_1:
		{
			int32_t L_58 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_0130_1:
		{
			int32_t L_59 = V_7;
			int32_t L_60 = V_5;
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mE6A4232F9EA9B74A1B715DC31EA296111E49B18C_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9((&L_0), __this, 2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_mC4DDD8FEB5D98320F8BB2C3E2AAA0791E39DB364_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m7010C4F527554F2A4EF84A151235FF06C0DF62EA_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m0E4FDEC32DAA8D272C4FCFB1F147BC75D7209517(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		int32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mE62F53A2473871D1EE3920F806E67E457730FCDA_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_1, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11)))));
		}
		try
		{
			int32_t L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m420CFC153320557E6823B06767710D1E636E5BDF(__this, L_3, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 15))))), il2cpp_rgctx_method(method->klass->rgctx_data, 50));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			RuntimeObject* L_5 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 51)) };
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
			Type_t* L_7;
			L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		RuntimeObject* L_8 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 52)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_8, L_10, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mBE228CEF79B377003ADB2F34B977A61CF206B856_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m354AFEE2F21CF5443467040278175646478656CB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 11))))), il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF520B896C7A45D3CEC6E07947AE9A78B8B178EC3_gshared (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m280A079EDB4B0B6DD21D3B73CF541F8EA719ECE9((&L_0), __this, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_tE840D191A00F7E1B62DEC554929E7F5829C966BB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIntPtr__ctor_m8FD36BD3C315E2608A9570159B5668D33CA9C896_inline (uintptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((uintptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m527DF04E62D2889CDFBF110C2AA32BB135C89793_gshared_inline (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomStyleProperty_1_set_name_m7C0A88005DEA599E3703800307F998198E1C9CC2_gshared_inline (CustomStyleProperty_1_t697913D630F101B4E464B7E9EA06368015C9C266* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m51A2B61038145DBA23DB66A1B1CD4696D8F25CD3_gshared_inline (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomStyleProperty_1_set_name_m128DA7EEB8E111A1A7663926E2A9A2252B9C604D_gshared_inline (CustomStyleProperty_1_t21332918528099194FD36C74FF0FA14696F39493* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CustomStyleProperty_1_get_name_m0854CB7E93086BB018F00956EE37E700057D1DEB_gshared_inline (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomStyleProperty_1_set_name_m799831D93960394105AEC1C47B11B81C08A46861_gshared_inline (CustomStyleProperty_1_t359A0505C6EE5CBB6A1C39C1DC9BA329CB3E178F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSet_1_get_disposed_m1CDD97F62FB7D308CDD0BA7B889A6205C3F88A95_gshared_inline (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataSet_1_set_disposed_m6E5BD4BFBA25E3167C283E5230479D137D48509F_gshared_inline (DataSet_1_t06E945F9181593E5AF1D52C4F01F64705D0EE1FB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CdisposedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DataSet_1_get_disposed_mD8A87D3D0B54327F20A175C926FBDBB64A6CD1AE_gshared_inline (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataSet_1_set_disposed_m4C7C5F68C0DA96DC663909C22EAD6599D682ED99_gshared_inline (DataSet_1_t7AB6378C4975B89560B35C7854DF838C507AD25A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CdisposedU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* EqualityComparer_1_get_Default_m337E4360DF25127CED0E5DEC4827A905E8EBA5E0_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* V_0 = NULL;
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_0 = ((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE9DC7CAF58EE3B2D235851CCFF895CD1C51F3E6B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A KeyValuePair_2_get_Key_m31FF72E7D6E74CE5DB2E5B3B8FC6B66B7A452210_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mD933B25C1491C37A3BE3B1E709D8C1C02408E76C_gshared_inline (KeyValuePair_2_t2A9D1B7DEBB99A68011F37B017FDD44CFE5AEC14* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mA7C09E323BC8D58366E676F2135E5B976A40E152_gshared_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC KeyValuePair_2_get_Value_m3418A391AB44E3DC55D9F6B456C7E6E694A45062_gshared_inline (KeyValuePair_2_tE3EA5100FA35C94F54D8D5F93B806E7614C34DBD* __this, const RuntimeMethod* method) 
{
	{
		ContentHeightCacheInfo_tA616347D46981FC5684B6268FC7035C431E99FBC L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* EqualityComparer_1_get_Default_mB3E88E8F0749A37FC3E4007A3F3142E8DE546515_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* V_0 = NULL;
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_0 = ((EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mCF9A6FD34089F19E4321806469AE45B2618C11CE(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8EE005CC277EC77E0AFAB9930C9285E3DE4C677B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mD6A5670D5DD71BBE95D274ADC916CFD0F5E3FAA6_gshared_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 KeyValuePair_2_get_Value_m658D03DA62B8E16BD8C96D037C38C9AC87442BAF_gshared_inline (KeyValuePair_2_tCA9456FCC0FBD03E0C9FF69F0B168B558FD2A5ED* __this, const RuntimeMethod* method) 
{
	{
		TreeViewItemData_1_t95D9721135F40D0DB3D221F8EB2543C396D350F4 L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* EqualityComparer_1_get_Default_m36D51346E7AD3770CF007C780BD7F59736E21F77_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* V_0 = NULL;
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_0 = ((EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m41D90357AC3F6FAA8367BD3AC2D49DE5CD85ECC9(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8DFD15807C95203DA08FAD2838BD16CE1C70A17E* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m671CD723515F42017EA4D2DB01691D13288970A9_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m00849F341D41ABD55D72D0701342145724AC3A9F_gshared_inline (KeyValuePair_2_t0EAC8DA2D95957AFA60DD198D013622384C0D213* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* EqualityComparer_1_get_Default_mBB75BC0723DFD7850F43E72E34026DD070CF5932_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* V_0 = NULL;
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_0 = ((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m3BD7BED1F69ABEE55E320BA9CCFBB473E9F57C66(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m8862066C052557662F7CFB385CBA6E42C8C92454_gshared_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Value_m6E082F30B5B753C3131FCA1A488A0963333AFD04_gshared_inline (KeyValuePair_2_t25871D01DA51BBB8CEF1F27E727B5D3A545FD4EF* __this, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* EqualityComparer_1_get_Default_m1D7CFB300C5D4CDC1A3E2D90C684F5AD4C98B8CB_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* V_0 = NULL;
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_0 = ((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m8D41903BD474DD9CEBD9B11C2D89FF5798C63F93(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m5A886C4B3E54DEA04D456E49D7FB92A4545FCD8F_gshared_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m83DA000FF3605DAD9160D02FB36863DF77DB468A_gshared_inline (KeyValuePair_2_tA6BE5EEAC56CB97CB7383FCC3CC6C84FAF129189* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
