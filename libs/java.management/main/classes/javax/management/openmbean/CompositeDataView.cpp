#include <javax/management/openmbean/CompositeDataView.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeType = ::javax::management::openmbean::CompositeType;

namespace javax {
	namespace management {
		namespace openmbean {

$Class* CompositeDataView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"toCompositeData", "(Ljavax/management/openmbean/CompositeType;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CompositeDataView, toCompositeData, $CompositeData*, $CompositeType*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.openmbean.CompositeDataView",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CompositeDataView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompositeDataView);
	});
	return class$;
}

$Class* CompositeDataView::class$ = nullptr;

		} // openmbean
	} // management
} // javax