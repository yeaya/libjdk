#include <com/apple/eawt/ApplicationBeanInfo.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/beans/SimpleBeanInfo.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $SimpleBeanInfo = ::java::beans::SimpleBeanInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

void ApplicationBeanInfo::init$() {
	$SimpleBeanInfo::init$();
}

$Image* ApplicationBeanInfo::getIcon(int32_t iconKind) {
	return $$nc($Toolkit::getDefaultToolkit())->getImage("NSImage://NSGenericApplication"_s);
}

ApplicationBeanInfo::ApplicationBeanInfo() {
}

$Class* ApplicationBeanInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ApplicationBeanInfo, init$, void)},
		{"getIcon", "(I)Ljava/awt/Image;", nullptr, $PUBLIC, $virtualMethod(ApplicationBeanInfo, getIcon, $Image*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.eawt.ApplicationBeanInfo",
		"java.beans.SimpleBeanInfo",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ApplicationBeanInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ApplicationBeanInfo);
	});
	return class$;
}

$Class* ApplicationBeanInfo::class$ = nullptr;

		} // eawt
	} // apple
} // com