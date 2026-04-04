#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck$2.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$MostSpecificReturnCheck.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MostSpecificReturnCheck = ::com::sun::tools::javac::code::Types$MostSpecificReturnCheck;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$MostSpecificReturnCheck$2::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Types$MostSpecificReturnCheck::init$($enum$name, $enum$ordinal);
}

bool Types$MostSpecificReturnCheck$2::test($Type* mt1, $Type* mt2, $Types* types) {
	return $nc(types)->returnTypeSubstitutable(mt1, mt2);
}

Types$MostSpecificReturnCheck$2::Types$MostSpecificReturnCheck$2() {
}

$Class* Types$MostSpecificReturnCheck$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Types$MostSpecificReturnCheck$2, init$, void, $String*, int32_t)},
		{"test", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Types;)Z", nullptr, $PUBLIC, $virtualMethod(Types$MostSpecificReturnCheck$2, test, bool, $Type*, $Type*, $Types*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types$MostSpecificReturnCheck",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck", "com.sun.tools.javac.code.Types", "MostSpecificReturnCheck", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
		{"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$2", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.code.Types$MostSpecificReturnCheck$2",
		"com.sun.tools.javac.code.Types$MostSpecificReturnCheck",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$MostSpecificReturnCheck$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Types$MostSpecificReturnCheck$2));
	});
	return class$;
}

$Class* Types$MostSpecificReturnCheck$2::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com