#include <javax/swing/JTable$PrintMode.h>
#include <java/lang/Enum.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef FIT_WIDTH
#undef NORMAL

using $JTable$PrintModeArray = $Array<::javax::swing::JTable$PrintMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

JTable$PrintMode* JTable$PrintMode::NORMAL = nullptr;
JTable$PrintMode* JTable$PrintMode::FIT_WIDTH = nullptr;
$JTable$PrintModeArray* JTable$PrintMode::$VALUES = nullptr;

$JTable$PrintModeArray* JTable$PrintMode::$values() {
	$init(JTable$PrintMode);
	return $new($JTable$PrintModeArray, {
		JTable$PrintMode::NORMAL,
		JTable$PrintMode::FIT_WIDTH
	});
}

$JTable$PrintModeArray* JTable$PrintMode::values() {
	$init(JTable$PrintMode);
	return $cast($JTable$PrintModeArray, JTable$PrintMode::$VALUES->clone());
}

JTable$PrintMode* JTable$PrintMode::valueOf($String* name) {
	$init(JTable$PrintMode);
	return $cast(JTable$PrintMode, $Enum::valueOf(JTable$PrintMode::class$, name));
}

void JTable$PrintMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void JTable$PrintMode::clinit$($Class* clazz) {
	$assignStatic(JTable$PrintMode::NORMAL, $new(JTable$PrintMode, "NORMAL"_s, 0));
	$assignStatic(JTable$PrintMode::FIT_WIDTH, $new(JTable$PrintMode, "FIT_WIDTH"_s, 1));
	$assignStatic(JTable$PrintMode::$VALUES, JTable$PrintMode::$values());
}

JTable$PrintMode::JTable$PrintMode() {
}

$Class* JTable$PrintMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NORMAL", "Ljavax/swing/JTable$PrintMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JTable$PrintMode, NORMAL)},
		{"FIT_WIDTH", "Ljavax/swing/JTable$PrintMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JTable$PrintMode, FIT_WIDTH)},
		{"$VALUES", "[Ljavax/swing/JTable$PrintMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JTable$PrintMode, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/swing/JTable$PrintMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JTable$PrintMode, $values, $JTable$PrintModeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(JTable$PrintMode, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/swing/JTable$PrintMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(JTable$PrintMode, valueOf, JTable$PrintMode*, $String*)},
		{"values", "()[Ljavax/swing/JTable$PrintMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(JTable$PrintMode, values, $JTable$PrintModeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$PrintMode", "javax.swing.JTable", "PrintMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"javax.swing.JTable$PrintMode",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/swing/JTable$PrintMode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$PrintMode, name, initialize, &classInfo$$, JTable$PrintMode::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JTable$PrintMode));
	});
	return class$;
}

$Class* JTable$PrintMode::class$ = nullptr;

	} // swing
} // javax