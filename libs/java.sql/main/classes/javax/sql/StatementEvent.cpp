#include <javax/sql/StatementEvent.h>
#include <java/sql/PreparedStatement.h>
#include <java/sql/SQLException.h>
#include <java/util/EventObject.h>
#include <javax/sql/PooledConnection.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PreparedStatement = ::java::sql::PreparedStatement;
using $SQLException = ::java::sql::SQLException;
using $EventObject = ::java::util::EventObject;
using $PooledConnection = ::javax::sql::PooledConnection;

namespace javax {
	namespace sql {

void StatementEvent::init$($PooledConnection* con, $PreparedStatement* statement) {
	$EventObject::init$(con);
	$set(this, statement, statement);
	$set(this, exception, nullptr);
}

void StatementEvent::init$($PooledConnection* con, $PreparedStatement* statement, $SQLException* exception) {
	$EventObject::init$(con);
	$set(this, statement, statement);
	$set(this, exception, exception);
}

$PreparedStatement* StatementEvent::getStatement() {
	return this->statement;
}

$SQLException* StatementEvent::getSQLException() {
	return this->exception;
}

StatementEvent::StatementEvent() {
}

$Class* StatementEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(StatementEvent, serialVersionUID)},
		{"exception", "Ljava/sql/SQLException;", nullptr, $PRIVATE, $field(StatementEvent, exception)},
		{"statement", "Ljava/sql/PreparedStatement;", nullptr, $PRIVATE, $field(StatementEvent, statement)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;)V", nullptr, $PUBLIC, $method(StatementEvent, init$, void, $PooledConnection*, $PreparedStatement*)},
		{"<init>", "(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;Ljava/sql/SQLException;)V", nullptr, $PUBLIC, $method(StatementEvent, init$, void, $PooledConnection*, $PreparedStatement*, $SQLException*)},
		{"getSQLException", "()Ljava/sql/SQLException;", nullptr, $PUBLIC, $virtualMethod(StatementEvent, getSQLException, $SQLException*)},
		{"getStatement", "()Ljava/sql/PreparedStatement;", nullptr, $PUBLIC, $virtualMethod(StatementEvent, getStatement, $PreparedStatement*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sql.StatementEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StatementEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StatementEvent);
	});
	return class$;
}

$Class* StatementEvent::class$ = nullptr;

	} // sql
} // javax