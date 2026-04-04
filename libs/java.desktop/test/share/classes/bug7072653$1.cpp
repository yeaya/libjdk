#include <bug7072653$1.h>
#include <bug7072653.h>
#include <javax/swing/DefaultComboBoxModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;

void bug7072653$1::init$() {
	$DefaultComboBoxModel::init$();
}

$Object* bug7072653$1::getElementAt(int32_t index) {
	return $of($str({"Element "_s, $$str(index)}));
}

int32_t bug7072653$1::getSize() {
	return 400;
}

bug7072653$1::bug7072653$1() {
}

$Class* bug7072653$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7072653$1, init$, void)},
		{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(bug7072653$1, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(bug7072653$1, getSize, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7072653",
		"setup",
		"(Ljava/lang/String;Ljava/awt/GraphicsDevice;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7072653$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7072653$1",
		"javax.swing.DefaultComboBoxModel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7072653"
	};
	$loadClass(bug7072653$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug7072653$1));
	});
	return class$;
}

$Class* bug7072653$1::class$ = nullptr;