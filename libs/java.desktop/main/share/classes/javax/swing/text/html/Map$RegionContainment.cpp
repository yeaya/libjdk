#include <javax/swing/text/html/Map$RegionContainment.h>
#include <javax/swing/text/html/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$Class* Map$RegionContainment::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"contains", "(IIII)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Map$RegionContainment, contains, bool, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.Map$RegionContainment", "javax.swing.text.html.Map", "RegionContainment", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.swing.text.html.Map$RegionContainment",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.Map"
	};
	$loadClass(Map$RegionContainment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Map$RegionContainment);
	});
	return class$;
}

$Class* Map$RegionContainment::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax