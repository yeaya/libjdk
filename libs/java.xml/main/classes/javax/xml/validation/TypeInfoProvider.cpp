#include <javax/xml/validation/TypeInfoProvider.h>

#include <org/w3c/dom/TypeInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeInfo = ::org::w3c::dom::TypeInfo;

namespace javax {
	namespace xml {
		namespace validation {

$MethodInfo _TypeInfoProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(TypeInfoProvider, init$, void)},
	{"getAttributeTypeInfo", "(I)Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeInfoProvider, getAttributeTypeInfo, $TypeInfo*, int32_t)},
	{"getElementTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeInfoProvider, getElementTypeInfo, $TypeInfo*)},
	{"isIdAttribute", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeInfoProvider, isIdAttribute, bool, int32_t)},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TypeInfoProvider, isSpecified, bool, int32_t)},
	{}
};

$ClassInfo _TypeInfoProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.validation.TypeInfoProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeInfoProvider_MethodInfo_
};

$Object* allocate$TypeInfoProvider($Class* clazz) {
	return $of($alloc(TypeInfoProvider));
}

void TypeInfoProvider::init$() {
}

TypeInfoProvider::TypeInfoProvider() {
}

$Class* TypeInfoProvider::load$($String* name, bool initialize) {
	$loadClass(TypeInfoProvider, name, initialize, &_TypeInfoProvider_ClassInfo_, allocate$TypeInfoProvider);
	return class$;
}

$Class* TypeInfoProvider::class$ = nullptr;

		} // validation
	} // xml
} // javax