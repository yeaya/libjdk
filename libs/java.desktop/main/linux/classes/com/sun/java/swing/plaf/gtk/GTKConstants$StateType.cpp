#include <com/sun/java/swing/plaf/gtk/GTKConstants$StateType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ACTIVE
#undef INSENSITIVE
#undef NORMAL
#undef PRELIGHT
#undef SELECTED

using $GTKConstants$StateTypeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$StateType>;
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

GTKConstants$StateType* GTKConstants$StateType::NORMAL = nullptr;
GTKConstants$StateType* GTKConstants$StateType::ACTIVE = nullptr;
GTKConstants$StateType* GTKConstants$StateType::PRELIGHT = nullptr;
GTKConstants$StateType* GTKConstants$StateType::SELECTED = nullptr;
GTKConstants$StateType* GTKConstants$StateType::INSENSITIVE = nullptr;
$GTKConstants$StateTypeArray* GTKConstants$StateType::$VALUES = nullptr;

$GTKConstants$StateTypeArray* GTKConstants$StateType::$values() {
	$init(GTKConstants$StateType);
	return $new($GTKConstants$StateTypeArray, {
		GTKConstants$StateType::NORMAL,
		GTKConstants$StateType::ACTIVE,
		GTKConstants$StateType::PRELIGHT,
		GTKConstants$StateType::SELECTED,
		GTKConstants$StateType::INSENSITIVE
	});
}

$GTKConstants$StateTypeArray* GTKConstants$StateType::values() {
	$init(GTKConstants$StateType);
	return $cast($GTKConstants$StateTypeArray, GTKConstants$StateType::$VALUES->clone());
}

GTKConstants$StateType* GTKConstants$StateType::valueOf($String* name) {
	$init(GTKConstants$StateType);
	return $cast(GTKConstants$StateType, $Enum::valueOf(GTKConstants$StateType::class$, name));
}

void GTKConstants$StateType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void GTKConstants$StateType::clinit$($Class* clazz) {
	$assignStatic(GTKConstants$StateType::NORMAL, $new(GTKConstants$StateType, "NORMAL"_s, 0));
	$assignStatic(GTKConstants$StateType::ACTIVE, $new(GTKConstants$StateType, "ACTIVE"_s, 1));
	$assignStatic(GTKConstants$StateType::PRELIGHT, $new(GTKConstants$StateType, "PRELIGHT"_s, 2));
	$assignStatic(GTKConstants$StateType::SELECTED, $new(GTKConstants$StateType, "SELECTED"_s, 3));
	$assignStatic(GTKConstants$StateType::INSENSITIVE, $new(GTKConstants$StateType, "INSENSITIVE"_s, 4));
	$assignStatic(GTKConstants$StateType::$VALUES, GTKConstants$StateType::$values());
}

GTKConstants$StateType::GTKConstants$StateType() {
}

$Class* GTKConstants$StateType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NORMAL", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, NORMAL)},
		{"ACTIVE", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, ACTIVE)},
		{"PRELIGHT", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, PRELIGHT)},
		{"SELECTED", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, SELECTED)},
		{"INSENSITIVE", "Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKConstants$StateType, INSENSITIVE)},
		{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKConstants$StateType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GTKConstants$StateType, $values, $GTKConstants$StateTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(GTKConstants$StateType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC, $staticMethod(GTKConstants$StateType, valueOf, GTKConstants$StateType*, $String*)},
		{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;", nullptr, $PUBLIC | $STATIC, $staticMethod(GTKConstants$StateType, values, $GTKConstants$StateTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKConstants$StateType", "com.sun.java.swing.plaf.gtk.GTKConstants", "StateType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
		"com.sun.java.swing.plaf.gtk.GTKConstants$StateType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKConstants$StateType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKConstants"
	};
	$loadClass(GTKConstants$StateType, name, initialize, &classInfo$$, GTKConstants$StateType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKConstants$StateType));
	});
	return class$;
}

$Class* GTKConstants$StateType::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com