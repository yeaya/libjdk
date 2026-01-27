#include <com/sun/org/apache/xml/internal/utils/res/XResourceBundleBase.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

$MethodInfo _XResourceBundleBase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XResourceBundleBase, init$, void)},
	{"getMessageKey", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XResourceBundleBase, getMessageKey, $String*, int32_t)},
	{"getWarningKey", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XResourceBundleBase, getWarningKey, $String*, int32_t)},
	{}
};

$ClassInfo _XResourceBundleBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundleBase",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_XResourceBundleBase_MethodInfo_
};

$Object* allocate$XResourceBundleBase($Class* clazz) {
	return $of($alloc(XResourceBundleBase));
}

void XResourceBundleBase::init$() {
	$ListResourceBundle::init$();
}

XResourceBundleBase::XResourceBundleBase() {
}

$Class* XResourceBundleBase::load$($String* name, bool initialize) {
	$loadClass(XResourceBundleBase, name, initialize, &_XResourceBundleBase_ClassInfo_, allocate$XResourceBundleBase);
	return class$;
}

$Class* XResourceBundleBase::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com