#include <sun/datatransfer/DataFlavorUtil$IndexOrderComparator.h>
#include <java/util/Map.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

#undef FALLBACK_INDEX
#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;

namespace sun {
	namespace datatransfer {

$Integer* DataFlavorUtil$IndexOrderComparator::FALLBACK_INDEX = nullptr;

void DataFlavorUtil$IndexOrderComparator::init$($Map* indexMap) {
	$set(this, indexMap, indexMap);
}

int32_t DataFlavorUtil$IndexOrderComparator::compare($Long* obj1, $Long* obj2) {
	return $DataFlavorUtil::compareIndices(this->indexMap, obj1, obj2, DataFlavorUtil$IndexOrderComparator::FALLBACK_INDEX);
}

int32_t DataFlavorUtil$IndexOrderComparator::compare(Object$* obj1, Object$* obj2) {
	return this->compare($cast($Long, obj1), $cast($Long, obj2));
}

void DataFlavorUtil$IndexOrderComparator::clinit$($Class* clazz) {
	$assignStatic(DataFlavorUtil$IndexOrderComparator::FALLBACK_INDEX, $Integer::valueOf($Integer::MIN_VALUE));
}

DataFlavorUtil$IndexOrderComparator::DataFlavorUtil$IndexOrderComparator() {
}

$Class* DataFlavorUtil$IndexOrderComparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"indexMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/lang/Integer;>;", $PRIVATE | $FINAL, $field(DataFlavorUtil$IndexOrderComparator, indexMap)},
		{"FALLBACK_INDEX", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$IndexOrderComparator, FALLBACK_INDEX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/Long;Ljava/lang/Integer;>;)V", $PUBLIC, $method(DataFlavorUtil$IndexOrderComparator, init$, void, $Map*)},
		{"compare", "(Ljava/lang/Long;Ljava/lang/Long;)I", nullptr, $PUBLIC, $virtualMethod(DataFlavorUtil$IndexOrderComparator, compare, int32_t, $Long*, $Long*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(DataFlavorUtil$IndexOrderComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.datatransfer.DataFlavorUtil$IndexOrderComparator", "sun.datatransfer.DataFlavorUtil", "IndexOrderComparator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.datatransfer.DataFlavorUtil$IndexOrderComparator",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Long;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.datatransfer.DataFlavorUtil"
	};
	$loadClass(DataFlavorUtil$IndexOrderComparator, name, initialize, &classInfo$$, DataFlavorUtil$IndexOrderComparator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DataFlavorUtil$IndexOrderComparator);
	});
	return class$;
}

$Class* DataFlavorUtil$IndexOrderComparator::class$ = nullptr;

	} // datatransfer
} // sun