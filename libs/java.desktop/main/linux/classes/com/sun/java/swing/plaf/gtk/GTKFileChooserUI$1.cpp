#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$1.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKFileChooserUI$1::init$($GTKFileChooserUI* this$0, int32_t align, int32_t hgap, int32_t vgap) {
	$set(this, this$0, this$0);
	$FlowLayout::init$(align, hgap, vgap);
}

void GTKFileChooserUI$1::layoutContainer($Container* target) {
	$FlowLayout::layoutContainer(target);
	$var($JComboBox, comboBox, this->this$0->directoryComboBox);
	int32_t var$0 = $nc(comboBox)->getWidth();
	if (var$0 > $nc(target)->getWidth()) {
		int32_t var$1 = comboBox->getY();
		int32_t var$2 = target->getWidth();
		comboBox->setBounds(0, var$1, var$2, comboBox->getHeight());
	}
}

GTKFileChooserUI$1::GTKFileChooserUI$1() {
}

$Class* GTKFileChooserUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;III)V", nullptr, 0, $method(GTKFileChooserUI$1, init$, void, $GTKFileChooserUI*, int32_t, int32_t, int32_t)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$1, layoutContainer, void, $Container*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI",
		"installComponents",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$1",
		"java.awt.FlowLayout",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
	};
	$loadClass(GTKFileChooserUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKFileChooserUI$1));
	});
	return class$;
}

$Class* GTKFileChooserUI$1::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com