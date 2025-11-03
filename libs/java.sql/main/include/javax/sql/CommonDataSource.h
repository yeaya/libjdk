#ifndef _javax_sql_CommonDataSource_h_
#define _javax_sql_CommonDataSource_h_
//$ interface javax.sql.CommonDataSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace sql {
		class ShardingKeyBuilder;
	}
}
namespace java {
	namespace util {
		namespace logging {
			class Logger;
		}
	}
}

namespace javax {
	namespace sql {

class $import CommonDataSource : public ::java::lang::Object {
	$interface(CommonDataSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::sql::ShardingKeyBuilder* createShardingKeyBuilder();
	virtual ::java::io::PrintWriter* getLogWriter() {return nullptr;}
	virtual int32_t getLoginTimeout() {return 0;}
	virtual ::java::util::logging::Logger* getParentLogger() {return nullptr;}
	virtual void setLogWriter(::java::io::PrintWriter* out) {}
	virtual void setLoginTimeout(int32_t seconds) {}
};

	} // sql
} // javax

#endif // _javax_sql_CommonDataSource_h_