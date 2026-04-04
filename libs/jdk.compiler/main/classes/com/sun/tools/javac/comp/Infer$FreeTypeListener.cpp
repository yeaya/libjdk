#include <com/sun/tools/javac/comp/Infer$FreeTypeListener.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <jcpp.h>

using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Class* Infer$FreeTypeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"typesInferred", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Infer$FreeTypeListener, typesInferred, void, $InferenceContext*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$FreeTypeListener", "com.sun.tools.javac.comp.Infer", "FreeTypeListener", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.Infer$FreeTypeListener",
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
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$FreeTypeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$FreeTypeListener);
	});
	return class$;
}

$Class* Infer$FreeTypeListener::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com