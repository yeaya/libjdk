#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace java {
	namespace awt {
		namespace datatransfer {

$Class* FlavorMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getFlavorsForNatives", "([Ljava/lang/String;)Ljava/util/Map;", "([Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FlavorMap, getFlavorsForNatives, $Map*, $StringArray*)},
		{"getNativesForFlavors", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/util/Map;", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/util/Map<Ljava/awt/datatransfer/DataFlavor;Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FlavorMap, getNativesForFlavors, $Map*, $DataFlavorArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.datatransfer.FlavorMap",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FlavorMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlavorMap);
	});
	return class$;
}

$Class* FlavorMap::class$ = nullptr;

		} // datatransfer
	} // awt
} // java