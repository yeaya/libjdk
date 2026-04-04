#include <javax/swing/event/RowSorterEvent$Type.h>
#include <java/lang/Enum.h>
#include <javax/swing/event/RowSorterEvent.h>
#include <jcpp.h>

#undef SORTED
#undef SORT_ORDER_CHANGED

using $RowSorterEvent$TypeArray = $Array<::javax::swing::event::RowSorterEvent$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace event {

RowSorterEvent$Type* RowSorterEvent$Type::SORT_ORDER_CHANGED = nullptr;
RowSorterEvent$Type* RowSorterEvent$Type::SORTED = nullptr;
$RowSorterEvent$TypeArray* RowSorterEvent$Type::$VALUES = nullptr;

$RowSorterEvent$TypeArray* RowSorterEvent$Type::$values() {
	$init(RowSorterEvent$Type);
	return $new($RowSorterEvent$TypeArray, {
		RowSorterEvent$Type::SORT_ORDER_CHANGED,
		RowSorterEvent$Type::SORTED
	});
}

$RowSorterEvent$TypeArray* RowSorterEvent$Type::values() {
	$init(RowSorterEvent$Type);
	return $cast($RowSorterEvent$TypeArray, RowSorterEvent$Type::$VALUES->clone());
}

RowSorterEvent$Type* RowSorterEvent$Type::valueOf($String* name) {
	$init(RowSorterEvent$Type);
	return $cast(RowSorterEvent$Type, $Enum::valueOf(RowSorterEvent$Type::class$, name));
}

void RowSorterEvent$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void RowSorterEvent$Type::clinit$($Class* clazz) {
	$assignStatic(RowSorterEvent$Type::SORT_ORDER_CHANGED, $new(RowSorterEvent$Type, "SORT_ORDER_CHANGED"_s, 0));
	$assignStatic(RowSorterEvent$Type::SORTED, $new(RowSorterEvent$Type, "SORTED"_s, 1));
	$assignStatic(RowSorterEvent$Type::$VALUES, RowSorterEvent$Type::$values());
}

RowSorterEvent$Type::RowSorterEvent$Type() {
}

$Class* RowSorterEvent$Type::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SORT_ORDER_CHANGED", "Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowSorterEvent$Type, SORT_ORDER_CHANGED)},
		{"SORTED", "Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RowSorterEvent$Type, SORTED)},
		{"$VALUES", "[Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RowSorterEvent$Type, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RowSorterEvent$Type, $values, $RowSorterEvent$TypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(RowSorterEvent$Type, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(RowSorterEvent$Type, valueOf, RowSorterEvent$Type*, $String*)},
		{"values", "()[Ljavax/swing/event/RowSorterEvent$Type;", nullptr, $PUBLIC | $STATIC, $staticMethod(RowSorterEvent$Type, values, $RowSorterEvent$TypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.event.RowSorterEvent$Type", "javax.swing.event.RowSorterEvent", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"javax.swing.event.RowSorterEvent$Type",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/swing/event/RowSorterEvent$Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.event.RowSorterEvent"
	};
	$loadClass(RowSorterEvent$Type, name, initialize, &classInfo$$, RowSorterEvent$Type::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RowSorterEvent$Type));
	});
	return class$;
}

$Class* RowSorterEvent$Type::class$ = nullptr;

		} // event
	} // swing
} // javax