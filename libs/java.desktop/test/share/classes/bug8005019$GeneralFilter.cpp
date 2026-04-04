#include <bug8005019$GeneralFilter.h>
#include <bug8005019.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $IntegerArray = $Array<::java::lang::Integer>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

void bug8005019$GeneralFilter::init$($ints* columns) {
	$useLocalObjectStack();
	$RowFilter::init$();
	$set(this, excludes, $Arrays::asList($$new($IntegerArray, {$($Integer::valueOf(0))})));
	$set(this, columns, columns);
}

bool bug8005019$GeneralFilter::include($RowFilter$Entry* value) {
	int32_t count = $nc(value)->getValueCount();
	if ($nc(this->columns)->length > 0) {
		for (int32_t i = this->columns->length - 1; i >= 0; --i) {
			int32_t index = $nc(this->columns)->get(i);
			if (index < count) {
				if (include(value, index)) {
					return true;
				}
			}
		}
	} else {
		while (--count >= 0) {
			if (include(value, count)) {
				return true;
			}
		}
	}
	return false;
}

bool bug8005019$GeneralFilter::include($RowFilter$Entry* entry, int32_t index) {
	return !$nc(this->excludes)->contains($($nc(entry)->getIdentifier()));
}

bug8005019$GeneralFilter::bug8005019$GeneralFilter() {
}

$Class* bug8005019$GeneralFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"columns", "[I", nullptr, $PRIVATE, $field(bug8005019$GeneralFilter, columns)},
		{"excludes", "Ljava/util/List;", nullptr, 0, $field(bug8005019$GeneralFilter, excludes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", nullptr, 0, $method(bug8005019$GeneralFilter, init$, void, $ints*)},
		{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+Ljava/lang/Object;+Ljava/lang/Object;>;)Z", $PUBLIC, $virtualMethod(bug8005019$GeneralFilter, include, bool, $RowFilter$Entry*)},
		{"include", "(Ljavax/swing/RowFilter$Entry;I)Z", "(Ljavax/swing/RowFilter$Entry<+Ljava/lang/Object;+Ljava/lang/Object;>;I)Z", $PROTECTED, $virtualMethod(bug8005019$GeneralFilter, include, bool, $RowFilter$Entry*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8005019$GeneralFilter", "bug8005019", "GeneralFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8005019$GeneralFilter",
		"javax.swing.RowFilter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/RowFilter<Ljava/lang/Object;Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8005019"
	};
	$loadClass(bug8005019$GeneralFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8005019$GeneralFilter);
	});
	return class$;
}

$Class* bug8005019$GeneralFilter::class$ = nullptr;