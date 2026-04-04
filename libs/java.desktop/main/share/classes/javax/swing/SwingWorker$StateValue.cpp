#include <javax/swing/SwingWorker$StateValue.h>
#include <java/lang/Enum.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

#undef DONE
#undef PENDING
#undef STARTED

using $SwingWorker$StateValueArray = $Array<::javax::swing::SwingWorker$StateValue>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

SwingWorker$StateValue* SwingWorker$StateValue::PENDING = nullptr;
SwingWorker$StateValue* SwingWorker$StateValue::STARTED = nullptr;
SwingWorker$StateValue* SwingWorker$StateValue::DONE = nullptr;
$SwingWorker$StateValueArray* SwingWorker$StateValue::$VALUES = nullptr;

$SwingWorker$StateValueArray* SwingWorker$StateValue::$values() {
	$init(SwingWorker$StateValue);
	return $new($SwingWorker$StateValueArray, {
		SwingWorker$StateValue::PENDING,
		SwingWorker$StateValue::STARTED,
		SwingWorker$StateValue::DONE
	});
}

$SwingWorker$StateValueArray* SwingWorker$StateValue::values() {
	$init(SwingWorker$StateValue);
	return $cast($SwingWorker$StateValueArray, SwingWorker$StateValue::$VALUES->clone());
}

SwingWorker$StateValue* SwingWorker$StateValue::valueOf($String* name) {
	$init(SwingWorker$StateValue);
	return $cast(SwingWorker$StateValue, $Enum::valueOf(SwingWorker$StateValue::class$, name));
}

void SwingWorker$StateValue::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void SwingWorker$StateValue::clinit$($Class* clazz) {
	$assignStatic(SwingWorker$StateValue::PENDING, $new(SwingWorker$StateValue, "PENDING"_s, 0));
	$assignStatic(SwingWorker$StateValue::STARTED, $new(SwingWorker$StateValue, "STARTED"_s, 1));
	$assignStatic(SwingWorker$StateValue::DONE, $new(SwingWorker$StateValue, "DONE"_s, 2));
	$assignStatic(SwingWorker$StateValue::$VALUES, SwingWorker$StateValue::$values());
}

SwingWorker$StateValue::SwingWorker$StateValue() {
}

$Class* SwingWorker$StateValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PENDING", "Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingWorker$StateValue, PENDING)},
		{"STARTED", "Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingWorker$StateValue, STARTED)},
		{"DONE", "Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingWorker$StateValue, DONE)},
		{"$VALUES", "[Ljavax/swing/SwingWorker$StateValue;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SwingWorker$StateValue, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljavax/swing/SwingWorker$StateValue;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SwingWorker$StateValue, $values, $SwingWorker$StateValueArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(SwingWorker$StateValue, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingWorker$StateValue, valueOf, SwingWorker$StateValue*, $String*)},
		{"values", "()[Ljavax/swing/SwingWorker$StateValue;", nullptr, $PUBLIC | $STATIC, $staticMethod(SwingWorker$StateValue, values, $SwingWorker$StateValueArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SwingWorker$StateValue", "javax.swing.SwingWorker", "StateValue", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"javax.swing.SwingWorker$StateValue",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljavax/swing/SwingWorker$StateValue;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.SwingWorker"
	};
	$loadClass(SwingWorker$StateValue, name, initialize, &classInfo$$, SwingWorker$StateValue::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SwingWorker$StateValue));
	});
	return class$;
}

$Class* SwingWorker$StateValue::class$ = nullptr;

	} // swing
} // javax