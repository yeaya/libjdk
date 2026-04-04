#include <javax/swing/RowFilter$GeneralFilter.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

namespace javax {
	namespace swing {

void RowFilter$GeneralFilter::init$($ints* columns) {
	$RowFilter::init$();
	$RowFilter::checkIndices(columns);
	$set(this, columns, columns);
}

bool RowFilter$GeneralFilter::include($RowFilter$Entry* value) {
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

RowFilter$GeneralFilter::RowFilter$GeneralFilter() {
}

$Class* RowFilter$GeneralFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"columns", "[I", nullptr, $PRIVATE, $field(RowFilter$GeneralFilter, columns)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", nullptr, 0, $method(RowFilter$GeneralFilter, init$, void, $ints*)},
		{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;)Z", $PUBLIC, $virtualMethod(RowFilter$GeneralFilter, include, bool, $RowFilter$Entry*)},
		{"include", "(Ljavax/swing/RowFilter$Entry;I)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;I)Z", $PROTECTED | $ABSTRACT, $virtualMethod(RowFilter$GeneralFilter, include, bool, $RowFilter$Entry*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RowFilter$GeneralFilter", "javax.swing.RowFilter", "GeneralFilter", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"javax.swing.RowFilter$GeneralFilter",
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
	$loadClass(RowFilter$GeneralFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowFilter$GeneralFilter);
	});
	return class$;
}

$Class* RowFilter$GeneralFilter::class$ = nullptr;

	} // swing
} // javax