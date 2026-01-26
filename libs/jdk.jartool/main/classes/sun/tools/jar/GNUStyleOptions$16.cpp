#include <sun/tools/jar/GNUStyleOptions$16.h>

#include <jdk/internal/module/ModuleResolution.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleResolution = ::jdk::internal::module::ModuleResolution;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _GNUStyleOptions$16_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$16, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
	{"isExtra", "()Z", nullptr, 0, $virtualMethod(GNUStyleOptions$16, isExtra, bool)},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$16, process, void, $Main*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$16_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$16_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$16", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$16_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$16",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$16_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$16_EnclosingMethodInfo_,
	_GNUStyleOptions$16_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$16($Class* clazz) {
	return $of($alloc(GNUStyleOptions$16));
}

void GNUStyleOptions$16::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$16::process($Main* jartool, $String* opt, $String* arg) {
	$var($ModuleResolution, mres, $nc(jartool)->moduleResolution);
	$set(jartool, moduleResolution, $nc(mres)->withDoNotResolveByDefault());
}

bool GNUStyleOptions$16::isExtra() {
	return true;
}

GNUStyleOptions$16::GNUStyleOptions$16() {
}

$Class* GNUStyleOptions$16::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$16, name, initialize, &_GNUStyleOptions$16_ClassInfo_, allocate$GNUStyleOptions$16);
	return class$;
}

$Class* GNUStyleOptions$16::class$ = nullptr;

		} // jar
	} // tools
} // sun