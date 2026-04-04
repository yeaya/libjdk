#include <com/sun/java/swing/plaf/gtk/GTKEngine$CustomRegion.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <javax/swing/plaf/synth/Region.h>
#include <jcpp.h>

#undef TITLED_BORDER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::javax::swing::plaf::synth::Region;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$Region* GTKEngine$CustomRegion::TITLED_BORDER = nullptr;

void GTKEngine$CustomRegion::init$($String* name) {
	$Region::init$(name, nullptr, false);
}

void GTKEngine$CustomRegion::clinit$($Class* clazz) {
	$assignStatic(GTKEngine$CustomRegion::TITLED_BORDER, $new(GTKEngine$CustomRegion, "TitledBorder"_s));
}

GTKEngine$CustomRegion::GTKEngine$CustomRegion() {
}

$Class* GTKEngine$CustomRegion::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TITLED_BORDER", "Ljavax/swing/plaf/synth/Region;", nullptr, $STATIC, $staticField(GTKEngine$CustomRegion, TITLED_BORDER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(GTKEngine$CustomRegion, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKEngine$CustomRegion", "com.sun.java.swing.plaf.gtk.GTKEngine", "CustomRegion", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKEngine$CustomRegion",
		"javax.swing.plaf.synth.Region",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKEngine"
	};
	$loadClass(GTKEngine$CustomRegion, name, initialize, &classInfo$$, GTKEngine$CustomRegion::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GTKEngine$CustomRegion);
	});
	return class$;
}

$Class* GTKEngine$CustomRegion::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com