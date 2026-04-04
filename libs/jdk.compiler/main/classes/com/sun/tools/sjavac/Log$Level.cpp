#include <com/sun/tools/sjavac/Log$Level.h>
#include <com/sun/tools/sjavac/Log.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef DEBUG
#undef ERROR
#undef INFO
#undef TRACE
#undef WARN

using $Log$LevelArray = $Array<::com::sun::tools::sjavac::Log$Level>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

Log$Level* Log$Level::ERROR = nullptr;
Log$Level* Log$Level::WARN = nullptr;
Log$Level* Log$Level::INFO = nullptr;
Log$Level* Log$Level::DEBUG = nullptr;
Log$Level* Log$Level::TRACE = nullptr;
$Log$LevelArray* Log$Level::$VALUES = nullptr;

$Log$LevelArray* Log$Level::$values() {
	$init(Log$Level);
	return $new($Log$LevelArray, {
		Log$Level::ERROR,
		Log$Level::WARN,
		Log$Level::INFO,
		Log$Level::DEBUG,
		Log$Level::TRACE
	});
}

$Log$LevelArray* Log$Level::values() {
	$init(Log$Level);
	return $cast($Log$LevelArray, Log$Level::$VALUES->clone());
}

Log$Level* Log$Level::valueOf($String* name) {
	$init(Log$Level);
	return $cast(Log$Level, $Enum::valueOf(Log$Level::class$, name));
}

void Log$Level::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Log$Level::clinit$($Class* clazz) {
	$assignStatic(Log$Level::ERROR, $new(Log$Level, "ERROR"_s, 0));
	$assignStatic(Log$Level::WARN, $new(Log$Level, "WARN"_s, 1));
	$assignStatic(Log$Level::INFO, $new(Log$Level, "INFO"_s, 2));
	$assignStatic(Log$Level::DEBUG, $new(Log$Level, "DEBUG"_s, 3));
	$assignStatic(Log$Level::TRACE, $new(Log$Level, "TRACE"_s, 4));
	$assignStatic(Log$Level::$VALUES, Log$Level::$values());
}

Log$Level::Log$Level() {
}

$Class* Log$Level::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ERROR", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, ERROR)},
		{"WARN", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, WARN)},
		{"INFO", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, INFO)},
		{"DEBUG", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, DEBUG)},
		{"TRACE", "Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Log$Level, TRACE)},
		{"$VALUES", "[Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Log$Level, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Log$Level, $values, $Log$LevelArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Log$Level, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC, $staticMethod(Log$Level, valueOf, Log$Level*, $String*)},
		{"values", "()[Lcom/sun/tools/sjavac/Log$Level;", nullptr, $PUBLIC | $STATIC, $staticMethod(Log$Level, values, $Log$LevelArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.sjavac.Log$Level", "com.sun.tools.sjavac.Log", "Level", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.sjavac.Log$Level",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/sjavac/Log$Level;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.sjavac.Log"
	};
	$loadClass(Log$Level, name, initialize, &classInfo$$, Log$Level::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Log$Level));
	});
	return class$;
}

$Class* Log$Level::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com