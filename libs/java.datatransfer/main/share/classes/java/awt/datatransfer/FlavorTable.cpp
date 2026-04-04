#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/util/List.h>
#include <jcpp.h>

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace java {
	namespace awt {
		namespace datatransfer {

$Class* FlavorTable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getFlavorsForNative", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FlavorTable, getFlavorsForNative, $List*, $String*)},
		{"getNativesForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/List;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FlavorTable, getNativesForFlavor, $List*, $DataFlavor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.datatransfer.FlavorTable",
		nullptr,
		"java.awt.datatransfer.FlavorMap",
		nullptr,
		methodInfos$$
	};
	$loadClass(FlavorTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FlavorTable);
	});
	return class$;
}

$Class* FlavorTable::class$ = nullptr;

		} // datatransfer
	} // awt
} // java