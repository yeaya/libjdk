#include <sun/tools/jar/GNUStyleOptions$2.h>

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

$MethodInfo _GNUStyleOptions$2_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$2, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$2, process, void, $Main*, $String*, $String*), "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$2_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$2_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$2", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$2",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$2_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$2_EnclosingMethodInfo_,
	_GNUStyleOptions$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$2($Class* clazz) {
	return $of($alloc(GNUStyleOptions$2));
}

void GNUStyleOptions$2::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$2::process($Main* tool, $String* opt, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tool)->cflag || $nc(tool)->tflag || $nc(tool)->uflag || $nc(tool)->xflag || $nc(tool)->dflag || $nc(tool)->validate) {
		$throw($($$new($GNUStyleOptions$BadArgs, "error.multiple.main.operations"_s)->showUsage(true)));
	}
	$nc(tool)->iflag = true;
	$set(tool, rootjar, arg);
}

GNUStyleOptions$2::GNUStyleOptions$2() {
}

$Class* GNUStyleOptions$2::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$2, name, initialize, &_GNUStyleOptions$2_ClassInfo_, allocate$GNUStyleOptions$2);
	return class$;
}

$Class* GNUStyleOptions$2::class$ = nullptr;

		} // jar
	} // tools
} // sun