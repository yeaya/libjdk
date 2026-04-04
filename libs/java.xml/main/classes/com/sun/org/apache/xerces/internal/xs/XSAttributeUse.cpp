#include <com/sun/org/apache/xerces/internal/xs/XSAttributeUse.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <jcpp.h>

using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* XSAttributeUse::load$($String* name, bool initialize) {
	$CompoundAttribute getActualVCmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getActualVCTypemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getConstraintValuemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getItemValueTypesmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getActualVC", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSAttributeUse, getActualVC, $Object*), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, getActualVCmethodAnnotations$$},
		{"getActualVCType", "()S", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSAttributeUse, getActualVCType, int16_t), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, getActualVCTypemethodAnnotations$$},
		{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeUse, getAnnotations, $XSObjectList*)},
		{"getAttrDeclaration", "()Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeUse, getAttrDeclaration, $XSAttributeDeclaration*)},
		{"getConstraintType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeUse, getConstraintType, int16_t)},
		{"getConstraintValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSAttributeUse, getConstraintValue, $String*), nullptr, nullptr, getConstraintValuemethodAnnotations$$},
		{"getItemValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(XSAttributeUse, getItemValueTypes, $ShortList*), "com.sun.org.apache.xerces.internal.xs.XSException", nullptr, getItemValueTypesmethodAnnotations$$},
		{"getRequired", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeUse, getRequired, bool)},
		{"getValueConstraintValue", "()Lcom/sun/org/apache/xerces/internal/xs/XSValue;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSAttributeUse, getValueConstraintValue, $XSValue*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSAttributeUse",
		nullptr,
		"com.sun.org.apache.xerces.internal.xs.XSObject",
		nullptr,
		methodInfos$$
	};
	$loadClass(XSAttributeUse, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSAttributeUse);
	});
	return class$;
}

$Class* XSAttributeUse::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com