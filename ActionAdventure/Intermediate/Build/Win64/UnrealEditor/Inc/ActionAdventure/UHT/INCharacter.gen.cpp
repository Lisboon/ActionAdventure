// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "INCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeINCharacter() {}

// ********** Begin Cross Module References ********************************************************
ACTIONADVENTURE_API UClass* Z_Construct_UClass_AINCharacter();
ACTIONADVENTURE_API UClass* Z_Construct_UClass_AINCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_ActionAdventure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AINCharacter *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AINCharacter;
UClass* AINCharacter::GetPrivateStaticClass()
{
	using TClass = AINCharacter;
	if (!Z_Registration_Info_UClass_AINCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("INCharacter"),
			Z_Registration_Info_UClass_AINCharacter.InnerSingleton,
			StaticRegisterNativesAINCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AINCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AINCharacter_NoRegister()
{
	return AINCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AINCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "INCharacter.h" },
		{ "ModuleRelativePath", "Public/INCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AINCharacter constinit property declarations *****************************
// ********** End Class AINCharacter constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AINCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AINCharacter_Statics
UObject* (*const Z_Construct_UClass_AINCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ActionAdventure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AINCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AINCharacter_Statics::ClassParams = {
	&AINCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AINCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AINCharacter_Statics::Class_MetaDataParams)
};
void AINCharacter::StaticRegisterNativesAINCharacter()
{
}
UClass* Z_Construct_UClass_AINCharacter()
{
	if (!Z_Registration_Info_UClass_AINCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AINCharacter.OuterSingleton, Z_Construct_UClass_AINCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AINCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AINCharacter);
AINCharacter::~AINCharacter() {}
// ********** End Class AINCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h__Script_ActionAdventure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AINCharacter, AINCharacter::StaticClass, TEXT("AINCharacter"), &Z_Registration_Info_UClass_AINCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AINCharacter), 715475508U) },
	};
}; // Z_CompiledInDeferFile_FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h__Script_ActionAdventure_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h__Script_ActionAdventure_2958598144{
	TEXT("/Script/ActionAdventure"),
	Z_CompiledInDeferFile_FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h__Script_ActionAdventure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionAdventure_ActionAdventure_Source_ActionAdventure_Public_INCharacter_h__Script_ActionAdventure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
