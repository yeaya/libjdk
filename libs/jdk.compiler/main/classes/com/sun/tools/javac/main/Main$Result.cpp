#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/javac/main/Main.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ABNORMAL
#undef CMDERR
#undef ERROR
#undef OK
#undef SYSERR

using $Main$ResultArray = $Array<::com::sun::tools::javac::main::Main$Result>;
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

Main$Result* Main$Result::OK = nullptr;
Main$Result* Main$Result::ERROR = nullptr;
Main$Result* Main$Result::CMDERR = nullptr;
Main$Result* Main$Result::SYSERR = nullptr;
Main$Result* Main$Result::ABNORMAL = nullptr;
$Main$ResultArray* Main$Result::$VALUES = nullptr;

$Main$ResultArray* Main$Result::$values() {
	$init(Main$Result);
	return $new($Main$ResultArray, {
		Main$Result::OK,
		Main$Result::ERROR,
		Main$Result::CMDERR,
		Main$Result::SYSERR,
		Main$Result::ABNORMAL
	});
}

$Main$ResultArray* Main$Result::values() {
	$init(Main$Result);
	return $cast($Main$ResultArray, Main$Result::$VALUES->clone());
}

Main$Result* Main$Result::valueOf($String* name) {
	$init(Main$Result);
	return $cast(Main$Result, $Enum::valueOf(Main$Result::class$, name));
}

void Main$Result::init$($String* $enum$name, int32_t $enum$ordinal, int32_t exitCode) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->exitCode = exitCode;
}

bool Main$Result::isOK() {
	return (this->exitCode == 0);
}

void Main$Result::clinit$($Class* clazz) {
	$assignStatic(Main$Result::OK, $new(Main$Result, "OK"_s, 0, 0));
	$assignStatic(Main$Result::ERROR, $new(Main$Result, "ERROR"_s, 1, 1));
	$assignStatic(Main$Result::CMDERR, $new(Main$Result, "CMDERR"_s, 2, 2));
	$assignStatic(Main$Result::SYSERR, $new(Main$Result, "SYSERR"_s, 3, 3));
	$assignStatic(Main$Result::ABNORMAL, $new(Main$Result, "ABNORMAL"_s, 4, 4));
	$assignStatic(Main$Result::$VALUES, Main$Result::$values());
}

Main$Result::Main$Result() {
}

$Class* Main$Result::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OK", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, OK)},
		{"ERROR", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, ERROR)},
		{"CMDERR", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, CMDERR)},
		{"SYSERR", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, SYSERR)},
		{"ABNORMAL", "Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Main$Result, ABNORMAL)},
		{"$VALUES", "[Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Main$Result, $VALUES)},
		{"exitCode", "I", nullptr, $PUBLIC | $FINAL, $field(Main$Result, exitCode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Main$Result, $values, $Main$ResultArray*)},
		{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(Main$Result, init$, void, $String*, int32_t, int32_t)},
		{"isOK", "()Z", nullptr, $PUBLIC, $method(Main$Result, isOK, bool)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC, $staticMethod(Main$Result, valueOf, Main$Result*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $STATIC, $staticMethod(Main$Result, values, $Main$ResultArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.main.Main$Result", "com.sun.tools.javac.main.Main", "Result", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.main.Main$Result",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/main/Main$Result;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.main.Main"
	};
	$loadClass(Main$Result, name, initialize, &classInfo$$, Main$Result::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Main$Result));
	});
	return class$;
}

$Class* Main$Result::class$ = nullptr;

				} // main
			} // javac
		} // tools
	} // sun
} // com