#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>

#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <jcpp.h>

using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSValue_MethodInfo_[] = {
	{"getActualValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSValue, getActualValue, $Object*)},
	{"getActualValueType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSValue, getActualValueType, int16_t)},
	{"getListValueTypes", "()Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSValue, getListValueTypes, $ShortList*)},
	{"getMemberTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSValue, getMemberTypeDefinition, $XSSimpleTypeDefinition*)},
	{"getMemberTypeDefinitions", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSValue, getMemberTypeDefinitions, $XSObjectList*)},
	{"getNormalizedValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSValue, getNormalizedValue, $String*)},
	{"getTypeDefinition", "()Lcom/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSValue, getTypeDefinition, $XSSimpleTypeDefinition*)},
	{}
};

$ClassInfo _XSValue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSValue",
	nullptr,
	nullptr,
	nullptr,
	_XSValue_MethodInfo_
};

$Object* allocate$XSValue($Class* clazz) {
	return $of($alloc(XSValue));
}

$Class* XSValue::load$($String* name, bool initialize) {
	$loadClass(XSValue, name, initialize, &_XSValue_ClassInfo_, allocate$XSValue);
	return class$;
}

$Class* XSValue::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com