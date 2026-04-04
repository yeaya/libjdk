#include <javax/swing/undo/UndoManager$Action.h>
#include <java/lang/Enum.h>
#include <javax/swing/undo/UndoManager.h>
#include <jcpp.h>

#undef ANY
#undef REDO
#undef UNDO

using $UndoManager$ActionArray = $Array<::javax::swing::undo::UndoManager$Action>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace undo {

UndoManager$Action* UndoManager$Action::UNDO = nullptr;
UndoManager$Action* UndoManager$Action::REDO = nullptr;
UndoManager$Action* UndoManager$Action::ANY = nullptr;
$UndoManager$ActionArray* UndoManager$Action::$VALUES = nullptr;

$UndoManager$ActionArray* UndoManager$Action::$values() {
	$init(UndoManager$Action);
	return $new($UndoManager$ActionArray, {
		UndoManager$Action::UNDO,
		UndoManager$Action::REDO,
		UndoManager$Action::ANY
	});
}

$UndoManager$ActionArray* UndoManager$Action::values() {
	$init(UndoManager$Action);
	return $cast($UndoManager$ActionArray, UndoManager$Action::$VALUES->clone());
}

UndoManager$Action* UndoManager$Action::valueOf($String* name) {
	$init(UndoManager$Action);
	return $cast(UndoManager$Action, $Enum::valueOf(UndoManager$Action::class$, name));
}

void UndoManager$Action::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void UndoManager$Action::clinit$($Class* clazz) {
	$assignStatic(UndoManager$Action::UNDO, $new(UndoManager$Action, "UNDO"_s, 0));
	$assignStatic(UndoManager$Action::REDO, $new(UndoManager$Action, "REDO"_s, 1));
	$assignStatic(UndoManager$Action::ANY, $new(UndoManager$Action, "ANY"_s, 2));
	$assignStatic(UndoManager$Action::$VALUES, UndoManager$Action::$values());
}

UndoManager$Action::UndoManager$Action() {
}

$Class* UndoManager$Action::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"UNDO", "Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UndoManager$Action, UNDO)},
		{"REDO", "Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UndoManager$Action, REDO)},
		{"ANY", "Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UndoManager$Action, ANY)},
		{"$VALUES", "[Ljavax/swing/undo/UndoManager$Action;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UndoManager$Action, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/swing/undo/UndoManager$Action;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UndoManager$Action, $values, $UndoManager$ActionArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(UndoManager$Action, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC, $staticMethod(UndoManager$Action, valueOf, UndoManager$Action*, $String*)},
		{"values", "()[Ljavax/swing/undo/UndoManager$Action;", nullptr, $PUBLIC | $STATIC, $staticMethod(UndoManager$Action, values, $UndoManager$ActionArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.undo.UndoManager$Action", "javax.swing.undo.UndoManager", "Action", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"javax.swing.undo.UndoManager$Action",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/swing/undo/UndoManager$Action;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.undo.UndoManager"
	};
	$loadClass(UndoManager$Action, name, initialize, &classInfo$$, UndoManager$Action::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UndoManager$Action));
	});
	return class$;
}

$Class* UndoManager$Action::class$ = nullptr;

		} // undo
	} // swing
} // javax