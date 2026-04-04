#include <javax/swing/text/html/Map$DefaultRegionContainment.h>
#include <javax/swing/text/html/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

Map$DefaultRegionContainment* Map$DefaultRegionContainment::si = nullptr;

void Map$DefaultRegionContainment::init$() {
}

Map$DefaultRegionContainment* Map$DefaultRegionContainment::sharedInstance() {
	$init(Map$DefaultRegionContainment);
	if (Map$DefaultRegionContainment::si == nullptr) {
		$assignStatic(Map$DefaultRegionContainment::si, $new(Map$DefaultRegionContainment));
	}
	return Map$DefaultRegionContainment::si;
}

bool Map$DefaultRegionContainment::contains(int32_t x, int32_t y, int32_t width, int32_t height) {
	return (x <= width && x >= 0 && y >= 0 && y <= width);
}

void Map$DefaultRegionContainment::clinit$($Class* clazz) {
	$assignStatic(Map$DefaultRegionContainment::si, nullptr);
}

Map$DefaultRegionContainment::Map$DefaultRegionContainment() {
}

$Class* Map$DefaultRegionContainment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"si", "Ljavax/swing/text/html/Map$DefaultRegionContainment;", nullptr, $STATIC, $staticField(Map$DefaultRegionContainment, si)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Map$DefaultRegionContainment, init$, void)},
		{"contains", "(IIII)Z", nullptr, $PUBLIC, $virtualMethod(Map$DefaultRegionContainment, contains, bool, int32_t, int32_t, int32_t, int32_t)},
		{"sharedInstance", "()Ljavax/swing/text/html/Map$DefaultRegionContainment;", nullptr, $PUBLIC | $STATIC, $staticMethod(Map$DefaultRegionContainment, sharedInstance, Map$DefaultRegionContainment*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.Map$DefaultRegionContainment", "javax.swing.text.html.Map", "DefaultRegionContainment", $STATIC},
		{"javax.swing.text.html.Map$RegionContainment", "javax.swing.text.html.Map", "RegionContainment", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.Map$DefaultRegionContainment",
		"java.lang.Object",
		"javax.swing.text.html.Map$RegionContainment",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.Map"
	};
	$loadClass(Map$DefaultRegionContainment, name, initialize, &classInfo$$, Map$DefaultRegionContainment::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Map$DefaultRegionContainment);
	});
	return class$;
}

$Class* Map$DefaultRegionContainment::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax