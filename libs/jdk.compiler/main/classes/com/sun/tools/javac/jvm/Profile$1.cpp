#include <com/sun/tools/javac/jvm/Profile$1.h>
#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <jcpp.h>

using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Profile$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Profile::init$($enum$name, $enum$ordinal);
}

bool Profile$1::isValid($Target* t) {
	return true;
}

Profile$1::Profile$1() {
}

$Class* Profile$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Profile$1, init$, void, $String*, int32_t)},
		{"isValid", "(Lcom/sun/tools/javac/jvm/Target;)Z", nullptr, $PUBLIC, $virtualMethod(Profile$1, isValid, bool, $Target*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.Profile",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Profile$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.tools.javac.jvm.Profile$1",
		"com.sun.tools.javac.jvm.Profile",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.Profile"
	};
	$loadClass(Profile$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Profile$1));
	});
	return class$;
}

$Class* Profile$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com