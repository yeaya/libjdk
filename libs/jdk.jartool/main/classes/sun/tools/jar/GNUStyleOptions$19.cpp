#include <sun/tools/jar/GNUStyleOptions$19.h>

#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _GNUStyleOptions$19_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$19::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$19::init$))},
	{"isHidden", "()Z", nullptr, 0},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$19_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$19_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$19", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$19_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$19",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$19_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$19_EnclosingMethodInfo_,
	_GNUStyleOptions$19_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$19($Class* clazz) {
	return $of($alloc(GNUStyleOptions$19));
}

void GNUStyleOptions$19::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$19::process($Main* jartool, $String* opt, $String* arg) {
	$nc(jartool)->pflag = true;
}

bool GNUStyleOptions$19::isHidden() {
	return true;
}

GNUStyleOptions$19::GNUStyleOptions$19() {
}

$Class* GNUStyleOptions$19::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$19, name, initialize, &_GNUStyleOptions$19_ClassInfo_, allocate$GNUStyleOptions$19);
	return class$;
}

$Class* GNUStyleOptions$19::class$ = nullptr;

		} // jar
	} // tools
} // sun