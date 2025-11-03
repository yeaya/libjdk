#include <sun/tools/jar/GNUStyleOptions$10.h>

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

$MethodInfo _GNUStyleOptions$10_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$10::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$10::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$10_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$10_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$10", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$10",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$10_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$10_EnclosingMethodInfo_,
	_GNUStyleOptions$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$10($Class* clazz) {
	return $of($alloc(GNUStyleOptions$10));
}

void GNUStyleOptions$10::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$10::process($Main* jartool, $String* opt, $String* arg) {
	$set($nc(jartool), ename, arg);
}

GNUStyleOptions$10::GNUStyleOptions$10() {
}

$Class* GNUStyleOptions$10::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$10, name, initialize, &_GNUStyleOptions$10_ClassInfo_, allocate$GNUStyleOptions$10);
	return class$;
}

$Class* GNUStyleOptions$10::class$ = nullptr;

		} // jar
	} // tools
} // sun