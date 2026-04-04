#include <sun/swing/table/DefaultTableCellHeaderRenderer$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/SortOrder.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>
#include <jcpp.h>

#undef ASCENDING
#undef DESCENDING
#undef UNSORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SortOrder = ::javax::swing::SortOrder;

namespace sun {
	namespace swing {
		namespace table {

$ints* DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder = nullptr;

void DefaultTableCellHeaderRenderer$1::clinit$($Class* clazz) {
	$assignStatic(DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder, $new($ints, $($SortOrder::values())->length));
	{
		try {
			DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder->set($SortOrder::ASCENDING->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder->set($SortOrder::DESCENDING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder->set($SortOrder::UNSORTED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

DefaultTableCellHeaderRenderer$1::DefaultTableCellHeaderRenderer$1() {
}

$Class* DefaultTableCellHeaderRenderer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$SortOrder", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(DefaultTableCellHeaderRenderer$1, $SwitchMap$javax$swing$SortOrder)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.table.DefaultTableCellHeaderRenderer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.table.DefaultTableCellHeaderRenderer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.swing.table.DefaultTableCellHeaderRenderer$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.table.DefaultTableCellHeaderRenderer"
	};
	$loadClass(DefaultTableCellHeaderRenderer$1, name, initialize, &classInfo$$, DefaultTableCellHeaderRenderer$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultTableCellHeaderRenderer$1);
	});
	return class$;
}

$Class* DefaultTableCellHeaderRenderer$1::class$ = nullptr;

		} // table
	} // swing
} // sun