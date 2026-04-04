#include <javax/sql/rowset/RowSetProvider$1.h>
#include <java/lang/ClassLoader.h>
#include <javax/sql/rowset/RowSetProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sql {
		namespace rowset {

void RowSetProvider$1::init$() {
}

$Object* RowSetProvider$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, cl, nullptr);
	$assign(cl, $($Thread::currentThread())->getContextClassLoader());
	if (cl == nullptr) {
		$assign(cl, $ClassLoader::getSystemClassLoader());
	}
	return cl;
}

RowSetProvider$1::RowSetProvider$1() {
}

$Class* RowSetProvider$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RowSetProvider$1, init$, void)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(RowSetProvider$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.sql.rowset.RowSetProvider",
		"getContextClassLoader",
		"()Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sql.rowset.RowSetProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.sql.rowset.RowSetProvider$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sql.rowset.RowSetProvider"
	};
	$loadClass(RowSetProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetProvider$1);
	});
	return class$;
}

$Class* RowSetProvider$1::class$ = nullptr;

		} // rowset
	} // sql
} // javax