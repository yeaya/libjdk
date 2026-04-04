#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl$RevalidationHandlerHolder.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/RevalidationHandler.h>
#include <jcpp.h>

using $RevalidationHandler = ::com::sun::org::apache::xerces::internal::impl::RevalidationHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

void CoreDOMImplementationImpl$RevalidationHandlerHolder::init$($RevalidationHandler* handler) {
	$set(this, handler, handler);
}

CoreDOMImplementationImpl$RevalidationHandlerHolder::CoreDOMImplementationImpl$RevalidationHandlerHolder() {
}

$Class* CoreDOMImplementationImpl$RevalidationHandlerHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handler", "Lcom/sun/org/apache/xerces/internal/impl/RevalidationHandler;", nullptr, 0, $field(CoreDOMImplementationImpl$RevalidationHandlerHolder, handler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/RevalidationHandler;)V", nullptr, 0, $method(CoreDOMImplementationImpl$RevalidationHandlerHolder, init$, void, $RevalidationHandler*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$RevalidationHandlerHolder", "com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl", "RevalidationHandlerHolder", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$RevalidationHandlerHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl"
	};
	$loadClass(CoreDOMImplementationImpl$RevalidationHandlerHolder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CoreDOMImplementationImpl$RevalidationHandlerHolder);
	});
	return class$;
}

$Class* CoreDOMImplementationImpl$RevalidationHandlerHolder::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com