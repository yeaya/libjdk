#include <FocusTraversal$2.h>
#include <FocusTraversal.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FocusTraversal$2::init$($Component* val$component) {
	$set(this, val$component, val$component);
}

void FocusTraversal$2::run() {
	$nc(this->val$component)->requestFocusInWindow();
}

FocusTraversal$2::FocusTraversal$2() {
}

$Class* FocusTraversal$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$component", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(FocusTraversal$2, val$component)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;)V", "()V", 0, $method(FocusTraversal$2, init$, void, $Component*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FocusTraversal$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FocusTraversal",
		"focusOn",
		"(Ljava/awt/Component;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FocusTraversal$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FocusTraversal$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FocusTraversal"
	};
	$loadClass(FocusTraversal$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FocusTraversal$2);
	});
	return class$;
}

$Class* FocusTraversal$2::class$ = nullptr;