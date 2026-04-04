#include <bug6489130$1.h>
#include <bug6489130$1$1.h>
#include <bug6489130.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

#undef MUX

using $WindowArray = $Array<::java::awt::Window>;
using $bug6489130 = ::bug6489130;
using $bug6489130$1$1 = ::bug6489130$1$1;
using $Frame = ::java::awt::Frame;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6489130$1::init$($bug6489130* this$0) {
	$set(this, this$0, this$0);
}

void bug6489130$1::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	switch (this->this$0->state) {
	case 0:
	case 1:
		{
			$SwingUtilities::invokeLater($$new($bug6489130$1$1, this));
			break;
		}
	case 2:
	case 3:
		{
			$var($WindowArray, windows, $Frame::getWindows());
			if ($nc(windows)->length > 0) {
				$nc(windows->get(0))->dispose();
			}
			break;
		}
	case 4:
		{
			$nc($bug6489130::MUX)->countDown();
			break;
		}
	}
	++this->this$0->state;
}

bug6489130$1::bug6489130$1() {
}

$Class* bug6489130$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6489130;", nullptr, $FINAL | $SYNTHETIC, $field(bug6489130$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6489130;)V", nullptr, 0, $method(bug6489130$1, init$, void, $bug6489130*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6489130$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6489130",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6489130$1", nullptr, nullptr, 0},
		{"bug6489130$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6489130$1",
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
		"bug6489130"
	};
	$loadClass(bug6489130$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6489130$1);
	});
	return class$;
}

$Class* bug6489130$1::class$ = nullptr;