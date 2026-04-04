#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef API
#undef COMPRESSED
#undef MANDATORY
#undef NON_DEFERRABLE
#undef RECOVERABLE
#undef RESOLVE_ERROR
#undef SOURCE_LEVEL
#undef SYNTAX

using $JCDiagnostic$DiagnosticFlagArray = $Array<::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

JCDiagnostic$DiagnosticFlag* JCDiagnostic$DiagnosticFlag::MANDATORY = nullptr;
JCDiagnostic$DiagnosticFlag* JCDiagnostic$DiagnosticFlag::RESOLVE_ERROR = nullptr;
JCDiagnostic$DiagnosticFlag* JCDiagnostic$DiagnosticFlag::SYNTAX = nullptr;
JCDiagnostic$DiagnosticFlag* JCDiagnostic$DiagnosticFlag::RECOVERABLE = nullptr;
JCDiagnostic$DiagnosticFlag* JCDiagnostic$DiagnosticFlag::NON_DEFERRABLE = nullptr;
JCDiagnostic$DiagnosticFlag* JCDiagnostic$DiagnosticFlag::COMPRESSED = nullptr;
JCDiagnostic$DiagnosticFlag* JCDiagnostic$DiagnosticFlag::API = nullptr;
JCDiagnostic$DiagnosticFlag* JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL = nullptr;
$JCDiagnostic$DiagnosticFlagArray* JCDiagnostic$DiagnosticFlag::$VALUES = nullptr;

$JCDiagnostic$DiagnosticFlagArray* JCDiagnostic$DiagnosticFlag::$values() {
	$init(JCDiagnostic$DiagnosticFlag);
	return $new($JCDiagnostic$DiagnosticFlagArray, {
		JCDiagnostic$DiagnosticFlag::MANDATORY,
		JCDiagnostic$DiagnosticFlag::RESOLVE_ERROR,
		JCDiagnostic$DiagnosticFlag::SYNTAX,
		JCDiagnostic$DiagnosticFlag::RECOVERABLE,
		JCDiagnostic$DiagnosticFlag::NON_DEFERRABLE,
		JCDiagnostic$DiagnosticFlag::COMPRESSED,
		JCDiagnostic$DiagnosticFlag::API,
		JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL
	});
}

$JCDiagnostic$DiagnosticFlagArray* JCDiagnostic$DiagnosticFlag::values() {
	$init(JCDiagnostic$DiagnosticFlag);
	return $cast($JCDiagnostic$DiagnosticFlagArray, JCDiagnostic$DiagnosticFlag::$VALUES->clone());
}

JCDiagnostic$DiagnosticFlag* JCDiagnostic$DiagnosticFlag::valueOf($String* name) {
	$init(JCDiagnostic$DiagnosticFlag);
	return $cast(JCDiagnostic$DiagnosticFlag, $Enum::valueOf(JCDiagnostic$DiagnosticFlag::class$, name));
}

void JCDiagnostic$DiagnosticFlag::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void JCDiagnostic$DiagnosticFlag::clinit$($Class* clazz) {
	$assignStatic(JCDiagnostic$DiagnosticFlag::MANDATORY, $new(JCDiagnostic$DiagnosticFlag, "MANDATORY"_s, 0));
	$assignStatic(JCDiagnostic$DiagnosticFlag::RESOLVE_ERROR, $new(JCDiagnostic$DiagnosticFlag, "RESOLVE_ERROR"_s, 1));
	$assignStatic(JCDiagnostic$DiagnosticFlag::SYNTAX, $new(JCDiagnostic$DiagnosticFlag, "SYNTAX"_s, 2));
	$assignStatic(JCDiagnostic$DiagnosticFlag::RECOVERABLE, $new(JCDiagnostic$DiagnosticFlag, "RECOVERABLE"_s, 3));
	$assignStatic(JCDiagnostic$DiagnosticFlag::NON_DEFERRABLE, $new(JCDiagnostic$DiagnosticFlag, "NON_DEFERRABLE"_s, 4));
	$assignStatic(JCDiagnostic$DiagnosticFlag::COMPRESSED, $new(JCDiagnostic$DiagnosticFlag, "COMPRESSED"_s, 5));
	$assignStatic(JCDiagnostic$DiagnosticFlag::API, $new(JCDiagnostic$DiagnosticFlag, "API"_s, 6));
	$assignStatic(JCDiagnostic$DiagnosticFlag::SOURCE_LEVEL, $new(JCDiagnostic$DiagnosticFlag, "SOURCE_LEVEL"_s, 7));
	$assignStatic(JCDiagnostic$DiagnosticFlag::$VALUES, JCDiagnostic$DiagnosticFlag::$values());
}

JCDiagnostic$DiagnosticFlag::JCDiagnostic$DiagnosticFlag() {
}

$Class* JCDiagnostic$DiagnosticFlag::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MANDATORY", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticFlag, MANDATORY)},
		{"RESOLVE_ERROR", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticFlag, RESOLVE_ERROR)},
		{"SYNTAX", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticFlag, SYNTAX)},
		{"RECOVERABLE", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticFlag, RECOVERABLE)},
		{"NON_DEFERRABLE", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticFlag, NON_DEFERRABLE)},
		{"COMPRESSED", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticFlag, COMPRESSED)},
		{"API", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticFlag, API)},
		{"SOURCE_LEVEL", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JCDiagnostic$DiagnosticFlag, SOURCE_LEVEL)},
		{"$VALUES", "[Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JCDiagnostic$DiagnosticFlag, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JCDiagnostic$DiagnosticFlag, $values, $JCDiagnostic$DiagnosticFlagArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(JCDiagnostic$DiagnosticFlag, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC, $staticMethod(JCDiagnostic$DiagnosticFlag, valueOf, JCDiagnostic$DiagnosticFlag*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;", nullptr, $PUBLIC | $STATIC, $staticMethod(JCDiagnostic$DiagnosticFlag, values, $JCDiagnostic$DiagnosticFlagArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticFlag", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticFlag", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.util.JCDiagnostic$DiagnosticFlag",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.JCDiagnostic"
	};
	$loadClass(JCDiagnostic$DiagnosticFlag, name, initialize, &classInfo$$, JCDiagnostic$DiagnosticFlag::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(JCDiagnostic$DiagnosticFlag));
	});
	return class$;
}

$Class* JCDiagnostic$DiagnosticFlag::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com