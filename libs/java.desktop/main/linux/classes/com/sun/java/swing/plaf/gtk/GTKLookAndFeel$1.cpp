#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$1.h>
#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <jcpp.h>

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $GTKColorChooserPanel = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKLookAndFeel$1::init$($GTKLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* GTKLookAndFeel$1::createValue($UIDefaults* table) {
	return $new($AbstractColorChooserPanelArray, {$$new($GTKColorChooserPanel)});
}

GTKLookAndFeel$1::GTKLookAndFeel$1() {
}

$Class* GTKLookAndFeel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKLookAndFeel$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;)V", nullptr, 0, $method(GTKLookAndFeel$1, init$, void, $GTKLookAndFeel*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel$1, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
		"initComponentDefaults",
		"(Ljavax/swing/UIDefaults;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1", nullptr, nullptr, 0},
		{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1",
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
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel"
	};
	$loadClass(GTKLookAndFeel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKLookAndFeel$1);
	});
	return class$;
}

$Class* GTKLookAndFeel$1::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com