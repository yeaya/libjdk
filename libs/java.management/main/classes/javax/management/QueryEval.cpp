#include <javax/management/QueryEval.h>
#include <java/lang/InheritableThreadLocal.h>
#include <java/lang/ThreadLocal.h>
#include <javax/management/MBeanServer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $MBeanServer = ::javax::management::MBeanServer;

namespace javax {
	namespace management {

$ThreadLocal* QueryEval::server = nullptr;

void QueryEval::init$() {
}

void QueryEval::setMBeanServer($MBeanServer* s) {
	$nc(QueryEval::server)->set(s);
}

$MBeanServer* QueryEval::getMBeanServer() {
	$init(QueryEval);
	return $cast($MBeanServer, $nc(QueryEval::server)->get());
}

void QueryEval::clinit$($Class* clazz) {
	$assignStatic(QueryEval::server, $new($InheritableThreadLocal));
}

QueryEval::QueryEval() {
}

$Class* QueryEval::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(QueryEval, serialVersionUID)},
		{"server", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljavax/management/MBeanServer;>;", $PRIVATE | $STATIC, $staticField(QueryEval, server)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(QueryEval, init$, void)},
		{"getMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $staticMethod(QueryEval, getMBeanServer, $MBeanServer*)},
		{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC, $virtualMethod(QueryEval, setMBeanServer, void, $MBeanServer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.management.QueryEval",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(QueryEval, name, initialize, &classInfo$$, QueryEval::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(QueryEval);
	});
	return class$;
}

$Class* QueryEval::class$ = nullptr;

	} // management
} // javax