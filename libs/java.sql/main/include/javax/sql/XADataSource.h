#ifndef _javax_sql_XADataSource_h_
#define _javax_sql_XADataSource_h_
//$ interface javax.sql.XADataSource
//$ extends javax.sql.CommonDataSource

#include <javax/sql/CommonDataSource.h>

namespace javax {
	namespace sql {
		class XAConnection;
		class XAConnectionBuilder;
	}
}

namespace javax {
	namespace sql {

class $import XADataSource : public ::javax::sql::CommonDataSource {
	$interface(XADataSource, $NO_CLASS_INIT, ::javax::sql::CommonDataSource)
public:
	virtual ::javax::sql::XAConnectionBuilder* createXAConnectionBuilder();
	virtual ::java::io::PrintWriter* getLogWriter() override {return nullptr;}
	virtual int32_t getLoginTimeout() override {return 0;}
	virtual ::javax::sql::XAConnection* getXAConnection() {return nullptr;}
	virtual ::javax::sql::XAConnection* getXAConnection($String* user, $String* password) {return nullptr;}
	virtual void setLogWriter(::java::io::PrintWriter* out) override {}
	virtual void setLoginTimeout(int32_t seconds) override {}
};

	} // sql
} // javax

#endif // _javax_sql_XADataSource_h_