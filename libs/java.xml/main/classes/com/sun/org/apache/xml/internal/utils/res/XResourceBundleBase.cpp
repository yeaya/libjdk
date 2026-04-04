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

void XResourceBundleBase::init$() {
	$ListResourceBundle::init$();
}

XResourceBundleBase::XResourceBundleBase() {
}

$Class* XResourceBundleBase::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XResourceBundleBase, init$, void)},
		{"getMessageKey", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XResourceBundleBase, getMessageKey, $String*, int32_t)},
		{"getWarningKey", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XResourceBundleBase, getWarningKey, $String*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xml.internal.utils.res.XResourceBundleBase",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XResourceBundleBase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XResourceBundleBase);
	});
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