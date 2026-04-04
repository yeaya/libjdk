#include <sun/awt/UNIXToolkit$GtkVersions$Constants.h>
#include <sun/awt/UNIXToolkit$GtkVersions.h>
#include <jcpp.h>

#undef GTK2_MAJOR_NUMBER
#undef GTK3_MAJOR_NUMBER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

void UNIXToolkit$GtkVersions$Constants::init$() {
}

UNIXToolkit$GtkVersions$Constants::UNIXToolkit$GtkVersions$Constants() {
}

$Class* UNIXToolkit$GtkVersions$Constants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GTK2_MAJOR_NUMBER", "I", nullptr, $STATIC | $FINAL, $constField(UNIXToolkit$GtkVersions$Constants, GTK2_MAJOR_NUMBER)},
		{"GTK3_MAJOR_NUMBER", "I", nullptr, $STATIC | $FINAL, $constField(UNIXToolkit$GtkVersions$Constants, GTK3_MAJOR_NUMBER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UNIXToolkit$GtkVersions$Constants, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.UNIXToolkit$GtkVersions", "sun.awt.UNIXToolkit", "GtkVersions", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{"sun.awt.UNIXToolkit$GtkVersions$Constants", "sun.awt.UNIXToolkit$GtkVersions", "Constants", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.UNIXToolkit$GtkVersions$Constants",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.UNIXToolkit"
	};
	$loadClass(UNIXToolkit$GtkVersions$Constants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UNIXToolkit$GtkVersions$Constants);
	});
	return class$;
}

$Class* UNIXToolkit$GtkVersions$Constants::class$ = nullptr;

	} // awt
} // sun