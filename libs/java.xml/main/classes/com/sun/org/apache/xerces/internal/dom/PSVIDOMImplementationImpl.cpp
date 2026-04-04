#include <com/sun/org/apache/xerces/internal/dom/PSVIDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIDocumentImpl.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DocumentType.h>
#include <jcpp.h>

using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl;
using $PSVIDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIDocumentImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DocumentType = ::org::w3c::dom::DocumentType;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

PSVIDOMImplementationImpl* PSVIDOMImplementationImpl::singleton = nullptr;

void PSVIDOMImplementationImpl::init$() {
	$DOMImplementationImpl::init$();
}

$DOMImplementation* PSVIDOMImplementationImpl::getDOMImplementation() {
	$init(PSVIDOMImplementationImpl);
	return PSVIDOMImplementationImpl::singleton;
}

bool PSVIDOMImplementationImpl::hasFeature($String* feature, $String* version) {
	bool var$0 = $DOMImplementationImpl::hasFeature(feature, version);
	return var$0 || $nc(feature)->equalsIgnoreCase("psvi"_s);
}

$CoreDocumentImpl* PSVIDOMImplementationImpl::createDocument($DocumentType* doctype) {
	return $new($PSVIDocumentImpl, doctype);
}

void PSVIDOMImplementationImpl::clinit$($Class* clazz) {
	$assignStatic(PSVIDOMImplementationImpl::singleton, $new(PSVIDOMImplementationImpl));
}

PSVIDOMImplementationImpl::PSVIDOMImplementationImpl() {
}

$Class* PSVIDOMImplementationImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"singleton", "Lcom/sun/org/apache/xerces/internal/dom/PSVIDOMImplementationImpl;", nullptr, $STATIC | $FINAL, $staticField(PSVIDOMImplementationImpl, singleton)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PSVIDOMImplementationImpl, init$, void)},
		{"createDocument", "(Lorg/w3c/dom/DocumentType;)Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, $PROTECTED, $virtualMethod(PSVIDOMImplementationImpl, createDocument, $CoreDocumentImpl*, $DocumentType*)},
		{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $STATIC, $staticMethod(PSVIDOMImplementationImpl, getDOMImplementation, $DOMImplementation*)},
		{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(PSVIDOMImplementationImpl, hasFeature, bool, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.PSVIDOMImplementationImpl",
		"com.sun.org.apache.xerces.internal.dom.DOMImplementationImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PSVIDOMImplementationImpl, name, initialize, &classInfo$$, PSVIDOMImplementationImpl::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(PSVIDOMImplementationImpl));
	});
	return class$;
}

$Class* PSVIDOMImplementationImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com