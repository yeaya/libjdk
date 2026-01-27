#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <jcpp.h>

using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$MethodInfo _RevalidationHandler_MethodInfo_[] = {
	{"characterData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RevalidationHandler, characterData, bool, $String*, $Augmentations*)},
	{}
};

$ClassInfo _RevalidationHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.RevalidationHandler",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter",
	nullptr,
	_RevalidationHandler_MethodInfo_
};

$Object* allocate$RevalidationHandler($Class* clazz) {
	return $of($alloc(RevalidationHandler));
}

$Class* RevalidationHandler::load$($String* name, bool initialize) {
	$loadClass(RevalidationHandler, name, initialize, &_RevalidationHandler_ClassInfo_, allocate$RevalidationHandler);
	return class$;
}

$Class* RevalidationHandler::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com