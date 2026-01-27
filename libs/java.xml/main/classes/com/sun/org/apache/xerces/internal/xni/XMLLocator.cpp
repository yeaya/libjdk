#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>

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

$MethodInfo _XMLLocator_MethodInfo_[] = {
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLLocator, getBaseSystemId, $String*)},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLLocator, getCharacterOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLLocator, getColumnNumber, int32_t)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLLocator, getEncoding, $String*)},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLLocator, getExpandedSystemId, $String*)},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLLocator, getLineNumber, int32_t)},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLLocator, getLiteralSystemId, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLLocator, getPublicId, $String*)},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLLocator, getXMLVersion, $String*)},
	{}
};

$ClassInfo _XMLLocator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	nullptr,
	nullptr,
	nullptr,
	_XMLLocator_MethodInfo_
};

$Object* allocate$XMLLocator($Class* clazz) {
	return $of($alloc(XMLLocator));
}

$Class* XMLLocator::load$($String* name, bool initialize) {
	$loadClass(XMLLocator, name, initialize, &_XMLLocator_ClassInfo_, allocate$XMLLocator);
	return class$;
}

$Class* XMLLocator::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com