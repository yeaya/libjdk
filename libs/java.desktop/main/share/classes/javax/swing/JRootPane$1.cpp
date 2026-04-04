#include <javax/swing/JRootPane$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

#undef CENTER

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRootPane = ::javax::swing::JRootPane;

namespace javax {
	namespace swing {

void JRootPane$1::init$($JRootPane* this$0) {
	$set(this, this$0, this$0);
	$BorderLayout::init$();
}

void JRootPane$1::addLayoutComponent($Component* comp, Object$* constraints$renamed) {
	$var($Object, constraints, constraints$renamed);
	if (constraints == nullptr) {
		$init($BorderLayout);
		$assign(constraints, $BorderLayout::CENTER);
	}
	$BorderLayout::addLayoutComponent(comp, constraints);
}

JRootPane$1::JRootPane$1() {
}

$Class* JRootPane$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(JRootPane$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JRootPane;)V", nullptr, 0, $method(JRootPane$1, init$, void, $JRootPane*)},
		{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(JRootPane$1, addLayoutComponent, void, $Component*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JRootPane",
		"createContentPane",
		"()Ljava/awt/Container;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JRootPane$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JRootPane$1",
		"java.awt.BorderLayout",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JRootPane"
	};
	$loadClass(JRootPane$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JRootPane$1));
	});
	return class$;
}

$Class* JRootPane$1::class$ = nullptr;

	} // swing
} // javax