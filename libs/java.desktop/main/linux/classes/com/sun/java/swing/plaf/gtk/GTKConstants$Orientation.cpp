#include <com/sun/java/swing/plaf/gtk/GTKConstants$Orientation.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $GTKConstants$OrientationArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

GTKConstants$Orientation* GTKConstants$Orientation::HORIZONTAL = nullptr;
GTKConstants$Orientation* GTKConstants$Orientation::VERTICAL = nullptr;
$GTKConstants$OrientationArray* GTKConstants$Orientation::$VALUES = nullptr;

$GTKConstants$OrientationArray* GTKConstants$Orientation::$values() {
	$init(GTKConstants$Orientation);
	return $new($GTKConstants$OrientationArray, {
		GTKConstants$Orientation::HORIZONTAL,
		GTKConstants$Orientation::VERTICAL
	});
}

$GTKConstants$OrientationArray* GTKConstants$Orientation::values() {
	$init(GTKConstants$Orientation);
	return $cast($GTKConstants$OrientationArray, GTKConstants$Orientation::$VALUES->clone());
}

GTKConstants$Orientation* GTKConstants$Orientation::valueOf($String* name) {
	$init(GTKConstants$Orientation);
	return $cast(GTKConstants$Orientation, $Enum::valueOf(GTKConstants$Orientation::class$, name));
}

void GTKConstants$Orientation::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void GTKConstants$Orientation::clinit$($Class* clazz) {
	$assignStatic(GTKConstants$Orientation::HORIZONTAL, $new(GTKConstants$Orientation, "HORIZONTAL"_s, 0));
	$assignStatic(GTKConstants$Orientation::VERTICAL, $new(GTKConstants$Orientation, "VERTICAL"_s, 1));
	$assignStatic(GTKConstants$Orientation::$VALUES, GTKConstants$Orientation::$values());
}

GTKConstants$Orientation::GTKConstants$Orientation() {
}

$Class* GTKConstants$Orientation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HORIZONTAL", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$Orientation, HORIZONTAL)},
		{"VERTICAL", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$Orientation, VERTICAL)},
		{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$Orientation, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GTKConstants$Orientation, $values, $GTKConstants$OrientationArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(GTKConstants$Orientation, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PUBLIC | $STATIC, $staticMethod(GTKConstants$Orientation, valueOf, GTKConstants$Orientation*, $String*)},
		{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;", nullptr, $PUBLIC | $STATIC, $staticMethod(GTKConstants$Orientation, values, $GTKConstants$OrientationArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKConstants$Orientation", "com.sun.java.swing.plaf.gtk.GTKConstants", "Orientation", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.java.swing.plaf.gtk.GTKConstants$Orientation",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKConstants"
	};
	$loadClass(GTKConstants$Orientation, name, initialize, &classInfo$$, GTKConstants$Orientation::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKConstants$Orientation));
	});
	return class$;
}

$Class* GTKConstants$Orientation::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com