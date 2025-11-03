#ifndef _javax_sql_ConnectionPoolDataSource_h_
#define _javax_sql_ConnectionPoolDataSource_h_
//$ interface javax.sql.ConnectionPoolDataSource
//$ extends javax.sql.CommonDataSource

#include <javax/sql/CommonDataSource.h>

namespace javax {
	namespace sql {
		class PooledConnection;
		class PooledConnectionBuilder;
	}
}

namespace javax {
	namespace sql {

class $export ConnectionPoolDataSource : public ::javax::sql::CommonDataSource {
	$interface(ConnectionPoolDataSource, $NO_CLASS_INIT, ::javax::sql::CommonDataSource)
public:
	virtual ::javax::sql::PooledConnectionBuilder* createPooledConnectionBuilder();
	virtual ::java::io::PrintWriter* getLogWriter() override {return nullptr;}
	virtual int32_t getLoginTimeout() override {return 0;}
	virtual ::javax::sql::PooledConnection* getPooledConnection() {return nullptr;}
	virtual ::javax::sql::PooledConnection* getPooledConnection($String* user, $String* password) {return nullptr;}
	virtual void setLogWriter(::java::io::PrintWriter* out) override {}
	virtual void setLoginTimeout(int32_t seconds) override {}
};

	} // sql
} // javax

#endif // _javax_sql_ConnectionPoolDataSource_h_