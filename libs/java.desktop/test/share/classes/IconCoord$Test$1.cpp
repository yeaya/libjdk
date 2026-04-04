#include <IconCoord$Test$1.h>
#include <IconCoord$Test.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $IconCoord$Test = ::IconCoord$Test;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void IconCoord$Test$1::init$($IconCoord$Test* this$0) {
	$set(this, this$0, this$0);
}

void IconCoord$Test$1::actionPerformed($ActionEvent* event) {
	{
		$var($String, s4486$, $nc(event)->getActionCommand());
		int32_t tmp4486$ = -1;
		switch ($nc(s4486$)->hashCode()) {
		case 0x0025d831:
			if (s4486$->equals("Pass"_s)) {
				tmp4486$ = 0;
			}
			break;
		}
		switch (tmp4486$) {
		case 0:
			this->this$0->pass();
			break;
		default:
			$throwNew($RuntimeException, "Test failed."_s);
		}
	}
}

IconCoord$Test$1::IconCoord$Test$1() {
}

$Class* IconCoord$Test$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LIconCoord$Test;", nullptr, $FINAL | $SYNTHETIC, $field(IconCoord$Test$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LIconCoord$Test;)V", nullptr, 0, $method(IconCoord$Test$1, init$, void, $IconCoord$Test*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(IconCoord$Test$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"IconCoord$Test",
		"createTestFrame",
		"(Ljava/lang/String;Ljava/awt/Component;Ljava/lang/String;I)Ljavax/swing/JFrame;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IconCoord$Test", "IconCoord", "Test", $STATIC},
		{"IconCoord$Test$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"IconCoord$Test$1",
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
		"IconCoord"
	};
	$loadClass(IconCoord$Test$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IconCoord$Test$1);
	});
	return class$;
}

$Class* IconCoord$Test$1::class$ = nullptr;