#include <sun/tools/jar/GNUStyleOptions$18.h>

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

$MethodInfo _GNUStyleOptions$18_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$18, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$18, process, void, $Main*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$18_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$18_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$18", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$18_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$18",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$18_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$18_EnclosingMethodInfo_,
	_GNUStyleOptions$18_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$18($Class* clazz) {
	return $of($alloc(GNUStyleOptions$18));
}

void GNUStyleOptions$18::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$18::process($Main* jartool, $String* opt, $String* arg) {
	$nc(jartool)->flag0 = true;
}

GNUStyleOptions$18::GNUStyleOptions$18() {
}

$Class* GNUStyleOptions$18::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$18, name, initialize, &_GNUStyleOptions$18_ClassInfo_, allocate$GNUStyleOptions$18);
	return class$;
}

$Class* GNUStyleOptions$18::class$ = nullptr;

		} // jar
	} // tools
} // sun