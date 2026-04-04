#include <com/sun/beans/finder/FinderUtils.h>
#include <java/lang/Module.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

void FinderUtils::init$() {
}

bool FinderUtils::isExported($Class* c) {
	$useLocalObjectStack();
	$var($String, pn, packageName(c));
	return $$nc($nc(c)->getModule())->isExported(pn);
}

$String* FinderUtils::packageName($Class* c) {
	if ($nc(c)->isArray()) {
		return packageName(c->getComponentType());
	} else {
		$var($String, name, c->getName());
		int32_t dot = $nc(name)->lastIndexOf(u'.');
		if (dot == -1) {
			return ""_s;
		}
		return name->substring(0, dot);
	}
}

FinderUtils::FinderUtils() {
}

$Class* FinderUtils::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FinderUtils, init$, void)},
		{"isExported", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $staticMethod(FinderUtils, isExported, bool, $Class*)},
		{"packageName", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(FinderUtils, packageName, $String*, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.finder.FinderUtils",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FinderUtils, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinderUtils);
	});
	return class$;
}

$Class* FinderUtils::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com