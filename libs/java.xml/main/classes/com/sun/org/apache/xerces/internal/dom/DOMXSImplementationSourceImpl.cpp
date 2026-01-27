#include <com/sun/org/apache/xerces/internal/dom/DOMXSImplementationSourceImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationListImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationSourceImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSImplementationImpl.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DOMImplementationList.h>
#include <jcpp.h>

using $DOMImplementationListImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationListImpl;
using $DOMImplementationSourceImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationSourceImpl;
using $PSVIDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIDOMImplementationImpl;
using $XSImplementationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSImplementationImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DOMImplementationList = ::org::w3c::dom::DOMImplementationList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$MethodInfo _DOMXSImplementationSourceImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMXSImplementationSourceImpl, init$, void)},
	{"getDOMImplementation", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(DOMXSImplementationSourceImpl, getDOMImplementation, $DOMImplementation*, $String*)},
	{"getDOMImplementationList", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementationList;", nullptr, $PUBLIC, $virtualMethod(DOMXSImplementationSourceImpl, getDOMImplementationList, $DOMImplementationList*, $String*)},
	{}
};

$ClassInfo _DOMXSImplementationSourceImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMXSImplementationSourceImpl",
	"com.sun.org.apache.xerces.internal.dom.DOMImplementationSourceImpl",
	nullptr,
	nullptr,
	_DOMXSImplementationSourceImpl_MethodInfo_
};

$Object* allocate$DOMXSImplementationSourceImpl($Class* clazz) {
	return $of($alloc(DOMXSImplementationSourceImpl));
}

void DOMXSImplementationSourceImpl::init$() {
	$DOMImplementationSourceImpl::init$();
}

$DOMImplementation* DOMXSImplementationSourceImpl::getDOMImplementation($String* features) {
	$var($DOMImplementation, impl, $DOMImplementationSourceImpl::getDOMImplementation(features));
	if (impl != nullptr) {
		return impl;
	}
	$assign(impl, $PSVIDOMImplementationImpl::getDOMImplementation());
	if (testImpl(impl, features)) {
		return impl;
	}
	$assign(impl, $XSImplementationImpl::getDOMImplementation());
	if (testImpl(impl, features)) {
		return impl;
	}
	return nullptr;
}

$DOMImplementationList* DOMXSImplementationSourceImpl::getDOMImplementationList($String* features) {
	$useLocalCurrentObjectStackCache();
	$var($List, implementations, $new($ArrayList));
	$var($DOMImplementationList, list, $DOMImplementationSourceImpl::getDOMImplementationList(features));
	for (int32_t i = 0; i < $nc(list)->getLength(); ++i) {
		implementations->add($(list->item(i)));
	}
	$var($DOMImplementation, impl, $PSVIDOMImplementationImpl::getDOMImplementation());
	if (testImpl(impl, features)) {
		implementations->add(impl);
	}
	$assign(impl, $XSImplementationImpl::getDOMImplementation());
	if (testImpl(impl, features)) {
		implementations->add(impl);
	}
	return $new($DOMImplementationListImpl, implementations);
}

DOMXSImplementationSourceImpl::DOMXSImplementationSourceImpl() {
}

$Class* DOMXSImplementationSourceImpl::load$($String* name, bool initialize) {
	$loadClass(DOMXSImplementationSourceImpl, name, initialize, &_DOMXSImplementationSourceImpl_ClassInfo_, allocate$DOMXSImplementationSourceImpl);
	return class$;
}

$Class* DOMXSImplementationSourceImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com