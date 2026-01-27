#include <com/sun/org/apache/xalan/internal/res/XSLTErrorResources_en.h>

#include <com/sun/org/apache/xalan/internal/res/XSLTErrorResources.h>
#include <jcpp.h>

using $XSLTErrorResources = ::com::sun::org::apache::xalan::internal::res::XSLTErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace res {

$MethodInfo _XSLTErrorResources_en_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSLTErrorResources_en, init$, void)},
	{}
};

$ClassInfo _XSLTErrorResources_en_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.res.XSLTErrorResources_en",
	"com.sun.org.apache.xalan.internal.res.XSLTErrorResources",
	nullptr,
	nullptr,
	_XSLTErrorResources_en_MethodInfo_
};

$Object* allocate$XSLTErrorResources_en($Class* clazz) {
	return $of($alloc(XSLTErrorResources_en));
}

void XSLTErrorResources_en::init$() {
	$XSLTErrorResources::init$();
}

XSLTErrorResources_en::XSLTErrorResources_en() {
}

$Class* XSLTErrorResources_en::load$($String* name, bool initialize) {
	$loadClass(XSLTErrorResources_en, name, initialize, &_XSLTErrorResources_en_ClassInfo_, allocate$XSLTErrorResources_en);
	return class$;
}

$Class* XSLTErrorResources_en::class$ = nullptr;

						} // res
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com