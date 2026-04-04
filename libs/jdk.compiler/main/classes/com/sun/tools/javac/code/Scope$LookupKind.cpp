#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef NON_RECURSIVE
#undef RECURSIVE

using $Scope$LookupKindArray = $Array<::com::sun::tools::javac::code::Scope$LookupKind>;
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

Scope$LookupKind* Scope$LookupKind::RECURSIVE = nullptr;
Scope$LookupKind* Scope$LookupKind::NON_RECURSIVE = nullptr;
$Scope$LookupKindArray* Scope$LookupKind::$VALUES = nullptr;

$Scope$LookupKindArray* Scope$LookupKind::$values() {
	$init(Scope$LookupKind);
	return $new($Scope$LookupKindArray, {
		Scope$LookupKind::RECURSIVE,
		Scope$LookupKind::NON_RECURSIVE
	});
}

$Scope$LookupKindArray* Scope$LookupKind::values() {
	$init(Scope$LookupKind);
	return $cast($Scope$LookupKindArray, Scope$LookupKind::$VALUES->clone());
}

Scope$LookupKind* Scope$LookupKind::valueOf($String* name) {
	$init(Scope$LookupKind);
	return $cast(Scope$LookupKind, $Enum::valueOf(Scope$LookupKind::class$, name));
}

void Scope$LookupKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Scope$LookupKind::clinit$($Class* clazz) {
	$assignStatic(Scope$LookupKind::RECURSIVE, $new(Scope$LookupKind, "RECURSIVE"_s, 0));
	$assignStatic(Scope$LookupKind::NON_RECURSIVE, $new(Scope$LookupKind, "NON_RECURSIVE"_s, 1));
	$assignStatic(Scope$LookupKind::$VALUES, Scope$LookupKind::$values());
}

Scope$LookupKind::Scope$LookupKind() {
}

$Class* Scope$LookupKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RECURSIVE", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Scope$LookupKind, RECURSIVE)},
		{"NON_RECURSIVE", "Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Scope$LookupKind, NON_RECURSIVE)},
		{"$VALUES", "[Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Scope$LookupKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Scope$LookupKind, $values, $Scope$LookupKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Scope$LookupKind, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Scope$LookupKind, valueOf, Scope$LookupKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/code/Scope$LookupKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Scope$LookupKind, values, $Scope$LookupKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$LookupKind", "com.sun.tools.javac.code.Scope", "LookupKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.code.Scope$LookupKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Scope$LookupKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Scope"
	};
	$loadClass(Scope$LookupKind, name, initialize, &classInfo$$, Scope$LookupKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Scope$LookupKind));
	});
	return class$;
}

$Class* Scope$LookupKind::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com