#include <Test6888156$3.h>
#include <Test6888156.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef OPAQUE

using $Test6888156 = ::Test6888156;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

void Test6888156$3::init$($Test6888156* this$0, $String* val$laf) {
	$set(this, this$0, this$0);
	$set(this, val$laf, val$laf);
}

void Test6888156$3::run() {
	$useLocalObjectStack();
	try {
		$nc($System::out)->println(this->val$laf);
		$UIManager::setLookAndFeel(this->val$laf);
	} catch ($Exception& e) {
		$nc($System::err)->println($$str({this->val$laf, " is unsupported; continuing"_s}));
		return;
	}
	$SwingUtilities::updateComponentTreeUI(this->this$0->table);
	$nc(this->this$0->table)->setSize(100, 100);
	$nc(this->this$0->table)->paint($($$new($BufferedImage, 100, 100, $BufferedImage::OPAQUE)->getGraphics()));
}

Test6888156$3::Test6888156$3() {
}

$Class* Test6888156$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest6888156;", nullptr, $FINAL | $SYNTHETIC, $field(Test6888156$3, this$0)},
		{"val$laf", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Test6888156$3, val$laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest6888156;Ljava/lang/String;)V", "()V", 0, $method(Test6888156$3, init$, void, $Test6888156*, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6888156$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6888156",
		"test",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6888156$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6888156$3",
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
		"Test6888156"
	};
	$loadClass(Test6888156$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6888156$3);
	});
	return class$;
}

$Class* Test6888156$3::class$ = nullptr;