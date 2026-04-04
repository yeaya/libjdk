#include <com/sun/org/apache/xerces/internal/dom/DeferredDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <jcpp.h>

using $DOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

DeferredDOMImplementationImpl* DeferredDOMImplementationImpl::singleton = nullptr;

void DeferredDOMImplementationImpl::init$() {
	$DOMImplementationImpl::init$();
}

$DOMImplementation* DeferredDOMImplementationImpl::getDOMImplementation() {
	$init(DeferredDOMImplementationImpl);
	return DeferredDOMImplementationImpl::singleton;
}

void DeferredDOMImplementationImpl::clinit$($Class* clazz) {
	$assignStatic(DeferredDOMImplementationImpl::singleton, $new(DeferredDOMImplementationImpl));
}

DeferredDOMImplementationImpl::DeferredDOMImplementationImpl() {
}

$Class* DeferredDOMImplementationImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lcom/sun/org/apache/xerces/internal/dom/DeferredDOMImplementationImpl;", nullptr, $STATIC, $staticField(DeferredDOMImplementationImpl, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DeferredDOMImplementationImpl, init$, void)},
		{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $STATIC, $staticMethod(DeferredDOMImplementationImpl, getDOMImplementation, $DOMImplementation*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.DeferredDOMImplementationImpl",
		"com.sun.org.apache.xerces.internal.dom.DOMImplementationImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DeferredDOMImplementationImpl, name, initialize, &classInfo$$, DeferredDOMImplementationImpl::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DeferredDOMImplementationImpl));
	});
	return class$;
}

$Class* DeferredDOMImplementationImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com