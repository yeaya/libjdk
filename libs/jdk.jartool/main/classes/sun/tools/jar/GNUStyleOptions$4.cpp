#include <sun/tools/jar/GNUStyleOptions$4.h>

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

$MethodInfo _GNUStyleOptions$4_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$4, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$4, process, void, $Main*, $String*, $String*), "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$4_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$4_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$4", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$4",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$4_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$4_EnclosingMethodInfo_,
	_GNUStyleOptions$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$4($Class* clazz) {
	return $of($alloc(GNUStyleOptions$4));
}

void GNUStyleOptions$4::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$4::process($Main* tool, $String* opt, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tool)->cflag || $nc(tool)->iflag || $nc(tool)->tflag || $nc(tool)->xflag || $nc(tool)->dflag || $nc(tool)->validate) {
		$throw($($$new($GNUStyleOptions$BadArgs, "error.multiple.main.operations"_s)->showUsage(true)));
	}
	$nc(tool)->uflag = true;
}

GNUStyleOptions$4::GNUStyleOptions$4() {
}

$Class* GNUStyleOptions$4::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$4, name, initialize, &_GNUStyleOptions$4_ClassInfo_, allocate$GNUStyleOptions$4);
	return class$;
}

$Class* GNUStyleOptions$4::class$ = nullptr;

		} // jar
	} // tools
} // sun