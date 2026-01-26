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

$MethodInfo _FlavorTable_MethodInfo_[] = {
	{"getFlavorsForNative", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FlavorTable, getFlavorsForNative, $List*, $String*)},
	{"getNativesForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/List;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(FlavorTable, getNativesForFlavor, $List*, $DataFlavor*)},
	{}
};

$ClassInfo _FlavorTable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.datatransfer.FlavorTable",
	nullptr,
	"java.awt.datatransfer.FlavorMap",
	nullptr,
	_FlavorTable_MethodInfo_
};

$Object* allocate$FlavorTable($Class* clazz) {
	return $of($alloc(FlavorTable));
}

$Class* FlavorTable::load$($String* name, bool initialize) {
	$loadClass(FlavorTable, name, initialize, &_FlavorTable_ClassInfo_, allocate$FlavorTable);
	return class$;
}

$Class* FlavorTable::class$ = nullptr;

		} // datatransfer
	} // awt
} // java