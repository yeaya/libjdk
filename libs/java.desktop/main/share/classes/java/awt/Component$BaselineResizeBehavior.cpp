#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CENTER_OFFSET
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef OTHER

using $Component$BaselineResizeBehaviorArray = $Array<::java::awt::Component$BaselineResizeBehavior>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

Component$BaselineResizeBehavior* Component$BaselineResizeBehavior::CONSTANT_ASCENT = nullptr;
Component$BaselineResizeBehavior* Component$BaselineResizeBehavior::CONSTANT_DESCENT = nullptr;
Component$BaselineResizeBehavior* Component$BaselineResizeBehavior::CENTER_OFFSET = nullptr;
Component$BaselineResizeBehavior* Component$BaselineResizeBehavior::OTHER = nullptr;
$Component$BaselineResizeBehaviorArray* Component$BaselineResizeBehavior::$VALUES = nullptr;

$Component$BaselineResizeBehaviorArray* Component$BaselineResizeBehavior::$values() {
	$init(Component$BaselineResizeBehavior);
	return $new($Component$BaselineResizeBehaviorArray, {
		Component$BaselineResizeBehavior::CONSTANT_ASCENT,
		Component$BaselineResizeBehavior::CONSTANT_DESCENT,
		Component$BaselineResizeBehavior::CENTER_OFFSET,
		Component$BaselineResizeBehavior::OTHER
	});
}

$Component$BaselineResizeBehaviorArray* Component$BaselineResizeBehavior::values() {
	$init(Component$BaselineResizeBehavior);
	return $cast($Component$BaselineResizeBehaviorArray, Component$BaselineResizeBehavior::$VALUES->clone());
}

Component$BaselineResizeBehavior* Component$BaselineResizeBehavior::valueOf($String* name) {
	$init(Component$BaselineResizeBehavior);
	return $cast(Component$BaselineResizeBehavior, $Enum::valueOf(Component$BaselineResizeBehavior::class$, name));
}

void Component$BaselineResizeBehavior::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Component$BaselineResizeBehavior::clinit$($Class* clazz) {
	$assignStatic(Component$BaselineResizeBehavior::CONSTANT_ASCENT, $new(Component$BaselineResizeBehavior, "CONSTANT_ASCENT"_s, 0));
	$assignStatic(Component$BaselineResizeBehavior::CONSTANT_DESCENT, $new(Component$BaselineResizeBehavior, "CONSTANT_DESCENT"_s, 1));
	$assignStatic(Component$BaselineResizeBehavior::CENTER_OFFSET, $new(Component$BaselineResizeBehavior, "CENTER_OFFSET"_s, 2));
	$assignStatic(Component$BaselineResizeBehavior::OTHER, $new(Component$BaselineResizeBehavior, "OTHER"_s, 3));
	$assignStatic(Component$BaselineResizeBehavior::$VALUES, Component$BaselineResizeBehavior::$values());
}

Component$BaselineResizeBehavior::Component$BaselineResizeBehavior() {
}

$Class* Component$BaselineResizeBehavior::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONSTANT_ASCENT", "Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Component$BaselineResizeBehavior, CONSTANT_ASCENT)},
		{"CONSTANT_DESCENT", "Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Component$BaselineResizeBehavior, CONSTANT_DESCENT)},
		{"CENTER_OFFSET", "Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Component$BaselineResizeBehavior, CENTER_OFFSET)},
		{"OTHER", "Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Component$BaselineResizeBehavior, OTHER)},
		{"$VALUES", "[Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Component$BaselineResizeBehavior, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Component$BaselineResizeBehavior, $values, $Component$BaselineResizeBehaviorArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Component$BaselineResizeBehavior, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC | $STATIC, $staticMethod(Component$BaselineResizeBehavior, valueOf, Component$BaselineResizeBehavior*, $String*)},
		{"values", "()[Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC | $STATIC, $staticMethod(Component$BaselineResizeBehavior, values, $Component$BaselineResizeBehaviorArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Component$BaselineResizeBehavior", "java.awt.Component", "BaselineResizeBehavior", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"java.awt.Component$BaselineResizeBehavior",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljava/awt/Component$BaselineResizeBehavior;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Component"
	};
	$loadClass(Component$BaselineResizeBehavior, name, initialize, &classInfo$$, Component$BaselineResizeBehavior::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Component$BaselineResizeBehavior));
	});
	return class$;
}

$Class* Component$BaselineResizeBehavior::class$ = nullptr;

	} // awt
} // java