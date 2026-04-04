#include <com/sun/tools/javac/util/ModuleHelper.h>
#include <java/lang/Module.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$StringArray* ModuleHelper::javacInternalPackages = nullptr;

void ModuleHelper::init$() {
}

void ModuleHelper::addExports($Module* from, $Module* to) {
	$init(ModuleHelper);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($StringArray, arr$, ModuleHelper::javacInternalPackages);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($String, pack, arr$->get(i$));
		{
			$nc(from)->addExports(pack, to);
		}
	}
}

void ModuleHelper::clinit$($Class* clazz) {
	$assignStatic(ModuleHelper::javacInternalPackages, $new($StringArray, {
		"com.sun.tools.javac.api"_s,
		"com.sun.tools.javac.code"_s,
		"com.sun.tools.javac.comp"_s,
		"com.sun.tools.javac.file"_s,
		"com.sun.tools.javac.jvm"_s,
		"com.sun.tools.javac.main"_s,
		"com.sun.tools.javac.model"_s,
		"com.sun.tools.javac.parser"_s,
		"com.sun.tools.javac.platform"_s,
		"com.sun.tools.javac.processing"_s,
		"com.sun.tools.javac.tree"_s,
		"com.sun.tools.javac.util"_s,
		"com.sun.tools.doclint"_s
	}));
}

ModuleHelper::ModuleHelper() {
}

$Class* ModuleHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"javacInternalPackages", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ModuleHelper, javacInternalPackages)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ModuleHelper, init$, void)},
		{"addExports", "(Ljava/lang/Module;Ljava/lang/Module;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ModuleHelper, addExports, void, $Module*, $Module*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.ModuleHelper",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleHelper, name, initialize, &classInfo$$, ModuleHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleHelper);
	});
	return class$;
}

$Class* ModuleHelper::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com