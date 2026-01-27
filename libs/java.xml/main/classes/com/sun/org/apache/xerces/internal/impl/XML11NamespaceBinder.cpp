#include <com/sun/org/apache/xerces/internal/impl/XML11NamespaceBinder.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLNamespaceBinder.h>
#include <jcpp.h>

using $XMLNamespaceBinder = ::com::sun::org::apache::xerces::internal::impl::XMLNamespaceBinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$MethodInfo _XML11NamespaceBinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11NamespaceBinder, init$, void)},
	{"prefixBoundToNullURI", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PROTECTED, $virtualMethod(XML11NamespaceBinder, prefixBoundToNullURI, bool, $String*, $String*)},
	{}
};

$ClassInfo _XML11NamespaceBinder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XML11NamespaceBinder",
	"com.sun.org.apache.xerces.internal.impl.XMLNamespaceBinder",
	nullptr,
	nullptr,
	_XML11NamespaceBinder_MethodInfo_
};

$Object* allocate$XML11NamespaceBinder($Class* clazz) {
	return $of($alloc(XML11NamespaceBinder));
}

void XML11NamespaceBinder::init$() {
	$XMLNamespaceBinder::init$();
}

bool XML11NamespaceBinder::prefixBoundToNullURI($String* uri, $String* localpart) {
	return false;
}

XML11NamespaceBinder::XML11NamespaceBinder() {
}

$Class* XML11NamespaceBinder::load$($String* name, bool initialize) {
	$loadClass(XML11NamespaceBinder, name, initialize, &_XML11NamespaceBinder_ClassInfo_, allocate$XML11NamespaceBinder);
	return class$;
}

$Class* XML11NamespaceBinder::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com