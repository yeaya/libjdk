#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKFileView.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/io/File.h>
#include <java/util/Hashtable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $BasicFileChooserUI$BasicFileView = ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKFileChooserUI$GTKFileView::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$BasicFileChooserUI$BasicFileView::init$(this$0);
	$set(this, iconCache, nullptr);
}

void GTKFileChooserUI$GTKFileView::clearIconCache() {
}

$Icon* GTKFileChooserUI$GTKFileView::getCachedIcon($File* f) {
	return nullptr;
}

void GTKFileChooserUI$GTKFileView::cacheIcon($File* f, $Icon* i) {
}

$Icon* GTKFileChooserUI$GTKFileView::getIcon($File* f) {
	return (f != nullptr && f->isDirectory()) ? $GTKFileChooserUI::access$000(this->this$0) : $GTKFileChooserUI::access$100(this->this$0);
}

GTKFileChooserUI$GTKFileView::GTKFileChooserUI$GTKFileView() {
}

$Class* GTKFileChooserUI$GTKFileView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$GTKFileView, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PUBLIC, $method(GTKFileChooserUI$GTKFileView, init$, void, $GTKFileChooserUI*)},
		{"cacheIcon", "(Ljava/io/File;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKFileView, cacheIcon, void, $File*, $Icon*)},
		{"clearIconCache", "()V", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKFileView, clearIconCache, void)},
		{"getCachedIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKFileView, getCachedIcon, $Icon*, $File*)},
		{"getIcon", "(Ljava/io/File;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(GTKFileChooserUI$GTKFileView, getIcon, $Icon*, $File*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileView", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKFileView", $PRIVATE},
		{"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView", "javax.swing.plaf.basic.BasicFileChooserUI", "BasicFileView", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileView",
		"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView",
		nullptr,
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
	$loadClass(GTKFileChooserUI$GTKFileView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKFileChooserUI$GTKFileView);
	});
	return class$;
}

$Class* GTKFileChooserUI$GTKFileView::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com