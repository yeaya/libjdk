#include <SystemInAvailable.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void SystemInAvailable::init$() {
}

void SystemInAvailable::main($StringArray* args) {
	$useLocalObjectStack();
	$var($bytes, b, $new($bytes, 1024));
	$nc($System::out)->print("Press <enter>: "_s);
	$System::out->flush();
	$nc($System::in)->read(b);
	int32_t a = $System::in->available();
	if (a != 0) {
		$throwNew($Exception, $$str({"System.in.available() ==> "_s, $$str(a)}));
	}
}

SystemInAvailable::SystemInAvailable() {
}

$Class* SystemInAvailable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SystemInAvailable, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemInAvailable, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SystemInAvailable",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SystemInAvailable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemInAvailable);
	});
	return class$;
}

$Class* SystemInAvailable::class$ = nullptr;