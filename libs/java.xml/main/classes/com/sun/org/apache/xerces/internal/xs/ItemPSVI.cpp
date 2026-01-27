#include <com/sun/org/apache/xerces/internal/xs/ItemPSVI.h>

#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

#undef VALIDATION_FULL
#undef VALIDATION_NONE
#undef VALIDATION_PARTIAL
#undef VALIDITY_INVALID
#undef VALIDITY_NOTKNOWN
#undef VALIDITY_VALID

using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$CompoundAttribute _ItemPSVI_MethodAnnotations_getActualNormalizedValue1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ItemPSVI_MethodAnnotations_getActualNormalizedValueType2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ItemPSVI_MethodAnnotations_getItemValueTypes6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ItemPSVI_MethodAnnotations_getSchemaNormalizedValue9[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ItemPSVI_FieldInfo_[] = {
	{"VALIDITY_NOTKNOWN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDITY_NOTKNOWN)},
	{"VALIDITY_INVALID", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDITY_INVALID)},
	{"VALIDITY_VALID", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDITY_VALID)},
	{"VALIDATION_NONE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDATION_NONE)},
	{"VALIDATION_PARTIAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDATION_PARTIAL)},
	{"VALIDATION_FULL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ItemPSVI, VALIDATION_FULL)},
	{}
};

$MethodInfo _ItemPSVI_MethodInfo_[] = {
	{"constant", "()Lcom/sun/org/apache/xerces/internal/xs/ItemPSVI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, constant, ItemPSVI*)},
	{"getActualNormalizedValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ItemPSVI, getActualNormalizedValue, $Object*), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _ItemPSVI_MethodAnnotations_getActualNormalizedValue1},
	{"getActualNormalizedValueType", "()S", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ItemPSVI, getActualNormalizedValueType, int16_t), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _ItemPSVI_MethodAnnotations_getActualNormalizedValueType2},
	{"getErrorCodes", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getErrorCodes, $StringList*)},
	{"getErrorMessages", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getErrorMessages, $StringList*)},
	{"getIsSchemaSpecified", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getIsSchemaSpecified, bool)},
	{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ItemPSVI, getItemValueTypes, $ShortList*), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, _ItemPSVI_MethodAnnotations_getItemValueTypes6},
	{"getMemberTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getMemberTypeDefinition, $XSSimpleTypeDefinition*)},
	{"getSchemaDefault", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getSchemaDefault, $String*)},
	{"getSchemaNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ItemPSVI, getSchemaNormalizedValue, $String*), nullptr, nullptr, _ItemPSVI_MethodAnnotations_getSchemaNormalizedValue9},
	{"getSchemaValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getSchemaValue, $XSValue*)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getTypeDefinition, $XSTypeDefinition*)},
	{"getValidationAttempted", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getValidationAttempted, int16_t)},
	{"getValidationContext", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getValidationContext, $String*)},
	{"getValidity", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, getValidity, int16_t)},
	{"isConstant", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ItemPSVI, isConstant, bool)},
	{}
};

$ClassInfo _ItemPSVI_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.ItemPSVI",
	nullptr,
	nullptr,
	_ItemPSVI_FieldInfo_,
	_ItemPSVI_MethodInfo_
};

$Object* allocate$ItemPSVI($Class* clazz) {
	return $of($alloc(ItemPSVI));
}

$Class* ItemPSVI::load$($String* name, bool initialize) {
	$loadClass(ItemPSVI, name, initialize, &_ItemPSVI_ClassInfo_, allocate$ItemPSVI);
	return class$;
}

$Class* ItemPSVI::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com