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

$Class* RevalidationHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"characterData", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RevalidationHandler, characterData, bool, $String*, $Augmentations*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.RevalidationHandler",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter",
		nullptr,
		methodInfos$$
	};
	$loadClass(RevalidationHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RevalidationHandler));
	});
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