#include <javax/tools/StandardLocation$1.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace tools {

void StandardLocation$1::init$($String* val$name) {
	$set(this, val$name, val$name);
}

$String* StandardLocation$1::getName() {
	return this->val$name;
}

bool StandardLocation$1::isOutputLocation() {
	return $nc(this->val$name)->endsWith("_OUTPUT"_s);
}

StandardLocation$1::StandardLocation$1() {
}

$Class* StandardLocation$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(StandardLocation$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(StandardLocation$1, init$, void, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StandardLocation$1, getName, $String*)},
		{"isOutputLocation", "()Z", nullptr, $PUBLIC, $virtualMethod(StandardLocation$1, isOutputLocation, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.tools.StandardLocation",
		"locationFor",
		"(Ljava/lang/String;)Ljavax/tools/JavaFileManager$Location;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.tools.StandardLocation$1", nullptr, nullptr, 0},
		{"javax.tools.JavaFileManager$Location", "javax.tools.JavaFileManager", "Location", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.tools.StandardLocation$1",
		"java.lang.Object",
		"javax.tools.JavaFileManager$Location",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.tools.StandardLocation"
	};
	$loadClass(StandardLocation$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardLocation$1);
	});
	return class$;
}

$Class* StandardLocation$1::class$ = nullptr;

	} // tools
} // javax