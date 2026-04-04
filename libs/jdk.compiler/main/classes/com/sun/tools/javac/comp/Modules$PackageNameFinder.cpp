#include <com/sun/tools/javac/comp/Modules$PackageNameFinder.h>
#include <com/sun/tools/javac/comp/Modules.h>
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
				namespace comp {

$Class* Modules$PackageNameFinder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"findPackageNameOf", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Modules$PackageNameFinder, findPackageNameOf, $Name*, $JavaFileObject*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Modules$PackageNameFinder", "com.sun.tools.javac.comp.Modules", "PackageNameFinder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.Modules$PackageNameFinder",
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
		"com.sun.tools.javac.comp.Modules"
	};
	$loadClass(Modules$PackageNameFinder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Modules$PackageNameFinder);
	});
	return class$;
}

$Class* Modules$PackageNameFinder::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com