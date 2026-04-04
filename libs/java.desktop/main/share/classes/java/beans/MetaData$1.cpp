#include <java/beans/MetaData$1.h>
#include <java/beans/MetaData.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $Field = ::java::lang::reflect::Field;

namespace java {
	namespace beans {

void MetaData$1::init$($String* val$className, $String* val$fieldName) {
	$set(this, val$className, val$className);
	$set(this, val$fieldName, val$fieldName);
}

$Object* MetaData$1::run() {
	$beforeCallerSensitive();
	try {
		$var($Field, field, $Class::forName(this->val$className)->getDeclaredField(this->val$fieldName));
		$nc(field)->setAccessible(true);
		return $of(field);
	} catch ($ClassNotFoundException& exception) {
		$throwNew($IllegalStateException, "Could not find class"_s, exception);
	} catch ($NoSuchFieldException& exception) {
		$throwNew($IllegalStateException, "Could not find field"_s, exception);
	}
	$shouldNotReachHere();
}

MetaData$1::MetaData$1() {
}

$Class* MetaData$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$fieldName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(MetaData$1, val$fieldName)},
		{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(MetaData$1, val$className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "()V", 0, $method(MetaData$1, init$, void, $String*, $String*)},
		{"run", "()Ljava/lang/reflect/Field;", nullptr, $PUBLIC, $virtualMethod(MetaData$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.MetaData",
		"getPrivateFieldValue",
		"(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.MetaData$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.MetaData$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/reflect/Field;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.MetaData"
	};
	$loadClass(MetaData$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaData$1);
	});
	return class$;
}

$Class* MetaData$1::class$ = nullptr;

	} // beans
} // java