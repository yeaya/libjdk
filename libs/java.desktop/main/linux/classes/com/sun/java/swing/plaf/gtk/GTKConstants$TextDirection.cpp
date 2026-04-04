#include <com/sun/java/swing/plaf/gtk/GTKConstants$TextDirection.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef LTR
#undef NONE
#undef RTL

using $GTKConstants$TextDirectionArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$TextDirection>;
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

GTKConstants$TextDirection* GTKConstants$TextDirection::NONE = nullptr;
GTKConstants$TextDirection* GTKConstants$TextDirection::LTR = nullptr;
GTKConstants$TextDirection* GTKConstants$TextDirection::RTL = nullptr;
$GTKConstants$TextDirectionArray* GTKConstants$TextDirection::$VALUES = nullptr;

$GTKConstants$TextDirectionArray* GTKConstants$TextDirection::$values() {
	$init(GTKConstants$TextDirection);
	return $new($GTKConstants$TextDirectionArray, {
		GTKConstants$TextDirection::NONE,
		GTKConstants$TextDirection::LTR,
		GTKConstants$TextDirection::RTL
	});
}

$GTKConstants$TextDirectionArray* GTKConstants$TextDirection::values() {
	$init(GTKConstants$TextDirection);
	return $cast($GTKConstants$TextDirectionArray, GTKConstants$TextDirection::$VALUES->clone());
}

GTKConstants$TextDirection* GTKConstants$TextDirection::valueOf($String* name) {
	$init(GTKConstants$TextDirection);
	return $cast(GTKConstants$TextDirection, $Enum::valueOf(GTKConstants$TextDirection::class$, name));
}

void GTKConstants$TextDirection::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void GTKConstants$TextDirection::clinit$($Class* clazz) {
	$assignStatic(GTKConstants$TextDirection::NONE, $new(GTKConstants$TextDirection, "NONE"_s, 0));
	$assignStatic(GTKConstants$TextDirection::LTR, $new(GTKConstants$TextDirection, "LTR"_s, 1));
	$assignStatic(GTKConstants$TextDirection::RTL, $new(GTKConstants$TextDirection, "RTL"_s, 2));
	$assignStatic(GTKConstants$TextDirection::$VALUES, GTKConstants$TextDirection::$values());
}

GTKConstants$TextDirection::GTKConstants$TextDirection() {
}

$Class* GTKConstants$TextDirection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NONE", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$TextDirection, NONE)},
		{"LTR", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$TextDirection, LTR)},
		{"RTL", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$TextDirection, RTL)},
		{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$TextDirection, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GTKConstants$TextDirection, $values, $GTKConstants$TextDirectionArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(GTKConstants$TextDirection, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC, $staticMethod(GTKConstants$TextDirection, valueOf, GTKConstants$TextDirection*, $String*)},
		{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;", nullptr, $PUBLIC | $STATIC, $staticMethod(GTKConstants$TextDirection, values, $GTKConstants$TextDirectionArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKConstants$TextDirection", "com.sun.java.swing.plaf.gtk.GTKConstants", "TextDirection", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.java.swing.plaf.gtk.GTKConstants$TextDirection",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$TextDirection;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKConstants"
	};
	$loadClass(GTKConstants$TextDirection, name, initialize, &classInfo$$, GTKConstants$TextDirection::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKConstants$TextDirection));
	});
	return class$;
}

$Class* GTKConstants$TextDirection::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com