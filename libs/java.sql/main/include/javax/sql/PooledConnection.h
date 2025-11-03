#ifndef _javax_sql_PooledConnection_h_
#define _javax_sql_PooledConnection_h_
//$ interface javax.sql.PooledConnection
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace sql {
		class Connection;
	}
}
namespace javax {
	namespace sql {
		class ConnectionEventListener;
		class StatementEventListener;
	}
}

namespace javax {
	namespace sql {

class $import PooledConnection : public ::java::lang::Object {
	$interface(PooledConnection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addConnectionEventListener(::javax::sql::ConnectionEventListener* listener) {}
	virtual void addStatementEventListener(::javax::sql::StatementEventListener* listener) {}
	virtual void close() {}
	virtual ::java::sql::Connection* getConnection() {return nullptr;}
	virtual void removeConnectionEventListener(::javax::sql::ConnectionEventListener* listener) {}
	virtual void removeStatementEventListener(::javax::sql::StatementEventListener* listener) {}
};

	} // sql
} // javax

#endif // _javax_sql_PooledConnection_h_