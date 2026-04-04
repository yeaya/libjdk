#include <com/sun/tools/javac/main/Option$OptionKind.h>
#include <com/sun/tools/javac/main/Option.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef EXTENDED
#undef HIDDEN
#undef STANDARD

using $Option$OptionKindArray = $Array<::com::sun::tools::javac::main::Option$OptionKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {

Option$OptionKind* Option$OptionKind::STANDARD = nullptr;
Option$OptionKind* Option$OptionKind::EXTENDED = nullptr;
Option$OptionKind* Option$OptionKind::HIDDEN = nullptr;
$Option$OptionKindArray* Option$OptionKind::$VALUES = nullptr;

$Option$OptionKindArray* Option$OptionKind::$values() {
	$init(Option$OptionKind);
	return $new($Option$OptionKindArray, {
		Option$OptionKind::STANDARD,
		Option$OptionKind::EXTENDED,
		Option$OptionKind::HIDDEN
	});
}

$Option$OptionKindArray* Option$OptionKind::values() {
	$init(Option$OptionKind);
	return $cast($Option$OptionKindArray, Option$OptionKind::$VALUES->clone());
}

Option$OptionKind* Option$OptionKind::valueOf($String* name) {
	$init(Option$OptionKind);
	return $cast(Option$OptionKind, $Enum::valueOf(Option$OptionKind::class$, name));
}

void Option$OptionKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Option$OptionKind::clinit$($Class* clazz) {
	$assignStatic(Option$OptionKind::STANDARD, $new(Option$OptionKind, "STANDARD"_s, 0));
	$assignStatic(Option$OptionKind::EXTENDED, $new(Option$OptionKind, "EXTENDED"_s, 1));
	$assignStatic(Option$OptionKind::HIDDEN, $new(Option$OptionKind, "HIDDEN"_s, 2));
	$assignStatic(Option$OptionKind::$VALUES, Option$OptionKind::$values());
}

Option$OptionKind::Option$OptionKind() {
}

$Class* Option$OptionKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"STANDARD", "Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionKind, STANDARD)},
		{"EXTENDED", "Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionKind, EXTENDED)},
		{"HIDDEN", "Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Option$OptionKind, HIDDEN)},
		{"$VALUES", "[Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Option$OptionKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Option$OptionKind, $values, $Option$OptionKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Option$OptionKind, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Option$OptionKind, valueOf, Option$OptionKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/main/Option$OptionKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Option$OptionKind, values, $Option$OptionKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Option$OptionKind", "com.sun.tools.javac.main.Option", "OptionKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Option$OptionKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Option$OptionKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.Option"
	};
	$loadClass(Option$OptionKind, name, initialize, &classInfo$$, Option$OptionKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Option$OptionKind));
	});
	return class$;
}

$Class* Option$OptionKind::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com