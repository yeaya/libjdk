#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition.h>
#include <com/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef AFTER_SUMMARY
#undef BOTTOM

using $BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray = $Array<::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition>;
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

BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BOTTOM = nullptr;
BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::AFTER_SUMMARY = nullptr;
$BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$VALUES = nullptr;

$BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$values() {
	$init(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
	return $new($BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray, {
		BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BOTTOM,
		BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::AFTER_SUMMARY
	});
}

$BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::values() {
	$init(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
	return $cast($BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray, BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$VALUES->clone());
}

BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::valueOf($String* name) {
	$init(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition);
	return $cast(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, $Enum::valueOf(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::class$, name));
}

void BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::clinit$($Class* clazz) {
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BOTTOM, $new(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, "BOTTOM"_s, 0));
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::AFTER_SUMMARY, $new(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, "AFTER_SUMMARY"_s, 1));
	$assignStatic(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$VALUES, BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::$values());
}

BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition() {
}

$Class* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BOTTOM", "Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, BOTTOM)},
		{"AFTER_SUMMARY", "Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, AFTER_SUMMARY)},
		{"$VALUES", "[Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, $values, $BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, valueOf, BasicDiagnosticFormatter$BasicConfiguration$SourcePosition*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, values, $BasicDiagnosticFormatter$BasicConfiguration$SourcePositionArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "com.sun.tools.javac.util.BasicDiagnosticFormatter", "BasicConfiguration", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$SourcePosition", "com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration", "SourcePosition", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration$SourcePosition",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/util/BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.BasicDiagnosticFormatter"
	};
	$loadClass(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition, name, initialize, &classInfo$$, BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicDiagnosticFormatter$BasicConfiguration$SourcePosition));
	});
	return class$;
}

$Class* BasicDiagnosticFormatter$BasicConfiguration$SourcePosition::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com