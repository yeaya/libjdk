#include <javax/swing/ImageIcon$2.h>
#include <javax/swing/ImageIcon$2$1.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon$2$1 = ::javax::swing::ImageIcon$2$1;

namespace javax {
	namespace swing {

void ImageIcon$2::init$() {
}

$Object* ImageIcon$2::run() {
	return $of($new($ImageIcon$2$1, this));
}

ImageIcon$2::ImageIcon$2() {
}

$Class* ImageIcon$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ImageIcon$2, init$, void)},
		{"run", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(ImageIcon$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.ImageIcon",
		"createNoPermsComponent",
		"()Ljava/awt/Component;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ImageIcon$2", nullptr, nullptr, 0},
		{"javax.swing.ImageIcon$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ImageIcon$2",
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
	$loadClass(ImageIcon$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageIcon$2);
	});
	return class$;
}

$Class* ImageIcon$2::class$ = nullptr;

	} // swing
} // javax