#include <javax/swing/table/TableRowSorter$ComparableComparator.h>
#include <java/lang/Comparable.h>
#include <javax/swing/table/TableRowSorter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace table {

void TableRowSorter$ComparableComparator::init$() {
}

int32_t TableRowSorter$ComparableComparator::compare(Object$* o1, Object$* o2) {
	return $nc($cast($Comparable, o1))->compareTo(o2);
}

TableRowSorter$ComparableComparator::TableRowSorter$ComparableComparator() {
}

$Class* TableRowSorter$ComparableComparator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TableRowSorter$ComparableComparator, init$, void)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(TableRowSorter$ComparableComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.table.TableRowSorter$ComparableComparator", "javax.swing.table.TableRowSorter", "ComparableComparator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.table.TableRowSorter$ComparableComparator",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.table.TableRowSorter"
	};
	$loadClass(TableRowSorter$ComparableComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableRowSorter$ComparableComparator);
	});
	return class$;
}

$Class* TableRowSorter$ComparableComparator::class$ = nullptr;

		} // table
	} // swing
} // javax