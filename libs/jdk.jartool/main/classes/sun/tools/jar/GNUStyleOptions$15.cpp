#include <sun/tools/jar/GNUStyleOptions$15.h>

#include <java/io/File.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/Runtime.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jdk/internal/module/ModulePath.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $PathArray = $Array<::java::nio::file::Path>;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $Runtime$Version = ::java::lang::Runtime$Version;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $ModulePath = ::jdk::internal::module::ModulePath;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _GNUStyleOptions$15_MethodInfo_[] = {
	{"<init>", "(ZLsun/tools/jar/GNUStyleOptions$OptionType;[Ljava/lang/String;)V", nullptr, $TRANSIENT, $method(static_cast<void(GNUStyleOptions$15::*)(bool,$GNUStyleOptions$OptionType*,$StringArray*)>(&GNUStyleOptions$15::init$))},
	{"process", "(Lsun/tools/jar/Main;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{}
};

$EnclosingMethodInfo _GNUStyleOptions$15_EnclosingMethodInfo_ = {
	"sun.tools.jar.GNUStyleOptions",
	nullptr,
	nullptr
};

$InnerClassInfo _GNUStyleOptions$15_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$15", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _GNUStyleOptions$15_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions$15",
	"sun.tools.jar.GNUStyleOptions$Option",
	nullptr,
	nullptr,
	_GNUStyleOptions$15_MethodInfo_,
	nullptr,
	&_GNUStyleOptions$15_EnclosingMethodInfo_,
	_GNUStyleOptions$15_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions"
};

$Object* allocate$GNUStyleOptions$15($Class* clazz) {
	return $of($alloc(GNUStyleOptions$15));
}

void GNUStyleOptions$15::init$(bool hasArg, $GNUStyleOptions$OptionType* type, $StringArray* aliases) {
	$GNUStyleOptions$Option::init$(hasArg, type, aliases);
}

void GNUStyleOptions$15::process($Main* jartool, $String* opt, $String* arg) {
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($StringArray, dirs, $nc(arg)->split($File::pathSeparator));
	$var($PathArray, paths, $new($PathArray, dirs->length));
	int32_t i = 0;
	{
		$var($StringArray, arr$, dirs);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, dir, arr$->get(i$));
			{
				paths->set(i++, $($Paths::get(dir, $$new($StringArray, 0))));
			}
		}
	}
	$set($nc(jartool), moduleFinder, $ModulePath::of($($Runtime::version()), true, paths));
}

GNUStyleOptions$15::GNUStyleOptions$15() {
}

$Class* GNUStyleOptions$15::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$15, name, initialize, &_GNUStyleOptions$15_ClassInfo_, allocate$GNUStyleOptions$15);
	return class$;
}

$Class* GNUStyleOptions$15::class$ = nullptr;

		} // jar
	} // tools
} // sun