#include <com/sun/tools/javac/util/JavacMessages$ResourceBundleHelper.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Class* JavacMessages$ResourceBundleHelper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getResourceBundle", "(Ljava/util/Locale;)Ljava/util/ResourceBundle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavacMessages$ResourceBundleHelper, getResourceBundle, $ResourceBundle*, $Locale*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.JavacMessages$ResourceBundleHelper", "com.sun.tools.javac.util.JavacMessages", "ResourceBundleHelper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.util.JavacMessages$ResourceBundleHelper",
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
		"com.sun.tools.javac.util.JavacMessages"
	};
	$loadClass(JavacMessages$ResourceBundleHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacMessages$ResourceBundleHelper);
	});
	return class$;
}

$Class* JavacMessages$ResourceBundleHelper::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com