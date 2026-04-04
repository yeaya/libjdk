#include <javax/sql/rowset/RowSetProvider$2.h>
#include <javax/sql/rowset/RowSetProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sql {
		namespace rowset {

void RowSetProvider$2::init$($String* val$propName) {
	$set(this, val$propName, val$propName);
}

$Object* RowSetProvider$2::run() {
	return $of($System::getProperty(this->val$propName));
}

RowSetProvider$2::RowSetProvider$2() {
}

$Class* RowSetProvider$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$propName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RowSetProvider$2, val$propName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(RowSetProvider$2, init$, void, $String*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RowSetProvider$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.sql.rowset.RowSetProvider",
		"getSystemProperty",
		"(Ljava/lang/String;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sql.rowset.RowSetProvider$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.sql.rowset.RowSetProvider$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sql.rowset.RowSetProvider"
	};
	$loadClass(RowSetProvider$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetProvider$2);
	});
	return class$;
}

$Class* RowSetProvider$2::class$ = nullptr;

		} // rowset
	} // sql
} // javax