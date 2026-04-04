#include <sun/datatransfer/DataFlavorUtil$TextFlavorComparator.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <sun/datatransfer/DataFlavorUtil$DataFlavorComparator.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

#undef INSTANCE

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DataFlavorUtil$DataFlavorComparator = ::sun::datatransfer::DataFlavorUtil$DataFlavorComparator;

namespace sun {
	namespace datatransfer {

DataFlavorUtil$TextFlavorComparator* DataFlavorUtil$TextFlavorComparator::INSTANCE = nullptr;

void DataFlavorUtil$TextFlavorComparator::init$() {
	$DataFlavorUtil$DataFlavorComparator::init$();
}

int32_t DataFlavorUtil$TextFlavorComparator::compare($DataFlavor* flavor1, $DataFlavor* flavor2) {
	if ($nc(flavor1)->isFlavorTextType()) {
		if ($nc(flavor2)->isFlavorTextType()) {
			return $DataFlavorUtil$DataFlavorComparator::compare(flavor1, flavor2);
		} else {
			return 1;
		}
	} else if ($nc(flavor2)->isFlavorTextType()) {
		return -1;
	} else {
		return 0;
	}
}

int32_t DataFlavorUtil$TextFlavorComparator::compare(Object$* flavor1, Object$* flavor2) {
	return this->compare($cast($DataFlavor, flavor1), $cast($DataFlavor, flavor2));
}

void DataFlavorUtil$TextFlavorComparator::clinit$($Class* clazz) {
	$assignStatic(DataFlavorUtil$TextFlavorComparator::INSTANCE, $new(DataFlavorUtil$TextFlavorComparator));
}

DataFlavorUtil$TextFlavorComparator::DataFlavorUtil$TextFlavorComparator() {
}

$Class* DataFlavorUtil$TextFlavorComparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Lsun/datatransfer/DataFlavorUtil$TextFlavorComparator;", nullptr, $STATIC | $FINAL, $staticField(DataFlavorUtil$TextFlavorComparator, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DataFlavorUtil$TextFlavorComparator, init$, void)},
		{"compare", "(Ljava/awt/datatransfer/DataFlavor;Ljava/awt/datatransfer/DataFlavor;)I", nullptr, $PUBLIC, $virtualMethod(DataFlavorUtil$TextFlavorComparator, compare, int32_t, $DataFlavor*, $DataFlavor*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DataFlavorUtil$TextFlavorComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.datatransfer.DataFlavorUtil$TextFlavorComparator", "sun.datatransfer.DataFlavorUtil", "TextFlavorComparator", $PRIVATE | $STATIC},
		{"sun.datatransfer.DataFlavorUtil$DataFlavorComparator", "sun.datatransfer.DataFlavorUtil", "DataFlavorComparator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.datatransfer.DataFlavorUtil$TextFlavorComparator",
		"sun.datatransfer.DataFlavorUtil$DataFlavorComparator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.datatransfer.DataFlavorUtil"
	};
	$loadClass(DataFlavorUtil$TextFlavorComparator, name, initialize, &classInfo$$, DataFlavorUtil$TextFlavorComparator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DataFlavorUtil$TextFlavorComparator);
	});
	return class$;
}

$Class* DataFlavorUtil$TextFlavorComparator::class$ = nullptr;

	} // datatransfer
} // sun