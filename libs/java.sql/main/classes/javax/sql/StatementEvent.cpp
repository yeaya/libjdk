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

$FieldInfo _StatementEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(StatementEvent, serialVersionUID)},
	{"exception", "Ljava/sql/SQLException;", nullptr, $PRIVATE, $field(StatementEvent, exception)},
	{"statement", "Ljava/sql/PreparedStatement;", nullptr, $PRIVATE, $field(StatementEvent, statement)},
	{}
};

$MethodInfo _StatementEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;)V", nullptr, $PUBLIC, $method(static_cast<void(StatementEvent::*)($PooledConnection*,$PreparedStatement*)>(&StatementEvent::init$))},
	{"<init>", "(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;Ljava/sql/SQLException;)V", nullptr, $PUBLIC, $method(static_cast<void(StatementEvent::*)($PooledConnection*,$PreparedStatement*,$SQLException*)>(&StatementEvent::init$))},
	{"getSQLException", "()Ljava/sql/SQLException;", nullptr, $PUBLIC},
	{"getStatement", "()Ljava/sql/PreparedStatement;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StatementEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sql.StatementEvent",
	"java.util.EventObject",
	nullptr,
	_StatementEvent_FieldInfo_,
	_StatementEvent_MethodInfo_
};

$Object* allocate$StatementEvent($Class* clazz) {
	return $of($alloc(StatementEvent));
}

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
	$loadClass(StatementEvent, name, initialize, &_StatementEvent_ClassInfo_, allocate$StatementEvent);
	return class$;
}

$Class* StatementEvent::class$ = nullptr;

	} // sql
} // javax