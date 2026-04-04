#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel$OpaqueLabel.h>
#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $GTKColorChooserPanel = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKColorChooserPanel$OpaqueLabel::init$($GTKColorChooserPanel* this$0) {
	$set(this, this$0, this$0);
	$JLabel::init$();
}

bool GTKColorChooserPanel$OpaqueLabel::isOpaque() {
	return true;
}

GTKColorChooserPanel$OpaqueLabel::GTKColorChooserPanel$OpaqueLabel() {
}

$Class* GTKColorChooserPanel$OpaqueLabel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKColorChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKColorChooserPanel$OpaqueLabel, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKColorChooserPanel;)V", nullptr, $PRIVATE, $method(GTKColorChooserPanel$OpaqueLabel, init$, void, $GTKColorChooserPanel*)},
		{"isOpaque", "()Z", nullptr, $PUBLIC, $virtualMethod(GTKColorChooserPanel$OpaqueLabel, isOpaque, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$OpaqueLabel", "com.sun.java.swing.plaf.gtk.GTKColorChooserPanel", "OpaqueLabel", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$OpaqueLabel",
		"javax.swing.JLabel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel"
	};
	$loadClass(GTKColorChooserPanel$OpaqueLabel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKColorChooserPanel$OpaqueLabel));
	});
	return class$;
}

$Class* GTKColorChooserPanel$OpaqueLabel::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com