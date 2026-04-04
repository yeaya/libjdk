#include <bug4506788$2.h>
#include <bug4506788.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug4506788 = ::bug4506788;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4506788$2::init$($bug4506788* this$0, $PointArray* val$result) {
	$set(this, this$0, this$0);
	$set(this, val$result, val$result);
}

void bug4506788$2::run() {
	$nc(this->val$result)->set(0, $($nc(this->this$0->jep)->getLocationOnScreen()));
}

bug4506788$2::bug4506788$2() {
}

$Class* bug4506788$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4506788;", nullptr, $FINAL | $SYNTHETIC, $field(bug4506788$2, this$0)},
		{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug4506788$2, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4506788;[Ljava/awt/Point;)V", "()V", 0, $method(bug4506788$2, init$, void, $bug4506788*, $PointArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4506788$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4506788",
		"getJEPLocOnScreen",
		"()Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4506788$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4506788$2",
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
		"bug4506788"
	};
	$loadClass(bug4506788$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4506788$2);
	});
	return class$;
}

$Class* bug4506788$2::class$ = nullptr;