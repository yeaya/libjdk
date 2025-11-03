#ifndef _javax_sql_StatementEvent_h_
#define _javax_sql_StatementEvent_h_
//$ class javax.sql.StatementEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace sql {
		class PreparedStatement;
		class SQLException;
	}
}
namespace javax {
	namespace sql {
		class PooledConnection;
	}
}

namespace javax {
	namespace sql {

class $export StatementEvent : public ::java::util::EventObject {
	$class(StatementEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	StatementEvent();
	void init$(::javax::sql::PooledConnection* con, ::java::sql::PreparedStatement* statement);
	void init$(::javax::sql::PooledConnection* con, ::java::sql::PreparedStatement* statement, ::java::sql::SQLException* exception);
	virtual ::java::sql::SQLException* getSQLException();
	virtual ::java::sql::PreparedStatement* getStatement();
	static const int64_t serialVersionUID = (int64_t)0x8FBC0F8D2224D745;
	::java::sql::SQLException* exception = nullptr;
	::java::sql::PreparedStatement* statement = nullptr;
};

	} // sql
} // javax

#endif // _javax_sql_StatementEvent_h_