#include <SystemInAvailable.h>

#include <java/io/InputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _SystemInAvailable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SystemInAvailable::*)()>(&SystemInAvailable::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SystemInAvailable::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SystemInAvailable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SystemInAvailable",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SystemInAvailable_MethodInfo_
};

$Object* allocate$SystemInAvailable($Class* clazz) {
	return $of($alloc(SystemInAvailable));
}

void SystemInAvailable::init$() {
}

void SystemInAvailable::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, b, $new($bytes, 1024));
	$nc($System::out)->print("Press <enter>: "_s);
	$nc($System::out)->flush();
	$nc($System::in)->read(b);
	int32_t a = $nc($System::in)->available();
	if (a != 0) {
		$throwNew($Exception, $$str({"System.in.available() ==> "_s, $$str(a)}));
	}
}

SystemInAvailable::SystemInAvailable() {
}

$Class* SystemInAvailable::load$($String* name, bool initialize) {
	$loadClass(SystemInAvailable, name, initialize, &_SystemInAvailable_ClassInfo_, allocate$SystemInAvailable);
	return class$;
}

$Class* SystemInAvailable::class$ = nullptr;