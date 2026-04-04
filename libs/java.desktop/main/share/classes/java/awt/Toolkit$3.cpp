#include <java/awt/Toolkit$3.h>
#include <java/awt/Toolkit.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace java {
	namespace awt {

void Toolkit$3::init$() {
}

void Toolkit$3::setPlatformResources($ResourceBundle* bundle) {
	$Toolkit::setPlatformResources(bundle);
}

Toolkit$3::Toolkit$3() {
}

$Class* Toolkit$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Toolkit$3, init$, void)},
		{"setPlatformResources", "(Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC, $virtualMethod(Toolkit$3, setPlatformResources, void, $ResourceBundle*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Toolkit",
		"initStatic",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Toolkit$3", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$ToolkitAccessor", "sun.awt.AWTAccessor", "ToolkitAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Toolkit$3",
		"java.lang.Object",
		"sun.awt.AWTAccessor$ToolkitAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Toolkit"
	};
	$loadClass(Toolkit$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Toolkit$3);
	});
	return class$;
}

$Class* Toolkit$3::class$ = nullptr;

	} // awt
} // java