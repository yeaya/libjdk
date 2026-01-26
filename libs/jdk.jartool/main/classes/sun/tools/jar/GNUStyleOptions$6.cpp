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

$MethodInfo _GNUStyleOptions$6_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$6, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$6, process, void, $Main*, $String*, $String*), "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$6_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$6_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$6", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$6_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$6",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$6_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$6_EnclosingMethodInfo_,
	_GNUStyleOptions$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$6($Class* clazz) {
	return $of($alloc(GNUStyleOptions$6));
}

void GNUStyleOptions$6::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$6::process($Main* tool, $String* opt, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tool)->cflag || $nc(tool)->iflag || $nc(tool)->tflag || $nc(tool)->uflag || $nc(tool)->xflag || $nc(tool)->validate) {
		$throw($($$new($GNUStyleOptions$BadArgs, "error.multiple.main.operations"_s)->showUsage(true)));
	}
	$nc(tool)->dflag = true;
}

GNUStyleOptions$6::GNUStyleOptions$6() {
}

$Class* GNUStyleOptions$6::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$6, name, initialize, &_GNUStyleOptions$6_ClassInfo_, allocate$GNUStyleOptions$6);
	return class$;
}

$Class* GNUStyleOptions$6::class$ = nullptr;

		} // jar
	} // tools
} // sun