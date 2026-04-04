#include <javax/swing/plaf/basic/BasicToolBarUI$1.h>
#include <java/awt/GraphicsConfiguration.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$1$1.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JRootPane = ::javax::swing::JRootPane;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$1$1 = ::javax::swing::plaf::basic::BasicToolBarUI$1$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarUI$1::init$($BasicToolBarUI* this$0, $String* title, $GraphicsConfiguration* gc) {
	$set(this, this$0, this$0);
	$JFrame::init$(title, gc);
}

$JRootPane* BasicToolBarUI$1::createRootPane() {
	$var($JRootPane, rootPane, $new($BasicToolBarUI$1$1, this));
	rootPane->setOpaque(true);
	return rootPane;
}

BasicToolBarUI$1::BasicToolBarUI$1() {
}

$Class* BasicToolBarUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljava/lang/String;Ljava/awt/GraphicsConfiguration;)V", nullptr, 0, $method(BasicToolBarUI$1, init$, void, $BasicToolBarUI*, $String*, $GraphicsConfiguration*)},
		{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $virtualMethod(BasicToolBarUI$1, createRootPane, $JRootPane*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicToolBarUI",
		"createFloatingFrame",
		"(Ljavax/swing/JToolBar;)Ljavax/swing/JFrame;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolBarUI$1", nullptr, nullptr, 0},
		{"javax.swing.plaf.basic.BasicToolBarUI$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarUI$1",
		"javax.swing.JFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicToolBarUI"
	};
	$loadClass(BasicToolBarUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicToolBarUI$1));
	});
	return class$;
}

$Class* BasicToolBarUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax