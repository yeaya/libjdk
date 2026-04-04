#include <javax/swing/RowFilter$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/RowFilter$ComparisonType.h>
#include <javax/swing/RowFilter.h>
#include <jcpp.h>

#undef AFTER
#undef BEFORE
#undef EQUAL
#undef NOT_EQUAL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $RowFilter$ComparisonType = ::javax::swing::RowFilter$ComparisonType;

namespace javax {
	namespace swing {

$ints* RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType = nullptr;

void RowFilter$1::clinit$($Class* clazz) {
	$assignStatic(RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType, $new($ints, $($RowFilter$ComparisonType::values())->length));
	{
		try {
			RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType->set($RowFilter$ComparisonType::BEFORE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType->set($RowFilter$ComparisonType::AFTER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType->set($RowFilter$ComparisonType::EQUAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			RowFilter$1::$SwitchMap$javax$swing$RowFilter$ComparisonType->set($RowFilter$ComparisonType::NOT_EQUAL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

RowFilter$1::RowFilter$1() {
}

$Class* RowFilter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$RowFilter$ComparisonType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RowFilter$1, $SwitchMap$javax$swing$RowFilter$ComparisonType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.RowFilter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RowFilter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.swing.RowFilter$1",
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
		"javax.swing.RowFilter"
	};
	$loadClass(RowFilter$1, name, initialize, &classInfo$$, RowFilter$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RowFilter$1);
	});
	return class$;
}

$Class* RowFilter$1::class$ = nullptr;

	} // swing
} // javax