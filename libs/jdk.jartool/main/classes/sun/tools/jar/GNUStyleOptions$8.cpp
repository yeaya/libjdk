#include <sun/tools/jar/GNUStyleOptions$8.h>

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

$MethodInfo _GNUStyleOptions$8_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$8::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$8::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$8_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$8_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$8", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$8",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$8_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$8_EnclosingMethodInfo_,
	_GNUStyleOptions$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$8($Class* clazz) {
	return $of($alloc(GNUStyleOptions$8));
}

void GNUStyleOptions$8::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$8::process($Main* jartool, $String* opt, $String* arg) {
	$set($nc(jartool), fname, arg);
}

GNUStyleOptions$8::GNUStyleOptions$8() {
}

$Class* GNUStyleOptions$8::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$8, name, initialize, &_GNUStyleOptions$8_ClassInfo_, allocate$GNUStyleOptions$8);
	return class$;
}

$Class* GNUStyleOptions$8::class$ = nullptr;

		} // jar
	} // tools
} // sun