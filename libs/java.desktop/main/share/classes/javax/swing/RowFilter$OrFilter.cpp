#include <javax/swing/RowFilter$OrFilter.h>
#include <java/lang/Iterable.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

namespace javax {
	namespace swing {

void RowFilter$OrFilter::init$($Iterable* filters) {
	$useLocalObjectStack();
	$RowFilter::init$();
	$set(this, filters, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(filters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($RowFilter, filter, $cast($RowFilter, i$->next()));
			{
				if (filter == nullptr) {
					$throwNew($IllegalArgumentException, "Filter must be non-null"_s);
				}
				this->filters->add(filter);
			}
		}
	}
}

bool RowFilter$OrFilter::include($RowFilter$Entry* value) {
	$useLocalObjectStack();
	$var($Iterator, i$, $nc(this->filters)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($RowFilter, filter, $cast($RowFilter, i$->next()));
		if ($nc(filter)->include(value)) {
			return true;
		}
	}
	return false;
}

RowFilter$OrFilter::RowFilter$OrFilter() {
}

$Class* RowFilter$OrFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filters", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/RowFilter<-TM;-TI;>;>;", 0, $field(RowFilter$OrFilter, filters)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<+Ljavax/swing/RowFilter<-TM;-TI;>;>;)V", 0, $method(RowFilter$OrFilter, init$, void, $Iterable*)},
		{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;)Z", $PUBLIC, $virtualMethod(RowFilter$OrFilter, include, bool, $RowFilter$Entry*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RowFilter$OrFilter", "javax.swing.RowFilter", "OrFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.RowFilter$OrFilter",
		"javax.swing.RowFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljavax/swing/RowFilter<TM;TI;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.RowFilter"
	};
	$loadClass(RowFilter$OrFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowFilter$OrFilter);
	});
	return class$;
}

$Class* RowFilter$OrFilter::class$ = nullptr;

	} // swing
} // javax