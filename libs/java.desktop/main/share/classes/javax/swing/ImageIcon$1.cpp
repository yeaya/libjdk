#include <javax/swing/ImageIcon$1.h>
#include <java/awt/Component.h>
#include <javax/swing/ImageIcon.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {

void ImageIcon$1::init$() {
}

$Object* ImageIcon$1::run() {
	$useLocalObjectStack();
	try {
		$var($Component, component, $ImageIcon::createNoPermsComponent());
		$$nc($AWTAccessor::getComponentAccessor())->setAppContext(component, nullptr);
		return $of(component);
	} catch ($Throwable& e) {
		e->printStackTrace();
		return nullptr;
	}
	$shouldNotReachHere();
}

ImageIcon$1::ImageIcon$1() {
}

$Class* ImageIcon$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImageIcon$1, init$, void)},
		{"run", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(ImageIcon$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.ImageIcon",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ImageIcon$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ImageIcon$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Component;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.ImageIcon"
	};
	$loadClass(ImageIcon$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageIcon$1);
	});
	return class$;
}

$Class* ImageIcon$1::class$ = nullptr;

	} // swing
} // javax