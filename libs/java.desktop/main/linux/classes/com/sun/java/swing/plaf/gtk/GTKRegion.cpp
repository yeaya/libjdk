#include <com/sun/java/swing/plaf/gtk/GTKRegion.h>
#include <javax/swing/plaf/synth/Region.h>
#include <jcpp.h>

#undef HANDLE_BOX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::javax::swing::plaf::synth::Region;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$Region* GTKRegion::HANDLE_BOX = nullptr;

void GTKRegion::init$($String* name, $String* ui, bool subregion) {
	$Region::init$(name, ui, subregion);
}

void GTKRegion::clinit$($Class* clazz) {
	$assignStatic(GTKRegion::HANDLE_BOX, $new(GTKRegion, "HandleBox"_s, nullptr, true));
}

GTKRegion::GTKRegion() {
}

$Class* GTKRegion::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HANDLE_BOX", "Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GTKRegion, HANDLE_BOX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PROTECTED, $method(GTKRegion, init$, void, $String*, $String*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKRegion",
		"javax.swing.plaf.synth.Region",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GTKRegion, name, initialize, &classInfo$$, GTKRegion::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GTKRegion);
	});
	return class$;
}

$Class* GTKRegion::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com