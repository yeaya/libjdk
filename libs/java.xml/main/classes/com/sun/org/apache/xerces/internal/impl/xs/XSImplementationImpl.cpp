#include <com/sun/org/apache/xerces/internal/impl/xs/XSImplementationImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSLoaderImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSException.h>
#include <com/sun/org/apache/xerces/internal/xs/XSLoader.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef NOT_SUPPORTED_ERR

using $CoreDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $XSLoaderImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSLoaderImpl;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSException = ::com::sun::org::apache::xerces::internal::xs::XSException;
using $XSLoader = ::com::sun::org::apache::xerces::internal::xs::XSLoader;
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
						namespace impl {
							namespace xs {

$FieldInfo _XSImplementationImpl_FieldInfo_[] = {
	{"singleton", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSImplementationImpl;", nullptr, $STATIC, $staticField(XSImplementationImpl, singleton)},
	{}
};

$MethodInfo _XSImplementationImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSImplementationImpl, init$, void)},
	{"createXSLoader", "(Lcom/sun/org/apache/xerces/internal/xs/StringList;)Lcom/sun/org/apache/xerces/internal/xs/XSLoader;", nullptr, $PUBLIC, $virtualMethod(XSImplementationImpl, createXSLoader, $XSLoader*, $StringList*), "com.sun.org.apache.xerces.internal.xs.XSException"},
	{"getDOMImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSImplementationImpl, getDOMImplementation, $DOMImplementation*)},
	{"getRecognizedVersions", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(XSImplementationImpl, getRecognizedVersions, $StringList*)},
	{"hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(XSImplementationImpl, hasFeature, bool, $String*, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XSImplementationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSImplementationImpl",
	"com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl",
	"com.sun.org.apache.xerces.internal.xs.XSImplementation",
	_XSImplementationImpl_FieldInfo_,
	_XSImplementationImpl_MethodInfo_
};

$Object* allocate$XSImplementationImpl($Class* clazz) {
	return $of($alloc(XSImplementationImpl));
}

int32_t XSImplementationImpl::hashCode() {
	 return this->$CoreDOMImplementationImpl::hashCode();
}

bool XSImplementationImpl::equals(Object$* arg0) {
	 return this->$CoreDOMImplementationImpl::equals(arg0);
}

$Object* XSImplementationImpl::clone() {
	 return this->$CoreDOMImplementationImpl::clone();
}

$String* XSImplementationImpl::toString() {
	 return this->$CoreDOMImplementationImpl::toString();
}

void XSImplementationImpl::finalize() {
	this->$CoreDOMImplementationImpl::finalize();
}

XSImplementationImpl* XSImplementationImpl::singleton = nullptr;

void XSImplementationImpl::init$() {
	$CoreDOMImplementationImpl::init$();
}

$DOMImplementation* XSImplementationImpl::getDOMImplementation() {
	$init(XSImplementationImpl);
	return XSImplementationImpl::singleton;
}

bool XSImplementationImpl::hasFeature($String* feature, $String* version) {
	bool var$1 = $nc(feature)->equalsIgnoreCase("XS-Loader"_s);
	bool var$0 = var$1 && (version == nullptr || $nc(version)->equals("1.0"_s));
	return (var$0 || $CoreDOMImplementationImpl::hasFeature(feature, version));
}

$XSLoader* XSImplementationImpl::createXSLoader($StringList* versions) {
	$useLocalCurrentObjectStackCache();
	$var($XSLoader, loader, $new($XSLoaderImpl));
	if (versions == nullptr) {
		return loader;
	}
	for (int32_t i = 0; i < $nc(versions)->getLength(); ++i) {
		if (!$nc($(versions->item(i)))->equals("1.0"_s)) {
			$init($DOMMessageFormatter);
			$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "FEATURE_NOT_SUPPORTED"_s, $$new($ObjectArray, {$($of(versions->item(i)))})));
			$throwNew($XSException, $XSException::NOT_SUPPORTED_ERR, msg);
		}
	}
	return loader;
}

$StringList* XSImplementationImpl::getRecognizedVersions() {
	$useLocalCurrentObjectStackCache();
	$var($StringListImpl, list, $new($StringListImpl, $$new($StringArray, {"1.0"_s}), 1));
	return list;
}

void clinit$XSImplementationImpl($Class* class$) {
	$assignStatic(XSImplementationImpl::singleton, $new(XSImplementationImpl));
}

XSImplementationImpl::XSImplementationImpl() {
}

$Class* XSImplementationImpl::load$($String* name, bool initialize) {
	$loadClass(XSImplementationImpl, name, initialize, &_XSImplementationImpl_ClassInfo_, clinit$XSImplementationImpl, allocate$XSImplementationImpl);
	return class$;
}

$Class* XSImplementationImpl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com