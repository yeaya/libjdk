#include <com/sun/org/apache/xerces/internal/impl/XMLEntityHandler.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <jcpp.h>

using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$MethodInfo _XMLEntityHandler_MethodInfo_[] = {
	{"endEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityHandler, endEntity, void, $String*, $Augmentations*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLEntityHandler, startEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLEntityHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityHandler",
	nullptr,
	nullptr,
	nullptr,
	_XMLEntityHandler_MethodInfo_
};

$Object* allocate$XMLEntityHandler($Class* clazz) {
	return $of($alloc(XMLEntityHandler));
}

$Class* XMLEntityHandler::load$($String* name, bool initialize) {
	$loadClass(XMLEntityHandler, name, initialize, &_XMLEntityHandler_ClassInfo_, allocate$XMLEntityHandler);
	return class$;
}

$Class* XMLEntityHandler::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com