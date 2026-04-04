#include <sun/tools/jar/GNUStyleOptions$6.h>
#include <sun/tools/jar/GNUStyleOptions$BadArgs.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GNUStyleOptions$BadArgs = ::sun::tools::jar::GNUStyleOptions$BadArgs;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

void GNUStyleOptions$6::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$6::process($Main* tool, $String* opt, $String* arg) {
	$useLocalObjectStack();
	if ($nc(tool)->cflag || tool->iflag || tool->tflag || tool->uflag || tool->xflag || tool->validate) {
		$throw($($$new($GNUStyleOptions$BadArgs, "error.multiple.main.operations"_s)->showUsage(true)));
	}
	tool->dflag = true;
}

GNUStyleOptions$6::GNUStyleOptions$6() {
}

$Class* GNUStyleOptions$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$6, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
		{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$6, process, void, $Main*, $String*, $String*), "sun.tools.jar.GNUStyleOptions$BadArgs"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.tools.jar.GNUStyleOptions",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.GNUStyleOptions$6", nullptr, nullptr, 0},
		{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.jar.GNUStyleOptions$6",
		"sun.tools.jar.GNUStyleOptions$Option",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.GNUStyleOptions"
	};
	$loadClass(GNUStyleOptions$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GNUStyleOptions$6);
	});
	return class$;
}

$Class* GNUStyleOptions$6::class$ = nullptr;

		} // jar
	} // tools
} // sun