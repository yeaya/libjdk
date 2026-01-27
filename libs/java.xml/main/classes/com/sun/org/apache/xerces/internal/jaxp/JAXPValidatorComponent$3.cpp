#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$3.h>

#include <javax/xml/validation/TypeInfoProvider.h>
#include <org/w3c/dom/TypeInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeInfoProvider = ::javax::xml::validation::TypeInfoProvider;
using $TypeInfo = ::org::w3c::dom::TypeInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$MethodInfo _JAXPValidatorComponent$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(JAXPValidatorComponent$3, init$, void)},
	{"getAttributeTypeInfo", "(I)Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$3, getAttributeTypeInfo, $TypeInfo*, int32_t)},
	{"getAttributeTypeInfo", "(Ljava/lang/String;)Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$3, getAttributeTypeInfo, $TypeInfo*, $String*)},
	{"getAttributeTypeInfo", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$3, getAttributeTypeInfo, $TypeInfo*, $String*, $String*)},
	{"getElementTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$3, getElementTypeInfo, $TypeInfo*)},
	{"isIdAttribute", "(I)Z", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$3, isIdAttribute, bool, int32_t)},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC, $virtualMethod(JAXPValidatorComponent$3, isSpecified, bool, int32_t)},
	{}
};

$EnclosingMethodInfo _JAXPValidatorComponent$3_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent",
	nullptr,
	nullptr
};

$InnerClassInfo _JAXPValidatorComponent$3_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JAXPValidatorComponent$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$3",
	"javax.xml.validation.TypeInfoProvider",
	nullptr,
	nullptr,
	_JAXPValidatorComponent$3_MethodInfo_,
	nullptr,
	&_JAXPValidatorComponent$3_EnclosingMethodInfo_,
	_JAXPValidatorComponent$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent"
};

$Object* allocate$JAXPValidatorComponent$3($Class* clazz) {
	return $of($alloc(JAXPValidatorComponent$3));
}

void JAXPValidatorComponent$3::init$() {
	$TypeInfoProvider::init$();
}

$TypeInfo* JAXPValidatorComponent$3::getElementTypeInfo() {
	return nullptr;
}

$TypeInfo* JAXPValidatorComponent$3::getAttributeTypeInfo(int32_t index) {
	return nullptr;
}

$TypeInfo* JAXPValidatorComponent$3::getAttributeTypeInfo($String* attributeQName) {
	return nullptr;
}

$TypeInfo* JAXPValidatorComponent$3::getAttributeTypeInfo($String* attributeUri, $String* attributeLocalName) {
	return nullptr;
}

bool JAXPValidatorComponent$3::isIdAttribute(int32_t index) {
	return false;
}

bool JAXPValidatorComponent$3::isSpecified(int32_t index) {
	return false;
}

JAXPValidatorComponent$3::JAXPValidatorComponent$3() {
}

$Class* JAXPValidatorComponent$3::load$($String* name, bool initialize) {
	$loadClass(JAXPValidatorComponent$3, name, initialize, &_JAXPValidatorComponent$3_ClassInfo_, allocate$JAXPValidatorComponent$3);
	return class$;
}

$Class* JAXPValidatorComponent$3::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com