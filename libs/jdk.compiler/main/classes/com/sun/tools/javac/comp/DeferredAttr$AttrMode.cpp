#include <com/sun/tools/javac/comp/DeferredAttr$AttrMode.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CHECK
#undef SPECULATIVE

using $DeferredAttr$AttrModeArray = $Array<::com::sun::tools::javac::comp::DeferredAttr$AttrMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

DeferredAttr$AttrMode* DeferredAttr$AttrMode::SPECULATIVE = nullptr;
DeferredAttr$AttrMode* DeferredAttr$AttrMode::CHECK = nullptr;
$DeferredAttr$AttrModeArray* DeferredAttr$AttrMode::$VALUES = nullptr;

$DeferredAttr$AttrModeArray* DeferredAttr$AttrMode::$values() {
	$init(DeferredAttr$AttrMode);
	return $new($DeferredAttr$AttrModeArray, {
		DeferredAttr$AttrMode::SPECULATIVE,
		DeferredAttr$AttrMode::CHECK
	});
}

$DeferredAttr$AttrModeArray* DeferredAttr$AttrMode::values() {
	$init(DeferredAttr$AttrMode);
	return $cast($DeferredAttr$AttrModeArray, DeferredAttr$AttrMode::$VALUES->clone());
}

DeferredAttr$AttrMode* DeferredAttr$AttrMode::valueOf($String* name) {
	$init(DeferredAttr$AttrMode);
	return $cast(DeferredAttr$AttrMode, $Enum::valueOf(DeferredAttr$AttrMode::class$, name));
}

void DeferredAttr$AttrMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void DeferredAttr$AttrMode::clinit$($Class* clazz) {
	$assignStatic(DeferredAttr$AttrMode::SPECULATIVE, $new(DeferredAttr$AttrMode, "SPECULATIVE"_s, 0));
	$assignStatic(DeferredAttr$AttrMode::CHECK, $new(DeferredAttr$AttrMode, "CHECK"_s, 1));
	$assignStatic(DeferredAttr$AttrMode::$VALUES, DeferredAttr$AttrMode::$values());
}

DeferredAttr$AttrMode::DeferredAttr$AttrMode() {
}

$Class* DeferredAttr$AttrMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SPECULATIVE", "Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DeferredAttr$AttrMode, SPECULATIVE)},
		{"CHECK", "Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DeferredAttr$AttrMode, CHECK)},
		{"$VALUES", "[Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DeferredAttr$AttrMode, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DeferredAttr$AttrMode, $values, $DeferredAttr$AttrModeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(DeferredAttr$AttrMode, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(DeferredAttr$AttrMode, valueOf, DeferredAttr$AttrMode*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(DeferredAttr$AttrMode, values, $DeferredAttr$AttrModeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$AttrMode", "com.sun.tools.javac.comp.DeferredAttr", "AttrMode", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.comp.DeferredAttr$AttrMode",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/comp/DeferredAttr$AttrMode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$AttrMode, name, initialize, &classInfo$$, DeferredAttr$AttrMode::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DeferredAttr$AttrMode));
	});
	return class$;
}

$Class* DeferredAttr$AttrMode::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com