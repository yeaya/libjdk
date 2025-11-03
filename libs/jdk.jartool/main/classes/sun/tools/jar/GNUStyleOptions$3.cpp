#include <sun/tools/jar/GNUStyleOptions$3.h>

#include <sun/tools/jar/GNUStyleOptions$BadArgs.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GNUStyleOptions$BadArgs = ::sun::tools::jar::GNUStyleOptions$BadArgs;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _GNUStyleOptions$3_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$3::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$3::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, nullptr, "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$3_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$3_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$3", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$3",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$3_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$3_EnclosingMethodInfo_,
	_GNUStyleOptions$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$3($Class* clazz) {
	return $of($alloc(GNUStyleOptions$3));
}

void GNUStyleOptions$3::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$3::process($Main* tool, $String* opt, $String* arg) {
	$useLocalCurrentObjectStackCache();
	if ($nc(tool)->cflag || $nc(tool)->iflag || $nc(tool)->uflag || $nc(tool)->xflag || $nc(tool)->dflag || $nc(tool)->validate) {
		$throw($($$new($GNUStyleOptions$BadArgs, "error.multiple.main.operations"_s)->showUsage(true)));
	}
	$nc(tool)->tflag = true;
}

GNUStyleOptions$3::GNUStyleOptions$3() {
}

$Class* GNUStyleOptions$3::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$3, name, initialize, &_GNUStyleOptions$3_ClassInfo_, allocate$GNUStyleOptions$3);
	return class$;
}

$Class* GNUStyleOptions$3::class$ = nullptr;

		} // jar
	} // tools
} // sun