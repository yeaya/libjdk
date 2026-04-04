#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck$1.h>
#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck$2.h>
#include <com/sun/tools/javac/code/Types.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef BASIC
#undef RTS

using $Types$MostSpecificReturnCheckArray = $Array<::com::sun::tools::javac::code::Types$MostSpecificReturnCheck>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MostSpecificReturnCheck$1 = ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck$1;
using $Types$MostSpecificReturnCheck$2 = ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck$2;
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

Types$MostSpecificReturnCheck* Types$MostSpecificReturnCheck::BASIC = nullptr;
Types$MostSpecificReturnCheck* Types$MostSpecificReturnCheck::RTS = nullptr;
$Types$MostSpecificReturnCheckArray* Types$MostSpecificReturnCheck::$VALUES = nullptr;

$Types$MostSpecificReturnCheckArray* Types$MostSpecificReturnCheck::$values() {
	$init(Types$MostSpecificReturnCheck);
	return $new($Types$MostSpecificReturnCheckArray, {
		Types$MostSpecificReturnCheck::BASIC,
		Types$MostSpecificReturnCheck::RTS
	});
}

$Types$MostSpecificReturnCheckArray* Types$MostSpecificReturnCheck::values() {
	$init(Types$MostSpecificReturnCheck);
	return $cast($Types$MostSpecificReturnCheckArray, Types$MostSpecificReturnCheck::$VALUES->clone());
}

Types$MostSpecificReturnCheck* Types$MostSpecificReturnCheck::valueOf($String* name) {
	$init(Types$MostSpecificReturnCheck);
	return $cast(Types$MostSpecificReturnCheck, $Enum::valueOf(Types$MostSpecificReturnCheck::class$, name));
}

void Types$MostSpecificReturnCheck::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Types$MostSpecificReturnCheck::clinit$($Class* clazz) {
	$assignStatic(Types$MostSpecificReturnCheck::BASIC, $new($Types$MostSpecificReturnCheck$1, "BASIC"_s, 0));
	$assignStatic(Types$MostSpecificReturnCheck::RTS, $new($Types$MostSpecificReturnCheck$2, "RTS"_s, 1));
	$assignStatic(Types$MostSpecificReturnCheck::$VALUES, Types$MostSpecificReturnCheck::$values());
}

Types$MostSpecificReturnCheck::Types$MostSpecificReturnCheck() {
}

$Class* Types$MostSpecificReturnCheck::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BASIC", "Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Types$MostSpecificReturnCheck, BASIC)},
		{"RTS", "Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Types$MostSpecificReturnCheck, RTS)},
		{"$VALUES", "[Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Types$MostSpecificReturnCheck, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Types$MostSpecificReturnCheck, $values, $Types$MostSpecificReturnCheckArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Types$MostSpecificReturnCheck, init$, void, $String*, int32_t)},
		{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Types$MostSpecificReturnCheck, test, bool, $Type*, $Type*, $Types*)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PUBLIC | $STATIC, $staticMethod(Types$MostSpecificReturnCheck, valueOf, Types$MostSpecificReturnCheck*, $String*)},
		{"values", "()[Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;", nullptr, $PUBLIC | $STATIC, $staticMethod(Types$MostSpecificReturnCheck, values, $Types$MostSpecificReturnCheckArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck", "com.sun.tools.javac.code.Types", "MostSpecificReturnCheck", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$2", nullptr, nullptr, $FINAL | $ENUM},
		{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
		"com.sun.tools.javac.code.Types$MostSpecificReturnCheck",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/tools/javac/code/Types$MostSpecificReturnCheck;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$MostSpecificReturnCheck, name, initialize, &classInfo$$, Types$MostSpecificReturnCheck::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Types$MostSpecificReturnCheck));
	});
	return class$;
}

$Class* Types$MostSpecificReturnCheck::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com