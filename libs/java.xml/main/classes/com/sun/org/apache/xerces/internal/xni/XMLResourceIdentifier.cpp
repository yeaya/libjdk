#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$MethodInfo _XMLResourceIdentifier_MethodInfo_[] = {
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, getBaseSystemId, $String*)},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, getExpandedSystemId, $String*)},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, getLiteralSystemId, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, getNamespace, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, getPublicId, $String*)},
	{"setBaseSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, setBaseSystemId, void, $String*)},
	{"setExpandedSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, setExpandedSystemId, void, $String*)},
	{"setLiteralSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, setLiteralSystemId, void, $String*)},
	{"setNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, setNamespace, void, $String*)},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLResourceIdentifier, setPublicId, void, $String*)},
	{}
};

$ClassInfo _XMLResourceIdentifier_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier",
	nullptr,
	nullptr,
	nullptr,
	_XMLResourceIdentifier_MethodInfo_
};

$Object* allocate$XMLResourceIdentifier($Class* clazz) {
	return $of($alloc(XMLResourceIdentifier));
}

$Class* XMLResourceIdentifier::load$($String* name, bool initialize) {
	$loadClass(XMLResourceIdentifier, name, initialize, &_XMLResourceIdentifier_ClassInfo_, allocate$XMLResourceIdentifier);
	return class$;
}

$Class* XMLResourceIdentifier::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com