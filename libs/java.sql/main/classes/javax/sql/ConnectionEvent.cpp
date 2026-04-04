#include <javax/sql/ConnectionEvent.h>
#include <java/sql/SQLException.h>
#include <java/util/EventObject.h>
#include <javax/sql/PooledConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLException = ::java::sql::SQLException;
using $EventObject = ::java::util::EventObject;
using $PooledConnection = ::javax::sql::PooledConnection;

namespace javax {
	namespace sql {

void ConnectionEvent::init$($PooledConnection* con) {
	$EventObject::init$(con);
	$set(this, ex, nullptr);
}

void ConnectionEvent::init$($PooledConnection* con, $SQLException* ex) {
	$EventObject::init$(con);
	$set(this, ex, nullptr);
	$set(this, ex, ex);
}

$SQLException* ConnectionEvent::getSQLException() {
	return this->ex;
}

ConnectionEvent::ConnectionEvent() {
}

$Class* ConnectionEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ex", "Ljava/sql/SQLException;", nullptr, $PRIVATE, $field(ConnectionEvent, ex)},
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ConnectionEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sql/PooledConnection;)V", nullptr, $PUBLIC, $method(ConnectionEvent, init$, void, $PooledConnection*)},
		{"<init>", "(Ljavax/sql/PooledConnection;Ljava/sql/SQLException;)V", nullptr, $PUBLIC, $method(ConnectionEvent, init$, void, $PooledConnection*, $SQLException*)},
		{"getSQLException", "()Ljava/sql/SQLException;", nullptr, $PUBLIC, $virtualMethod(ConnectionEvent, getSQLException, $SQLException*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sql.ConnectionEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectionEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionEvent);
	});
	return class$;
}

$Class* ConnectionEvent::class$ = nullptr;

	} // sql
} // javax