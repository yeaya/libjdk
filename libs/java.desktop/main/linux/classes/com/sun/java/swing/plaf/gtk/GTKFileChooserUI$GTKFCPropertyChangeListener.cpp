#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKFCPropertyChangeListener.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

#undef TRUE

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKFileChooserUI$GTKFCPropertyChangeListener::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void GTKFileChooserUI$GTKFCPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, prop, $nc(e)->getPropertyName());
	if ($nc(prop)->equals("GTKFileChooser.showDirectoryIcons"_s)) {
		this->this$0->showDirectoryIcons = $nc($Boolean::TRUE)->equals($(e->getNewValue()));
	} else if (prop->equals("GTKFileChooser.showFileIcons"_s)) {
		this->this$0->showFileIcons = $nc($Boolean::TRUE)->equals($(e->getNewValue()));
	}
}

GTKFileChooserUI$GTKFCPropertyChangeListener::GTKFileChooserUI$GTKFCPropertyChangeListener() {
}

$Class* GTKFileChooserUI$GTKFCPropertyChangeListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKFCPropertyChangeListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PRIVATE, $method(GTKFileChooserUI$GTKFCPropertyChangeListener, init$, void, $GTKFileChooserUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKFCPropertyChangeListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFCPropertyChangeListener", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKFCPropertyChangeListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFCPropertyChangeListener",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
	};
	$loadClass(GTKFileChooserUI$GTKFCPropertyChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKFileChooserUI$GTKFCPropertyChangeListener);
	});
	return class$;
}

$Class* GTKFileChooserUI$GTKFCPropertyChangeListener::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com