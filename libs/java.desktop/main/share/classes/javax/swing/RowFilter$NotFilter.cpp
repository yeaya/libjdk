#include <javax/swing/RowFilter$NotFilter.h>
#include <javax/swing/RowFilter$Entry.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowFilter = ::javax::swing::RowFilter;
using $RowFilter$Entry = ::javax::swing::RowFilter$Entry;

namespace javax {
	namespace swing {

void RowFilter$NotFilter::init$($RowFilter* filter) {
	$RowFilter::init$();
	if (filter == nullptr) {
		$throwNew($IllegalArgumentException, "filter must be non-null"_s);
	}
	$set(this, filter, filter);
}

bool RowFilter$NotFilter::include($RowFilter$Entry* value) {
	return !$nc(this->filter)->include(value);
}

RowFilter$NotFilter::RowFilter$NotFilter() {
}

$Class* RowFilter$NotFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filter", "Ljavax/swing/RowFilter;", "Ljavax/swing/RowFilter<TM;TI;>;", $PRIVATE, $field(RowFilter$NotFilter, filter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/RowFilter;)V", "(Ljavax/swing/RowFilter<TM;TI;>;)V", 0, $method(RowFilter$NotFilter, init$, void, $RowFilter*)},
		{"include", "(Ljavax/swing/RowFilter$Entry;)Z", "(Ljavax/swing/RowFilter$Entry<+TM;+TI;>;)Z", $PUBLIC, $virtualMethod(RowFilter$NotFilter, include, bool, $RowFilter$Entry*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RowFilter$NotFilter", "javax.swing.RowFilter", "NotFilter", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.RowFilter$NotFilter",
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
	$loadClass(RowFilter$NotFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowFilter$NotFilter);
	});
	return class$;
}

$Class* RowFilter$NotFilter::class$ = nullptr;

	} // swing
} // javax