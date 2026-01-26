#include <sun/tools/jar/GNUStyleOptions$11.h>

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

$MethodInfo _GNUStyleOptions$11_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(GNUStyleOptions$11, init$, void, bool, $GNUStyleOptions$OptionType*, $StringArray*)},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(GNUStyleOptions$11, process, void, $Main*, $String*, $String*)},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$11_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$11_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$11", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$11_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$11",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$11_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$11_EnclosingMethodInfo_,
	_GNUStyleOptions$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$11($Class* clazz) {
	return $of($alloc(GNUStyleOptions$11));
}

void GNUStyleOptions$11::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$11::process($Main* jartool, $String* opt, $String* arg) {
	$set($nc(jartool), mname, arg);
}

GNUStyleOptions$11::GNUStyleOptions$11() {
}

$Class* GNUStyleOptions$11::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$11, name, initialize, &_GNUStyleOptions$11_ClassInfo_, allocate$GNUStyleOptions$11);
	return class$;
}

$Class* GNUStyleOptions$11::class$ = nullptr;

		} // jar
	} // tools
} // sun