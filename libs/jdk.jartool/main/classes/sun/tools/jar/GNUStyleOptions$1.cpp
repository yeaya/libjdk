#include <sun/tools/jar/GNUStyleOptions$1.h>

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

$MethodInfo _GNUStyleOptions$1_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$1, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$1, process, void, $Main*, $String*, $String*), "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$1_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$1_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$1", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$1",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$1_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$1_EnclosingMethodInfo_,
	_GNUStyleOptions$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$1($Class* clazz) {
	return $of($alloc(GNUStyleOptions$1));
}

void GNUStyleOptions$1::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$1::process($Main* tool, $String* opt, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tool)->iflag || $nc(tool)->tflag || $nc(tool)->uflag || $nc(tool)->xflag || $nc(tool)->dflag || $nc(tool)->validate) {
		$throw($($$new($GNUStyleOptions$BadArgs, "error.multiple.main.operations"_s)->showUsage(true)));
	}
	$nc(tool)->cflag = true;
}

GNUStyleOptions$1::GNUStyleOptions$1() {
}

$Class* GNUStyleOptions$1::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$1, name, initialize, &_GNUStyleOptions$1_ClassInfo_, allocate$GNUStyleOptions$1);
	return class$;
}

$Class* GNUStyleOptions$1::class$ = nullptr;

		} // jar
	} // tools
} // sun