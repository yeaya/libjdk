#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature.h>
#include <com/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef SIMPLE_NAMES
#undef UNIQUE_TYPEVAR_NAMES
#undef WHERE_CLAUSES

using $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray = $Array<::com::sun::tools::javac::util::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature>;
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

RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES = nullptr;
RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::SIMPLE_NAMES = nullptr;
RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::UNIQUE_TYPEVAR_NAMES = nullptr;
$RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray* RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::$VALUES = nullptr;

$RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray* RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::$values() {
	$init(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	return $new($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray, {
		RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES,
		RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::SIMPLE_NAMES,
		RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::UNIQUE_TYPEVAR_NAMES
	});
}

$RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray* RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::values() {
	$init(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	return $cast($RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray, RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::$VALUES->clone());
}

RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature* RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::valueOf($String* name) {
	$init(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature);
	return $cast(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, $Enum::valueOf(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::class$, name));
}

void RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::clinit$($Class* clazz) {
	$assignStatic(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::WHERE_CLAUSES, $new(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, "WHERE_CLAUSES"_s, 0));
	$assignStatic(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::SIMPLE_NAMES, $new(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, "SIMPLE_NAMES"_s, 1));
	$assignStatic(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::UNIQUE_TYPEVAR_NAMES, $new(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, "UNIQUE_TYPEVAR_NAMES"_s, 2));
	$assignStatic(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::$VALUES, RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::$values());
}

RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature() {
}

$Class* RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WHERE_CLAUSES", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, WHERE_CLAUSES)},
		{"SIMPLE_NAMES", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, SIMPLE_NAMES)},
		{"UNIQUE_TYPEVAR_NAMES", "Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, UNIQUE_TYPEVAR_NAMES)},
		{"$VALUES", "[Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, $values, $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;", nullptr, $PUBLIC | $STATIC, $staticMethod(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, valueOf, RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;", nullptr, $PUBLIC | $STATIC, $staticMethod(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, values, $RichDiagnosticFormatter$RichConfiguration$RichFormatterFeatureArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration", "com.sun.tools.javac.util.RichDiagnosticFormatter", "RichConfiguration", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature", "com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration", "RichFormatterFeature", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.util.RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/util/RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.RichDiagnosticFormatter"
	};
	$loadClass(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature, name, initialize, &classInfo$$, RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature));
	});
	return class$;
}

$Class* RichDiagnosticFormatter$RichConfiguration$RichFormatterFeature::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com