#include <sun/tools/jar/GNUStyleOptions$9.h>

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

$MethodInfo _GNUStyleOptions$9_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$9::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$9::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$9_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$9_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$9", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$9",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$9_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$9_EnclosingMethodInfo_,
	_GNUStyleOptions$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$9($Class* clazz) {
	return $of($alloc(GNUStyleOptions$9));
}

void GNUStyleOptions$9::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$9::process($Main* jartool, $String* opt, $String* arg) {
	$nc(jartool)->vflag = true;
}

GNUStyleOptions$9::GNUStyleOptions$9() {
}

$Class* GNUStyleOptions$9::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$9, name, initialize, &_GNUStyleOptions$9_ClassInfo_, allocate$GNUStyleOptions$9);
	return class$;
}

$Class* GNUStyleOptions$9::class$ = nullptr;

		} // jar
	} // tools
} // sun