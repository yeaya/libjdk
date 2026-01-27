#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationSourceImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/CoreDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationListImpl.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/StringTokenizer.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DOMImplementationList.h>
#include <jcpp.h>

using $CoreDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDOMImplementationImpl;
using $DOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl;
using $DOMImplementationListImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationListImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $StringTokenizer = ::java::util::StringTokenizer;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DOMImplementationList = ::org::w3c::dom::DOMImplementationList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$MethodInfo _DOMImplementationSourceImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMImplementationSourceImpl, init$, void)},
	{"getDOMImplementation", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationSourceImpl, getDOMImplementation, $DOMImplementation*, $String*)},
	{"getDOMImplementationList", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementationList;", nullptr, $PUBLIC, $virtualMethod(DOMImplementationSourceImpl, getDOMImplementationList, $DOMImplementationList*, $String*)},
	{"testImpl", "(Lorg/w3c/dom/DOMImplementation;Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(DOMImplementationSourceImpl, testImpl, bool, $DOMImplementation*, $String*)},
	{}
};

$ClassInfo _DOMImplementationSourceImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMImplementationSourceImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMImplementationSource",
	nullptr,
	_DOMImplementationSourceImpl_MethodInfo_
};

$Object* allocate$DOMImplementationSourceImpl($Class* clazz) {
	return $of($alloc(DOMImplementationSourceImpl));
}

void DOMImplementationSourceImpl::init$() {
}

$DOMImplementation* DOMImplementationSourceImpl::getDOMImplementation($String* features) {
	$var($DOMImplementation, impl, $CoreDOMImplementationImpl::getDOMImplementation());
	if (testImpl(impl, features)) {
		return impl;
	}
	$assign(impl, $DOMImplementationImpl::getDOMImplementation());
	if (testImpl(impl, features)) {
		return impl;
	}
	return nullptr;
}

$DOMImplementationList* DOMImplementationSourceImpl::getDOMImplementationList($String* features) {
	$useLocalCurrentObjectStackCache();
	$var($DOMImplementation, impl, $CoreDOMImplementationImpl::getDOMImplementation());
	$var($List, implementations, $new($ArrayList));
	if (testImpl(impl, features)) {
		implementations->add(impl);
	}
	$assign(impl, $DOMImplementationImpl::getDOMImplementation());
	if (testImpl(impl, features)) {
		implementations->add(impl);
	}
	return $new($DOMImplementationListImpl, implementations);
}

bool DOMImplementationSourceImpl::testImpl($DOMImplementation* impl, $String* features) {
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, st, $new($StringTokenizer, features));
	$var($String, feature, nullptr);
	$var($String, version, nullptr);
	if (st->hasMoreTokens()) {
		$assign(feature, st->nextToken());
	}
	while (feature != nullptr) {
		bool isVersion = false;
		if (st->hasMoreTokens()) {
			char16_t c = 0;
			$assign(version, st->nextToken());
			c = $nc(version)->charAt(0);
			switch (c) {
			case u'0':
				{}
			case u'1':
				{}
			case u'2':
				{}
			case u'3':
				{}
			case u'4':
				{}
			case u'5':
				{}
			case u'6':
				{}
			case u'7':
				{}
			case u'8':
				{}
			case u'9':
				{
					isVersion = true;
				}
			}
		} else {
			$assign(version, nullptr);
		}
		if (isVersion) {
			if (!$nc(impl)->hasFeature(feature, version)) {
				return false;
			}
			if (st->hasMoreTokens()) {
				$assign(feature, st->nextToken());
			} else {
				$assign(feature, nullptr);
			}
		} else {
			if (!$nc(impl)->hasFeature(feature, nullptr)) {
				return false;
			}
			$assign(feature, version);
		}
	}
	return true;
}

DOMImplementationSourceImpl::DOMImplementationSourceImpl() {
}

$Class* DOMImplementationSourceImpl::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationSourceImpl, name, initialize, &_DOMImplementationSourceImpl_ClassInfo_, allocate$DOMImplementationSourceImpl);
	return class$;
}

$Class* DOMImplementationSourceImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com