#ifndef _javax_sql_DataSource_h_
#define _javax_sql_DataSource_h_
//$ interface javax.sql.DataSource
//$ extends javax.sql.CommonDataSource,java.sql.Wrapper

#include <java/sql/Wrapper.h>
#include <javax/sql/CommonDataSource.h>

namespace java {
	namespace sql {
		class Connection;
		class ConnectionBuilder;
	}
}

namespace javax {
	namespace sql {

class $import DataSource : public ::javax::sql::CommonDataSource, public ::java::sql::Wrapper {
	$interface(DataSource, $NO_CLASS_INIT, ::javax::sql::CommonDataSource, ::java::sql::Wrapper)
public:
	virtual $Object* clone() override;
	virtual ::java::sql::ConnectionBuilder* createConnectionBuilder();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::sql::Connection* getConnection() {return nullptr;}
	virtual ::java::sql::Connection* getConnection($String* username, $String* password) {return nullptr;}
	virtual ::java::io::PrintWriter* getLogWriter() override {return nullptr;}
	virtual int32_t getLoginTimeout() override {return 0;}
	virtual int32_t hashCode() override;
	virtual void setLogWriter(::java::io::PrintWriter* out) override {}
	virtual void setLoginTimeout(int32_t seconds) override {}
	virtual $String* toString() override;
};

	} // sql
} // javax

#endif // _javax_sql_DataSource_h_