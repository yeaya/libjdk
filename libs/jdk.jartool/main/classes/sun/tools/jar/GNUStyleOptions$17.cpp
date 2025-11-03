#include <sun/tools/jar/GNUStyleOptions$17.h>

#include <jdk/internal/module/ModuleResolution.h>
#include <sun/tools/jar/GNUStyleOptions$BadArgs.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $GNUStyleOptions$BadArgs = ::sun::tools::jar::GNUStyleOptions$BadArgs;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _GNUStyleOptions$17_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$17::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$17::init$))},
	{"isExtra", "()Z", nullptr, 0},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, nullptr, "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$17_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$17_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$17", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$17_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$17",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$17_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$17_EnclosingMethodInfo_,
	_GNUStyleOptions$17_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$17($Class* clazz) {
	return $of($alloc(GNUStyleOptions$17));
}

void GNUStyleOptions$17::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$17::process($Main* jartool, $String* opt, $String* arg) {
	$var($ModuleResolution, mres, $ModuleResolution::empty());
	if ($nc($nc(jartool)->moduleResolution)->doNotResolveByDefault()) {
		$nc(mres)->withDoNotResolveByDefault();
	}
	if ($nc(arg)->equals("deprecated"_s)) {
		$set($nc(jartool), moduleResolution, $nc(mres)->withDeprecated());
	} else if (arg->equals("deprecated-for-removal"_s)) {
		$set($nc(jartool), moduleResolution, $nc(mres)->withDeprecatedForRemoval());
	} else if (arg->equals("incubating"_s)) {
		$set($nc(jartool), moduleResolution, $nc(mres)->withIncubating());
	} else {
		$throwNew($GNUStyleOptions$BadArgs, "error.bad.reason"_s, arg);
	}
}

bool GNUStyleOptions$17::isExtra() {
	return true;
}

GNUStyleOptions$17::GNUStyleOptions$17() {
}

$Class* GNUStyleOptions$17::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$17, name, initialize, &_GNUStyleOptions$17_ClassInfo_, allocate$GNUStyleOptions$17);
	return class$;
}

$Class* GNUStyleOptions$17::class$ = nullptr;

		} // jar
	} // tools
} // sun