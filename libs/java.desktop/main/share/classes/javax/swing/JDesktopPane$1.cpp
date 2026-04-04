#include <javax/swing/JDesktopPane$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <jcpp.h>

using $JInternalFrameArray = $Array<::javax::swing::JInternalFrame>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;

namespace javax {
	namespace swing {

void JDesktopPane$1::init$($JDesktopPane* this$0) {
	$set(this, this$0, this$0);
	$LayoutFocusTraversalPolicy::init$();
}

$Component* JDesktopPane$1::getDefaultComponent($Container* c) {
	$useLocalObjectStack();
	$var($JInternalFrameArray, jifArray, this->this$0->getAllFrames());
	$var($Component, comp, nullptr);
	{
		$var($JInternalFrameArray, arr$, jifArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($JInternalFrame, jif, arr$->get(i$));
			{
				$assign(comp, $$nc($nc(jif)->getFocusTraversalPolicy())->getDefaultComponent(jif));
				if (comp != nullptr) {
					break;
				}
			}
		}
	}
	return comp;
}

JDesktopPane$1::JDesktopPane$1() {
}

$Class* JDesktopPane$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JDesktopPane;", nullptr, $FINAL | $SYNTHETIC, $field(JDesktopPane$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDesktopPane;)V", nullptr, 0, $method(JDesktopPane$1, init$, void, $JDesktopPane*)},
		{"getDefaultComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(JDesktopPane$1, getDefaultComponent, $Component*, $Container*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JDesktopPane",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JDesktopPane$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JDesktopPane$1",
		"javax.swing.LayoutFocusTraversalPolicy",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JDesktopPane"
	};
	$loadClass(JDesktopPane$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JDesktopPane$1));
	});
	return class$;
}

$Class* JDesktopPane$1::class$ = nullptr;

	} // swing
} // javax