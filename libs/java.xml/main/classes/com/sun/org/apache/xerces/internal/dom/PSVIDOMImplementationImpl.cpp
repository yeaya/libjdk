#include <com/sun/org/apache/xerces/internal/dom/PSVIDOMImplementationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIDocumentImpl.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DocumentType.h>
#include <jcpp.h>

using $CoreDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
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

$FieldInfo _PSVIDOMImplementationImpl_FieldInfo_[] = {
	{"singleton", "Lcom/sun/org/apache/xerces/internal/dom/PSVIDOMImplementationImpl;", nullptr, $STATIC | $FINAL, $staticField(PSVIDOMImplementationImpl, singleton)},
	{}
};

$MethodInfo _PSVIDOMImplementationImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PSVIDOMImplementationImpl, init$, void)},
	{"createDocument", "(Lorg/w3c/dom/DocumentType;)Lcom/sun/org/apache/xerces/internal/dom/CoreDocumentImpl;", nullptr, $PROTECTED, $virtualMethod(PSVIDOMImplementationImpl, createDocument, $CoreDocumentImpl*, $DocumentType*)},
	{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $STATIC, $staticMethod(PSVIDOMImplementationImpl, getDOMImplementation, $DOMImplementation*)},
	{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(PSVIDOMImplementationImpl, hasFeature, bool, $String*, $String*)},
	{}
};

$ClassInfo _PSVIDOMImplementationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.PSVIDOMImplementationImpl",
	"com.sun.org.apache.xerces.internal.dom.DOMImplementationImpl",
	nullptr,
	_PSVIDOMImplementationImpl_FieldInfo_,
	_PSVIDOMImplementationImpl_MethodInfo_
};

$Object* allocate$PSVIDOMImplementationImpl($Class* clazz) {
	return $of($alloc(PSVIDOMImplementationImpl));
}

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

void clinit$PSVIDOMImplementationImpl($Class* class$) {
	$assignStatic(PSVIDOMImplementationImpl::singleton, $new(PSVIDOMImplementationImpl));
}

PSVIDOMImplementationImpl::PSVIDOMImplementationImpl() {
}

$Class* PSVIDOMImplementationImpl::load$($String* name, bool initialize) {
	$loadClass(PSVIDOMImplementationImpl, name, initialize, &_PSVIDOMImplementationImpl_ClassInfo_, clinit$PSVIDOMImplementationImpl, allocate$PSVIDOMImplementationImpl);
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