#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef COLUMN
#undef END
#undef LINE
#undef OFFSET
#undef START

using $DiagnosticFormatter$PositionKindArray = $Array<::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::START = nullptr;
DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::END = nullptr;
DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::LINE = nullptr;
DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::COLUMN = nullptr;
DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::OFFSET = nullptr;
$DiagnosticFormatter$PositionKindArray* DiagnosticFormatter$PositionKind::$VALUES = nullptr;

$DiagnosticFormatter$PositionKindArray* DiagnosticFormatter$PositionKind::$values() {
	$init(DiagnosticFormatter$PositionKind);
	return $new($DiagnosticFormatter$PositionKindArray, {
		DiagnosticFormatter$PositionKind::START,
		DiagnosticFormatter$PositionKind::END,
		DiagnosticFormatter$PositionKind::LINE,
		DiagnosticFormatter$PositionKind::COLUMN,
		DiagnosticFormatter$PositionKind::OFFSET
	});
}

$DiagnosticFormatter$PositionKindArray* DiagnosticFormatter$PositionKind::values() {
	$init(DiagnosticFormatter$PositionKind);
	return $cast($DiagnosticFormatter$PositionKindArray, DiagnosticFormatter$PositionKind::$VALUES->clone());
}

DiagnosticFormatter$PositionKind* DiagnosticFormatter$PositionKind::valueOf($String* name) {
	$init(DiagnosticFormatter$PositionKind);
	return $cast(DiagnosticFormatter$PositionKind, $Enum::valueOf(DiagnosticFormatter$PositionKind::class$, name));
}

void DiagnosticFormatter$PositionKind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void DiagnosticFormatter$PositionKind::clinit$($Class* clazz) {
	$assignStatic(DiagnosticFormatter$PositionKind::START, $new(DiagnosticFormatter$PositionKind, "START"_s, 0));
	$assignStatic(DiagnosticFormatter$PositionKind::END, $new(DiagnosticFormatter$PositionKind, "END"_s, 1));
	$assignStatic(DiagnosticFormatter$PositionKind::LINE, $new(DiagnosticFormatter$PositionKind, "LINE"_s, 2));
	$assignStatic(DiagnosticFormatter$PositionKind::COLUMN, $new(DiagnosticFormatter$PositionKind, "COLUMN"_s, 3));
	$assignStatic(DiagnosticFormatter$PositionKind::OFFSET, $new(DiagnosticFormatter$PositionKind, "OFFSET"_s, 4));
	$assignStatic(DiagnosticFormatter$PositionKind::$VALUES, DiagnosticFormatter$PositionKind::$values());
}

DiagnosticFormatter$PositionKind::DiagnosticFormatter$PositionKind() {
}

$Class* DiagnosticFormatter$PositionKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"START", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, START)},
		{"END", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, END)},
		{"LINE", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, LINE)},
		{"COLUMN", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, COLUMN)},
		{"OFFSET", "Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DiagnosticFormatter$PositionKind, OFFSET)},
		{"$VALUES", "[Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DiagnosticFormatter$PositionKind, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DiagnosticFormatter$PositionKind, $values, $DiagnosticFormatter$PositionKindArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(DiagnosticFormatter$PositionKind, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(DiagnosticFormatter$PositionKind, valueOf, DiagnosticFormatter$PositionKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(DiagnosticFormatter$PositionKind, values, $DiagnosticFormatter$PositionKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.DiagnosticFormatter$PositionKind", "com.sun.tools.javac.api.DiagnosticFormatter", "PositionKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.api.DiagnosticFormatter$PositionKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.DiagnosticFormatter"
	};
	$loadClass(DiagnosticFormatter$PositionKind, name, initialize, &classInfo$$, DiagnosticFormatter$PositionKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DiagnosticFormatter$PositionKind));
	});
	return class$;
}

$Class* DiagnosticFormatter$PositionKind::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com