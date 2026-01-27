#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_zh_HK.h>

#include <com/sun/org/apache/xml/internal/res/XMLErrorResources_zh_TW.h>
#include <jcpp.h>

using $XMLErrorResources_zh_TW = ::com::sun::org::apache::xml::internal::res::XMLErrorResources_zh_TW;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace res {

$MethodInfo _XMLErrorResources_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLErrorResources_zh_HK, init$, void)},
	{}
};

$ClassInfo _XMLErrorResources_zh_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_zh_HK",
	"com.sun.org.apache.xml.internal.res.XMLErrorResources_zh_TW",
	nullptr,
	nullptr,
	_XMLErrorResources_zh_HK_MethodInfo_
};

$Object* allocate$XMLErrorResources_zh_HK($Class* clazz) {
	return $of($alloc(XMLErrorResources_zh_HK));
}

void XMLErrorResources_zh_HK::init$() {
	$XMLErrorResources_zh_TW::init$();
}

XMLErrorResources_zh_HK::XMLErrorResources_zh_HK() {
}

$Class* XMLErrorResources_zh_HK::load$($String* name, bool initialize) {
	$loadClass(XMLErrorResources_zh_HK, name, initialize, &_XMLErrorResources_zh_HK_ClassInfo_, allocate$XMLErrorResources_zh_HK);
	return class$;
}

$Class* XMLErrorResources_zh_HK::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com