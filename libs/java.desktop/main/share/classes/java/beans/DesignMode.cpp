#include <java/beans/DesignMode.h>
#include <jcpp.h>

#undef PROPERTYNAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$String* DesignMode::PROPERTYNAME = nullptr;

void DesignMode::clinit$($Class* clazz) {
	$assignStatic(DesignMode::PROPERTYNAME, "designTime"_s);
}

$Class* DesignMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PROPERTYNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DesignMode, PROPERTYNAME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"isDesignTime", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesignMode, isDesignTime, bool)},
		{"setDesignTime", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesignMode, setDesignTime, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.DesignMode",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DesignMode, name, initialize, &classInfo$$, DesignMode::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DesignMode);
	});
	return class$;
}

$Class* DesignMode::class$ = nullptr;

	} // beans
} // java