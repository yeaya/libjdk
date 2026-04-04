#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $WindowsIconFactory$VistaMenuItemCheckIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$VistaMenuItemCheckIconFactory;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsPopupMenuUI = ::com::sun::java::swing::plaf::windows::WindowsPopupMenuUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsLookAndFeel$1::init$($WindowsLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* WindowsLookAndFeel$1::createValue($UIDefaults* table) {
	int32_t var$2 = $WindowsIconFactory$VistaMenuItemCheckIconFactory::getIconWidth();
	int32_t var$1 = var$2 + $WindowsPopupMenuUI::getSpanBeforeGutter();
	int32_t var$0 = var$1 + $WindowsPopupMenuUI::getGutterWidth();
	return $of($Integer::valueOf(var$0 + $WindowsPopupMenuUI::getSpanAfterGutter()));
}

WindowsLookAndFeel$1::WindowsLookAndFeel$1() {
}

$Class* WindowsLookAndFeel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;)V", nullptr, 0, $method(WindowsLookAndFeel$1, init$, void, $WindowsLookAndFeel*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$1, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel",
		"initVistaComponentDefaults",
		"(Ljavax/swing/UIDefaults;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$1", nullptr, nullptr, 0},
		{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$1",
		"java.lang.Object",
		"javax.swing.UIDefaults$ActiveValue",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
	};
	$loadClass(WindowsLookAndFeel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$1);
	});
	return class$;
}

$Class* WindowsLookAndFeel$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com