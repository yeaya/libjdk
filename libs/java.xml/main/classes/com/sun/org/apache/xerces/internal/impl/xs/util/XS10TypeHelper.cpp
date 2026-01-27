#include <com/sun/org/apache/xerces/internal/impl/xs/util/XS10TypeHelper.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSSimpleTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <jcpp.h>

using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSSimpleTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSSimpleTypeDefinition;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
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
								namespace util {

$MethodInfo _XS10TypeHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(XS10TypeHelper, init$, void)},
	{"getSchemaTypeName", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XS10TypeHelper, getSchemaTypeName, $String*, $XSTypeDefinition*)},
	{}
};

$ClassInfo _XS10TypeHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XS10TypeHelper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XS10TypeHelper_MethodInfo_
};

$Object* allocate$XS10TypeHelper($Class* clazz) {
	return $of($alloc(XS10TypeHelper));
}

void XS10TypeHelper::init$() {
}

$String* XS10TypeHelper::getSchemaTypeName($XSTypeDefinition* typeDefn) {
	$var($String, typeNameStr, nullptr);
	if ($instanceOf($XSSimpleTypeDefinition, typeDefn)) {
		$assign(typeNameStr, $nc(($cast($XSSimpleTypeDecl, typeDefn)))->getTypeName());
	} else {
		$assign(typeNameStr, $nc(($cast($XSComplexTypeDecl, typeDefn)))->getTypeName());
	}
	return typeNameStr;
}

XS10TypeHelper::XS10TypeHelper() {
}

$Class* XS10TypeHelper::load$($String* name, bool initialize) {
	$loadClass(XS10TypeHelper, name, initialize, &_XS10TypeHelper_ClassInfo_, allocate$XS10TypeHelper);
	return class$;
}

$Class* XS10TypeHelper::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com