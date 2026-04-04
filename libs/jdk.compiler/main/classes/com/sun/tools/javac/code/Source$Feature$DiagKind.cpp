#include <com/sun/tools/javac/code/Source$Feature$DiagKind.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NORMAL
#undef PLURAL

using $Source$Feature$DiagKindArray = $Array<::com::sun::tools::javac::code::Source$Feature$DiagKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

Source$Feature$DiagKind* Source$Feature$DiagKind::NORMAL = nullptr;
Source$Feature$DiagKind* Source$Feature$DiagKind::PLURAL = nullptr;
$Source$Feature$DiagKindArray* Source$Feature$DiagKind::$VALUES = nullptr;

$Source$Feature$DiagKindArray* Source$Feature$DiagKind::$values() {
	$init(Source$Feature$DiagKind);
	return $new($Source$Feature$DiagKindArray, {
		Source$Feature$DiagKind::NORMAL,
		Source$Feature$DiagKind::PLURAL
	});
}

$Source$Feature$DiagKindArray* Source$Feature$DiagKind::values() {
	$init(Source$Feature$DiagKind);
	return $cast($Source$Feature$DiagKindArray, Source$Feature$DiagKind::$VALUES->clone());
}

Source$Feature$DiagKind* Source$Feature$DiagKind::valueOf($String* name) {
	$init(Source$Feature$DiagKind);
	return $cast(Source$Feature$DiagKind, $Enum::valueOf(Source$Feature$DiagKind::class$, name));
}

void Source$Feature$DiagKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Source$Feature$DiagKind::clinit$($Class* clazz) {
	$assignStatic(Source$Feature$DiagKind::NORMAL, $new(Source$Feature$DiagKind, "NORMAL"_s, 0));
	$assignStatic(Source$Feature$DiagKind::PLURAL, $new(Source$Feature$DiagKind, "PLURAL"_s, 1));
	$assignStatic(Source$Feature$DiagKind::$VALUES, Source$Feature$DiagKind::$values());
}

Source$Feature$DiagKind::Source$Feature$DiagKind() {
}

$Class* Source$Feature$DiagKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NORMAL", "Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature$DiagKind, NORMAL)},
		{"PLURAL", "Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Source$Feature$DiagKind, PLURAL)},
		{"$VALUES", "[Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Source$Feature$DiagKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Source$Feature$DiagKind, $values, $Source$Feature$DiagKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Source$Feature$DiagKind, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Source$Feature$DiagKind, valueOf, Source$Feature$DiagKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/code/Source$Feature$DiagKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Source$Feature$DiagKind, values, $Source$Feature$DiagKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Source$Feature", "com.sun.tools.javac.code.Source", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"com.sun.tools.javac.code.Source$Feature$DiagKind", "com.sun.tools.javac.code.Source$Feature", "DiagKind", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.code.Source$Feature$DiagKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Source$Feature$DiagKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Source"
	};
	$loadClass(Source$Feature$DiagKind, name, initialize, &classInfo$$, Source$Feature$DiagKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Source$Feature$DiagKind));
	});
	return class$;
}

$Class* Source$Feature$DiagKind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com