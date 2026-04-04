#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDeclHelper.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <jcpp.h>

using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$Class* XSElementDeclHelper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getGlobalElementDecl", "(Lcom/sun/org/apache/xerces/internal/xni/QName;)Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSElementDeclHelper, getGlobalElementDecl, $XSElementDecl*, $QName*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.xs.XSElementDeclHelper",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XSElementDeclHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSElementDeclHelper);
	});
	return class$;
}

$Class* XSElementDeclHelper::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com