#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$BroadcasterQuery.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryEval.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $QueryEval = ::javax::management::QueryEval;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ArrayNotificationBuffer$BroadcasterQuery::setMBeanServer($MBeanServer* s) {
	this->$QueryEval::setMBeanServer(s);
}

int32_t ArrayNotificationBuffer$BroadcasterQuery::hashCode() {
	return this->$QueryEval::hashCode();
}

bool ArrayNotificationBuffer$BroadcasterQuery::equals(Object$* arg0) {
	return this->$QueryEval::equals(arg0);
}

$Object* ArrayNotificationBuffer$BroadcasterQuery::clone() {
	return this->$QueryEval::clone();
}

$String* ArrayNotificationBuffer$BroadcasterQuery::toString() {
	return this->$QueryEval::toString();
}

void ArrayNotificationBuffer$BroadcasterQuery::finalize() {
	this->$QueryEval::finalize();
}

void ArrayNotificationBuffer$BroadcasterQuery::init$() {
	$QueryEval::init$();
}

bool ArrayNotificationBuffer$BroadcasterQuery::apply($ObjectName* name) {
	$var($MBeanServer, mbs, $QueryEval::getMBeanServer());
	$init($ArrayNotificationBuffer);
	return $ArrayNotificationBuffer::isInstanceOf(mbs, name, $ArrayNotificationBuffer::broadcasterClass);
}

ArrayNotificationBuffer$BroadcasterQuery::ArrayNotificationBuffer$BroadcasterQuery() {
}

$Class* ArrayNotificationBuffer$BroadcasterQuery::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayNotificationBuffer$BroadcasterQuery, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PRIVATE, $method(ArrayNotificationBuffer$BroadcasterQuery, init$, void)},
		{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, $virtualMethod(ArrayNotificationBuffer$BroadcasterQuery, apply, bool, $ObjectName*)},
		{"*setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BroadcasterQuery", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "BroadcasterQuery", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BroadcasterQuery",
		"javax.management.QueryEval",
		"javax.management.QueryExp",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
	};
	$loadClass(ArrayNotificationBuffer$BroadcasterQuery, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ArrayNotificationBuffer$BroadcasterQuery));
	});
	return class$;
}

$Class* ArrayNotificationBuffer$BroadcasterQuery::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com