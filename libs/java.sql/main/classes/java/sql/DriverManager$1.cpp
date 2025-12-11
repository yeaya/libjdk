#include <java/sql/DriverManager$1.h>

#include <java/sql/DriverManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _DriverManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DriverManager$1::*)()>(&DriverManager$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DriverManager$1_EnclosingMethodInfo_ = {
	"java.sql.DriverManager",
	"ensureDriversInitialized",
	"()V"
};

$InnerClassInfo _DriverManager$1_InnerClassesInfo_[] = {
	{"java.sql.DriverManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DriverManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.sql.DriverManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_DriverManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_DriverManager$1_EnclosingMethodInfo_,
	_DriverManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.sql.DriverManager"
};

$Object* allocate$DriverManager$1($Class* clazz) {
	return $of($alloc(DriverManager$1));
}

void DriverManager$1::init$() {
}

$Object* DriverManager$1::run() {
	return $of($System::getProperty("jdbc.drivers"_s));
}

DriverManager$1::DriverManager$1() {
}

$Class* DriverManager$1::load$($String* name, bool initialize) {
	$loadClass(DriverManager$1, name, initialize, &_DriverManager$1_ClassInfo_, allocate$DriverManager$1);
	return class$;
}

$Class* DriverManager$1::class$ = nullptr;

	} // sql
} // java