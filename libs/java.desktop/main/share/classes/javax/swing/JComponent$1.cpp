#include <javax/swing/JComponent$1.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

void JComponent$1::init$() {
}

bool JComponent$1::getFlag($JComponent* comp, int32_t aFlag) {
	return $nc(comp)->getFlag(aFlag);
}

void JComponent$1::compWriteObjectNotify($JComponent* comp) {
	$nc(comp)->compWriteObjectNotify();
}

JComponent$1::JComponent$1() {
}

$Class* JComponent$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JComponent$1, init$, void)},
		{"compWriteObjectNotify", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(JComponent$1, compWriteObjectNotify, void, $JComponent*)},
		{"getFlag", "(Ljavax/swing/JComponent;I)Z", nullptr, $PUBLIC, $virtualMethod(JComponent$1, getFlag, bool, $JComponent*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JComponent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComponent$1", nullptr, nullptr, 0},
		{"sun.swing.SwingAccessor$JComponentAccessor", "sun.swing.SwingAccessor", "JComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JComponent$1",
		"java.lang.Object",
		"sun.swing.SwingAccessor$JComponentAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComponent"
	};
	$loadClass(JComponent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComponent$1);
	});
	return class$;
}

$Class* JComponent$1::class$ = nullptr;

	} // swing
} // javax