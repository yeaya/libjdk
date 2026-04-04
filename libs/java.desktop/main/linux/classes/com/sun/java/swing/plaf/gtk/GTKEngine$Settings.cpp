#include <com/sun/java/swing/plaf/gtk/GTKEngine$Settings.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef GTK_CURSOR_BLINK
#undef GTK_CURSOR_BLINK_TIME
#undef GTK_FONT_NAME
#undef GTK_ICON_SIZES

using $GTKEngine$SettingsArray = $Array<::com::sun::java::swing::plaf::gtk::GTKEngine$Settings>;
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

GTKEngine$Settings* GTKEngine$Settings::GTK_FONT_NAME = nullptr;
GTKEngine$Settings* GTKEngine$Settings::GTK_ICON_SIZES = nullptr;
GTKEngine$Settings* GTKEngine$Settings::GTK_CURSOR_BLINK = nullptr;
GTKEngine$Settings* GTKEngine$Settings::GTK_CURSOR_BLINK_TIME = nullptr;
$GTKEngine$SettingsArray* GTKEngine$Settings::$VALUES = nullptr;

$GTKEngine$SettingsArray* GTKEngine$Settings::$values() {
	$init(GTKEngine$Settings);
	return $new($GTKEngine$SettingsArray, {
		GTKEngine$Settings::GTK_FONT_NAME,
		GTKEngine$Settings::GTK_ICON_SIZES,
		GTKEngine$Settings::GTK_CURSOR_BLINK,
		GTKEngine$Settings::GTK_CURSOR_BLINK_TIME
	});
}

$GTKEngine$SettingsArray* GTKEngine$Settings::values() {
	$init(GTKEngine$Settings);
	return $cast($GTKEngine$SettingsArray, GTKEngine$Settings::$VALUES->clone());
}

GTKEngine$Settings* GTKEngine$Settings::valueOf($String* name) {
	$init(GTKEngine$Settings);
	return $cast(GTKEngine$Settings, $Enum::valueOf(GTKEngine$Settings::class$, name));
}

void GTKEngine$Settings::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void GTKEngine$Settings::clinit$($Class* clazz) {
	$assignStatic(GTKEngine$Settings::GTK_FONT_NAME, $new(GTKEngine$Settings, "GTK_FONT_NAME"_s, 0));
	$assignStatic(GTKEngine$Settings::GTK_ICON_SIZES, $new(GTKEngine$Settings, "GTK_ICON_SIZES"_s, 1));
	$assignStatic(GTKEngine$Settings::GTK_CURSOR_BLINK, $new(GTKEngine$Settings, "GTK_CURSOR_BLINK"_s, 2));
	$assignStatic(GTKEngine$Settings::GTK_CURSOR_BLINK_TIME, $new(GTKEngine$Settings, "GTK_CURSOR_BLINK_TIME"_s, 3));
	$assignStatic(GTKEngine$Settings::$VALUES, GTKEngine$Settings::$values());
}

GTKEngine$Settings::GTKEngine$Settings() {
}

$Class* GTKEngine$Settings::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GTK_FONT_NAME", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$Settings, GTK_FONT_NAME)},
		{"GTK_ICON_SIZES", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$Settings, GTK_ICON_SIZES)},
		{"GTK_CURSOR_BLINK", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$Settings, GTK_CURSOR_BLINK)},
		{"GTK_CURSOR_BLINK_TIME", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(GTKEngine$Settings, GTK_CURSOR_BLINK_TIME)},
		{"$VALUES", "[Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKEngine$Settings, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GTKEngine$Settings, $values, $GTKEngine$SettingsArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(GTKEngine$Settings, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC, $staticMethod(GTKEngine$Settings, valueOf, GTKEngine$Settings*, $String*)},
		{"values", "()[Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;", nullptr, $PUBLIC | $STATIC, $staticMethod(GTKEngine$Settings, values, $GTKEngine$SettingsArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKEngine$Settings", "com.sun.java.swing.plaf.gtk.GTKEngine", "Settings", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.java.swing.plaf.gtk.GTKEngine$Settings",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/java/swing/plaf/gtk/GTKEngine$Settings;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKEngine"
	};
	$loadClass(GTKEngine$Settings, name, initialize, &classInfo$$, GTKEngine$Settings::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKEngine$Settings));
	});
	return class$;
}

$Class* GTKEngine$Settings::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com