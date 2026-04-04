#include <ComponentTest$2.h>
#include <ComponentTest.h>
#include <java/awt/Component.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $ComponentTest = ::ComponentTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

void ComponentTest$2::init$($UIManager$LookAndFeelInfo* val$laf) {
	$set(this, val$laf, val$laf);
}

void ComponentTest$2::run() {
	try {
		$UIManager::setLookAndFeel($($nc(this->val$laf)->getClassName()));
	} catch ($Exception& e) {
		$new($RuntimeException, e);
	}
	$init($ComponentTest);
	$SwingUtilities::updateComponentTreeUI($ComponentTest::frame);
}

ComponentTest$2::ComponentTest$2() {
}

$Class* ComponentTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $FINAL | $SYNTHETIC, $field(ComponentTest$2, val$laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", "()V", 0, $method(ComponentTest$2, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ComponentTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ComponentTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ComponentTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ComponentTest$2",
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
		"ComponentTest"
	};
	$loadClass(ComponentTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentTest$2);
	});
	return class$;
}

$Class* ComponentTest$2::class$ = nullptr;