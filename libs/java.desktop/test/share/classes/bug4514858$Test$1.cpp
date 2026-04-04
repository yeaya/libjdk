#include <bug4514858$Test$1.h>
#include <bug4514858$Test.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $bug4514858$Test = ::bug4514858$Test;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug4514858$Test$1::init$($bug4514858$Test* this$0) {
	$set(this, this$0, this$0);
}

void bug4514858$Test$1::actionPerformed($ActionEvent* event) {
	{
		$var($String, s6768$, $nc(event)->getActionCommand());
		int32_t tmp6768$ = -1;
		switch ($nc(s6768$)->hashCode()) {
		case 0x0025d831:
			if (s6768$->equals("Pass"_s)) {
				tmp6768$ = 0;
			}
			break;
		}
		switch (tmp6768$) {
		case 0:
			this->this$0->pass();
			break;
		default:
			$throwNew($RuntimeException, "Test failed."_s);
		}
	}
}

bug4514858$Test$1::bug4514858$Test$1() {
}

$Class* bug4514858$Test$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4514858$Test;", nullptr, $FINAL | $SYNTHETIC, $field(bug4514858$Test$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4514858$Test;)V", nullptr, 0, $method(bug4514858$Test$1, init$, void, $bug4514858$Test*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4514858$Test$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4514858$Test",
		"createTestFrame",
		"(Ljava/lang/String;Ljava/awt/Component;Ljava/lang/String;I)Ljavax/swing/JFrame;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4514858$Test", "bug4514858", "Test", $STATIC},
		{"bug4514858$Test$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4514858$Test$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4514858"
	};
	$loadClass(bug4514858$Test$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4514858$Test$1);
	});
	return class$;
}

$Class* bug4514858$Test$1::class$ = nullptr;