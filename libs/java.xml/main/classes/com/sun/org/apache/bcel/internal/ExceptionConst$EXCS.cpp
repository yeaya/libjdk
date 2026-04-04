#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef EXCS_ARRAY_EXCEPTION
#undef EXCS_CLASS_AND_INTERFACE_RESOLUTION
#undef EXCS_FIELD_AND_METHOD_RESOLUTION
#undef EXCS_INTERFACE_METHOD_RESOLUTION
#undef EXCS_STRING_RESOLUTION

using $ExceptionConst$EXCSArray = $Array<::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {

ExceptionConst$EXCS* ExceptionConst$EXCS::EXCS_CLASS_AND_INTERFACE_RESOLUTION = nullptr;
ExceptionConst$EXCS* ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION = nullptr;
ExceptionConst$EXCS* ExceptionConst$EXCS::EXCS_INTERFACE_METHOD_RESOLUTION = nullptr;
ExceptionConst$EXCS* ExceptionConst$EXCS::EXCS_STRING_RESOLUTION = nullptr;
ExceptionConst$EXCS* ExceptionConst$EXCS::EXCS_ARRAY_EXCEPTION = nullptr;
$ExceptionConst$EXCSArray* ExceptionConst$EXCS::$VALUES = nullptr;

$ExceptionConst$EXCSArray* ExceptionConst$EXCS::$values() {
	$init(ExceptionConst$EXCS);
	return $new($ExceptionConst$EXCSArray, {
		ExceptionConst$EXCS::EXCS_CLASS_AND_INTERFACE_RESOLUTION,
		ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION,
		ExceptionConst$EXCS::EXCS_INTERFACE_METHOD_RESOLUTION,
		ExceptionConst$EXCS::EXCS_STRING_RESOLUTION,
		ExceptionConst$EXCS::EXCS_ARRAY_EXCEPTION
	});
}

$ExceptionConst$EXCSArray* ExceptionConst$EXCS::values() {
	$init(ExceptionConst$EXCS);
	return $cast($ExceptionConst$EXCSArray, ExceptionConst$EXCS::$VALUES->clone());
}

ExceptionConst$EXCS* ExceptionConst$EXCS::valueOf($String* name) {
	$init(ExceptionConst$EXCS);
	return $cast(ExceptionConst$EXCS, $Enum::valueOf(ExceptionConst$EXCS::class$, name));
}

void ExceptionConst$EXCS::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void ExceptionConst$EXCS::clinit$($Class* clazz) {
	$assignStatic(ExceptionConst$EXCS::EXCS_CLASS_AND_INTERFACE_RESOLUTION, $new(ExceptionConst$EXCS, "EXCS_CLASS_AND_INTERFACE_RESOLUTION"_s, 0));
	$assignStatic(ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION, $new(ExceptionConst$EXCS, "EXCS_FIELD_AND_METHOD_RESOLUTION"_s, 1));
	$assignStatic(ExceptionConst$EXCS::EXCS_INTERFACE_METHOD_RESOLUTION, $new(ExceptionConst$EXCS, "EXCS_INTERFACE_METHOD_RESOLUTION"_s, 2));
	$assignStatic(ExceptionConst$EXCS::EXCS_STRING_RESOLUTION, $new(ExceptionConst$EXCS, "EXCS_STRING_RESOLUTION"_s, 3));
	$assignStatic(ExceptionConst$EXCS::EXCS_ARRAY_EXCEPTION, $new(ExceptionConst$EXCS, "EXCS_ARRAY_EXCEPTION"_s, 4));
	$assignStatic(ExceptionConst$EXCS::$VALUES, ExceptionConst$EXCS::$values());
}

ExceptionConst$EXCS::ExceptionConst$EXCS() {
}

$Class* ExceptionConst$EXCS::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EXCS_CLASS_AND_INTERFACE_RESOLUTION", "Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExceptionConst$EXCS, EXCS_CLASS_AND_INTERFACE_RESOLUTION)},
		{"EXCS_FIELD_AND_METHOD_RESOLUTION", "Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExceptionConst$EXCS, EXCS_FIELD_AND_METHOD_RESOLUTION)},
		{"EXCS_INTERFACE_METHOD_RESOLUTION", "Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExceptionConst$EXCS, EXCS_INTERFACE_METHOD_RESOLUTION)},
		{"EXCS_STRING_RESOLUTION", "Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExceptionConst$EXCS, EXCS_STRING_RESOLUTION)},
		{"EXCS_ARRAY_EXCEPTION", "Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExceptionConst$EXCS, EXCS_ARRAY_EXCEPTION)},
		{"$VALUES", "[Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ExceptionConst$EXCS, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ExceptionConst$EXCS, $values, $ExceptionConst$EXCSArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(ExceptionConst$EXCS, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExceptionConst$EXCS, valueOf, ExceptionConst$EXCS*, $String*)},
		{"values", "()[Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExceptionConst$EXCS, values, $ExceptionConst$EXCSArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.ExceptionConst$EXCS", "com.sun.org.apache.bcel.internal.ExceptionConst", "EXCS", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.org.apache.bcel.internal.ExceptionConst$EXCS",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/org/apache/bcel/internal/ExceptionConst$EXCS;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.ExceptionConst"
	};
	$loadClass(ExceptionConst$EXCS, name, initialize, &classInfo$$, ExceptionConst$EXCS::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ExceptionConst$EXCS));
	});
	return class$;
}

$Class* ExceptionConst$EXCS::class$ = nullptr;

					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com