#include <com/sun/tools/javac/code/ModuleFinder$ModuleNameFromSourceReader.h>
#include <com/sun/tools/javac/code/ModuleFinder.h>
#include <com/sun/tools/javac/util/Name.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$Class* ModuleFinder$ModuleNameFromSourceReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"readModuleName", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ModuleFinder$ModuleNameFromSourceReader, readModuleName, $Name*, $JavaFileObject*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.ModuleFinder$ModuleNameFromSourceReader", "com.sun.tools.javac.code.ModuleFinder", "ModuleNameFromSourceReader", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.code.ModuleFinder$ModuleNameFromSourceReader",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.ModuleFinder"
	};
	$loadClass(ModuleFinder$ModuleNameFromSourceReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleFinder$ModuleNameFromSourceReader);
	});
	return class$;
}

$Class* ModuleFinder$ModuleNameFromSourceReader::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com