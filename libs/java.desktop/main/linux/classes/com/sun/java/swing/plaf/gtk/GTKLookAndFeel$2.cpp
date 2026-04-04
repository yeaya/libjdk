#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel$2.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter$TitledBorder.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKPainter$TitledBorder = ::com::sun::java::swing::plaf::gtk::GTKPainter$TitledBorder;
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

void GTKLookAndFeel$2::init$($GTKLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* GTKLookAndFeel$2::createValue($UIDefaults* table) {
	return $of($new($GTKPainter$TitledBorder));
}

GTKLookAndFeel$2::GTKLookAndFeel$2() {
}

$Class* GTKLookAndFeel$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(GTKLookAndFeel$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKLookAndFeel;)V", nullptr, 0, $method(GTKLookAndFeel$2, init$, void, $GTKLookAndFeel*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GTKLookAndFeel$2, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel",
		"initComponentDefaults",
		"(Ljavax/swing/UIDefaults;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$2", nullptr, nullptr, 0},
		{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKLookAndFeel$2",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
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
	$loadClass(GTKLookAndFeel$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GTKLookAndFeel$2);
	});
	return class$;
}

$Class* GTKLookAndFeel$2::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com