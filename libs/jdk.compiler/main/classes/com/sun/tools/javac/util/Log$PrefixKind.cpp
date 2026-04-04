#include <com/sun/tools/javac/util/Log$PrefixKind.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef COMPILER_MISC
#undef JAVAC

using $Log$PrefixKindArray = $Array<::com::sun::tools::javac::util::Log$PrefixKind>;
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

Log$PrefixKind* Log$PrefixKind::JAVAC = nullptr;
Log$PrefixKind* Log$PrefixKind::COMPILER_MISC = nullptr;
$Log$PrefixKindArray* Log$PrefixKind::$VALUES = nullptr;

$Log$PrefixKindArray* Log$PrefixKind::$values() {
	$init(Log$PrefixKind);
	return $new($Log$PrefixKindArray, {
		Log$PrefixKind::JAVAC,
		Log$PrefixKind::COMPILER_MISC
	});
}

$Log$PrefixKindArray* Log$PrefixKind::values() {
	$init(Log$PrefixKind);
	return $cast($Log$PrefixKindArray, Log$PrefixKind::$VALUES->clone());
}

Log$PrefixKind* Log$PrefixKind::valueOf($String* name) {
	$init(Log$PrefixKind);
	return $cast(Log$PrefixKind, $Enum::valueOf(Log$PrefixKind::class$, name));
}

void Log$PrefixKind::init$($String* $enum$name, int32_t $enum$ordinal, $String* v) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, value, v);
}

$String* Log$PrefixKind::key($String* k) {
	return $str({this->value, k});
}

void Log$PrefixKind::clinit$($Class* clazz) {
	$assignStatic(Log$PrefixKind::JAVAC, $new(Log$PrefixKind, "JAVAC"_s, 0, "javac."_s));
	$assignStatic(Log$PrefixKind::COMPILER_MISC, $new(Log$PrefixKind, "COMPILER_MISC"_s, 1, "compiler.misc."_s));
	$assignStatic(Log$PrefixKind::$VALUES, Log$PrefixKind::$values());
}

Log$PrefixKind::Log$PrefixKind() {
}

$Class* Log$PrefixKind::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JAVAC", "Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$PrefixKind, JAVAC)},
		{"COMPILER_MISC", "Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$PrefixKind, COMPILER_MISC)},
		{"$VALUES", "[Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Log$PrefixKind, $VALUES)},
		{"value", "Ljava/lang/String;", nullptr, $FINAL, $field(Log$PrefixKind, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Log$PrefixKind, $values, $Log$PrefixKindArray*)},
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(Log$PrefixKind, init$, void, $String*, int32_t, $String*)},
		{"key", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(Log$PrefixKind, key, $String*, $String*)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Log$PrefixKind, valueOf, Log$PrefixKind*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/util/Log$PrefixKind;", nullptr, $PUBLIC | $STATIC, $staticMethod(Log$PrefixKind, values, $Log$PrefixKindArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Log$PrefixKind", "com.sun.tools.javac.util.Log", "PrefixKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.util.Log$PrefixKind",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/util/Log$PrefixKind;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Log"
	};
	$loadClass(Log$PrefixKind, name, initialize, &classInfo$$, Log$PrefixKind::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Log$PrefixKind));
	});
	return class$;
}

$Class* Log$PrefixKind::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com